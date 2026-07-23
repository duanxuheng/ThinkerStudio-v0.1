from __future__ import annotations

import json
import time
from dataclasses import dataclass
from pathlib import Path
from typing import Callable

from ament_index_python.packages import PackageNotFoundError, get_package_share_directory
from bodyctrl_msgs.msg import CmdSetMotorPosition, SbusData, SetMotorPosition
from sensor_msgs.msg import JointState
import rclpy
from rclpy.node import Node
from lyre_msgs.srv import PlayFile, PlayStop


ACTION_HZ = 30.0


@dataclass
class ScheduledEvent:
    due_time: float
    callback: Callable[[], None]
    description: str


class TriggerPlayerNode(Node):
    def __init__(self) -> None:
        super().__init__('trigger_player')

        share_dir = self._resolve_share_dir()
        default_config = share_dir / 'config' / 'scenarios.json'

        self.declare_parameter('scenario_file', str(default_config))
        self.declare_parameter('sbus_topic', '/sbus_data/event')
        self.declare_parameter('audio_service', PlayFile.Request.SERVICE_NAME)
        self.declare_parameter('audio_stop_service', PlayStop.Request.SERVICE_NAME)
        self.declare_parameter('base_dir_key', 'audio_base_dir')
        self.declare_parameter('audio_base_dir', '/home/nvidia/mp3Data')

        scenario_file = Path(self.get_parameter('scenario_file').value)
        self._config_dir = scenario_file.parent
        self._share_dir = share_dir

        config = self._load_json(scenario_file)
        base_dir_key = self.get_parameter('base_dir_key').value
        default_dir = self.get_parameter('audio_base_dir').value
        self._audio_base_dir = Path(config.get(base_dir_key, default_dir))
        self._mode = config.get('mode', 'batch')
        self._trigger_config = config['trigger']
        self._routines = config['routines']
        if not self._routines:
            raise ValueError('routines must not be empty')

        self._armed_until = 0.0
        self._busy_until = 0.0
        self._current_index = 0
        self._step_index = 0
        self._scheduled_events: list[ScheduledEvent] = []
        self._action_publishers: dict[str, object] = {}
        self._play_client = self.create_client(
            PlayFile,
            self.get_parameter('audio_service').value,
        )
        self._stop_client = self.create_client(
            PlayStop,
            self.get_parameter('audio_stop_service').value,
        )

        sbus_topic = config.get('sbus_topic', self.get_parameter('sbus_topic').value)
        self.create_subscription(SbusData, sbus_topic, self._on_sbus_data, 10)
        self.create_timer(0.05, self._run_scheduled_events)

        self.get_logger().info(
            f'Loaded {len(self._routines)} routines from {scenario_file}'
        )
        self.get_logger().info(f'Listening trigger events on {sbus_topic}')

    def _resolve_share_dir(self) -> Path:
        try:
            return Path(get_package_share_directory('tienkung_action'))
        except PackageNotFoundError:
            return Path(__file__).resolve().parents[1]

    def _load_json(self, path: Path) -> dict:
        with path.open('r', encoding='utf-8') as handle:
            return json.load(handle)

    def _on_sbus_data(self, msg: SbusData) -> None:
        now = time.monotonic()
        if now < self._busy_until:
            return

        state_cfg = self._trigger_config.get('required_states', {})
        if not self._state_matches(msg, state_cfg):
            if msg.key_event_new != SbusData.KEY_NONE:
                pass
                # self.get_logger().info(
                #     'Ignore key event because trigger states do not match: '
                #     f'key={msg.key_event_new} button_e={msg.button_e} button_f={msg.button_f}'
                # )
            self._armed_until = 0.0
            return

        arm_event = self._event_value(self._trigger_config['arm_event'])
        fire_event = self._event_value(self._trigger_config['fire_event'])

        if msg.key_event_new == arm_event:
            if self._mode == 'step' and self._step_index > 0:
                self._run_step_routine(now)
                return
            self._armed_until = now + float(self._trigger_config.get('window_sec', 1.0))
            self.get_logger().info('Trigger armed by key B.')
            return

        if msg.key_event_new == fire_event and now <= self._armed_until:
            self._armed_until = 0.0
            if self._mode == 'step':
                self._run_step_routine(now)
            else:
                self._start_sequence(now)
            return

        if msg.key_event_new == fire_event:
            self.get_logger().info('Key A pressed, but trigger is not armed by key B.')

    def _state_matches(self, msg: SbusData, state_cfg: dict) -> bool:
        for field_name, expected in state_cfg.items():
            current = getattr(msg, field_name)
            if current != expected:
                return False
        return True

    def _event_value(self, event_name: str) -> int:
        return int(getattr(SbusData, event_name))

    def _start_sequence(self, start_time: float) -> None:
        current_start = start_time
        for routine in self._routines:
            current_start = self._schedule_routine(routine, current_start)

        self._busy_until = current_start
        self._schedule(self._busy_until, self._finish_sequence, 'finish sequence')
        self.get_logger().info(f'Started sequence with {len(self._routines)} routines.')

    def _run_step_routine(self, start_time: float) -> None:
        routine = self._routines[self._step_index]
        end_time = self._schedule_routine(routine, start_time)
        self._busy_until = end_time
        self._step_index += 1

        if self._step_index >= len(self._routines):
            self._schedule(end_time, self._finish_sequence, 'finish sequence')
            self._step_index = 0
            self.get_logger().info(f'Step routine {routine["name"]} started (last in sequence).')
        else:
            self._schedule(end_time, self._on_step_ready, 'step ready for next B')
            self.get_logger().info(
                f'Step routine {routine["name"]} started '
                f'({self._step_index}/{len(self._routines)}). Press B for next.'
            )

    def _on_step_ready(self) -> None:
        self.get_logger().info('Ready for next step. Press B to continue.')

    def _schedule_routine(self, routine: dict, start_time: float) -> float:
        self._current_index = (self._current_index + 1) % len(self._routines)

        audio_duration = float(routine.get('audio_duration_sec', 0.0))

        if 'audio' in routine:
            audio_file = self._resolve_audio_file(routine['audio'])
            self._schedule(start_time, lambda: self._play_audio(audio_file), f'play {audio_file.name}')
            if audio_duration > 0.0:
                self._schedule(start_time + audio_duration, self._stop_audio, f'stop {audio_file.name}')

        if 'action_file' in routine:
            action_offset = float(routine.get('action_start_offset_sec', 0.0))
            self._schedule_action_file(
                start_time + action_offset,
                routine['action_file'],
            )

        if 'return_file' in routine:
            return_offset = float(routine.get('return_delay_sec', 1.0))
            return_start = start_time + return_offset
            self._schedule_action_file(return_start, routine['return_file'])

        post_wait = float(routine.get('post_wait_sec', 0.0))
        end_time = start_time + audio_duration + post_wait
        self._schedule(end_time, lambda name=routine['name']: self._finish_routine(name), f'finish {routine["name"]}')
        self.get_logger().info(f'Scheduled routine {routine["name"]}')
        return end_time

    def _finish_routine(self, name: str) -> None:
        self.get_logger().info(f'Routine {name} completed.')

    def _finish_sequence(self) -> None:
        self.get_logger().info('Sequence completed.')

    def _resolve_audio_file(self, file_name: str) -> Path:
        path = Path(file_name)
        if path.is_absolute():
            return path
        return self._audio_base_dir / file_name

    def _resolve_action_file(self, file_name: str) -> Path:
        path = self._config_dir / file_name
        if path.exists():
            return path
        alt_path = self._share_dir / 'config' / file_name
        if alt_path.exists():
            return alt_path
        raise FileNotFoundError(f'Action file not found: {file_name}')

    def _schedule_action_file(self, start_time: float, file_name: str) -> float:
        action_path = self._resolve_action_file(file_name)
        action = self._load_json(action_path)
        actions = action.get('actions', [])
        if not actions:
            return 0.0

        longest_duration = 0.0
        for item in actions:
            longest_duration = max(longest_duration, self._schedule_action_item(start_time, item))

        return longest_duration

    def _schedule_action_item(self, start_time: float, action: dict) -> float:
        topic = action['topic']
        msg_type = action.get('message_type', 'bodyctrl_msgs/msg/CmdSetMotorPosition')
        options = action.get('opts', {})
        sequence = self._build_joint_sequence(action.get('data', {}))

        if not sequence:
            return 0.0

        for index, frame in enumerate(sequence):
            due_time = start_time + index / ACTION_HZ
            self._schedule(
                due_time,
                lambda frame=frame, options=options, topic=topic, msg_type=msg_type: self._publish_action_step(
                    topic,
                    msg_type,
                    options,
                    frame,
                ),
                f'publish {topic}',
            )

        return len(sequence) / ACTION_HZ

    def _build_joint_sequence(self, joint_data: dict) -> list[list[tuple[int, float]]]:
        if 'keys' in joint_data:
            return self._build_joint_sequence_from_frames(joint_data)

        return self._build_joint_sequence_from_legacy_series(joint_data)

    def _build_joint_sequence_from_frames(self, joint_data: dict) -> list[list[tuple[int, float]]]:
        joint_ids_raw = joint_data.get('join_id')
        if joint_ids_raw is None:
            joint_ids_raw = joint_data.get('joint_id', joint_data.get('joint_ids', []))

        joint_ids = [int(joint_id) for joint_id in joint_ids_raw]
        keys = joint_data.get('keys', [])

        if not joint_ids or not keys:
            return []

        frames: list[list[tuple[int, float]]] = []
        for frame_values in keys:
            if len(frame_values) != len(joint_ids):
                raise ValueError(
                    'Action frame width does not match join_id count: '
                    f'{len(frame_values)} != {len(joint_ids)}'
                )

            frame = [
                (joint_id, float(position))
                for joint_id, position in zip(joint_ids, frame_values)
            ]
            frames.append(frame)

        return frames

    def _build_joint_sequence_from_legacy_series(self, joint_data: dict) -> list[list[tuple[int, float]]]:
        normalized: dict[int, list[float]] = {}
        frame_count = 0
        for joint_name, values in joint_data.items():
            series = [float(value) for value in values]
            if not series:
                continue
            joint_id = int(joint_name)
            normalized[joint_id] = series
            frame_count = max(frame_count, len(series))

        if frame_count == 0:
            return []

        frames: list[list[tuple[int, float]]] = []
        for index in range(frame_count):
            frame: list[tuple[int, float]] = []
            for joint_id, series in normalized.items():
                value = series[index] if index < len(series) else series[-1]
                frame.append((joint_id, value))
            frames.append(frame)
        return frames

    def _publish_action_step(
        self,
        topic: str,
        msg_type: str,
        options: dict,
        frame: list[tuple[int, float]],
    ) -> None:
        if msg_type == 'sensor_msgs/msg/JointState':
            self._publish_joint_state(topic, frame)
        elif msg_type == 'bodyctrl_msgs/msg/CmdSetMotorPosition':
            self._publish_motor_position(topic, options, frame)
        else:
            raise ValueError(f'Unsupported message type: {msg_type}')

    def _publish_joint_state(self, topic: str, frame: list[tuple[int, float]]) -> None:
        publisher = self._action_publishers.get(topic)
        if publisher is None:
            publisher = self.create_publisher(JointState, topic, 10)
            self._action_publishers[topic] = publisher

        message = JointState()
        message.header.stamp = self.get_clock().now().to_msg()

        names = []
        positions = []
        for motor_id, value in frame:
            names.append(str(motor_id))
            positions.append(float(value))

        message.name = names
        message.position = positions

        publisher.publish(message)

    def _publish_motor_position(
        self,
        topic: str,
        options: dict,
        frame: list[tuple[int, float]],
    ) -> None:
        publisher = self._action_publishers.get(topic)
        if publisher is None:
            publisher = self.create_publisher(CmdSetMotorPosition, topic, 10)
            self._action_publishers[topic] = publisher

        message = CmdSetMotorPosition()
        message.header.stamp = self.get_clock().now().to_msg()
        spd = float(options.get('spd', 0.0))
        cur = float(options.get('cur', 0.0))

        commands: list[SetMotorPosition] = []
        for joint_id, position in frame:
            motor = SetMotorPosition()
            motor.name = int(joint_id)
            motor.pos = float(position)
            motor.spd = spd
            motor.cur = cur
            commands.append(motor)

        message.cmds = commands

        publisher.publish(message)

    def _play_audio(self, audio_file: Path) -> None:
        request = PlayFile.Request()
        request.path = str(audio_file)
        request.force = True

        if not self._play_client.service_is_ready():
            self.get_logger().warning('Audio service is not ready, skip current routine.')
            return

        future = self._play_client.call_async(request)
        future.add_done_callback(self._on_play_response)

    def _stop_audio(self) -> None:
        if not self._stop_client.service_is_ready():
            self.get_logger().warning('Audio stop service is not ready, skip stop request.')
            return

        future = self._stop_client.call_async(PlayStop.Request())
        future.add_done_callback(self._on_stop_response)

    def _on_play_response(self, future) -> None:
        try:
            response = future.result()
        except Exception as exc:  # noqa: BLE001
            self.get_logger().error(f'Play request failed: {exc}')
            return

        self.get_logger().info(f'Play response code={response.code} message={response.message}')

    def _on_stop_response(self, future) -> None:
        try:
            future.result()
        except Exception as exc:  # noqa: BLE001
            self.get_logger().error(f'Audio stop request failed: {exc}')
            return

        self.get_logger().info('Audio stop request sent.')

    def _schedule(self, due_time: float, callback: Callable[[], None], description: str) -> None:
        self._scheduled_events.append(ScheduledEvent(due_time, callback, description))
        self._scheduled_events.sort(key=lambda event: event.due_time)

    def _run_scheduled_events(self) -> None:
        now = time.monotonic()
        while self._scheduled_events and self._scheduled_events[0].due_time <= now:
            event = self._scheduled_events.pop(0)
            try:
                event.callback()
            except Exception as exc:  # noqa: BLE001
                self.get_logger().error(f'Event {event.description} failed: {exc}')
                self._busy_until = 0.0


def main(args: list[str] | None = None) -> None:
    rclpy.init(args=args)
    node = TriggerPlayerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()