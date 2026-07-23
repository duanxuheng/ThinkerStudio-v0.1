#!/usr/bin/python3

from __future__ import annotations
import rclpy

import json
import signal
import sys
import tkinter as tk
from dataclasses import dataclass
from pathlib import Path
from tkinter import filedialog, messagebox, ttk
import xml.etree.ElementTree as ET

from ament_index_python.packages import PackageNotFoundError, get_package_share_directory
from bodyctrl_msgs.msg import CmdSetMotorPosition, SetMotorPosition
from rclpy.node import Node


ACTION_HZ = 30.0
DEFAULT_SMOOTH_FRAMES = 5
TIMELINE_MARGIN = 20

MOTOR_ID_TO_JOINT = {
    1: 'head_roll_joint',
    2: 'head_pitch_joint',
    3: 'head_yaw_joint',
    11: 'shoulder_pitch_l_joint',
    12: 'shoulder_roll_l_joint',
    13: 'shoulder_yaw_l_joint',
    14: 'elbow_pitch_l_joint',
    15: 'elbow_yaw_l_joint',
    16: 'wrist_pitch_l_joint',
    17: 'wrist_roll_l_joint',
    21: 'shoulder_pitch_r_joint',
    22: 'shoulder_roll_r_joint',
    23: 'shoulder_yaw_r_joint',
    24: 'elbow_pitch_r_joint',
    25: 'elbow_yaw_r_joint',
    26: 'wrist_pitch_r_joint',
    27: 'wrist_roll_r_joint',
    31: 'body_yaw_joint',
    51: 'hip_roll_l_joint',
    52: 'hip_pitch_l_joint',
    53: 'hip_yaw_l_joint',
    54: 'knee_pitch_l_joint',
    55: 'ankle_pitch_l_joint',
    56: 'ankle_roll_l_joint',
    61: 'hip_roll_r_joint',
    62: 'hip_pitch_r_joint',
    63: 'hip_yaw_r_joint',
    64: 'knee_pitch_r_joint',
    65: 'ankle_pitch_r_joint',
    66: 'ankle_roll_r_joint',
    # Left hand (101-106) - commented out to hide finger joints from editor
    # 101: 'left_little_1_joint',
    # 102: 'left_ring_1_joint',
    # 103: 'left_middle_1_joint',
    # 104: 'left_index_1_joint',
    # 105: 'left_thumb_2_joint',
    # 106: 'left_thumb_1_joint',
    # Right hand (111-116) - commented out to hide finger joints from editor
    # 111: 'right_little_1_joint',
    # 112: 'right_ring_1_joint',
    # 113: 'right_middle_1_joint',
    # 114: 'right_index_1_joint',
    # 115: 'right_thumb_2_joint',
    # 116: 'right_thumb_1_joint',
}

JOINT_NAME_TO_ID = {name: joint_id for joint_id, name in MOTOR_ID_TO_JOINT.items()}

# Hand joint limits (from joint_schema.py)
HAND_LIMITS = {
    'left_little_1_joint': 1.333, 'left_ring_1_joint': 1.333,
    'left_middle_1_joint': 1.333, 'left_index_1_joint': 1.333,
    'left_thumb_2_joint': 0.48, 'left_thumb_1_joint': 1.246165,
    'right_little_1_joint': 1.333, 'right_ring_1_joint': 1.333,
    'right_middle_1_joint': 1.333, 'right_index_1_joint': 1.333,
    'right_thumb_2_joint': 0.48, 'right_thumb_1_joint': 1.246165,
}

# Hand motor ID mapping for hand controller (1-6)
HAND_MOTOR_ID_MAP = {
    101: (1, 'left'),   102: (2, 'left'),   103: (3, 'left'),
    104: (4, 'left'),   105: (5, 'left'),   106: (6, 'left'),
    111: (1, 'right'),  112: (2, 'right'),  113: (3, 'right'),
    114: (4, 'right'),  115: (5, 'right'),  116: (6, 'right'),
}


@dataclass
class ActionTrack:
    topic: str
    message_type: str
    options: dict
    joint_ids: list[int]
    frames: list[list[float]]
    item_ref: dict
    data_mode: str
    joint_field_name: str | None = None
    legacy_joint_keys: list[str] | None = None

    @property
    def frame_count(self) -> int:
        return len(self.frames)

    @property
    def display_name(self) -> str:
        return f'{self.topic} ({len(self.joint_ids)} joints, {self.frame_count} frames)'


@dataclass
class ActionDocument:
    path: Path
    raw: dict
    tracks: list[ActionTrack]

    @property
    def total_frames(self) -> int:
        if not self.tracks:
            return 0
        return max(track.frame_count for track in self.tracks)

    @property
    def duration_sec(self) -> float:
        return self.total_frames / ACTION_HZ if self.total_frames else 0.0

    def joint_ids(self) -> list[int]:
        joint_ids: set[int] = set()
        for track in self.tracks:
            joint_ids.update(track.joint_ids)
        return sorted(joint_ids)


@dataclass
class EditGroupConfig:
    joints_var: tk.StringVar
    delta_var: tk.StringVar


@dataclass
class SpeedViolation:
    topic: str
    joint_id: int
    joint_name: str
    frame_index: int
    actual_speed: float
    speed_limit: float


@dataclass
class SpeedSmoothingResult:
    adjusted_points: int
    clipped_points: int


