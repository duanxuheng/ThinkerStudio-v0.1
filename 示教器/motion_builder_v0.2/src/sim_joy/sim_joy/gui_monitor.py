#!/usr/bin/env python3
import threading
import tkinter as tk
from tkinter import ttk
from typing import Dict, List, Optional
import sys
import signal

import rclpy
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node
from sensor_msgs.msg import Joy

try:  # Optional richer data
    from bodyctrl_msgs.msg import SbusData
    HAVE_SBUS = True
except ImportError:  # pragma: no cover - degrade gracefully
    HAVE_SBUS = False
    SbusData = None

# Local import - assumes in the same package
from .teleop_joy import TeleopJoyNode


class TeleopGuiMonitorNode(Node):
    """Caches teleop outputs for GUI display."""

    def __init__(self) -> None:
        super().__init__('teleop_gui_monitor')
        self._lock = threading.Lock()
        self._axes: List[float] = [0.0] * 12
        self._joy_stamp = None
        self._sbus_state: Optional[SbusData] = None

        self.create_subscription(Joy, '/sbus_data', self._joy_callback, 10)
        self._sbus_available = HAVE_SBUS
        self._sbus_sub = None
        if HAVE_SBUS:
            try:
                self._sbus_sub = self.create_subscription(
                    SbusData, '/sbus_data/event', self._sbus_callback, 10
                )
            except Exception as exc:  # pragma: no cover - type support missing
                self._sbus_available = False
                self.get_logger().warn(
                    'bodyctrl_msgs SbusData type support unavailable, '
                    f'/sbus_data/event monitor disabled ({exc})'
                )

    def _joy_callback(self, msg: Joy) -> None:
        with self._lock:
            self._axes = list(msg.axes)
            self._joy_stamp = msg.header.stamp

    def _sbus_callback(self, msg: SbusData) -> None:
        with self._lock:
            self._sbus_state = msg

    def snapshot(self) -> Dict[str, object]:
        with self._lock:
            return {
                'axes': list(self._axes),
                'stamp': self._joy_stamp,
                'sbus': self._sbus_state,
                'sbus_enabled': self._sbus_available and self._sbus_sub is not None,
            }


