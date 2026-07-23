#!/usr/bin/env python3

import sys
import threading
import time
from typing import Dict, List, Optional

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy

try:  # Optional dependency for physical gamepads
    from inputs import UnpluggedError, get_gamepad
    HAVE_INPUTS = True
except ImportError:  # pragma: no cover - graceful fallback on systems without inputs
    HAVE_INPUTS = False
    get_gamepad = None

try:  # Optional dependency for keyboard fallback
    from pynput import keyboard as pynput_keyboard
    HAVE_PYNPUT = True
except ImportError:  # pragma: no cover - keyboard fallback disabled when pynput is absent
    HAVE_PYNPUT = False
    pynput_keyboard = None

try:  # Optional: publish richer SBUS events when bodyctrl_msgs is available
    from bodyctrl_msgs.msg import SbusData
    HAVE_SBUS = True
except ImportError:  # pragma: no cover - bodyctrl_msgs not built
    HAVE_SBUS = False
    SbusData = None

HAVE_CONSOLE = sys.stdin.isatty()


class TeleopJoyNode(Node):
    """Publishes /sbus_data Joy messages with Tiangong-specific axis mapping."""

    AXES_LEN = 12
    AXIS_KEYS = frozenset({'1', '2', '3', '4', '6', '7', '8', '9'})
    AXIS_OVERRIDE_INDEX = {
        'y2': 0,   # Right stick pitch
        'turn': 1, # Right stick yaw
        'y1': 2,   # Forward/back
        'x1': 3,   # Lateral
    }
    SWITCH_SEQUENCES = {
        'e': ('button_e', [
            ('KEY_E_UP', -1),
            ('KEY_E_MID', 0),
            ('KEY_E_DOWN', 1),
        ]),
        'f': ('button_f', [
            ('KEY_F_UP', -1),
            ('KEY_F_MID', 0),
            ('KEY_F_DOWN', 1),
        ]),
        'g': ('button_g', [
            ('KEY_G_LEFT', 1),
            ('KEY_G_MID', 0),
            ('KEY_G_RIGHT', -1),
        ]),
        'h': ('button_h', [
            ('KEY_H_LEFT', 1),
            ('KEY_H_MID', 0),
            ('KEY_H_RIGHT', -1),
        ]),
    }

    def __init__(
        self,
        *,
        enable_gamepad: bool | None = None,
        enable_keyboard: bool | None = None,
        enable_console: bool | None = None,
    ) -> None:
        super().__init__('sim_joy')
        self.publisher_ = self.create_publisher(Joy, '/sbus_data', 10)
        self._sbus_available = HAVE_SBUS
        self.sbus_publisher = None
        if HAVE_SBUS:
            try:
                self.sbus_publisher = self.create_publisher(SbusData, '/sbus_data/event', 10)
            except Exception as exc:  # pragma: no cover - gracefully degrade when type support missing
                self._sbus_available = False
                self.sbus_publisher = None
                self.get_logger().warn(
                    f'bodyctrl_msgs SbusData type support unavailable, disabling /sbus_data/event ({exc})'
                )

        self.declare_parameters(
            namespace='',
            parameters=[
                ('publish_rate', 30.0),
                ('deadzone', 0.15),
                ('gamepad_timeout', 1.0),
                ('key_axis_gain', 0.5),
            ],
        )

        self.publish_period = 1.0 / float(self.get_parameter('publish_rate').value)
        self.deadzone = float(self.get_parameter('deadzone').value)
        self.gamepad_timeout = float(self.get_parameter('gamepad_timeout').value)
        self.key_axis_gain = float(self.get_parameter('key_axis_gain').value)

        self._state_lock = threading.Lock()
        self._stop_event = threading.Event()

        self._gamepad_state = {
            'forward': 0.0,
            'lateral': 0.0,
            'turn': 0.0,
            'y2': 0.0,
            'buttons': {
                'a': 0.0,
                'b': 0.0,
                'x': 0.0,
                'y': 0.0,
                'lb': 0.0,
                'rb': 0.0,
                'back': 0.0,
                'start': 0.0,
            },
            'connected': False,
        }
        self._axis_keys_pressed = set[str]()
        self._button_states: Dict[str, bool] = {k: False for k in ('a', 'b', 'c', 'd')}
        self._switch_states = {k: 0 for k in self.SWITCH_SEQUENCES}
        self._switch_indices = {k: 1 for k in self.SWITCH_SEQUENCES}  # start at mid
        self._axis_overrides: Dict[str, Optional[float]] = {
            name: None for name in self.AXIS_OVERRIDE_INDEX
        }
        self._key_event_new = self._get_key_constant('KEY_NONE')
        self._key_event_old = self._get_key_constant('KEY_NONE')
        self._last_gamepad_event = 0.0
        self._keyboard_listener = None
        self._console_thread = None

        if enable_gamepad is None:
            enable_gamepad = True
        self._gamepad_enabled = enable_gamepad and HAVE_INPUTS
        if self._gamepad_enabled:
            self._gamepad_thread = threading.Thread(target=self._gamepad_loop, daemon=True)
            self._gamepad_thread.start()
            self.get_logger().info('Gamepad thread started (inputs module detected).')
        else:
            self._gamepad_thread = None
            if enable_gamepad:
                self.get_logger().warn('inputs module not installed, physical gamepads are disabled.')

        if enable_keyboard is None:
            enable_keyboard = True
        self._keyboard_enabled = enable_keyboard and HAVE_PYNPUT
        if self._keyboard_enabled:
            self._keyboard_listener = pynput_keyboard.Listener(
                on_press=lambda key: self._handle_key_event(key, True),
                on_release=lambda key: self._handle_key_event(key, False),
            )
            self._keyboard_listener.daemon = True
            self._keyboard_listener.start()
        else:
            self._keyboard_listener = None
            if enable_keyboard:
                self.get_logger().warn('pynput module not installed, keyboard fallback is disabled.')

        if enable_console is None:
            enable_console = not self._keyboard_enabled
        self._console_enabled = enable_console and HAVE_CONSOLE
        if self._console_enabled:
            self.get_logger().info(
                'Console input enabled (type "help" for commands).' if not self._keyboard_enabled
                else 'Console input enabled explicitly.'
            )
            self._console_thread = threading.Thread(target=self._console_loop, daemon=True)
            self._console_thread.start()
        else:
            if enable_console:
                self.get_logger().warn('Console input requested but no interactive TTY detected.')

        self._print_input_help()
        self.create_timer(self.publish_period, self._publish)

    def _print_input_help(self) -> None:
        lines = [
            '',
            '--------------------------------------------------',
            '  SIM JOY TELEOP READY',
            '--------------------------------------------------',
        ]
        if self._gamepad_enabled:
            lines.append('  Gamepad: Monitoring events...')
        if self._keyboard_enabled:
            lines.extend([
                '  Keyboard Control (NumPad/Digit Row):',
                '    Move:     [8] Fwd   [2] Back',
                '              [4] Left  [6] Right',
                '    Turn:     [7] Left  [9] Right',
                '    Aux:      [3] Up    [1] Down',
                '    Buttons:  a, b, c, d',
                '    Switches: e, f, g, h',
            ])
        if self._console_enabled:
            lines.append('  Console: Type "help" for commands.')
        lines.append('--------------------------------------------------')
        self.get_logger().info('\n'.join(lines))

    def destroy_node(self) -> None:  # noqa: D401
        self._stop_event.set()
        if self._keyboard_listener is not None:
            self._keyboard_listener.stop()
        if self._console_thread is not None and self._console_thread.is_alive():
            try:
                self._console_thread.join(timeout=1.0)
            except RuntimeError:
                pass
        return super().destroy_node()

    # --------------------- Helpers ---------------------
    def _get_key_constant(self, name: str) -> int:
        if not self._sbus_available or SbusData is None:
            return 0
        return int(getattr(SbusData, name, 0))

    def _emit_key_event(self, const_name: str) -> None:
        if not self._sbus_available:
            return
        new_val = self._get_key_constant(const_name)
        if new_val == 0:
            return
        self._key_event_old = self._key_event_new
        self._key_event_new = new_val

    def _canonical_key(self, ident: str | None) -> str | None:
        if ident is None:
            return None
        ident = ident.lower()
        if ident.startswith('num_'):
            ident = ident[4:]
        alias_map = {
            'up': '8',
            'down': '2',
            'left': '4',
            'right': '6',
            'home': '7',
            'page_up': '9',
            'end': '1',
            'page_down': '3',
        }
        return alias_map.get(ident, ident)

    def _cycle_switch(self, key: str) -> None:
        field, seq = self.SWITCH_SEQUENCES[key]
        idx = (self._switch_indices[key] + 1) % len(seq)
        self._switch_indices[key] = idx
        const_name, value = seq[idx]
        self._switch_states[key] = value
        self._emit_key_event(const_name)

    def _axis_value_from_keys(self, positives: tuple[str, ...], negatives: tuple[str, ...]) -> float:
        pos = any(k in self._axis_keys_pressed for k in positives)
        neg = any(k in self._axis_keys_pressed for k in negatives)
        return self.key_axis_gain * (float(pos) - float(neg))

    # --------------------- Gamepad Handling ---------------------
    def _gamepad_loop(self) -> None:
        connected_logged = False
        while rclpy.ok() and not self._stop_event.is_set():
            try:
                events = get_gamepad()
            except UnpluggedError:
                with self._state_lock:
                    self._gamepad_state['connected'] = False
                if connected_logged:
                    self.get_logger().info('Gamepad disconnected.')
                    connected_logged = False
                time.sleep(0.5)
                continue
            except Exception as exc:  # pragma: no cover - defensive logging
                self.get_logger().warn(f'Gamepad read error: {exc}')
                time.sleep(0.1)
                continue

            with self._state_lock:
                for event in events:
                    self._process_gamepad_event(event.code, event.state)
                self._gamepad_state['connected'] = True
                self._last_gamepad_event = time.monotonic()

            if not connected_logged:
                self.get_logger().info('Gamepad connected.')
                connected_logged = True

    def _process_gamepad_event(self, code: str, value: int) -> None:
        scale = 32768.0
        if code == 'ABS_X':
            self._gamepad_state['lateral'] = self._clamp(value / scale)
        elif code == 'ABS_Y':
            self._gamepad_state['forward'] = self._clamp(value / scale)
        elif code == 'ABS_RX':
            self._gamepad_state['turn'] = self._clamp(value / scale)
        elif code == 'ABS_RY':
            self._gamepad_state['y2'] = self._clamp(value / scale)
        elif code == 'BTN_SOUTH':
            self._gamepad_state['buttons']['a'] = float(value)
        elif code == 'BTN_EAST':
            self._gamepad_state['buttons']['b'] = float(value)
        elif code == 'BTN_WEST':
            self._gamepad_state['buttons']['x'] = float(value)
        elif code == 'BTN_NORTH':
            self._gamepad_state['buttons']['y'] = float(value)
        elif code == 'BTN_TL':
            self._gamepad_state['buttons']['lb'] = float(value)
        elif code == 'BTN_TR':
            self._gamepad_state['buttons']['rb'] = float(value)
        elif code == 'BTN_SELECT':
            self._gamepad_state['buttons']['back'] = float(value)
        elif code == 'BTN_START':
            self._gamepad_state['buttons']['start'] = float(value)

    # --------------------- Keyboard Handling ---------------------
    def _handle_key_event(self, key, pressed: bool) -> None:
        ident = self._canonical_key(self._key_identifier(key))
        self._update_key_state(ident, pressed)
    def _update_key_state(self, ident: str | None, pressed: bool) -> bool:
        if ident is None:
            return False
        with self._state_lock:
            if ident in self.AXIS_KEYS:
                if pressed:
                    self._axis_keys_pressed.add(ident)
                else:
                    self._axis_keys_pressed.discard(ident)
                return True

            if ident in self._button_states:
                self._button_states[ident] = pressed
                event_name = f"KEY_{ident.upper()}_{'DOWN' if pressed else 'UP'}"
                self._emit_key_event(event_name)
                return True

            if ident in self.SWITCH_SEQUENCES and pressed:
                self._cycle_switch(ident)
                return True
        return False

    # --------------------- External (GUI/API) Helpers ---------------------
    def set_axis_override(self, axis_name: str, value: float | None) -> None:
        axis_name = axis_name.lower()
        if axis_name not in self.AXIS_OVERRIDE_INDEX:
            raise ValueError(f'Unknown axis "{axis_name}"')
        clamped = None if value is None else float(self._clamp(value))
        with self._state_lock:
            self._axis_overrides[axis_name] = clamped

    def clear_axis_overrides(self) -> None:
        with self._state_lock:
            for key in self._axis_overrides:
                self._axis_overrides[key] = None

    def set_button_state(self, button: str, pressed: bool) -> None:
        self._update_key_state(button.lower(), pressed)

    def set_switch_state(self, key: str, position: str | int) -> None:
        key = key.lower()
        if isinstance(position, str):
            if not self._set_switch_position(key, position):
                raise ValueError('Switch position must be up/mid/down or left/mid/right')
            return
        if key in {'e', 'f'}:
            mapping = { -1: 'up', 0: 'mid', 1: 'down' }
        else:
            mapping = { -1: 'left', 0: 'mid', 1: 'right' }
        label = mapping.get(int(position))
        if not label or not self._set_switch_position(key, label):
            raise ValueError('Switch value out of range')

    # --------------------- Console Handling ---------------------
    def _console_loop(self) -> None:
        self._print_console_help()
        while not self._stop_event.is_set():
            try:
                line = input('teleop> ')
            except (EOFError, KeyboardInterrupt):
                break
            cmd = line.strip()
            if not cmd:
                continue
            self._handle_console_command(cmd)

    def _handle_console_command(self, text: str) -> None:
        parts = text.lower().split()
        if not parts:
            return
        cmd = parts[0]

        if cmd in ('press', 'release') and len(parts) == 2:
            ident = self._canonical_console_key(parts[1])
            if not self._update_key_state(ident, cmd == 'press'):
                self.get_logger().warn(f'Unknown key "{parts[1]}"')
            return

        if cmd == 'switch':
            if len(parts) == 1:
                self._print_switch_state()
                return
            key = parts[1]
            if key not in self.SWITCH_SEQUENCES:
                self.get_logger().warn('Switch key must be one of e/f/g/h')
                return
            if len(parts) == 2:
                self._cycle_switch(key)
                return
            target = parts[2]
            if not self._set_switch_position(key, target):
                self.get_logger().warn('Switch position must be up/mid/down or left/mid/right')
            return

        if cmd in ('tap',) and len(parts) == 2:
            ident = self._canonical_console_key(parts[1])
            if self._update_key_state(ident, True):
                time.sleep(0.05)
                self._update_key_state(ident, False)
            else:
                self.get_logger().warn(f'Unknown key "{parts[1]}"')
            return

        if cmd in ('status', 'state'):
            self._print_switch_state()
            return

        if cmd in ('help', '?'):
            self._print_console_help()
            return

        self.get_logger().warn('Commands: press <key>, release <key>, tap <key>, switch <e/f/g/h> [state], status')

    def _canonical_console_key(self, token: str) -> str | None:
        token = token.lower()
        alias = {
            'up': '8', 'down': '2', 'left': '4', 'right': '6',
            'forward': '8', 'back': '2', 'backward': '2',
            'strafe_left': '4', 'strafe_right': '6',
            'yaw_left': '7', 'yaw_right': '9',
            'pitch_down': '1', 'pitch_up': '3',
        }
        if token in alias:
            token = alias[token]
        if token in self.AXIS_KEYS or token in self._button_states or token in self.SWITCH_SEQUENCES:
            return token
        return None

    def _set_switch_position(self, key: str, target: str) -> bool:
        target = target.lower()
        options = {
            'e': {'up': 0, 'mid': 1, 'down': 2},
            'f': {'up': 0, 'mid': 1, 'down': 2},
            'g': {'left': 0, 'mid': 1, 'right': 2},
            'h': {'left': 0, 'mid': 1, 'right': 2},
        }
        index_map = options.get(key)
        if not index_map or target not in index_map:
            return False
        idx = index_map[target]
        seq = self.SWITCH_SEQUENCES[key][1]
        const_name, value = seq[idx]
        with self._state_lock:
            self._switch_indices[key] = idx
            self._switch_states[key] = value
        self._emit_key_event(const_name)
        return True

    def _print_console_help(self) -> None:
        self.get_logger().info(
            'Console commands: press|release <digit/a-d/e-h>, tap <key>, switch <e/f/g/h> [up|mid|down], status'
        )

    def _print_switch_state(self) -> None:
        with self._state_lock:
            states = ', '.join(f"{k}:{self._switch_states[k]:+.1f}" for k in self.SWITCH_SEQUENCES)
        self.get_logger().info(f'Switch states -> {states}')

    @staticmethod
    def _key_identifier(key) -> str | None:
        try:
            if key.char:
                return key.char.lower()
        except AttributeError:
            pass
        try:
            return key.name
        except AttributeError:
            return None

    # --------------------- Publish Loop ---------------------
    def _publish(self) -> None:
        now = time.monotonic()
        with self._state_lock:
            gamepad_axes = self._axes_from_gamepad(now)
            keyboard_axes = self._axes_from_keyboard()

        merged_axes = self._merge_axes(gamepad_axes, keyboard_axes)
        joy_msg = Joy()
        joy_msg.header.stamp = self.get_clock().now().to_msg()
        joy_msg.header.frame_id = 'joystick'
        joy_msg.axes = merged_axes
        joy_msg.buttons = []  # Consumer expects axes layout identical to mujoco_node

        self.publisher_.publish(joy_msg)
        self._publish_sbus(merged_axes)

    def _axes_from_gamepad(self, now: float) -> List[float]:
        axes = [0.0] * self.AXES_LEN
        if not self._gamepad_state['connected']:
            return axes
        if now - self._last_gamepad_event > self.gamepad_timeout:
            self._gamepad_state['connected'] = False
            return axes

        forward = self._apply_deadzone(-self._gamepad_state['forward'])
        lateral = self._apply_deadzone(-self._gamepad_state['lateral'])
        turn = self._apply_deadzone(-self._gamepad_state['turn'])
        y2 = self._apply_deadzone(-self._gamepad_state['y2'])

        axes[0] = y2
        axes[2] = forward
        axes[3] = lateral
        axes[1] = turn

        buttons = self._gamepad_state['buttons']
        axes[4] = buttons['lb']
        axes[5] = buttons['back']
        axes[6] = buttons['start']
        axes[7] = buttons['rb']
        axes[8] = buttons['a']
        axes[9] = buttons['b']
        axes[10] = buttons['x']
        axes[11] = buttons['y']
        return axes

    def _axes_from_keyboard(self) -> List[float]:
        axes = [0.0] * self.AXES_LEN
        if not HAVE_PYNPUT:
            return axes

        axes[0] = self._axis_value_from_keys(('3',), ('1',))
        axes[1] = self._axis_value_from_keys(('9',), ('7',))
        axes[2] = self._axis_value_from_keys(('8',), ('2',))
        axes[3] = self._axis_value_from_keys(('6',), ('4',))

        axes[4] = self._switch_states['e']
        axes[5] = self._switch_states['g']
        axes[6] = self._switch_states['h']
        axes[7] = self._switch_states['f']

        axes[8] = 1.0 if self._button_states['a'] else 0.0
        axes[9] = 1.0 if self._button_states['b'] else 0.0
        axes[10] = 1.0 if self._button_states['c'] else 0.0
        axes[11] = 1.0 if self._button_states['d'] else 0.0

        for axis_name, idx in self.AXIS_OVERRIDE_INDEX.items():
            override = self._axis_overrides.get(axis_name)
            if override is not None:
                axes[idx] = override
        return axes

    def _merge_axes(self, primary: List[float], fallback: List[float]) -> List[float]:
        merged = []
        for p, f in zip(primary, fallback):
            val = p if abs(p) > 1e-6 else f
            merged.append(float(self._clamp(val)))
        return merged

    def _publish_sbus(self, merged_axes: List[float]) -> None:
        if not self._sbus_available or not self.sbus_publisher:
            return

        msg = SbusData()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.key_event_old = self._key_event_old
        msg.key_event_new = self._key_event_new
        msg.button_a = 1 if self._button_states['a'] else -1
        msg.button_b = 1 if self._button_states['b'] else -1
        msg.button_c = 1 if self._button_states['c'] else -1
        msg.button_d = 1 if self._button_states['d'] else -1
        msg.button_e = int(self._switch_states['e'])
        msg.button_f = int(self._switch_states['f'])
        msg.button_g = int(self._switch_states['g'])
        msg.button_h = int(self._switch_states['h'])
        msg.x1 = float(self._clamp(merged_axes[3]))
        msg.y1 = float(self._clamp(merged_axes[2]))
        msg.x2 = float(self._clamp(merged_axes[1]))
        msg.y2 = float(self._clamp(merged_axes[0]))
        self.sbus_publisher.publish(msg)

    def _apply_deadzone(self, value: float) -> float:
        return 0.0 if abs(value) < self.deadzone else self._clamp(value)

    @staticmethod
    def _clamp(value: float, limit: float = 1.0) -> float:
        return max(-limit, min(limit, value))


def main(args: List[str] | None = None) -> None:
    rclpy.init(args=args)
    node = TeleopJoyNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:  # pragma: no cover - user stop
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