class ActionPreviewNode(Node):
    def __init__(self) -> None:
        super().__init__('joint_action_editor')
        self._topic_publishers: dict[str, object] = {}
        self._hand_publishers: dict[str, object] = {}
        # Import JointState for hand control
        from sensor_msgs.msg import JointState
        self._JointState = JointState

    def publish_document_frame(self, document: ActionDocument, frame_index: int) -> None:
        for track in document.tracks:
            if frame_index >= track.frame_count:
                continue
            self._publish_track_frame(track, frame_index)

    def publish_track_positions(self, track: ActionTrack, positions: list[float]) -> None:
        self._publish_track_positions(track, positions)

    def _publish_track_frame(self, track: ActionTrack, frame_index: int) -> None:
        self._publish_track_positions(track, track.frames[frame_index])

    def _publish_track_positions(self, track: ActionTrack, positions: list[float]) -> None:
        # Handle sensor_msgs/msg/JointState (for /inspire_hand/ctrl/ topics)
        if track.message_type == 'sensor_msgs/msg/JointState':
            # Extract side from topic name
            if '/left_hand' in track.topic:
                side = 'left'
            elif '/right_hand' in track.topic:
                side = 'right'
            else:
                return  # Unknown hand topic, skip

            publisher = self._hand_publishers.get(track.topic)
            if publisher is None:
                publisher = self.create_publisher(self._JointState, track.topic, 10)
                self._hand_publishers[track.topic] = publisher

            msg = self._JointState()
            msg.header.stamp = self.get_clock().now().to_msg()
            msg.name = ['1', '2', '3', '4', '5', '6']
            msg.position = [float(p) for p in positions]
            publisher.publish(msg)
            return

        # Handle bodyctrl_msgs/msg/CmdSetMotorPosition (for /arm/cmd_pos, /head/cmd_pos topics)
        if track.message_type != 'bodyctrl_msgs/msg/CmdSetMotorPosition':
            raise ValueError(f'Unsupported message type: {track.message_type}')

        # Split joints into body and hand joints
        body_joint_ids = []
        body_positions = []
        hand_data: dict[str, dict[int, float]] = {'left': {}, 'right': {}}

        for joint_id, position in zip(track.joint_ids, positions):
            if joint_id in HAND_MOTOR_ID_MAP:
                # This is a hand joint
                hand_motor_id, side = HAND_MOTOR_ID_MAP[joint_id]
                hand_data[side][hand_motor_id] = float(position)
            else:
                # This is a body joint
                body_joint_ids.append(joint_id)
                body_positions.append(position)

        # Publish body joints
        if body_joint_ids:
            publisher = self._topic_publishers.get(track.topic)
            if publisher is None:
                publisher = self.create_publisher(CmdSetMotorPosition, track.topic, 10)
                self._topic_publishers[track.topic] = publisher

            message = CmdSetMotorPosition()
            message.header.stamp = self.get_clock().now().to_msg()

            speed = float(track.options.get('spd', 0.0))
            current = float(track.options.get('cur', 0.0))
            commands: list[SetMotorPosition] = []
            for joint_id, position in zip(body_joint_ids, body_positions):
                motor = SetMotorPosition()
                motor.name = int(joint_id)
                motor.pos = float(position)
                motor.spd = speed
                motor.cur = current
                commands.append(motor)

            message.cmds = commands
            publisher.publish(message)

        # Publish hand joints
        for side, joints in hand_data.items():
            if not joints:
                continue
            topic = f'/inspire_hand/ctrl/{side}_hand'
            publisher = self._hand_publishers.get(topic)
            if publisher is None:
                publisher = self.create_publisher(self._JointState, topic, 10)
                self._hand_publishers[topic] = publisher

            msg = self._JointState()
            msg.header.stamp = self.get_clock().now().to_msg()
            msg.name = ['1', '2', '3', '4', '5', '6']
            positions = [0.0] * 6

            for motor_id, joint_name in [
                (1, f'{side}_little_1_joint'),
                (2, f'{side}_ring_1_joint'),
                (3, f'{side}_middle_1_joint'),
                (4, f'{side}_index_1_joint'),
                (5, f'{side}_thumb_2_joint'),
                (6, f'{side}_thumb_1_joint'),
            ]:
                if motor_id in joints:
                    rad = joints[motor_id]
                    limit = HAND_LIMITS.get(joint_name, 1.0)
                    percentage = 1.0 - (rad / limit)
                    positions[motor_id - 1] = max(0.0, min(1.0, percentage))

            msg.position = positions
            publisher.publish(msg)


def _resolve_default_actions_dir() -> Path:
    try:
        return Path(get_package_share_directory('tienkung_action')) / 'config' / 'actions'
    except PackageNotFoundError:
        pass

    current = Path(__file__).resolve()
    for parent in current.parents:
        candidate = parent / 'src' / 'tienkung_action' / 'config' / 'actions'
        if candidate.exists():
            return candidate
    return current.parent


def _resolve_default_model_path() -> Path | None:
    try:
        candidate = Path(get_package_share_directory('tiangong2pro_urdf')) / 'urdf' / 'tiangong2.0_pro_with_hands.urdf'
        if candidate.exists():
            return candidate
    except PackageNotFoundError:
        pass

    current = Path(__file__).resolve()
    for parent in current.parents:
        candidate = parent / 'src' / 'tiangong2pro_urdf' / 'urdf' / 'tiangong2.0_pro_with_hands.urdf'
        if candidate.exists():
            return candidate

    return None


def _load_joint_constraints(
    model_path: Path | None,
) -> tuple[dict[int, tuple[float, float]], dict[int, float]]:
    if model_path is None or not model_path.exists():
        return {}, {}

    tree = ET.parse(model_path)
    root = tree.getroot()
    limits: dict[int, tuple[float, float]] = {}
    velocity_limits: dict[int, float] = {}
    for joint in root.findall('joint'):
        joint_name = joint.attrib.get('name')
        if not joint_name or joint_name not in JOINT_NAME_TO_ID:
            continue

        limit_elem = joint.find('limit')
        if limit_elem is None:
            continue

        joint_id = JOINT_NAME_TO_ID[joint_name]

        lower = limit_elem.attrib.get('lower')
        upper = limit_elem.attrib.get('upper')
        if lower is not None and upper is not None:
            try:
                limits[joint_id] = (float(lower), float(upper))
            except ValueError:
                pass

        velocity = limit_elem.attrib.get('velocity')
        if velocity is not None:
            try:
                velocity_limits[joint_id] = float(velocity)
            except ValueError:
                pass

    return limits, velocity_limits


def _load_action_document(path: Path) -> ActionDocument:
    with path.open('r', encoding='utf-8') as handle:
        raw = json.load(handle)

    tracks: list[ActionTrack] = []
    for item in raw.get('actions', []):
        joint_data = item.get('data', {})
        if 'keys' in joint_data:
            joint_field_name = None
            for field_name in ('join_id', 'joint_id', 'joint_ids'):
                if field_name in joint_data:
                    joint_field_name = field_name
                    break

            joint_ids_raw = joint_data.get(joint_field_name or 'join_id', [])
            joint_ids = [int(joint_id) for joint_id in joint_ids_raw]
            frames: list[list[float]] = []
            for frame_values in joint_data.get('keys', []):
                if len(frame_values) != len(joint_ids):
                    raise ValueError(
                        'Action frame width does not match joint count: '
                        f'{len(frame_values)} != {len(joint_ids)}'
                    )
                frames.append([float(value) for value in frame_values])

            tracks.append(
                ActionTrack(
                    topic=item['topic'],
                    message_type=item.get('message_type', 'bodyctrl_msgs/msg/CmdSetMotorPosition'),
                    options=dict(item.get('opts', {})),
                    joint_ids=joint_ids,
                    frames=frames,
                    item_ref=item,
                    data_mode='frames',
                    joint_field_name=joint_field_name or 'join_id',
                )
            )
            continue

        joint_ids: list[int] = []
        frame_count = 0
        legacy_joint_keys: list[str] = []
        normalized: dict[int, list[float]] = {}
        for joint_name, values in joint_data.items():
            if not isinstance(values, list):
                continue
            joint_id = int(joint_name)
            legacy_joint_keys.append(joint_name)
            joint_ids.append(joint_id)
            normalized[joint_id] = [float(value) for value in values]
            frame_count = max(frame_count, len(values))

        frames = []
        for index in range(frame_count):
            frame: list[float] = []
            for joint_id in joint_ids:
                series = normalized[joint_id]
                frame.append(series[index] if index < len(series) else series[-1])
            frames.append(frame)

        tracks.append(
            ActionTrack(
                topic=item['topic'],
                message_type=item.get('message_type', 'bodyctrl_msgs/msg/CmdSetMotorPosition'),
                options=dict(item.get('opts', {})),
                joint_ids=joint_ids,
                frames=frames,
                item_ref=item,
                data_mode='legacy',
                legacy_joint_keys=legacy_joint_keys,
            )
        )

    if not tracks:
        raise ValueError(f'No action tracks found in {path}')

    return ActionDocument(path=path, raw=raw, tracks=tracks)


def _round_value(value: float) -> float:
    return round(float(value), 6)


def _sync_document_to_raw(document: ActionDocument) -> None:
    for track in document.tracks:
        data = track.item_ref.setdefault('data', {})
        if track.data_mode == 'frames':
            joint_field_name = track.joint_field_name or 'join_id'
            data[joint_field_name] = [int(joint_id) for joint_id in track.joint_ids]
            data['keys'] = [
                [_round_value(value) for value in frame]
                for frame in track.frames
            ]
            for alias in ('join_id', 'joint_id', 'joint_ids'):
                if alias != joint_field_name and alias in data:
                    data.pop(alias)
            continue

        target_keys = track.legacy_joint_keys or [str(joint_id) for joint_id in track.joint_ids]
        for existing_key in list(data.keys()):
            if existing_key not in target_keys:
                data.pop(existing_key)

        for joint_index, joint_key in enumerate(target_keys):
            data[joint_key] = [
                _round_value(frame[joint_index])
                for frame in track.frames
            ]