class TeleopGuiApp:
    AXIS_WIDGETS = [
        ('y1', '(Y1)'),
        ('x1', '(X1)'),
        ('y2', '(Y2)'),
        ('turn', '(X2)')
    ]
    BUTTON_ORDER = ['a', 'b', 'c', 'd']
    SWITCH_OPTIONS = {
        'e': ('up', 'mid', 'down'),
        'f': ('up', 'mid', 'down'),
        'g': ('left', 'mid', 'right'),
        'h': ('left', 'mid', 'right'),
    }
    AXIS_LABELS = [
        'Axis 0',
        'Axis 1',
        'Axis 2',
        'Axis 3',
        'Axis 4',
        'Axis 5',
        'Axis 6',
        'Axis 7',
        'Axis 8',
        'Axis 9',
        'Axis 10',
        'Axis 11',
    ]
    BUTTON_FIELDS = ['button_a', 'button_b', 'button_c', 'button_d']
    SWITCH_FIELDS = ['button_e', 'button_f', 'button_g', 'button_h']

    def __init__(self) -> None:
        self._closed = False
        rclpy.init()
        # Initialize teleop node with other inputs disabled
        self.teleop_node = TeleopJoyNode(
            enable_gamepad=False,
            enable_keyboard=False,
            enable_console=False,
        )
        self.monitor_node = TeleopGuiMonitorNode()
        self.executor = MultiThreadedExecutor()
        self.executor.add_node(self.teleop_node)
        self.executor.add_node(self.monitor_node)
        self._spin_thread = threading.Thread(target=self.executor.spin, daemon=True)
        self._spin_thread.start()

        self.root = tk.Tk()
        self.root.title('Tiangong Teleop GUI')
        self.root.protocol('WM_DELETE_WINDOW', self.close)

        # Handle Ctrl-C
        signal.signal(signal.SIGINT, self._sigint_handler)

        self._build_layout()
        self._schedule_update()

    # ---------- GUI Construction ----------
    def _build_layout(self) -> None:
        self.root.geometry('820x520')
        main = ttk.Frame(self.root, padding=10)
        main.pack(fill=tk.BOTH, expand=True)

        control_frame = ttk.LabelFrame(main, text='Teleop Input (publishes /sbus_data)')
        control_frame.pack(fill=tk.X, expand=False)

        self.axis_scales: Dict[str, tk.Scale] = {}
        for idx, (axis, label) in enumerate(self.AXIS_WIDGETS):
            scale = tk.Scale(
                control_frame,
                from_=1.0,
                to=-1.0,
                orient=tk.VERTICAL,
                resolution=0.01,
                length=180,
                label=label,
                command=lambda v, name=axis: self._on_axis_change(name, float(v)),
            )
            scale.set(0.0)
            scale.grid(row=0, column=idx, padx=6, pady=4)
            self.axis_scales[axis] = scale

        button_frame = ttk.Frame(control_frame)
        button_frame.grid(row=0, column=len(self.AXIS_WIDGETS), padx=12)
        ttk.Label(button_frame, text='Buttons').pack(anchor='w')
        self.button_vars: Dict[str, tk.BooleanVar] = {}
        for button in self.BUTTON_ORDER:
            var = tk.BooleanVar(value=False)
            chk = ttk.Checkbutton(
                button_frame,
                text=button.upper(),
                variable=var,
                command=lambda name=button, v=var: self._on_button_toggle(name, v.get()),
            )
            chk.pack(anchor='w')
            self.button_vars[button] = var

        switch_frame = ttk.Frame(control_frame)
        switch_frame.grid(row=0, column=len(self.AXIS_WIDGETS) + 1, padx=12)
        ttk.Label(switch_frame, text='Switches').grid(row=0, column=0, columnspan=2, sticky='w')
        self.switch_vars: Dict[str, tk.StringVar] = {}
        for row, (key, options) in enumerate(self.SWITCH_OPTIONS.items(), start=1):
            ttk.Label(switch_frame, text=key.upper()).grid(row=row, column=0, sticky='e', padx=2, pady=2)
            var = tk.StringVar(value='mid')
            combo = ttk.Combobox(switch_frame, values=options, state='readonly', width=6, textvariable=var)
            combo.grid(row=row, column=1, padx=2, pady=2)
            combo.bind('<<ComboboxSelected>>', lambda _e, name=key: self._on_switch_change(name))
            self.switch_vars[key] = var

        action_frame = ttk.Frame(control_frame)
        action_frame.grid(row=0, column=len(self.AXIS_WIDGETS) + 2, padx=12)
        ttk.Button(action_frame, text='Center Axes', command=self._center_axes).pack(fill=tk.X, pady=4)
        ttk.Button(action_frame, text='Release Buttons', command=self._release_buttons).pack(fill=tk.X, pady=4)
        ttk.Button(action_frame, text='Switches Mid', command=self._reset_switches).pack(fill=tk.X, pady=4)

        display_frame = ttk.LabelFrame(main, text='Telemetry Monitor')
        display_frame.pack(fill=tk.BOTH, expand=True, pady=(10, 0))
        self.axis_labels: List[ttk.Label] = []
        for idx, name in enumerate(self.AXIS_LABELS):
            lbl = ttk.Label(display_frame, text=f'{name}: 0.00', width=20, anchor='w')
            lbl.grid(row=idx // 4, column=idx % 4, sticky='w', padx=5, pady=2)
            self.axis_labels.append(lbl)

        self.stamp_label = ttk.Label(main, text='Last Joy stamp: --')
        self.stamp_label.pack(anchor='w', pady=(6, 2))

        sbus_frame = ttk.Frame(main)
        sbus_frame.pack(fill=tk.X, expand=False)
        self.sbus_status = ttk.Label(sbus_frame, text='Waiting for /sbus_data/event...')
        self.sbus_status.pack(anchor='w')
        self.sbus_axes_label = ttk.Label(sbus_frame, text='x1: --  y1: --  x2: --  y2: --')
        self.sbus_axes_label.pack(anchor='w')
        self.button_label = ttk.Label(sbus_frame, text='Buttons A-D: --')
        self.button_label.pack(anchor='w')
        self.switch_label = ttk.Label(sbus_frame, text='Switches E-H: --')
        self.switch_label.pack(anchor='w')
        self.key_event_label = ttk.Label(sbus_frame, text='Key Event: --')
        self.key_event_label.pack(anchor='w')

    # ---------- GUI -> Teleop Callbacks ----------
    def _on_axis_change(self, axis_name: str, value: float) -> None:
        self.teleop_node.set_axis_override(axis_name, value)

    def _center_axes(self) -> None:
        for axis, scale in self.axis_scales.items():
            scale.set(0.0)
            self.teleop_node.set_axis_override(axis, 0.0)

    def _on_button_toggle(self, button: str, pressed: bool) -> None:
        self.teleop_node.set_button_state(button, pressed)

    def _release_buttons(self) -> None:
        for button, var in self.button_vars.items():
            var.set(False)
            self.teleop_node.set_button_state(button, False)

    def _on_switch_change(self, key: str) -> None:
        selection = self.switch_vars[key].get()
        self.teleop_node.set_switch_state(key, selection)

    def _reset_switches(self) -> None:
        for key, var in self.switch_vars.items():
            var.set('mid')
            self.teleop_node.set_switch_state(key, 'mid')

    # ---------- Telemetry Updates ----------
    def _schedule_update(self) -> None:
        self._refresh()
        self.root.after(100, self._schedule_update)

    def _refresh(self) -> None:
        snapshot = self.monitor_node.snapshot()
        axes = snapshot['axes']
        for idx, lbl in enumerate(self.axis_labels):
            value = axes[idx] if idx < len(axes) else 0.0
            lbl.configure(text=f'{self.AXIS_LABELS[idx]}: {value:+.2f}')

        stamp = snapshot['stamp']
        if stamp is not None:
            self.stamp_label.configure(text=f'Last Joy stamp: {stamp.sec}.{stamp.nanosec:09d}')
        else:
            self.stamp_label.configure(text='Last Joy stamp: --')

        sbus_msg: Optional[SbusData] = snapshot['sbus']  # type: ignore[assignment]
        if not snapshot['sbus_enabled']:
            self.sbus_status.configure(text='SBUS monitor disabled (type support unavailable)')
            self.sbus_axes_label.configure(text='x1: --  y1: --  x2: --  y2: --')
            self.button_label.configure(text='Buttons A-D: --')
            self.switch_label.configure(text='Switches E-H: --')
            self.key_event_label.configure(text='Key Event: --')
            return

        if sbus_msg is None:
            self.sbus_status.configure(text='Waiting for /sbus_data/event...')
            return

        self.sbus_status.configure(text='SBUS message received')
        self.sbus_axes_label.configure(
            text=(
                f'x1: {sbus_msg.x1:+.2f}  y1: {sbus_msg.y1:+.2f}  '
                f'x2: {sbus_msg.x2:+.2f}  y2: {sbus_msg.y2:+.2f}'
            )
        )
        buttons = '  '.join(
            f'{name[-1]}:{getattr(sbus_msg, name):+d}'
            for name in self.BUTTON_FIELDS
        )
        self.button_label.configure(text=f'Buttons A-D: {buttons}')
        switches = '  '.join(
            f'{name[-1]}:{getattr(sbus_msg, name):+d}'
            for name in self.SWITCH_FIELDS
        )
        self.switch_label.configure(text=f'Switches E-H: {switches}')
        self.key_event_label.configure(
            text=f'Key Event new={sbus_msg.key_event_new}  old={sbus_msg.key_event_old}'
        )

    # ---------- Shutdown ----------
    def _sigint_handler(self, sig, frame) -> None:
        self.close()

    def close(self) -> None:
        if self._closed:
            return
        self._closed = True
        try:
            self.executor.shutdown(cancel_tasks=True)
        except Exception:
            pass
        self.teleop_node.destroy_node()
        self.monitor_node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()
        self.root.quit()
        sys.exit(0)

    def run(self) -> None:
        try:
            self.root.mainloop()
        finally:
            self.close()


def main(args: Optional[List[str]] = None) -> None:
    app = TeleopGuiApp()
    app.run()


if __name__ == '__main__':
    main()