def _collect_speed_violations(document: ActionDocument) -> tuple[list[SpeedViolation], int]:
    violations: list[SpeedViolation] = []
    checked_track_count = 0

    for track in document.tracks:
        speed_limit = float(track.options.get('spd', 0.0))
        if speed_limit <= 0.0 or track.frame_count <= 1:
            continue

        checked_track_count += 1
        for frame_index in range(1, track.frame_count):
            prev_frame = track.frames[frame_index - 1]
            current_frame = track.frames[frame_index]
            for joint_id, prev_value, current_value in zip(track.joint_ids, prev_frame, current_frame):
                actual_speed = abs(current_value - prev_value) * ACTION_HZ
                if actual_speed < speed_limit + 0.001:
                    continue
                violations.append(
                    SpeedViolation(
                        topic=track.topic,
                        joint_id=joint_id,
                        joint_name=MOTOR_ID_TO_JOINT.get(joint_id, str(joint_id)),
                        frame_index=frame_index,
                        actual_speed=actual_speed,
                        speed_limit=speed_limit,
                    )
                )

    return violations, checked_track_count


def _summarize_speed_violations(
    violations: list[SpeedViolation],
    joint_velocity_limits: dict[int, float] | None = None,
) -> list[str]:
    joint_summary: dict[int, tuple[str, float, int]] = {}

    for violation in violations:
        existing = joint_summary.get(violation.joint_id)
        if existing is None:
            joint_summary[violation.joint_id] = (
                violation.joint_name,
                violation.actual_speed,
                1,
            )
            continue

        joint_name, max_speed, count = existing
        joint_summary[violation.joint_id] = (
            joint_name,
            max(max_speed, violation.actual_speed),
            count + 1,
        )

    joint_velocity_limits = joint_velocity_limits or {}
    lines: list[str] = []
    for joint_id in sorted(joint_summary):
        joint_name, max_speed, count = joint_summary[joint_id]
        allowed_speed = joint_velocity_limits.get(joint_id)
        allowed_speed_text = '--' if allowed_speed is None else f'{allowed_speed:.4f} rad/s'
        lines.append(
            f'{joint_name}({joint_id}) | 最大速度 {max_speed:.4f} rad/s | '
            f'允许最大速度 {allowed_speed_text} | 数量 {count}'
        )
    return lines


def _clip_joint_value_from_limits(
    joint_limits: dict[int, tuple[float, float]],
    joint_id: int,
    value: float,
) -> tuple[float, bool]:
    limits = joint_limits.get(joint_id)
    if limits is None:
        return value, False

    lower, upper = limits
    clipped = min(max(value, lower), upper)
    return clipped, clipped != value


def _smooth_document_speed(
    document: ActionDocument,
    joint_limits: dict[int, tuple[float, float]],
) -> SpeedSmoothingResult:
    adjusted_points = 0
    clipped_points = 0

    for track in document.tracks:
        speed_limit = float(track.options.get('spd', 0.0))
        if speed_limit <= 0.0 or track.frame_count <= 1:
            continue

        max_step = speed_limit / ACTION_HZ
        for frame_index in range(1, track.frame_count):
            prev_frame = track.frames[frame_index - 1]
            current_frame = track.frames[frame_index]
            for column, joint_id in enumerate(track.joint_ids):
                prev_value = prev_frame[column]
                current_value = current_frame[column]
                delta = current_value - prev_value
                if abs(delta) <= max_step:
                    continue

                limited_value = prev_value + max_step * (1.0 if delta > 0.0 else -1.0)
                clipped_value, was_clipped = _clip_joint_value_from_limits(
                    joint_limits,
                    joint_id,
                    limited_value,
                )
                if clipped_value != current_value:
                    current_frame[column] = clipped_value
                    adjusted_points += 1
                if was_clipped:
                    clipped_points += 1

    return SpeedSmoothingResult(
        adjusted_points=adjusted_points,
        clipped_points=clipped_points,
    )


class JointActionEditorApp:
    def __init__(self, initial_file: Path | None = None) -> None:
        self._closed = False
        self._drag_anchor: int | None = None
        self._is_playing = False
        self._play_after_id: str | None = None
        self._updating_scale = False
        self._frame_energy: list[float] = []
        self._frame_energy_max = 1.0
        self._document: ActionDocument | None = None
        self._dirty = False
        self._default_actions_dir = _resolve_default_actions_dir()
        self._joint_limits, self._joint_velocity_limits = _load_joint_constraints(
            _resolve_default_model_path()
        )
        self._preview_frame_index: int | None = None

        rclpy.init(args=None)
        self.preview_node = ActionPreviewNode()

        self.root = tk.Tk()
        self.root.title('Tiangong Joint Action Editor')
        self.root.geometry('1280x760')
        self.root.minsize(1100, 680)
        self.root.protocol('WM_DELETE_WINDOW', self.close)
        signal.signal(signal.SIGINT, self._sigint_handler)

        self.file_var = tk.StringVar(value='未加载动作文件')
        self.summary_var = tk.StringVar(value='请选择动作文件')
        self.status_var = tk.StringVar(value='就绪')
        self.current_frame_var = tk.IntVar(value=0)
        self.selection_start_var = tk.IntVar(value=0)
        self.selection_end_var = tk.IntVar(value=0)
        self.smooth_var = tk.IntVar(value=DEFAULT_SMOOTH_FRAMES)
        self.auto_preview_var = tk.BooleanVar(value=True)
        self.active_group_var = tk.IntVar(value=0)
        self.edit_groups: list[EditGroupConfig] = []

        self._build_layout()
        self._schedule_refresh()

        if initial_file is not None:
            self._load_document(initial_file)

    def _build_layout(self) -> None:
        main = ttk.Frame(self.root, padding=10)
        main.pack(fill=tk.BOTH, expand=True)

        file_frame = ttk.LabelFrame(main, text='动作文件')
        file_frame.pack(fill=tk.X)
        ttk.Button(file_frame, text='加载动作', command=self._choose_action_file).grid(
            row=0, column=0, padx=4, pady=6, sticky='w'
        )
        ttk.Button(file_frame, text='重新加载', command=self._reload_document).grid(
            row=0, column=1, padx=4, pady=6, sticky='w'
        )
        ttk.Button(file_frame, text='保存', command=self._save_document).grid(
            row=0, column=2, padx=4, pady=6, sticky='w'
        )
        ttk.Button(file_frame, text='另存为', command=self._save_document_as).grid(
            row=0, column=3, padx=4, pady=6, sticky='w'
        )
        ttk.Button(file_frame, text='检查超速', command=self._check_action_speed).grid(
            row=0, column=4, padx=4, pady=6, sticky='w'
        )
        ttk.Button(file_frame, text='速度平滑', command=self._smooth_action_speed).grid(
            row=0, column=5, padx=4, pady=6, sticky='w'
        )
        ttk.Label(file_frame, textvariable=self.file_var).grid(
            row=0, column=6, padx=10, pady=6, sticky='w'
        )
        ttk.Label(file_frame, textvariable=self.summary_var).grid(
            row=1, column=0, columnspan=7, padx=4, pady=(0, 6), sticky='w'
        )
        file_frame.columnconfigure(6, weight=1)

        content = ttk.PanedWindow(main, orient=tk.HORIZONTAL)
        content.pack(fill=tk.BOTH, expand=True, pady=(10, 0))

        left = ttk.Frame(content)
        right = ttk.Frame(content)
        content.add(left, weight=4)
        content.add(right, weight=2)

        timeline_frame = ttk.LabelFrame(left, text='时间轴')
        timeline_frame.pack(fill=tk.BOTH, expand=True)
        self.timeline_canvas = tk.Canvas(
            timeline_frame,
            height=210,
            background='#fcfcfc',
            highlightthickness=1,
            highlightbackground='#cccccc',
        )
        self.timeline_canvas.pack(fill=tk.X, padx=8, pady=(8, 4))
        self.timeline_canvas.bind('<ButtonPress-1>', self._on_timeline_press)
        self.timeline_canvas.bind('<B1-Motion>', self._on_timeline_drag)
        self.timeline_canvas.bind('<ButtonRelease-1>', self._on_timeline_release)
        self.timeline_canvas.bind('<Configure>', lambda _event: self._draw_timeline())

        slider_row = ttk.Frame(timeline_frame)
        slider_row.pack(fill=tk.X, padx=8)
        ttk.Label(slider_row, text='当前帧').pack(side=tk.LEFT)
        self.playhead_scale = ttk.Scale(
            slider_row,
            from_=0,
            to=0,
            command=self._on_seek,
        )
        self.playhead_scale.pack(side=tk.LEFT, fill=tk.X, expand=True, padx=8)
        self.current_frame_label = ttk.Label(slider_row, text='0 / 0')
        self.current_frame_label.pack(side=tk.LEFT)

        playback_frame = ttk.Frame(timeline_frame)
        playback_frame.pack(fill=tk.X, padx=8, pady=(8, 6))
        ttk.Button(playback_frame, text='播放', command=self._start_playback).pack(side=tk.LEFT, padx=4)
        ttk.Button(playback_frame, text='暂停', command=self._pause_playback).pack(side=tk.LEFT, padx=4)
        ttk.Button(playback_frame, text='停止', command=self._stop_playback).pack(side=tk.LEFT, padx=4)
        ttk.Button(playback_frame, text='预览当前帧', command=self._preview_current_frame).pack(side=tk.LEFT, padx=4)
        ttk.Checkbutton(
            playback_frame,
            text='拖动时自动预览',
            variable=self.auto_preview_var,
        ).pack(side=tk.LEFT, padx=10)

        selection_frame = ttk.LabelFrame(left, text='编辑区域')
        selection_frame.pack(fill=tk.X, pady=(10, 0))
        ttk.Label(selection_frame, text='开始帧').grid(row=0, column=0, padx=4, pady=6, sticky='e')
        self.start_spin = ttk.Spinbox(
            selection_frame,
            from_=0,
            to=0,
            textvariable=self.selection_start_var,
            width=10,
            command=self._on_selection_changed,
        )
        self.start_spin.grid(row=0, column=1, padx=4, pady=6, sticky='w')
        ttk.Label(selection_frame, text='结束帧').grid(row=0, column=2, padx=4, pady=6, sticky='e')
        self.end_spin = ttk.Spinbox(
            selection_frame,
            from_=0,
            to=0,
            textvariable=self.selection_end_var,
            width=10,
            command=self._on_selection_changed,
        )
        self.end_spin.grid(row=0, column=3, padx=4, pady=6, sticky='w')
        ttk.Button(
            selection_frame,
            text='开始设为当前帧',
            command=lambda: self._set_selection_edge('start'),
        ).grid(row=0, column=4, padx=4, pady=6)
        ttk.Button(
            selection_frame,
            text='结束设为当前帧',
            command=lambda: self._set_selection_edge('end'),
        ).grid(row=0, column=5, padx=4, pady=6)
        self.selection_info = ttk.Label(selection_frame, text='未选择')
        self.selection_info.grid(row=1, column=0, columnspan=6, padx=4, pady=(0, 6), sticky='w')
        self.start_spin.bind('<FocusOut>', lambda _event: self._on_selection_changed())
        self.start_spin.bind('<Return>', lambda _event: self._on_selection_changed())
        self.end_spin.bind('<FocusOut>', lambda _event: self._on_selection_changed())
        self.end_spin.bind('<Return>', lambda _event: self._on_selection_changed())

        edit_frame = ttk.LabelFrame(right, text='关节编辑')
        edit_frame.pack(fill=tk.BOTH, expand=True)
        group_toolbar = ttk.Frame(edit_frame)
        group_toolbar.grid(row=0, column=0, columnspan=4, padx=4, pady=(8, 4), sticky='ew')
        ttk.Button(group_toolbar, text='新增分组', command=self._add_edit_group).pack(side=tk.LEFT, padx=4)
        ttk.Button(group_toolbar, text='应用到选区', command=self._apply_delta).pack(side=tk.LEFT, padx=4)
        self.preview_edit_button = ttk.Button(group_toolbar, text='预览', command=self._preview_pending_edits)
        self.preview_edit_button.pack(side=tk.LEFT, padx=4)
        self.undo_preview_button = ttk.Button(group_toolbar, text='撤销预览', command=self._undo_preview)

        ttk.Label(edit_frame, text='分组').grid(row=1, column=0, padx=4, pady=(0, 4), sticky='w')
        ttk.Label(edit_frame, text='关节').grid(row=1, column=1, padx=4, pady=(0, 4), sticky='w')
        ttk.Label(edit_frame, text='调整值').grid(row=1, column=2, padx=4, pady=(0, 4), sticky='w')
        ttk.Label(edit_frame, text='操作').grid(row=1, column=3, padx=4, pady=(0, 4), sticky='w')

        self.group_rows_frame = ttk.Frame(edit_frame)
        self.group_rows_frame.grid(row=2, column=0, columnspan=4, padx=4, pady=(0, 8), sticky='nsew')

        ttk.Label(
            edit_frame,
            text='每组可输入不同关节和正负弧度，多个分组会在同一时间选区内同时生效。',
        ).grid(row=3, column=0, columnspan=4, padx=4, pady=(0, 8), sticky='w')

        ttk.Label(edit_frame, text='平滑帧数').grid(row=4, column=0, padx=4, pady=4, sticky='e')
        ttk.Spinbox(
            edit_frame,
            from_=0,
            to=120,
            increment=1,
            textvariable=self.smooth_var,
            width=10,
        ).grid(row=4, column=1, padx=4, pady=4, sticky='w')

        ttk.Label(edit_frame, text='可用关节').grid(row=5, column=0, padx=4, pady=(4, 2), sticky='w')
        self.joint_list = tk.Listbox(edit_frame, selectmode=tk.EXTENDED, height=20)
        self.joint_list.grid(row=6, column=0, columnspan=4, padx=4, pady=2, sticky='nsew')
        self.joint_list.bind('<Double-Button-1>', lambda _event: self._append_selected_joints())
        joint_action_row = ttk.Frame(edit_frame)
        joint_action_row.grid(row=7, column=0, columnspan=4, padx=4, pady=6, sticky='ew')
        ttk.Button(joint_action_row, text='加入当前分组', command=self._append_selected_joints).pack(
            side=tk.LEFT, padx=4
        )
        ttk.Button(joint_action_row, text='清空当前分组', command=self._clear_active_group).pack(
            side=tk.LEFT, padx=4
        )

        edit_frame.columnconfigure(1, weight=1)
        edit_frame.columnconfigure(3, weight=1)
        edit_frame.rowconfigure(2, weight=0)
        edit_frame.rowconfigure(6, weight=1)

        self._add_edit_group(initial_joints='', initial_delta='0.05', set_active=True)

        status_frame = ttk.Frame(main)
        status_frame.pack(fill=tk.X, pady=(8, 0))
        ttk.Label(status_frame, textvariable=self.status_var).pack(side=tk.LEFT)

    def _schedule_refresh(self) -> None:
        if self._closed:
            return
        self._update_summary_labels()
        self.root.after(100, self._schedule_refresh)

    def _choose_action_file(self) -> None:
        path = filedialog.askopenfilename(
            title='选择动作文件',
            initialdir=str(self._default_actions_dir),
            filetypes=[('JSON action', '*.json'), ('All files', '*.*')],
        )
        if not path:
            return
        self._load_document(Path(path))

    def _reload_document(self) -> None:
        if self._document is None:
            return
        self._load_document(self._document.path)

    def _load_document(self, path: Path) -> None:
        try:
            document = _load_action_document(path)
        except Exception as exc:  # noqa: BLE001
            messagebox.showerror('加载失败', str(exc))
            self.status_var.set(f'加载失败: {exc}')
            return

        self._pause_playback()
        self._hide_preview_undo_button()
        self._document = document
        self._dirty = False
        total_frames = max(document.total_frames - 1, 0)
        self.file_var.set(str(path))
        self.current_frame_var.set(0)
        self.selection_start_var.set(0)
        self.selection_end_var.set(total_frames)
        self._update_spinbox_limits(total_frames)
        self._rebuild_joint_list()
        self._refresh_timeline_energy()
        self._set_playhead(0, preview=False)
        self._draw_timeline()
        self.status_var.set(f'已加载 {path.name}')

    def _save_document(self) -> None:
        if self._document is None:
            return
        self._write_document(self._document.path)

    def _save_document_as(self) -> None:
        if self._document is None:
            return
        path = filedialog.asksaveasfilename(
            title='另存动作文件',
            initialdir=str(self._document.path.parent),
            initialfile=self._document.path.name,
            defaultextension='.json',
            filetypes=[('JSON action', '*.json'), ('All files', '*.*')],
        )
        if not path:
            return
        self._write_document(Path(path))

    def _write_document(self, path: Path) -> None:
        if self._document is None:
            return
        try:
            _sync_document_to_raw(self._document)
            with path.open('w', encoding='utf-8') as handle:
                json.dump(self._document.raw, handle, ensure_ascii=False, indent=2)
                handle.write('\n')
        except Exception as exc:  # noqa: BLE001
            messagebox.showerror('保存失败', str(exc))
            self.status_var.set(f'保存失败: {exc}')
            return

        self._document.path = path
        self.file_var.set(str(path))
        self._dirty = False
        self.status_var.set(f'已保存到 {path.name}')

    def _check_action_speed(self) -> None:
        if self._document is None:
            self.status_var.set('请先加载动作文件')
            return

        violations, checked_track_count = _collect_speed_violations(self._document)
        if checked_track_count == 0:
            messagebox.showinfo('超速检查', '当前动作没有可检查的 spd 配置或帧数不足。')
            self.status_var.set('超速检查完成：没有可检查的 spd 配置')
            return

        if not violations:
            messagebox.showinfo('超速检查', '超速数量: 0')
            self.status_var.set('超速检查完成：超速数量 0')
            return

        messagebox.showwarning(
            '超速检查',
            '\n'.join(_summarize_speed_violations(violations, self._joint_velocity_limits)),
        )
        self.status_var.set(f'超速检查完成：超速数量 {len(violations)}')

    def _smooth_action_speed(self) -> None:
        if self._document is None:
            self.status_var.set('请先加载动作文件')
            return

        before_violations, checked_track_count = _collect_speed_violations(self._document)
        if checked_track_count == 0:
            messagebox.showinfo('速度平滑', '当前动作没有可检查的 spd 配置或帧数不足。')
            self.status_var.set('速度平滑跳过：没有可检查的 spd 配置')
            return

        if not before_violations:
            messagebox.showinfo('速度平滑', '当前动作没有超速，无需处理。')
            self.status_var.set('速度平滑完成：当前动作没有超速')
            return

        self._hide_preview_undo_button()
        result = _smooth_document_speed(self._document, self._joint_limits)
        after_violations, _ = _collect_speed_violations(self._document)

        if result.adjusted_points > 0:
            self._dirty = True
            self._refresh_timeline_energy()
            self._draw_timeline()

        fixed_count = len(before_violations) - len(after_violations)
        lines = [
            f'超速数量: {len(before_violations)} -> {len(after_violations)}',
            f'处理轨道数: {checked_track_count}',
            f'调整数据点: {result.adjusted_points}',
            f'消除超速数: {fixed_count}',
        ]
        if result.clipped_points > 0:
            lines.append(f'限位截断次数: {result.clipped_points}')
        if after_violations:
            lines.append('仍有剩余超速：')
            lines.extend(
                _summarize_speed_violations(after_violations, self._joint_velocity_limits)
            )

        if after_violations:
            messagebox.showwarning('速度平滑', '\n'.join(lines))
        else:
            messagebox.showinfo('速度平滑', '\n'.join(lines))

        self.status_var.set(
            f'速度平滑完成：超速 {len(before_violations)} -> {len(after_violations)}，调整 {result.adjusted_points} 个数据点'
        )

    def _update_spinbox_limits(self, max_frame: int) -> None:
        self.start_spin.configure(to=max_frame)
        self.end_spin.configure(to=max_frame)
        self.playhead_scale.configure(to=max_frame)

    def _rebuild_joint_list(self) -> None:
        self.joint_list.delete(0, tk.END)
        if self._document is None:
            return
        # 过滤掉手指关节 (101-106 左手, 111-116 右手)
        finger_joint_ids = {101, 102, 103, 104, 105, 106, 111, 112, 113, 114, 115, 116}
        for joint_id in self._document.joint_ids():
            if joint_id in finger_joint_ids:
                continue  # 跳过手指关节
            joint_name = MOTOR_ID_TO_JOINT.get(joint_id, f'joint_{joint_id}')
            self.joint_list.insert(tk.END, f'{joint_id} {joint_name}')

    def _refresh_timeline_energy(self) -> None:
        if self._document is None:
            self._frame_energy = []
            self._frame_energy_max = 1.0
            return

        selected_joint_ids = self._selected_joint_ids_for_display()
        energies: list[float] = []
        for frame_index in range(self._document.total_frames):
            values: list[float] = []
            for track in self._document.tracks:
                if frame_index < track.frame_count:
                    if selected_joint_ids is None:
                        values.extend(abs(value) for value in track.frames[frame_index])
                        continue

                    for joint_id, value in zip(track.joint_ids, track.frames[frame_index]):
                        if joint_id in selected_joint_ids:
                            values.append(abs(value))
            energies.append(sum(values) / len(values) if values else 0.0)

        self._frame_energy = energies
        self._frame_energy_max = max(max(energies, default=0.0), 1.0)

    def _selected_joint_ids_for_display(self) -> set[int] | None:
        if self._document is None:
            return None

        resolved: set[int] = set()
        available_ids = set(self._document.joint_ids())
        for group in self.edit_groups:
            joint_ids, _ = self._parse_joint_text(group.joints_var.get(), available_ids)
            resolved.update(joint_ids)

        return resolved or None

    def _on_edit_groups_changed(self, *_args) -> None:
        self._refresh_timeline_energy()
        self._draw_timeline()

    def _active_group_index(self) -> int:
        if not self.edit_groups:
            return 0
        index = max(0, min(int(self.active_group_var.get()), len(self.edit_groups) - 1))
        self.active_group_var.set(index)
        return index

    def _add_edit_group(
        self,
        initial_joints: str = '',
        initial_delta: str = '0.0',
        *,
        set_active: bool = True,
    ) -> None:
        joints_var = tk.StringVar(value=initial_joints)
        delta_var = tk.StringVar(value=initial_delta)
        joints_var.trace_add('write', self._on_edit_groups_changed)
        delta_var.trace_add('write', self._on_edit_groups_changed)
        self.edit_groups.append(EditGroupConfig(joints_var=joints_var, delta_var=delta_var))
        if set_active:
            self.active_group_var.set(len(self.edit_groups) - 1)
        self._rebuild_edit_group_rows()
        self._on_edit_groups_changed()

    def _remove_edit_group(self, index: int) -> None:
        if len(self.edit_groups) <= 1:
            self.edit_groups[0].joints_var.set('')
            self.edit_groups[0].delta_var.set('0.0')
            self.active_group_var.set(0)
        else:
            self.edit_groups.pop(index)
            self.active_group_var.set(min(index, len(self.edit_groups) - 1))
        self._rebuild_edit_group_rows()
        self._on_edit_groups_changed()

    def _clear_active_group(self) -> None:
        if not self.edit_groups:
            return
        group = self.edit_groups[self._active_group_index()]
        group.joints_var.set('')
        group.delta_var.set('0.0')

    def _rebuild_edit_group_rows(self) -> None:
        for child in self.group_rows_frame.winfo_children():
            child.destroy()

        for index, group in enumerate(self.edit_groups):
            row = ttk.Frame(self.group_rows_frame)
            row.grid(row=index, column=0, sticky='ew', pady=1)
            row.columnconfigure(1, weight=1)

            ttk.Radiobutton(
                row,
                text=f'组 {index + 1}',
                variable=self.active_group_var,
                value=index,
                command=self._draw_timeline,
            ).grid(row=0, column=0, padx=(0, 6), sticky='w')
            ttk.Entry(row, textvariable=group.joints_var, width=24).grid(
                row=0, column=1, padx=(0, 6), sticky='ew'
            )
            ttk.Entry(row, textvariable=group.delta_var, width=8).grid(
                row=0, column=2, padx=(0, 6), sticky='w'
            )

            actions = ttk.Frame(row)
            actions.grid(row=0, column=3, sticky='w')
            ttk.Button(
                actions,
                text='加选中',
                command=lambda idx=index: self._append_selected_joints(idx),
            ).pack(side=tk.LEFT, padx=(0, 4))
            ttk.Button(
                actions,
                text='清空',
                command=lambda idx=index: self._clear_group(idx),
            ).pack(side=tk.LEFT, padx=(0, 4))
            ttk.Button(
                actions,
                text='删',
                command=lambda idx=index: self._remove_edit_group(idx),
            ).pack(side=tk.LEFT)

    def _clear_group(self, index: int) -> None:
        group = self.edit_groups[index]
        group.joints_var.set('')
        group.delta_var.set('0.0')

    def _parse_joint_text(
        self,
        raw_text: str,
        available_ids: set[int],
    ) -> tuple[list[int], list[str]]:
        raw_tokens = raw_text.replace(',', ' ').split()
        resolved: list[int] = []
        unknown: list[str] = []
        for token in raw_tokens:
            if token.lstrip('-').isdigit():
                joint_id = int(token)
            else:
                joint_id = JOINT_NAME_TO_ID.get(token, -1)
            if joint_id not in available_ids:
                unknown.append(token)
                continue
            if joint_id not in resolved:
                resolved.append(joint_id)
        return resolved, unknown

    def _append_selected_joints(self, group_index: int | None = None) -> None:
        if not self.edit_groups:
            return
        if group_index is None:
            group_index = self._active_group_index()
        selected = [self.joint_list.get(index).split()[0] for index in self.joint_list.curselection()]
        if not selected:
            return
        self.active_group_var.set(group_index)
        current = [
            token for token in self.edit_groups[group_index].joints_var.get().replace(',', ' ').split() if token
        ]
        merged: list[str] = []
        seen: set[str] = set()
        for token in current + selected:
            if token in seen:
                continue
            merged.append(token)
            seen.add(token)
        self.edit_groups[group_index].joints_var.set(', '.join(merged))

    def _collect_group_deltas(self) -> tuple[dict[int, float], int]:
        if self._document is None:
            raise ValueError('请先加载动作文件')

        available_ids = set(self._document.joint_ids())
        aggregated: dict[int, float] = {}
        used_group_count = 0

        for index, group in enumerate(self.edit_groups, start=1):
            joints_text = group.joints_var.get().strip()
            delta_text = group.delta_var.get().strip()

            if not joints_text and not delta_text:
                continue

            if not joints_text:
                raise ValueError(f'第 {index} 组未填写关节')
            if not delta_text:
                raise ValueError(f'第 {index} 组未填写调整值')

            try:
                delta = float(delta_text)
            except ValueError as exc:
                raise ValueError(f'第 {index} 组调整值无效: {delta_text}') from exc

            joint_ids, unknown = self._parse_joint_text(joints_text, available_ids)
            if unknown:
                raise ValueError(f'第 {index} 组存在无效关节: {", ".join(unknown)}')
            if not joint_ids:
                raise ValueError(f'第 {index} 组没有有效关节')
            if delta == 0.0:
                continue

            used_group_count += 1
            for joint_id in joint_ids:
                aggregated[joint_id] = aggregated.get(joint_id, 0.0) + delta

        if not aggregated:
            raise ValueError('请至少配置一组非零调整值')

        return aggregated, used_group_count

    def _collect_group_joint_ids(self) -> tuple[list[int], int]:
        if self._document is None:
            raise ValueError('请先加载动作文件')

        available_ids = set(self._document.joint_ids())
        resolved: list[int] = []
        seen: set[int] = set()
        used_group_count = 0

        for index, group in enumerate(self.edit_groups, start=1):
            joints_text = group.joints_var.get().strip()
            delta_text = group.delta_var.get().strip()

            if not joints_text and not delta_text:
                continue

            if not joints_text:
                raise ValueError(f'第 {index} 组未填写关节')

            joint_ids, unknown = self._parse_joint_text(joints_text, available_ids)
            if unknown:
                raise ValueError(f'第 {index} 组存在无效关节: {", ".join(unknown)}')
            if not joint_ids:
                raise ValueError(f'第 {index} 组没有有效关节')

            used_group_count += 1
            for joint_id in joint_ids:
                if joint_id in seen:
                    continue
                resolved.append(joint_id)
                seen.add(joint_id)

        if not resolved:
            raise ValueError('请至少配置一组有效关节')

        return resolved, used_group_count

    def _on_selection_changed(self) -> None:
        start, end = self._normalized_selection()
        self.selection_start_var.set(start)
        self.selection_end_var.set(end)
        self._draw_timeline()

    def _normalized_selection(self) -> tuple[int, int]:
        if self._document is None or self._document.total_frames == 0:
            return 0, 0
        max_frame = self._document.total_frames - 1
        start = max(0, min(int(self.selection_start_var.get()), max_frame))
        end = max(0, min(int(self.selection_end_var.get()), max_frame))
        return (start, end) if start <= end else (end, start)

    def _set_selection_edge(self, edge: str) -> None:
        frame_index = int(self.current_frame_var.get())
        if edge == 'start':
            self.selection_start_var.set(frame_index)
        else:
            self.selection_end_var.set(frame_index)
        self._on_selection_changed()

    def _on_seek(self, value: str) -> None:
        if self._updating_scale:
            return
        self._set_playhead(int(round(float(value))), preview=self.auto_preview_var.get())

    def _set_playhead(self, frame_index: int, preview: bool) -> None:
        if self._document is None or self._document.total_frames == 0:
            frame_index = 0
        else:
            frame_index = max(0, min(frame_index, self._document.total_frames - 1))

        self.current_frame_var.set(frame_index)
        self._updating_scale = True
        self.playhead_scale.set(frame_index)
        self._updating_scale = False
        self._draw_timeline()
        if preview:
            self._preview_current_frame()

    def _preview_current_frame(self) -> None:
        if self._document is None:
            return
        self.preview_node.publish_document_frame(self._document, int(self.current_frame_var.get()))
        self.status_var.set(f'已预览第 {int(self.current_frame_var.get())} 帧')

    def _show_preview_undo_button(self) -> None:
        if not self.undo_preview_button.winfo_manager():
            self.undo_preview_button.pack(side=tk.LEFT, padx=4)

    def _hide_preview_undo_button(self) -> None:
        self._preview_frame_index = None
        if self.undo_preview_button.winfo_manager():
            self.undo_preview_button.pack_forget()

    def _preview_pending_edits(self) -> None:
        if self._document is None:
            return

        try:
            joint_deltas, _ = self._collect_group_deltas()
        except ValueError as exc:
            messagebox.showwarning('预览失败', str(exc))
            self.status_var.set(str(exc))
            return

        frame_index = int(self.current_frame_var.get())
        clipped_count = 0
        clipped_joint_ids: set[int] = set()
        for track in self._document.tracks:
            if frame_index >= track.frame_count:
                continue

            positions = list(track.frames[frame_index])
            joint_index = {joint_id: index for index, joint_id in enumerate(track.joint_ids)}
            for joint_id, delta in joint_deltas.items():
                column = joint_index.get(joint_id)
                if column is None:
                    continue
                clipped_value, was_clipped = self._clip_joint_value(joint_id, positions[column] + delta)
                positions[column] = clipped_value
                if was_clipped:
                    clipped_count += 1
                    clipped_joint_ids.add(joint_id)

            self.preview_node.publish_track_positions(track, positions)

        self._preview_frame_index = frame_index
        self._show_preview_undo_button()
        status_text = f'已预览第 {frame_index} 帧的输入效果'
        if clipped_count > 0:
            clipped_labels = [MOTOR_ID_TO_JOINT.get(joint_id, str(joint_id)) for joint_id in sorted(clipped_joint_ids)]
            status_text += f'；{clipped_count} 次预览触发限位截断 ({", ".join(clipped_labels)})'
        self.status_var.set(status_text)

    def _undo_preview(self) -> None:
        if self._document is None:
            self._hide_preview_undo_button()
            return

        frame_index = self._preview_frame_index
        if frame_index is None:
            self._hide_preview_undo_button()
            return

        frame_index = max(0, min(frame_index, self._document.total_frames - 1))
        self.preview_node.publish_document_frame(self._document, frame_index)
        self._hide_preview_undo_button()
        self.status_var.set(f'已撤销第 {frame_index} 帧的预览效果')

    def _start_playback(self) -> None:
        if self._document is None or self._document.total_frames == 0:
            return
        if self._is_playing:
            return
        if int(self.current_frame_var.get()) >= self._document.total_frames - 1:
            self._set_playhead(0, preview=False)
        self._is_playing = True
        self._schedule_next_play_step()

    def _schedule_next_play_step(self) -> None:
        if not self._is_playing or self._closed:
            return
        self._play_after_id = self.root.after(int(1000.0 / ACTION_HZ), self._play_step)

    def _play_step(self) -> None:
        if not self._is_playing or self._document is None:
            return

        frame_index = int(self.current_frame_var.get())
        self.preview_node.publish_document_frame(self._document, frame_index)

        if frame_index >= self._document.total_frames - 1:
            self._pause_playback()
            self.status_var.set('播放完成')
            return

        self._set_playhead(frame_index + 1, preview=False)
        self._schedule_next_play_step()

    def _pause_playback(self) -> None:
        self._is_playing = False
        if self._play_after_id is not None:
            self.root.after_cancel(self._play_after_id)
            self._play_after_id = None

    def _stop_playback(self) -> None:
        self._pause_playback()
        self._set_playhead(0, preview=False)
        self.status_var.set('已停止播放')

    def _outside_smooth_weight(self, offset: int) -> float:
        smooth = max(0, int(self.smooth_var.get()))
        if smooth <= 0 or offset <= 0 or offset > smooth:
            return 0.0
        return (smooth - offset + 1) / (smooth + 1)

    def _clip_joint_value(self, joint_id: int, value: float) -> tuple[float, bool]:
        return _clip_joint_value_from_limits(getattr(self, '_joint_limits', {}), joint_id, value)

    def _apply_delta(self) -> None:
        if self._document is None:
            return

        self._hide_preview_undo_button()

        try:
            joint_deltas, used_group_count = self._collect_group_deltas()
        except ValueError as exc:
            messagebox.showwarning('编辑失败', str(exc))
            self.status_var.set(str(exc))
            return

        start, end = self._normalized_selection()
        changed_count = 0
        changed_joint_ids: set[int] = set()
        clipped_count = 0
        clipped_joint_ids: set[int] = set()
        for track in self._document.tracks:
            joint_index = {joint_id: index for index, joint_id in enumerate(track.joint_ids)}
            active_joint_deltas = {
                joint_id: delta for joint_id, delta in joint_deltas.items() if joint_id in joint_index
            }
            if not active_joint_deltas:
                continue

            track_start = min(start, max(track.frame_count - 1, 0))
            track_end = min(end, max(track.frame_count - 1, 0))
            if track_end < track_start:
                continue

            smooth = max(0, int(self.smooth_var.get()))
            for joint_id, delta in active_joint_deltas.items():
                column = joint_index[joint_id]

                for frame_index in range(track_start, track_end + 1):
                    original = track.frames[frame_index][column]
                    clipped_value, was_clipped = self._clip_joint_value(joint_id, original + delta)
                    track.frames[frame_index][column] = clipped_value
                    if clipped_value != original:
                        changed_count += 1
                        changed_joint_ids.add(joint_id)
                    if was_clipped:
                        clipped_count += 1
                        clipped_joint_ids.add(joint_id)

                for offset in range(1, smooth + 1):
                    weight = self._outside_smooth_weight(offset)
                    if weight <= 0.0:
                        continue

                    left_index = track_start - offset
                    if left_index >= 0:
                        original = track.frames[left_index][column]
                        clipped_value, was_clipped = self._clip_joint_value(joint_id, original + delta * weight)
                        track.frames[left_index][column] = clipped_value
                        if clipped_value != original:
                            changed_count += 1
                            changed_joint_ids.add(joint_id)
                        if was_clipped:
                            clipped_count += 1
                            clipped_joint_ids.add(joint_id)

                    right_index = track_end + offset
                    if right_index < track.frame_count:
                        original = track.frames[right_index][column]
                        clipped_value, was_clipped = self._clip_joint_value(joint_id, original + delta * weight)
                        track.frames[right_index][column] = clipped_value
                        if clipped_value != original:
                            changed_count += 1
                            changed_joint_ids.add(joint_id)
                        if was_clipped:
                            clipped_count += 1
                            clipped_joint_ids.add(joint_id)

        if changed_count == 0:
            if clipped_count > 0:
                self.status_var.set('所有修改都被关节极限截断，内存数据未变化')
            else:
                self.status_var.set('未修改任何帧，请检查选择区域与关节')
            return

        self._dirty = True
        self._refresh_timeline_energy()
        self._draw_timeline()
        if self.auto_preview_var.get():
            self._preview_current_frame()

        joint_labels = [MOTOR_ID_TO_JOINT.get(joint_id, str(joint_id)) for joint_id in sorted(changed_joint_ids)]
        status_text = (
            f'已应用 {used_group_count} 个分组到帧 {start}-{end}，影响 {len(joint_labels)} 个关节，'
            f'边缘平滑 {int(self.smooth_var.get())} 帧'
        )
        if clipped_count > 0:
            clipped_labels = [MOTOR_ID_TO_JOINT.get(joint_id, str(joint_id)) for joint_id in sorted(clipped_joint_ids)]
            status_text += f'；{clipped_count} 次写入触发限位截断 ({", ".join(clipped_labels)})'
        self.status_var.set(status_text)

    def _timeline_frame_from_x(self, x: float) -> int:
        if self._document is None or self._document.total_frames <= 1:
            return 0
        width = max(self.timeline_canvas.winfo_width(), 1)
        usable_width = max(width - 2 * TIMELINE_MARGIN, 1)
        normalized = (x - TIMELINE_MARGIN) / usable_width
        normalized = max(0.0, min(normalized, 1.0))
        return int(round(normalized * (self._document.total_frames - 1)))

    def _frame_to_x(self, frame_index: int) -> float:
        if self._document is None or self._document.total_frames <= 1:
            return float(TIMELINE_MARGIN)
        width = max(self.timeline_canvas.winfo_width(), 1)
        usable_width = max(width - 2 * TIMELINE_MARGIN, 1)
        return TIMELINE_MARGIN + usable_width * frame_index / (self._document.total_frames - 1)

    def _on_timeline_press(self, event) -> None:
        self._drag_anchor = self._timeline_frame_from_x(event.x)
        self.selection_start_var.set(self._drag_anchor)
        self.selection_end_var.set(self._drag_anchor)
        self._draw_timeline()

    def _on_timeline_drag(self, event) -> None:
        if self._drag_anchor is None:
            return
        current = self._timeline_frame_from_x(event.x)
        self.selection_start_var.set(min(self._drag_anchor, current))
        self.selection_end_var.set(max(self._drag_anchor, current))
        self._draw_timeline()

    def _on_timeline_release(self, event) -> None:
        if self._drag_anchor is None:
            return
        current = self._timeline_frame_from_x(event.x)
        self.selection_start_var.set(min(self._drag_anchor, current))
        self.selection_end_var.set(max(self._drag_anchor, current))
        self._drag_anchor = None
        self._draw_timeline()

    def _draw_timeline(self) -> None:
        canvas = self.timeline_canvas
        canvas.delete('all')

        width = max(canvas.winfo_width(), 400)
        height = max(canvas.winfo_height(), 180)
        top = 26
        bottom = height - 42
        mid = (top + bottom) / 2.0

        canvas.create_rectangle(
            TIMELINE_MARGIN,
            top,
            width - TIMELINE_MARGIN,
            bottom,
            outline='#d0d0d0',
            fill='#ffffff',
        )

        if self._document is None or self._document.total_frames == 0:
            canvas.create_text(
                width / 2,
                height / 2,
                text='加载动作文件后在此显示时间轴与区域选择',
                fill='#666666',
            )
            self.current_frame_label.configure(text='0 / 0')
            self.selection_info.configure(text='未选择')
            return

        start, end = self._normalized_selection()
        selection_left = self._frame_to_x(start)
        selection_right = self._frame_to_x(end)
        canvas.create_rectangle(
            selection_left,
            top,
            selection_right,
            bottom,
            fill='#d8ecff',
            outline='',
        )

        bucket_count = max(1, min(width - 2 * TIMELINE_MARGIN, len(self._frame_energy)))
        for bucket_index in range(bucket_count):
            start_idx = int(bucket_index * len(self._frame_energy) / bucket_count)
            end_idx = max(start_idx + 1, int((bucket_index + 1) * len(self._frame_energy) / bucket_count))
            bucket = self._frame_energy[start_idx:end_idx]
            energy = sum(bucket) / len(bucket) if bucket else 0.0
            amplitude = 0.0 if self._frame_energy_max == 0.0 else energy / self._frame_energy_max
            bar_height = 10 + amplitude * (bottom - top - 24) / 2.0
            x0 = TIMELINE_MARGIN + (width - 2 * TIMELINE_MARGIN) * start_idx / len(self._frame_energy)
            x1 = TIMELINE_MARGIN + (width - 2 * TIMELINE_MARGIN) * end_idx / len(self._frame_energy)
            if x1 <= x0:
                x1 = x0 + 1
            canvas.create_rectangle(
                x0,
                mid - bar_height,
                x1,
                mid + bar_height,
                fill='#527aa0',
                outline='',
            )

        second_step = int(ACTION_HZ)
        for frame_index in range(0, self._document.total_frames, second_step):
            x = self._frame_to_x(frame_index)
            canvas.create_line(x, bottom, x, bottom + 8, fill='#555555')
            canvas.create_text(x, bottom + 18, text=f'{frame_index / ACTION_HZ:.1f}s', fill='#555555')

        current_frame = int(self.current_frame_var.get())
        playhead_x = self._frame_to_x(current_frame)
        canvas.create_line(playhead_x, top - 4, playhead_x, bottom + 4, fill='#d33c3c', width=2)
        canvas.create_text(playhead_x, top - 12, text=str(current_frame), fill='#d33c3c')

        self.current_frame_label.configure(
            text=f'{current_frame} / {self._document.total_frames - 1}'
        )
        frame_count = end - start + 1
        selected_joint_ids = self._selected_joint_ids_for_display()
        if selected_joint_ids is None:
            joint_scope_text = '显示全部关节'
        else:
            joint_names = [MOTOR_ID_TO_JOINT.get(joint_id, str(joint_id)) for joint_id in sorted(selected_joint_ids)]
            joint_scope_text = f'显示关节: {", ".join(joint_names)}'
        self.selection_info.configure(
            text=(
                f'已选帧 {start} - {end}，共 {frame_count} 帧，约 {frame_count / ACTION_HZ:.2f} 秒；'
                f'{joint_scope_text}'
            )
        )

    def _update_summary_labels(self) -> None:
        if self._document is None:
            self.summary_var.set('请选择 src/tienkung_action/config/actions 下的动作文件')
            self.root.title('Tiangong Joint Action Editor')
            return

        self.summary_var.set(
            f'{len(self._document.tracks)} 个轨道，{len(self._document.joint_ids())} 个关节，'
            f'{self._document.total_frames} 帧，{self._document.duration_sec:.2f} 秒'
        )
        suffix = ' *' if self._dirty else ''
        self.root.title(f'Tiangong Joint Action Editor{suffix}')

    def _sigint_handler(self, _sig, _frame) -> None:
        self.close()

    def close(self) -> None:
        if self._closed:
            return
        self._closed = True
        self._pause_playback()
        self.preview_node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()
        self.root.quit()
        self.root.destroy()

    def run(self) -> None:
        try:
            self.root.mainloop()
        finally:
            self.close()


def main(args: list[str] | None = None) -> None:
    app = JointActionEditorApp(initial_file=None)
    app.run()


if __name__ == '__main__':
    main()