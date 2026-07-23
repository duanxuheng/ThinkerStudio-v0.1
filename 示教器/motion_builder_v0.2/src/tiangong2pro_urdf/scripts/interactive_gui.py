#!/usr/bin/python3
import sys
import time
import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool
from sensor_msgs.msg import JointState
from visualization_msgs.msg import Marker, MarkerArray
from geometry_msgs.msg import Quaternion
from bodyctrl_msgs.msg import CmdSetMotorPosition, SetMotorPosition
from python_qt_binding.QtWidgets import (
    QApplication, QMainWindow, QVBoxLayout, QHBoxLayout, QWidget,
    QSlider, QLabel, QPushButton, QScrollArea, QGroupBox, QMessageBox,
    QInputDialog, QDialog, QListWidget, QListWidgetItem, QFormLayout,
    QSpinBox, QDoubleSpinBox, QComboBox, QFileDialog,
    QTableWidget, QTableWidgetItem,
)
from python_qt_binding.QtCore import Qt, QTimer
import xml.etree.ElementTree as ET
import os
import math
from ament_index_python.packages import get_package_share_directory

# Load joint configuration from the central schema file.
_scripts_dir = os.path.join(get_package_share_directory('tiangong2pro_urdf'), 'scripts')
if _scripts_dir not in sys.path:
    sys.path.insert(0, _scripts_dir)
from joint_schema import JOINT_SCHEMA, JOINT_MAP, GROUPS, HAND_JOINTS

import numpy as np
import json
from datetime import datetime

def euler_to_matrix(r, p, y):
    Rx = np.array([[1, 0, 0],
                   [0, np.cos(r), -np.sin(r)],
                   [0, np.sin(r), np.cos(r)]])
    Ry = np.array([[np.cos(p), 0, np.sin(p)],
                   [0, 1, 0],
                   [-np.sin(p), 0, np.cos(p)]])
    Rz = np.array([[np.cos(y), -np.sin(y), 0],
                   [np.sin(y), np.cos(y), 0],
                   [0, 0, 1]])
    return Rz @ Ry @ Rx

def quaternion_from_matrix(matrix):
    q = Quaternion()
    m = matrix
    trace = np.trace(m)
    if trace > 0:
        s = 0.5 / np.sqrt(trace + 1.0)
        q.w = 0.25 / s
        q.x = (m[2, 1] - m[1, 2]) * s
        q.y = (m[0, 2] - m[2, 0]) * s
        q.z = (m[1, 0] - m[0, 1]) * s
    else:
        if m[0, 0] > m[1, 1] and m[0, 0] > m[2, 2]:
            s = 2.0 * np.sqrt(1.0 + m[0, 0] - m[1, 1] - m[2, 2])
            q.w = (m[2, 1] - m[1, 2]) / s
            q.x = 0.25 * s
            q.y = (m[0, 1] + m[1, 0]) / s
            q.z = (m[0, 2] + m[2, 0]) / s
        elif m[1, 1] > m[2, 2]:
            s = 2.0 * np.sqrt(1.0 + m[1, 1] - m[0, 0] - m[2, 2])
            q.w = (m[0, 2] - m[2, 0]) / s
            q.x = (m[0, 1] + m[1, 0]) / s
            q.y = 0.25 * s
            q.z = (m[1, 2] + m[2, 1]) / s
        else:
            s = 2.0 * np.sqrt(1.0 + m[2, 2] - m[0, 0] - m[1, 1])
            q.w = (m[1, 0] - m[0, 1]) / s
            q.x = (m[0, 2] + m[2, 0]) / s
            q.y = (m[1, 2] + m[2, 1]) / s
            q.z = 0.25 * s
    return q

# Mapping from ID to Joint Name based on joint.md and joint_state_publisher.py
MOTOR_ID_TO_JOINT = {
    1: 'head_roll_joint', 2: 'head_pitch_joint', 3: 'head_yaw_joint',
    11: 'shoulder_pitch_l_joint', 12: 'shoulder_roll_l_joint', 13: 'shoulder_yaw_l_joint',
    14: 'elbow_pitch_l_joint', 15: 'elbow_yaw_l_joint', 16: 'wrist_pitch_l_joint', 17: 'wrist_roll_l_joint',
    21: 'shoulder_pitch_r_joint', 22: 'shoulder_roll_r_joint', 23: 'shoulder_yaw_r_joint',
    24: 'elbow_pitch_r_joint', 25: 'elbow_yaw_r_joint', 26: 'wrist_pitch_r_joint', 27: 'wrist_roll_r_joint',
    31: 'body_yaw_joint',
    51: 'hip_roll_l_joint', 52: 'hip_pitch_l_joint', 53: 'hip_yaw_l_joint',
    54: 'knee_pitch_l_joint', 55: 'ankle_pitch_l_joint', 56: 'ankle_roll_l_joint',
    61: 'hip_roll_r_joint', 62: 'hip_pitch_r_joint', 63: 'hip_yaw_r_joint',
    64: 'knee_pitch_r_joint', 65: 'ankle_pitch_r_joint', 66: 'ankle_roll_r_joint',
    # Left hand fingers (101-106)
    101: 'left_little_1_joint', 102: 'left_ring_1_joint', 103: 'left_middle_1_joint',
    104: 'left_index_1_joint', 105: 'left_thumb_1_joint', 106: 'left_thumb_2_joint',
    # Right hand fingers (111-116)
    111: 'right_little_1_joint', 112: 'right_ring_1_joint', 113: 'right_middle_1_joint',
    114: 'right_index_1_joint', 115: 'right_thumb_1_joint', 116: 'right_thumb_2_joint'
}

JOINT_TO_MOTOR_ID = {v: k for k, v in MOTOR_ID_TO_JOINT.items()}

# HAND_JOINTS, FINGER_COUPLING, HAND_JOINT_DISPLAY, and GROUPS are now
# imported from joint_schema (see top of file).

class ActionPlayer:
    """Action Player - Load and play action files"""
    
    # Joint mapping: from joint name to motor ID
    MOTOR_ID_MAP = {
        # Head
        'head_roll_joint': 1, 'head_pitch_joint': 2, 'head_yaw_joint': 3,
        # Left arm  (11-17, matches MOTOR_ID_TO_JOINT)
        'shoulder_pitch_l_joint': 11, 'shoulder_roll_l_joint': 12, 'shoulder_yaw_l_joint': 13,
        'elbow_pitch_l_joint': 14, 'elbow_yaw_l_joint': 15, 'wrist_pitch_l_joint': 16, 'wrist_roll_l_joint': 17,
        # Right arm (21-27, matches MOTOR_ID_TO_JOINT)
        'shoulder_pitch_r_joint': 21, 'shoulder_roll_r_joint': 22, 'shoulder_yaw_r_joint': 23,
        'elbow_pitch_r_joint': 24, 'elbow_yaw_r_joint': 25, 'wrist_pitch_r_joint': 26, 'wrist_roll_r_joint': 27,
    }
    
    # Hand joint mapping
    HAND_JOINTS_MAP = {
        'left': {
            'left_little_1_joint': 1, 'left_ring_1_joint': 2, 'left_middle_1_joint': 3,
            'left_index_1_joint': 4, 'left_thumb_2_joint': 5, 'left_thumb_1_joint': 6,
        },
        'right': {
            'right_little_1_joint': 1, 'right_ring_1_joint': 2, 'right_middle_1_joint': 3,
            'right_index_1_joint': 4, 'right_thumb_2_joint': 5, 'right_thumb_1_joint': 6,
        }
    }
    
    # Hand joint limits (from HAND_JOINTS in interactive_gui.py)
    HAND_LIMITS = {
        'left_little_1_joint': 1.333, 'left_ring_1_joint': 1.333, 'left_middle_1_joint': 1.333,
        'left_index_1_joint': 1.333, 'left_thumb_2_joint': 0.48, 'left_thumb_1_joint': 1.246165,
        'right_little_1_joint': 1.333, 'right_ring_1_joint': 1.333, 'right_middle_1_joint': 1.333,
        'right_index_1_joint': 1.333, 'right_thumb_2_joint': 0.48, 'right_thumb_1_joint': 1.246165,
    }
    
    def __init__(self, node: Node):
        self.node = node
        # Keyframe sequence mode (new, correct approach)
        self.keyframes = []          # list of {joints, move_time, dwell_time}
        self.current_frame = 0
        self.is_playing = False
        self.is_paused  = False      # kept for UI compatibility
        self.loop = False
        self._qt_timer = None        # single-shot QTimer between keyframes
        self._paused_idx = 0         # keyframe index to resume from
        # Legacy dense-frame attributes (kept for load_action backward compat)
        self.frames = []
        self.frequency = 10
        # TF-mode: publish joint positions so robot_state_publisher/RViz sees motion
        self.js_pub = node.create_publisher(JointState, '/joint_states', 10)
        self._last_joints: dict = {}   # last frame published; used by Stop to freeze TF

    # ------------------------------------------------------------------
    # pause / resume  (timer-based: stop the single-shot timer, remember idx)
    # ------------------------------------------------------------------
    def pause(self):
        if self.is_playing and not self.is_paused:
            self.is_paused = True
            self._paused_idx = self.current_frame
            self._stop_timer()
            self.node.get_logger().info(
                f"Action paused at keyframe {self._paused_idx + 1}/{len(self.keyframes)}")

    def resume(self):
        if self.is_playing and self.is_paused:
            self.is_paused = False
            self.node.get_logger().info(
                f"Action resumed from keyframe {self._paused_idx + 1}/{len(self.keyframes)}")
            self._dispatch(self._paused_idx)

    def load_action(self, filepath: str) -> bool:
        """Load action JSON.  Supports both keyframe_sequence and legacy dense format."""
        try:
            with open(filepath, 'r', encoding='utf-8') as f:
                data = json.load(f)
        except Exception as e:
            self.node.get_logger().error(f"Failed to load action: {e}")
            return False

        if data.get('type') == 'keyframe_sequence':
            self.keyframes = data['keyframes']
            self.frames = []          # not used in this mode
            self.node.get_logger().info(
                f"Loaded keyframe sequence: {len(self.keyframes)} keyframes")
        elif 'frames' in data:
            # Legacy dense format – convert to keyframes automatically.
            # Each dense frame becomes a keyframe with a fixed interval.
            freq = data.get('frequency', 10)
            interval = 1.0 / freq
            self.keyframes = [
                {'joints': f, 'move_time': interval, 'dwell_time': 0.0}
                for f in data['frames']
            ]
            self.frames = data['frames']
            self.frequency = freq
            self.node.get_logger().info(
                f"Loaded dense action ({len(self.frames)} frames @ {freq}Hz) "
                f"→ converted to {len(self.keyframes)} keyframes")
        else:
            self.node.get_logger().error("Unknown action format")
            return False

        self.current_frame = 0
        return True

    def play(self, loop: bool = False) -> bool:
        """Start keyframe-sequence playback."""
        if not self.keyframes:
            return False
        self.is_playing = True
        self.loop = loop
        self.current_frame = 0
        self._stop_timer()
        # Problem-A fix: if robot is online and we have real joint states,
        # sync ghost to real and hold the current pose before dispatching.
        if self.node.is_robot_online and self.node.real_joint_states:
            self._soft_start_then_dispatch(0)
        else:
            self._dispatch(0)
        return True

    def _soft_start_then_dispatch(self, idx: int) -> None:
        """Hold current real pose for SOFTSTART_HOLD_MS, then dispatch keyframe idx.

        1. Syncs ghost joint_positions → real_joint_states so start_joints in
           _dispatch reflects the actual robot position (eliminates position
           mismatch that causes the first-frame lurch).
        2. Publishes the current real pose at SOFTSTART_HOLD_SPD every TF_PUB_MS
           for SOFTSTART_HOLD_MS ms so the controller "aligns" before moving.
        """
        # Sync ghost to real so speed computation in _dispatch is accurate
        for j, v in self.node.real_joint_states.items():
            if j in self.node.joint_positions:
                self.node.joint_positions[j] = v

        # Build hold frame from real joint states (only commandable body joints)
        hold_frame = {j: float(self.node.real_joint_states.get(j, 0.0))
                      for j in self.MOTOR_ID_MAP
                      if j in self.node.real_joint_states}

        hold_end = time.time() + self.SOFTSTART_HOLD_MS / 1000.0
        self.node.get_logger().info(
            f"Soft-start: holding {len(hold_frame)} joints for "
            f"{self.SOFTSTART_HOLD_MS} ms at spd={self.SOFTSTART_HOLD_SPD} rad/s")

        def _hold_tick():
            if not self.is_playing:
                self._stop_timer()
                return
            if hold_frame:
                self._publish_frame_with_spd(hold_frame, spd=self.SOFTSTART_HOLD_SPD)
            if time.time() >= hold_end:
                self._stop_timer()
                self._dispatch(idx)

        self._qt_timer = QTimer()
        self._qt_timer.timeout.connect(_hold_tick)
        self._qt_timer.start(self.TF_PUB_MS)

    def stop(self):
        """Stop playback.  current_frame is intentionally NOT reset here so
        that the UI can show the final progress (100%) after natural finish,
        or the position where the user manually stopped.  It is reset in
        play() when a new playback session begins."""
        self.is_playing = False
        self.is_paused  = False
        self._stop_timer()
        self.node.get_logger().info("Action playback stopped")

    def publish_joint_states(self, joint_dict: dict) -> None:
        """Publish joint positions to /joint_states (drives RViz TF robot).

        Works both when the real robot is online and in pure-TF (offline) mode.
        joint_dict: {joint_name: position_rad}
        """
        js = JointState()
        js.header.stamp = self.node.get_clock().now().to_msg()
        js.name = list(joint_dict.keys())
        js.position = [float(joint_dict[n]) for n in js.name]
        self._last_joints = dict(joint_dict)
        self.js_pub.publish(js)

    def _stop_timer(self):
        if self._qt_timer is not None:
            self._qt_timer.stop()
            self._qt_timer = None

    # Maximum speed sent to motors during action playback.
    # Set as high as the hardware allows – motors will cap at their physical max.
    # Raising this value is the fix for "barely moves / never reaches target".
    ACTION_SPD = 12.0

    # TF / ghost publish rate (Hz).  Controls how often joint_states is
    # published and how finely the ghost robot is interpolated in RViz.
    # 10 Hz gives smooth animation without flooding the bus.
    TF_PUB_HZ = 10
    TF_PUB_MS = int(1000 / TF_PUB_HZ)   # 100 ms

    # ── Soft-start / ease-in constants (real-robot mode only) ─────────────
    # Problem-A fix: hold current real pose for SOFTSTART_HOLD_MS before
    # dispatching the first keyframe, so the controller "aligns" before moving.
    SOFTSTART_HOLD_MS  = 500   # ms to hold current pose (5 ticks @ 10 Hz)
    SOFTSTART_HOLD_SPD = 0.2   # rad/s during the hold phase (very slow)
    # After the hold, ramp speed from EASE_IN_START_SPD → target over EASE_IN_DURATION.
    EASE_IN_DURATION   = 0.5   # seconds for speed ramp-up on frame 0
    EASE_IN_START_SPD  = 0.1   # rad/s at the start of the ease-in
    # Problem-B fix: speed is derived from move_time; clamp to safe range.
    ACTION_SPD_MIN     = 0.05  # minimum commanded speed (rad/s)

    def _dispatch(self, idx: int):
        """Start playing keyframe[idx].

        Real-robot path (Problem-B fix):
            Speed is computed from move_time and the maximum joint delta so
            the motor takes exactly move_time seconds to reach the target.
            Frame 0 additionally ramps speed from EASE_IN_START_SPD → target
            over EASE_IN_DURATION seconds (ease-in, Problem-A fix).
        Ghost/TF path  : joint_states is published every TF_PUB_MS ms with
                         linear interpolation over move_time so the green robot
                         moves smoothly instead of snapping to the target.
        """
        if not self.is_playing:
            return
        if idx >= len(self.keyframes):
            if self.loop:
                self._dispatch(0)
            else:
                self.is_playing   = False
                self.is_paused    = False
                self.current_frame = len(self.keyframes)
                self.node.get_logger().info("Action playback finished")
            return

        self.current_frame = idx
        kf         = self.keyframes[idx]
        joints     = kf.get('joints', kf)
        move_time  = max(0.5, float(kf.get('move_time',  1.0)))
        dwell_time = max(0.2, float(kf.get('dwell_time', 0.5)))

        # Snapshot current ghost position as the interpolation start point.
        # After _soft_start_then_dispatch, joint_positions is already synced
        # to real_joint_states, so this gives the actual robot position.
        start_joints = {j: self.node.joint_positions.get(j, 0.0) for j in joints}

        # ── Problem-B fix: derive speed from move_time × max joint delta ──
        deltas = [abs(float(joints.get(j, 0.0)) - start_joints.get(j, 0.0))
                  for j in joints]
        max_delta = max(deltas) if deltas else 0.0
        if max_delta > 0.01:
            spd = max_delta / move_time
        else:
            spd = self.ACTION_SPD_MIN
        spd = max(self.ACTION_SPD_MIN, min(self.ACTION_SPD, spd))

        dispatch_time  = time.time()
        now            = dispatch_time
        move_deadline  = now + move_time
        dwell_deadline = move_deadline + dwell_time

        # Initial publish — ease-in start speed for frame 0 to avoid first-frame jerk
        initial_spd = self.EASE_IN_START_SPD if idx == 0 else spd
        self._publish_frame_with_spd(joints, initial_spd)
        self.node.get_logger().info(
            f"KF {idx + 1}/{len(self.keyframes)}: "
            f"spd={spd:.3f} rad/s  move={move_time:.2f}s  dwell={dwell_time:.2f}s  "
            f"max_delta={max_delta:.3f} rad"
        )

        def _tick():
            if not self.is_playing or self.is_paused:
                return

            # ── Real robot heartbeat: ease-in ramp for frame 0, constant after ──
            if idx == 0:
                t_since = time.time() - dispatch_time
                if t_since < self.EASE_IN_DURATION:
                    alpha_ease = t_since / self.EASE_IN_DURATION
                    eff_spd = (self.EASE_IN_START_SPD
                               + alpha_ease * (spd - self.EASE_IN_START_SPD))
                else:
                    eff_spd = spd
            else:
                eff_spd = spd
            self._publish_frame_with_spd(joints, eff_spd)

            t = time.time()
            if t >= dwell_deadline:
                # Both move and dwell finished → advance to next keyframe.
                self._stop_timer()
                self._dispatch(idx + 1)
                return

            # ── Ghost / TF: smooth interpolation ──
            if t < move_deadline:
                # Move phase: linear interpolation 0 → 1 over move_time
                alpha = (t - now) / move_time          # 0.0 … 1.0
                interp = {
                    j: start_joints.get(j, 0.0)
                       + alpha * (float(v) - start_joints.get(j, 0.0))
                    for j, v in joints.items()
                }
            else:
                # Dwell phase: hold the final target pose
                interp = {j: float(v) for j, v in joints.items()}

            # Update ghost and publish joint_states at TF_PUB_HZ
            for _j, _v in interp.items():
                self.node.joint_positions[_j] = _v
            self.publish_joint_states(interp)

        self._stop_timer()
        self._qt_timer = QTimer()
        self._qt_timer.timeout.connect(_tick)
        self._qt_timer.start(self.TF_PUB_MS)

    def _publish_frame_with_spd(self, frame: dict, spd: float):
        """Publish joint positions with an explicit speed."""
        self._publish_full_frame(frame, spd=spd)

    def _publish_frame(self, frame):
        """Publish one frame to robot"""
        # Check frame format
        if 'left_arm' in frame or 'right_arm' in frame:
            # robot_action format
            self._publish_robot_action_frame(frame)
        elif isinstance(frame, dict) and any(k in frame for k in self.MOTOR_ID_MAP):
            # Full joint format or keyframe format
            self._publish_full_frame(frame)
    
    DEFAULT_MAX_SPEED = 2.0  # Increased from 0.5 for smoother action playback
    
    def _publish_robot_action_frame(self, frame):
        """Publish robot_action format frame"""
        # Build arm command
        arm_msg = CmdSetMotorPosition()
        arm_msg.header.stamp = self.node.get_clock().now().to_msg()
        
        # Left arm
        left_arm = frame.get('left_arm', [0.0] * 7)
        left_ids = [21, 22, 23, 24, 25, 26, 27]
        for i, pos in enumerate(left_arm):
            if i < len(left_ids):
                cmd = SetMotorPosition()
                cmd.name = left_ids[i]
                cmd.pos = float(pos)
                cmd.spd = self.DEFAULT_MAX_SPEED
                cmd.cur = 8.0
                arm_msg.cmds.append(cmd)
        
        # Right arm
        right_arm = frame.get('right_arm', [0.0] * 7)
        right_ids = [11, 12, 13, 14, 15, 16, 17]
        for i, pos in enumerate(right_arm):
            if i < len(right_ids):
                cmd = SetMotorPosition()
                cmd.name = right_ids[i]
                cmd.pos = float(pos)
                cmd.spd = self.DEFAULT_MAX_SPEED
                cmd.cur = 8.0
                arm_msg.cmds.append(cmd)
        
        # Publish arm command
        if hasattr(self.node, 'arm_cmd_pub'):
            self.node.arm_cmd_pub.publish(arm_msg)
    
    def _publish_full_frame(self, frame, spd: float = None):
        """Publish full joint format frame.  spd overrides DEFAULT_MAX_SPEED."""
        effective_spd = spd if spd is not None else self.DEFAULT_MAX_SPEED
        # Head command
        head_msg = CmdSetMotorPosition()
        head_msg.header.stamp = self.node.get_clock().now().to_msg()

        # Arm command
        arm_msg = CmdSetMotorPosition()
        arm_msg.header.stamp = self.node.get_clock().now().to_msg()

        # Waist command
        waist_msg = CmdSetMotorPosition()
        waist_msg.header.stamp = self.node.get_clock().now().to_msg()

        # Process each joint
        for joint_name, pos in frame.items():
            if joint_name in self.MOTOR_ID_MAP:
                motor_id = self.MOTOR_ID_MAP[joint_name]
                cmd = SetMotorPosition()
                cmd.name = motor_id
                cmd.pos = float(pos)
                cmd.spd = effective_spd
                cmd.cur = 8.0

                # Group by ID
                if motor_id <= 3:  # Head
                    head_msg.cmds.append(cmd)
                elif motor_id == 31:  # Waist
                    waist_msg.cmds.append(cmd)
                else:  # Arm
                    arm_msg.cmds.append(cmd)

        # Publish commands
        if head_msg.cmds and hasattr(self.node, 'head_cmd_pub'):
            self.node.head_cmd_pub.publish(head_msg)
        if waist_msg.cmds and hasattr(self.node, 'waist_cmd_pub'):
            self.node.waist_cmd_pub.publish(waist_msg)
        if arm_msg.cmds and hasattr(self.node, 'arm_cmd_pub'):
            self.node.arm_cmd_pub.publish(arm_msg)

        # Publish hands
        self._publish_hands(frame)

    def _publish_hands(self, frame):
        """Publish hand commands.

        Guard: if the frame contains no finger joint data for a given side,
        skip publishing for that side entirely.  Sending positions=[0.0]*6
        commands all fingers to fully closed even when the keyframe has no
        finger settings, which causes unintended hand gestures.
        """
        for side, joint_map in self.HAND_JOINTS_MAP.items():
            # Skip this side if the frame has no finger data for it
            if not any(j in frame for j in joint_map):
                continue

            msg = JointState()
            msg.header.stamp = self.node.get_clock().now().to_msg()
            msg.name = ['1', '2', '3', '4', '5', '6']
            positions = [0.0] * 6

            for joint_name, motor_id in joint_map.items():
                if joint_name in frame:
                    rad = float(frame[joint_name])
                    limit = self.HAND_LIMITS.get(joint_name, 1.0)
                    percentage = 1.0 - (rad / limit)
                    positions[motor_id - 1] = max(0.0, min(1.0, percentage))

            msg.position = positions

            if side == 'left' and hasattr(self.node, 'left_hand_pub'):
                self.node.left_hand_pub.publish(msg)
            elif side == 'right' and hasattr(self.node, 'right_hand_pub'):
                self.node.right_hand_pub.publish(msg)

    def get_progress(self) -> float:
        """Get playback progress (0.0 - 1.0)"""
        total = len(self.keyframes) or len(self.frames)
        if not total:
            return 0.0
        return self.current_frame / total

    def set_frame(self, frame_idx: int):
        """Jump to specified frame"""
        if 0 <= frame_idx < len(self.keyframes):
            self.current_frame = frame_idx


class InteractiveGuiNode(Node):
    def __init__(self):
        super().__init__('interactive_gui_node')
        self.is_robot_online = False
        self.ghost_pub = self.create_publisher(JointState, 'ghost/joint_states', 10)
        self.marker_pub = self.create_publisher(MarkerArray, 'ghost/markers', 10)
        
        self.head_cmd_pub = self.create_publisher(CmdSetMotorPosition, '/head/cmd_pos', 10)
        self.waist_cmd_pub = self.create_publisher(CmdSetMotorPosition, '/waist/cmd_pos', 10)
        self.arm_cmd_pub = self.create_publisher(CmdSetMotorPosition, '/arm/cmd_pos', 10)
        self.leg_cmd_pub = self.create_publisher(CmdSetMotorPosition, '/leg/cmd_pos', 10)
        self.left_hand_pub = self.create_publisher(JointState, '/inspire_hand/ctrl/left_hand', 10)
        self.right_hand_pub = self.create_publisher(JointState, '/inspire_hand/ctrl/right_hand', 10)
        
        # Action player
        self.action_player = ActionPlayer(self)
        
        # Real robot status subscription
        self.status_sub = self.create_subscription(Bool, '/robot_online_status', self.status_callback, 10)
        self.real_joint_sub = self.create_subscription(JointState, 'joint_states', self.real_joint_callback, 10)
        self.real_joint_states = {}
        
        self.joint_limits = {}
        self.joint_positions = {}
        self.links = {} # Stores visual info: link_name -> list of (mesh_path, xyz, rpy)
        self.joints = {} # Stores kinematics info: joint_name -> (parent, child, origin_xyz, origin_rpy, axis)
        self.child_to_parent = {} # child_link -> (parent_link, joint_name)
        
        self._load_urdf()
        
        # Publish initial state for ghost robot
        self.publish_ghost()

        self.timer = self.create_timer(0.01, self.publish_ghost)
        self.conn_timer = self.create_timer(1.0, self.log_connection_status)
        
    def log_connection_status(self):
        if not self.is_robot_online:
             self.get_logger().warn("Unable to connect to robot (Waiting for robot status)...")

    def status_callback(self, msg):
        self.is_robot_online = msg.data

    def real_joint_callback(self, msg):
        for name, pos in zip(msg.name, msg.position):
            self.real_joint_states[name] = pos

    def sync_to_real(self):
        for name, pos in self.real_joint_states.items():
            if name in self.joint_positions:
                self.joint_positions[name] = pos
        self.publish_ghost()

    def _load_urdf(self):
        try:
            pkg_path = get_package_share_directory('tiangong2pro_urdf')
            urdf_path = os.path.join(pkg_path, 'urdf', 'tiangong2.0_pro_with_hands.urdf')
            
            tree = ET.parse(urdf_path)
            root = tree.getroot()
            for joint in root.findall('joint'):
                name = joint.get('name')
                joint_type = joint.get('type')
                
                # Check if this is a fixed joint
                if joint_type == 'fixed':
                    # Fixed joints are kinematics-relevant too for building the tree
                    pass
                    
                parent = joint.find('parent').get('link')
                child = joint.find('child').get('link')
                
                origin = joint.find('origin')
                xyz = [0.0, 0.0, 0.0]
                rpy = [0.0, 0.0, 0.0]
                if origin is not None:
                    xyz = [float(x) for x in origin.get('xyz', '0 0 0').split()]
                    rpy = [float(x) for x in origin.get('rpy', '0 0 0').split()]
                
                axis = [1.0, 0.0, 0.0]
                # For non-fixed joints, read axis
                if joint_type in ['revolute', 'continuous', 'prismatic']:
                    axis_elem = joint.find('axis')
                    if axis_elem is not None:
                        axis = [float(x) for x in axis_elem.get('xyz', '1 0 0').split()]

                self.joints[name] = {
                    'parent': parent,
                    'child': child,
                    'origin_xyz': xyz,
                    'origin_rpy': rpy,
                    'axis': axis,
                    'type': joint_type
                }
                self.child_to_parent[child] = (parent, name)

                limit = joint.find('limit')
                if limit is not None:
                    lower = float(limit.get('lower', -3.14))
                    upper = float(limit.get('upper', 3.14))
                    self.joint_limits[name] = (lower, upper)
                    if name not in self.joint_positions:
                        self.joint_positions[name] = 0.0
            
            # Explicitly initialize hand joints if not in URDF joint list (some might be fixed or not have limits)
            # The original code initialized them based on limits, so we ensure they are in joint_positions
            for side_joints in HAND_JOINTS.values():
                for _, (jname, _) in side_joints.items():
                    if jname not in self.joint_positions:
                         self.joint_positions[jname] = 0.0

            for link in root.findall('link'):
                link_name = link.get('name')
                self.links[link_name] = []
                for visual in link.findall('visual'):
                    geometry = visual.find('geometry')
                    if geometry is not None:
                        mesh = geometry.find('mesh')
                        if mesh is not None:
                            mesh_path = mesh.get('filename')
                            origin = visual.find('origin')
                            xyz = [0.0, 0.0, 0.0]
                            rpy = [0.0, 0.0, 0.0]
                            if origin is not None:
                                xyz = [float(x) for x in origin.get('xyz', '0 0 0').split()]
                                rpy = [float(x) for x in origin.get('rpy', '0 0 0').split()]
                            self.links[link_name].append((mesh_path, xyz, rpy))
                            
        except Exception as e:
            self.get_logger().error(f"Failed to load URDF: {e}")

    def get_transform(self, joint_info, theta):
        xyz = joint_info['origin_xyz']
        rpy = joint_info['origin_rpy']
        axis = np.array(joint_info['axis'])
        j_type = joint_info['type']

        # T_origin
        R_origin = euler_to_matrix(rpy[0], rpy[1], rpy[2])
        T_origin = np.eye(4)
        T_origin[:3, :3] = R_origin
        T_origin[:3, 3] = xyz

        # T_joint
        T_joint = np.eye(4)
        if j_type in ['revolute', 'continuous']:
            # Rodrigues' rotation formula for axis-angle
            c = np.cos(theta)
            s = np.sin(theta)
            K = np.array([[0, -axis[2], axis[1]],
                          [axis[2], 0, -axis[0]],
                          [-axis[1], axis[0], 0]])
            R_joint = np.eye(3) + s * K + (1 - c) * (K @ K)
            T_joint[:3, :3] = R_joint
        elif j_type == 'fixed':
            # Fixed joints add no additional transformation beyond T_origin
            pass
        # Prismatic not handled but usually not used in this robot

        return T_origin @ T_joint


    def calculate_fk(self):
        # Calculate global transform for all links
        # Assuming 'pelvis' is root and it is at Identity (or we can attach it to a frame)
        # We start from 'pelvis' and propagate
        
        link_transforms = {} # link_name -> 4x4 matrix
        
        # Initialize root (pelvis)
        link_transforms['pelvis'] = np.eye(4)

        # We need to traverse the tree. Since we have child_to_parent, we can do it recursively
        # or iteratively.
        # Simple iterative multiple-pass or topological sort.
        # Since we have the whole map, we can just recurse with memoization
        
        def get_link_transform_recursive(link_name):
            if link_name in link_transforms:
                return link_transforms[link_name]
            
            if link_name not in self.child_to_parent:
                # Disconnected link or root that is not pelvis?
                # If it's not in child_to_parent and not pelvis, we assume identity
                return np.eye(4)

            parent, joint_name = self.child_to_parent[link_name]
            parent_T = get_link_transform_recursive(parent)
            
            joint_info = self.joints[joint_name]
            # Get joint position value, default to 0.0
            theta = self.joint_positions.get(joint_name, 0.0)
            
            # Special handling for hand mimic/coupling if needed, 
            # but current joint_positions are updated by sliders including coupling
            
            T_rel = self.get_transform(joint_info, theta)
            T_global = parent_T @ T_rel
            
            link_transforms[link_name] = T_global
            return T_global

        # Compute for all links that have visuals
        for link_name in self.links.keys():
            get_link_transform_recursive(link_name)
            
        return link_transforms

    def publish_ghost(self):
        # 1. Publish joint states to /ghost/joint_states for sim_joint_bridge
        js = JointState()
        js.header.stamp = self.get_clock().now().to_msg()
        js.name = list(self.joint_positions.keys())
        js.position = [float(self.joint_positions[n]) for n in js.name]
        self.ghost_pub.publish(js)

        # 2. Calculate FK
        link_transforms = self.calculate_fk()

        # 3. Publish Markers for Ghost
        ma_msg = MarkerArray()
        zero_stamp = rclpy.time.Time().to_msg()
        
        idx = 0
        for link_name, visuals in self.links.items():
            if link_name not in link_transforms:
                continue
                
            T_link_global = link_transforms[link_name]
            
            for (mesh_path, xyz, rpy) in visuals:
                marker = Marker()
                # Frame ID is basically the root of our FK chain
                marker.header.frame_id = "pelvis" 
                marker.header.stamp = zero_stamp
                marker.ns = "ghost"
                marker.id = idx
                idx += 1
                marker.type = Marker.MESH_RESOURCE
                marker.action = Marker.ADD
                marker.mesh_resource = mesh_path
                
                # Visual offset transform
                R_visual = euler_to_matrix(rpy[0], rpy[1], rpy[2])
                T_visual = np.eye(4)
                T_visual[:3, :3] = R_visual
                T_visual[:3, 3] = xyz
                
                # Final Pose: T_global * T_visual
                T_final = T_link_global @ T_visual
                
                marker.pose.position.x = T_final[0, 3]
                marker.pose.position.y = T_final[1, 3]
                marker.pose.position.z = T_final[2, 3]
                
                q = quaternion_from_matrix(T_final[:3, :3])
                marker.pose.orientation = q
                
                marker.scale.x = 1.0
                marker.scale.y = 1.0
                marker.scale.z = 1.0
                
                marker.color.r = 0.0
                marker.color.g = 1.0
                marker.color.b = 1.0
                marker.color.a = 0.6 
                
                ma_msg.markers.append(marker)
        self.marker_pub.publish(ma_msg)

    def execute_commands(self):
        # Send commands to real robot
        self.get_logger().info("Executing commands...")
        
        def create_motor_msg(joint_names):
            msg = CmdSetMotorPosition()
            msg.header.stamp = self.get_clock().now().to_msg()
            for name in joint_names:
                if name in JOINT_TO_MOTOR_ID:
                    cmd = SetMotorPosition()
                    cmd.name = JOINT_TO_MOTOR_ID[name]
                    cmd.pos = float(self.joint_positions[name])
                    cmd.spd = 0.2 # Default
                    cmd.cur = 8.0 # Default
                    msg.cmds.append(cmd)
            return msg

        # Head
        self.head_cmd_pub.publish(create_motor_msg(GROUPS["Head"]))
        # Waist
        self.waist_cmd_pub.publish(create_motor_msg(GROUPS["Waist"]))
        # Arm
        self.arm_cmd_pub.publish(create_motor_msg(GROUPS["Left Arm"] + GROUPS["Right Arm"]))
        # Leg
        self.leg_cmd_pub.publish(create_motor_msg(GROUPS["Left Leg"] + GROUPS["Right Leg"]))
        
        # Hands
        def publish_hand(side):
            msg = JointState()
            msg.header.stamp = self.get_clock().now().to_msg()
            # The hand node expects 6 positions representing percentage (0-1)
            # rad = (1.0 - percentage) * limit  => percentage = 1.0 - (rad / limit)
            msg.name = ['1', '2', '3', '4', '5', '6']
            positions = [0.0] * 6
            for motor_id, (joint_name, limit) in HAND_JOINTS[side].items():
                rad = self.joint_positions.get(joint_name, 0.0)
                percentage = 1.0 - (rad / limit)
                positions[motor_id-1] = percentage
            msg.position = positions
            if side == 'left':
                self.left_hand_pub.publish(msg)
            else:
                self.right_hand_pub.publish(msg)

        publish_hand('left')
        publish_hand('right')

    def send_zero_to_real(self) -> None:
        """Send pos=0.0 to every body joint and percentage=1.0 to both hands.

        percentage=1.0  →  rad = (1 - 1.0) * limit = 0.0
        spd=0.2 keeps motion slow and safe.
        """
        def create_motor_msg(joint_names):
            msg = CmdSetMotorPosition()
            msg.header.stamp = self.get_clock().now().to_msg()
            for name in joint_names:
                if name in JOINT_TO_MOTOR_ID:
                    cmd = SetMotorPosition()
                    cmd.name = JOINT_TO_MOTOR_ID[name]
                    cmd.pos = 0.0
                    cmd.spd = 0.2
                    cmd.cur = 8.0
                    msg.cmds.append(cmd)
            return msg

        self.head_cmd_pub.publish(create_motor_msg(GROUPS["Head"]))
        self.waist_cmd_pub.publish(create_motor_msg(GROUPS["Waist"]))
        self.arm_cmd_pub.publish(
            create_motor_msg(GROUPS["Left Arm"] + GROUPS["Right Arm"]))
        self.leg_cmd_pub.publish(
            create_motor_msg(GROUPS["Left Leg"] + GROUPS["Right Leg"]))

        # Hands: percentage=1.0 → fingers fully open (rad ≈ 0)
        hand_msg = JointState()
        hand_msg.header.stamp = self.get_clock().now().to_msg()
        hand_msg.name = ['1', '2', '3', '4', '5', '6']
        hand_msg.position = [1.0, 1.0, 1.0, 1.0, 1.0, 1.0]
        self.left_hand_pub.publish(hand_msg)
        self.right_hand_pub.publish(hand_msg)
        self.get_logger().info("send_zero_to_real: all joints zeroed")

class RobotControlGui(QMainWindow):
    # Define joints to save: Head (3) + Arms (14) + Hands (12) = 29 DOF
    SAVE_JOINTS = [
        # Head (3)
        'head_roll_joint', 'head_pitch_joint', 'head_yaw_joint',
        # Left arm (7)
        'shoulder_pitch_l_joint', 'shoulder_roll_l_joint', 'shoulder_yaw_l_joint',
        'elbow_pitch_l_joint', 'elbow_yaw_l_joint', 'wrist_pitch_l_joint', 'wrist_roll_l_joint',
        # Right arm (7)
        'shoulder_pitch_r_joint', 'shoulder_roll_r_joint', 'shoulder_yaw_r_joint',
        'elbow_pitch_r_joint', 'elbow_yaw_r_joint', 'wrist_pitch_r_joint', 'wrist_roll_r_joint',
        # Left hand (6)
        'left_little_1_joint', 'left_ring_1_joint', 'left_middle_1_joint',
        'left_index_1_joint', 'left_thumb_1_joint', 'left_thumb_2_joint',
        # Right hand (6)
        'right_little_1_joint', 'right_ring_1_joint', 'right_middle_1_joint',
        'right_index_1_joint', 'right_thumb_1_joint', 'right_thumb_2_joint',
    ]
    
    def __init__(self, node: InteractiveGuiNode):
        super().__init__()
        self.node = node
        self.setWindowTitle("Robot Joint Control")
        self.resize(1100, 800)

        main_widget = QWidget()
        self.setCentralWidget(main_widget)

        # Left panel gets its own QWidget so main layout can be QHBoxLayout
        left_widget = QWidget()
        layout = QVBoxLayout(left_widget)

        scroll = QScrollArea()
        scroll.setWidgetResizable(True)
        scroll_content = QWidget()
        self.scroll_layout = QVBoxLayout(scroll_content)

        self.sliders = {}
        self.joint_labels = {}
        self.value_spinboxes = {}

        # edit_buffer: UI-layer snapshot of joint positions.
        # Initialised from URDF-loaded defaults; kept in sync with every
        # slider drag and every sync-from-real operation.
        self.edit_buffer: dict = {
            jentry["name"]: self.node.joint_positions.get(jentry["name"], 0.0)
            for group_entry in JOINT_SCHEMA
            for jentry in group_entry["joints"]
            if jentry["name"] in self.node.joint_limits
        }

        for group_entry in JOINT_SCHEMA:
            if not group_entry.get("ui_visible", True):
                continue  # hidden group: keep logic, skip UI widget
            group_name = group_entry["group"]
            group_box = QGroupBox(group_name)
            group_layout = QVBoxLayout()
            for jentry in group_entry["joints"]:
                jname = jentry["name"]
                if jname in self.node.joint_limits:
                    lower, upper = self.node.joint_limits[jname]

                    h_layout = QHBoxLayout()
                    display_name = jentry["display"]
                    is_hand = jentry["is_hand"]

                    # Fixed label for joint name
                    name_label = QLabel(display_name)
                    name_label.setMinimumWidth(120)

                    # QDoubleSpinBox for numeric value input (editable)
                    from python_qt_binding.QtWidgets import QDoubleSpinBox
                    value_spin = QDoubleSpinBox()
                    value_spin.setMinimum(lower)
                    value_spin.setMaximum(upper)
                    value_spin.setSingleStep(0.01)
                    value_spin.setDecimals(3)
                    value_spin.setValue(0.0)
                    value_spin.setMaximumWidth(90)

                    slider = QSlider(Qt.Horizontal)
                    slider.setMinimum(-1000)
                    slider.setMaximum(1000)
                    slider.setValue(jentry["default_slider"])

                    def make_callback(name, spin_widget, is_h, coupling):
                        def callback(val):
                            # Stop action playback if user manually adjusts slider
                            if self.node.action_player.is_playing:
                                self.node.action_player.stop()
                                self._rp_set_playing_state(False)

                            low, upp = self.node.joint_limits[name]
                            if is_h:
                                # Slider 1000 -> Open (low), Slider -1000 -> Closed (upp)
                                ratio = (1000 - val) / 2000.0
                                pos = low + ratio * (upp - low)
                            else:
                                ratio = (val + 1000) / 2000.0
                                pos = low + ratio * (upp - low)

                            self.node.joint_positions[name] = pos
                            self.edit_buffer[name] = pos

                            # Update spinbox without triggering its signal
                            spin_widget.blockSignals(True)
                            spin_widget.setValue(pos)
                            spin_widget.blockSignals(False)

                            # Handle coupling for hand joints
                            if is_h:
                                for follower in coupling:
                                    if follower in self.node.joint_limits:
                                        f_low, f_upp = self.node.joint_limits[follower]
                                        f_pos = f_low + ratio * (f_upp - f_low)
                                        self.node.joint_positions[follower] = f_pos

                            self.node.publish_ghost()
                            self._writeback_joints_to_current_frame()
                        return callback

                    def make_spin_callback(name, is_h, coupling, slider_widget):
                        def spin_callback(val):
                            # Stop action playback if user manually adjusts spinbox
                            if self.node.action_player.is_playing:
                                self.node.action_player.stop()
                                self._rp_set_playing_state(False)

                            low, upp = self.node.joint_limits[name]
                            pos = float(val)
                            pos = max(low, min(upp, pos))

                            self.node.joint_positions[name] = pos
                            self.edit_buffer[name] = pos

                            if is_h:
                                # Calculate ratio for hand joints
                                ratio = (pos - low) / (upp - low)
                                slider_val = int(1000 - ratio * 2000)
                                # Handle coupling
                                for follower in coupling:
                                    if follower in self.node.joint_limits:
                                        f_low, f_upp = self.node.joint_limits[follower]
                                        f_pos = f_low + ratio * (f_upp - f_low)
                                        self.node.joint_positions[follower] = f_pos
                            else:
                                # Calculate ratio for body joints
                                ratio = (pos - low) / (upp - low) if abs(upp - low) > 1e-6 else 0
                                slider_val = int(ratio * 2000 - 1000)

                            # Update slider without triggering its signal
                            slider_widget.blockSignals(True)
                            slider_widget.setValue(slider_val)
                            slider_widget.blockSignals(False)

                            self.node.publish_ghost()
                            self._writeback_joints_to_current_frame()
                        return spin_callback

                    slider.valueChanged.connect(
                        make_callback(jname, value_spin, jentry["is_hand"], jentry["coupling"])
                    )
                    value_spin.valueChanged.connect(
                        make_spin_callback(jname, jentry["is_hand"], jentry["coupling"], slider)
                    )

                    h_layout.addWidget(name_label)
                    h_layout.addWidget(value_spin)
                    h_layout.addWidget(slider)
                    group_layout.addLayout(h_layout)
                    self.sliders[jname] = slider
                    self.joint_labels[jname] = name_label
                    self.value_spinboxes[jname] = value_spin

            group_box.setLayout(group_layout)
            self.scroll_layout.addWidget(group_box)
            
        scroll.setWidget(scroll_content)
        layout.addWidget(scroll)
        
        btn_layout = QHBoxLayout()
        self.btn_sync = QPushButton("Sync to Real")
        self.btn_sync.clicked.connect(self.sync_sliders_to_real)
        btn_layout.addWidget(self.btn_sync)

        self.btn_execute = QPushButton("Execute")
        self.btn_execute.clicked.connect(self.confirm_and_execute)
        btn_layout.addWidget(self.btn_execute)
        
        # New: Save current pose button (hidden — moved to right panel)
        self.btn_save_pose = QPushButton("Copy Current Pos")
        self.btn_save_pose.setToolTip("Save current pose as a keyframe JSON file")
        self.btn_save_pose.clicked.connect(self.save_current_pose_to_file)
        btn_layout.addWidget(self.btn_save_pose)
        self.btn_save_pose.setVisible(False)

        # New: Generate action from keyframes button (hidden — moved to right panel)
        self.btn_generate_action = QPushButton("Gen Action")
        self.btn_generate_action.setToolTip("Generate smooth action from multiple keyframe files")
        self.btn_generate_action.clicked.connect(self.generate_action_dialog)
        btn_layout.addWidget(self.btn_generate_action)
        self.btn_generate_action.setVisible(False)
        
        layout.addLayout(btn_layout)
        
        # ========== Action Playback Control ==========
        playback_group = QGroupBox("Action Playback")
        playback_layout = QVBoxLayout()
        
        # File selection and status
        file_layout = QHBoxLayout()
        self.lbl_action_file = QLabel("No action loaded")
        self.lbl_action_file.setStyleSheet("color: gray;")
        file_layout.addWidget(self.lbl_action_file)
        
        self.btn_load_action = QPushButton("Load Action")
        self.btn_load_action.setToolTip("Load an action JSON file")
        self.btn_load_action.clicked.connect(self.load_action_file)
        file_layout.addWidget(self.btn_load_action)
        playback_layout.addLayout(file_layout)
        
        # Playback control buttons
        control_layout = QHBoxLayout()
        
        self.btn_play = QPushButton("Play")
        self.btn_play.setToolTip("Start playback")
        self.btn_play.clicked.connect(self.play_action)
        self.btn_play.setEnabled(False)
        control_layout.addWidget(self.btn_play)
        
        self.btn_pause = QPushButton("Pause")
        self.btn_pause.setToolTip("Pause/Resume playback")
        self.btn_pause.clicked.connect(self.pause_resume_action)
        self.btn_pause.setEnabled(False)
        control_layout.addWidget(self.btn_pause)
        
        self.btn_stop = QPushButton("Stop")
        self.btn_stop.setToolTip("Stop playback")
        self.btn_stop.clicked.connect(self.stop_action)
        self.btn_stop.setEnabled(False)
        control_layout.addWidget(self.btn_stop)
        
        self.chk_loop = QComboBox()
        self.chk_loop.addItems(["Once", "Loop"])
        self.chk_loop.setToolTip("Playback mode")
        control_layout.addWidget(self.chk_loop)
        
        playback_layout.addLayout(control_layout)
        
        playback_group.setLayout(playback_layout)
        layout.addWidget(playback_group)
        playback_group.setVisible(False)   # hide entire playback group (Load/Play/Pause/Stop/Once-Loop)

        # Progress row lives outside the hidden group so it stays visible
        progress_layout = QHBoxLayout()
        progress_layout.addWidget(QLabel("Progress:"))
        self.lbl_progress = QLabel("0 / 0 (0%)")
        progress_layout.addWidget(self.lbl_progress)
        layout.addLayout(progress_layout)

        # ========== Project State (persistent across save/load) ==========
        self.project: dict = {
            "name": "untitled",
            "frames": [],
        }
        # Paths for project persistence
        self.project_path: str = ""         # Full path to <project_dir>/<name>.json
        self.project_dir: str = ""          # Directory containing the project JSON
        self.project_root_dir: str = ""     # Parent directory (for file dialogs)
        # Action path (separate from project)
        self.rp_action_path: str = ""       # Path to last generated/loaded action.json

        # Guards to prevent recursive signal loops
        self._updating_table   = False   # True while refresh_table_from_project runs
        self._updating_sliders = False   # True while set_current_pose_dict runs (row→sliders)
        self.current_row       = -1      # currently selected valid frame row

        # Assemble left/right split
        self.right_panel = self.build_right_panel()
        self.refresh_table_from_project()

        # Connect table signals (after table exists and is populated)
        self.table.itemSelectionChanged.connect(self.on_frame_row_selected)
        self.table.itemChanged.connect(self.on_table_item_changed)

        # Connect right-panel button signals
        self.rp_btn_load.clicked.connect(self.on_rp_load_project)
        self.rp_btn_save.clicked.connect(self.on_rp_save_project)
        self.rp_btn_save_as.clicked.connect(self.on_rp_save_as)
        self.rp_btn_save_pose.clicked.connect(self.on_rp_save_pose)
        self.rp_btn_add.clicked.connect(self.on_rp_add)
        self.rp_btn_delete.clicked.connect(self.on_rp_delete)
        self.rp_btn_up.clicked.connect(self.on_rp_move_up)
        self.rp_btn_down.clicked.connect(self.on_rp_move_down)
        # Action buttons
        self.rp_btn_generate.clicked.connect(self.on_rp_generate_action)
        self.rp_btn_convert.clicked.connect(self.on_rp_convert_action)
        self.rp_btn_load_action.clicked.connect(self.on_rp_load_action)
        self.rp_btn_play.clicked.connect(self.on_rp_play)
        self.rp_btn_stop.clicked.connect(self.on_rp_stop)
        self.rp_btn_zero.clicked.connect(self.on_rp_zero)

        main_layout = QHBoxLayout(main_widget)
        main_layout.addWidget(left_widget, stretch=3)
        main_layout.addWidget(self.right_panel, stretch=2)

        # Playback status update timer
        self.playback_timer = QTimer()
        self.playback_timer.timeout.connect(self.update_playback_status)
        self.playback_timer.start(100)  # 100ms update status

        # Timer to spin ROS 2
        self.ros_timer = QTimer()
        self.ros_timer.timeout.connect(self.spin_ros)
        self.ros_timer.start(10)

        # After the event loop is running, optionally zero the real robot.
        # 1 s delay gives the ROS status subscription time to deliver the first
        # /robot_online_status message before we check is_robot_online.
        QTimer.singleShot(1000, self.prompt_startup_zero)

    # ------------------------------------------------------------------
    # Startup helpers
    # ------------------------------------------------------------------

    def prompt_startup_zero(self) -> None:
        """Ask on startup whether to send zero to the real robot / sim."""
        if not self.node.is_robot_online:
            return   # robot not connected; skip silently
        reply = QMessageBox.question(
            self,
            "Startup Zero",
            "Move REAL robot/sim to ZERO pose (0.0 rad for all joints)?",
            QMessageBox.Yes | QMessageBox.No,
            QMessageBox.No,
        )
        if reply == QMessageBox.Yes:
            self.node.send_zero_to_real()

    def build_right_panel(self) -> QWidget:
        """Build the project editor panel (right side). No logic connected yet."""
        panel = QWidget()
        panel_layout = QVBoxLayout(panel)

        # ── A. Top operation bar ──────────────────────────────────────
        top_bar = QHBoxLayout()

        self.rp_btn_load = QPushButton("Load Project")
        self.rp_btn_save = QPushButton("Save Project")
        self.rp_btn_save_as = QPushButton("Save As")
        self.rp_lbl_name = QLabel(f"Control Panel【{self.project['name']}】")

        top_bar.addWidget(self.rp_btn_load)
        top_bar.addWidget(self.rp_btn_save)
        top_bar.addWidget(self.rp_btn_save_as)
        top_bar.addStretch()          # push label to the right
        top_bar.addWidget(self.rp_lbl_name)

        panel_layout.addLayout(top_bar)

        # ── B. Keyframe table ─────────────────────────────────────────
        self.table = QTableWidget()
        self.table.setColumnCount(3)
        self.table.setRowCount(0)
        self.table.setHorizontalHeaderLabels(["Name", "Move Time (s)", "Dwell Time (s)"])
        self.table.setSelectionBehavior(self.table.SelectRows)
        self.table.setSelectionMode(self.table.SingleSelection)

        panel_layout.addWidget(self.table, stretch=1)

        # ── C. Row operation buttons ──────────────────────────────────
        bottom_bar = QHBoxLayout()

        self.rp_btn_save_pose = QPushButton("Save Pose")
        self.rp_btn_add      = QPushButton("Add")
        self.rp_btn_delete   = QPushButton("Delete")
        self.rp_btn_up       = QPushButton("Move Up")
        self.rp_btn_down     = QPushButton("Move Down")

        for btn in (self.rp_btn_save_pose, self.rp_btn_add,
                    self.rp_btn_delete, self.rp_btn_up, self.rp_btn_down):
            bottom_bar.addWidget(btn)

        panel_layout.addLayout(bottom_bar)

        # ── D. Action buttons ─────────────────────────────────────────
        action_bar = QHBoxLayout()

        self.rp_btn_generate    = QPushButton("Generate")
        self.rp_btn_convert     = QPushButton("Convert")
        self.rp_btn_load_action = QPushButton("Load Action")
        self.rp_btn_play        = QPushButton("Play")
        self.rp_btn_stop        = QPushButton("Stop")
        self.rp_btn_zero        = QPushButton("Zero")

        # Play/Stop initial state: disabled until an action exists
        self.rp_btn_play.setEnabled(False)
        self.rp_btn_stop.setEnabled(False)
        self.rp_btn_convert.setEnabled(False)  # Disabled until action is generated

        for btn in (self.rp_btn_generate, self.rp_btn_convert, self.rp_btn_load_action,
                    self.rp_btn_play, self.rp_btn_stop, self.rp_btn_zero):
            action_bar.addWidget(btn)

        panel_layout.addLayout(action_bar)

        # Action status label (one line, below the action bar)
        self.rp_lbl_action = QLabel("No action loaded")
        self.rp_lbl_action.setStyleSheet("color: gray; font-size: 10px;")
        panel_layout.addWidget(self.rp_lbl_action)

        return panel

    def refresh_table_from_project(self) -> None:
        """Repopulate self.table from self.project['frames']. No signals emitted."""
        self._updating_table = True
        try:
            self.table.setShowGrid(True)
            frames = self.project.get("frames", [])
            if len(frames) == 0:
                # Show one placeholder row so the grid and editing are visible
                self.table.setRowCount(1)
                self.table.setItem(0, 0, QTableWidgetItem("pose1"))
                self.table.setItem(0, 1, QTableWidgetItem("1.0"))
                self.table.setItem(0, 2, QTableWidgetItem("0.2"))
                return
            self.table.setRowCount(len(frames))
            for row, frame in enumerate(frames):
                self.table.setItem(row, 0, QTableWidgetItem(str(frame.get("name", ""))))
                self.table.setItem(row, 1, QTableWidgetItem(str(frame.get("move_time", 1.0))))
                self.table.setItem(row, 2, QTableWidgetItem(str(frame.get("dwell_time", 0.2))))
        finally:
            self._updating_table = False

    # ------------------------------------------------------------------
    # Table ↔ slider bidirectional linkage
    # ------------------------------------------------------------------

    def _writeback_joints_to_current_frame(self) -> None:
        """Write current edit_buffer back to the selected frame (if valid).

        Skipped when _updating_sliders is True (we are loading a pose FROM
        the project into the sliders), which prevents a read→write loop.
        """
        if self._updating_sliders:
            return
        if self.current_row < 0 or self.current_row >= len(self.project["frames"]):
            return
        self.project["frames"][self.current_row]["joints"] = self.get_current_pose_dict()

    def on_frame_row_selected(self) -> None:
        """Table row selection → drive left-side sliders to that frame's joints."""
        row = self.table.currentRow()
        if row < 0 or row >= len(self.project["frames"]):
            # Placeholder row or no valid frame: leave sliders untouched
            return
        self._updating_sliders = True
        try:
            frame = self.project["frames"][row]
            joints = frame.get("joints", {})
            # 兼容旧格式：如果没有 joints 但有 joint_positions
            if not joints and "joint_positions" in frame:
                joints = frame["joint_positions"]
            # 即使 joints 为空，也尝试应用（使用默认值）
            self.set_current_pose_dict(joints)
        finally:
            self._updating_sliders = False
        self.current_row = row

    def on_table_item_changed(self, item: QTableWidgetItem) -> None:
        """Cell edit → parse value and write back to project.frames[row]."""
        if self._updating_table:
            return
        row = item.row()
        col = item.column()
        if row >= len(self.project["frames"]):
            return  # Placeholder row; nothing to update
        frame = self.project["frames"][row]
        text = item.text().strip()
        if col == 0:
            frame["name"] = text
        elif col == 1:
            try:
                frame["move_time"] = float(text)
            except ValueError:
                self._updating_table = True
                item.setText(str(frame["move_time"]))
                self._updating_table = False
        elif col == 2:
            try:
                frame["dwell_time"] = float(text)
            except ValueError:
                self._updating_table = True
                item.setText(str(frame["dwell_time"]))
                self._updating_table = False

    # ------------------------------------------------------------------
    # Right-panel button handlers
    # ------------------------------------------------------------------

    def on_rp_load_project(self) -> None:
        """Load Project: select folder (e.g., create/1/) → load {folder_name}.json → refresh table + UI."""
        # Default to create/ directory for loading projects
        actions_dir = os.path.join(get_package_share_directory('tienkung_action'), 'config', 'actions')
        create_dir = os.path.join(actions_dir, "create")
        os.makedirs(create_dir, exist_ok=True)

        # Use directory selection instead of file selection
        selected_dir = QFileDialog.getExistingDirectory(
            self, "Select Project Folder (create/xxx)", self.project_root_dir or create_dir
        )
        if not selected_dir:
            return

        # Get folder name (e.g., "1" from "create/1/")
        folder_name = os.path.basename(selected_dir)
        # Project file is {folder_name}.json (e.g., "1.json")
        project_filename = f"{folder_name}.json"
        path = os.path.join(selected_dir, project_filename)

        if not os.path.exists(path):
            QMessageBox.warning(self, "Project Not Found",
                f"Project file not found:\n{path}\n\n"
                f"Expected: {project_filename} in folder {folder_name}/")
            return

        try:
            with open(path, "r", encoding="utf-8") as f:
                data = json.load(f)
        except Exception as e:
            QMessageBox.critical(self, "Load Failed", f"Cannot read file:\n{str(e)}")
            return

        # Normalize schema (add missing fields with defaults)
        project = self._normalize_project_schema(data, fallback_name=folder_name)

        # Block table signals to prevent premature on_frame_row_selected
        self.table.blockSignals(True)
        try:
            self.project = project
            self.current_row = -1
        finally:
            self.table.blockSignals(False)

        # Update persistent paths
        self.project_path     = path
        self.project_dir      = selected_dir
        self.project_root_dir = os.path.dirname(selected_dir)

        # Refresh UI
        name = self.project.get("name", "untitled")
        self.rp_lbl_name.setText(f"Project [{name}]")
        self.refresh_table_from_project()

    def on_rp_save_project(self) -> None:
        """Save Project: first time = Save As; subsequent = direct overwrite."""
        # 确保所有 frames 都有完整的 joints 数据
        self._ensure_all_frames_have_joints()
        
        if not self.project_path:
            # First save: ask for name + root directory
            self._save_project_as()
        else:
            # Already saved before: direct overwrite
            try:
                with open(self.project_path, "w", encoding="utf-8") as f:
                    json.dump(self.project, f, ensure_ascii=False, indent=2)
                QMessageBox.information(self, "Saved", f"Project saved:\n{self.project_path}")
            except Exception as e:
                QMessageBox.critical(self, "Save Failed", str(e))

    def on_rp_save_as(self) -> None:
        """Save As: save project to a new file with a new name.
        After saving as, subsequent saves will go to the new file.
        """
        # Ensure all frames have complete joints data
        self._ensure_all_frames_have_joints()

        # Ask for new project name
        current_name = self.project.get("name", "untitled")
        project_name, ok = QInputDialog.getText(
            self, "Save Project As", "Enter new project name:", text=current_name
        )
        if not ok or not project_name.strip():
            return
        project_name = project_name.strip()

        # Use tienkung_action/config/actions/create directory
        actions_dir = os.path.join(get_package_share_directory('tienkung_action'), 'config', 'actions')
        create_dir = os.path.join(actions_dir, "create")
        os.makedirs(create_dir, exist_ok=True)

        # Create new project directory
        new_project_dir = os.path.join(create_dir, project_name)
        if os.path.exists(new_project_dir):
            reply = QMessageBox.question(
                self, "Directory Exists",
                f"Project '{project_name}' already exists.\nOverwrite {project_name}.json?",
                QMessageBox.Yes | QMessageBox.No, QMessageBox.No,
            )
            if reply != QMessageBox.Yes:
                return

        # Save to new location
        new_file_path = os.path.join(new_project_dir, f"{project_name}.json")
        try:
            os.makedirs(new_project_dir, exist_ok=True)
            # Update project name
            self.project["name"] = project_name
            with open(new_file_path, "w", encoding="utf-8") as f:
                json.dump(self.project, f, ensure_ascii=False, indent=2)
        except Exception as e:
            QMessageBox.critical(self, "Save Failed", str(e))
            return

        # Update paths to new location
        self.project_path = new_file_path
        self.project_dir = new_project_dir
        self.project_root_dir = create_dir

        # Update UI
        self.rp_lbl_name.setText(f"Project [{project_name}]")
        QMessageBox.information(self, "Saved As",
            f"Project saved as:\n{project_name}\n\nSubsequent saves will go to:\n{new_file_path}")

    def _save_project_as(self) -> None:
        """Save As: ask for project name + root directory, create folder, write JSON."""
        # 1. Ask for project name
        current_name = self.project.get("name", "untitled")
        project_name, ok = QInputDialog.getText(
            self, "Project Name", "Enter project name:", text=current_name
        )
        if not ok or not project_name.strip():
            return
        project_name = project_name.strip()

        # 2. Use tienkung_action/config/actions/create directory for GUI projects
        actions_dir = os.path.join(get_package_share_directory('tienkung_action'), 'config', 'actions')
        create_dir = os.path.join(actions_dir, "create")
        os.makedirs(create_dir, exist_ok=True)

        # 3. Create project directory under create/
        project_dir = os.path.join(create_dir, project_name)
        if os.path.exists(project_dir):
            reply = QMessageBox.question(
                self, "Directory Exists",
                f"'{project_dir}' already exists.\nOverwrite?",
                QMessageBox.Yes | QMessageBox.No, QMessageBox.No,
            )
            if reply != QMessageBox.Yes:
                return

        file_path = os.path.join(project_dir, f"{project_name}.json")
        try:
            os.makedirs(project_dir, exist_ok=True)
            self.project["name"] = project_name
            with open(file_path, "w", encoding="utf-8") as f:
                json.dump(self.project, f, ensure_ascii=False, indent=2)
        except Exception as e:
            QMessageBox.critical(self, "Save Failed", str(e))
            return

        # Persist paths
        self.project_root_dir = create_dir
        self.project_dir      = project_dir
        self.project_path     = file_path

        # Update UI
        self.rp_lbl_name.setText(f"Project [{project_name}]")
        QMessageBox.information(self, "Saved", f"Project saved to:\n{project_dir}")

    def on_rp_save_pose(self) -> None:
        """Save Pose: capture current slider state → update selected row (or append new row)."""
        joints = self.get_current_pose_dict()
        frames = self.project["frames"]

        if 0 <= self.current_row < len(frames):
            # Overwrite selected row's joints
            frames[self.current_row]["joints"] = joints
        else:
            # Append new row
            n = len(frames) + 1
            frames.append({
                "name": f"pose{n}",
                "move_time": 1.0,
                "dwell_time": 0.2,
                "joints": joints,
            })
            self.current_row = len(frames) - 1

        self.refresh_table_from_project()
        self.table.selectRow(self.current_row)

    def on_rp_add(self) -> None:
        """新增：在当前选中pose的下面添加新pose，继承当前选中pose的关节数值。"""
        frames = self.project["frames"]

        # 获取插入位置和基础数据
        if 0 <= self.current_row < len(frames):
            # 在当前选中行之后插入
            insert_index = self.current_row + 1
            # 使用当前选中pose的关节数值作为初始值
            base_joints = frames[self.current_row].get("joints", {})
            if not base_joints:
                base_joints = {name: 0.0 for name in self.edit_buffer}
            new_joints = dict(base_joints)  # 复制一份
        elif frames:
            # 没有选中行，使用最后一个frame
            insert_index = len(frames)
            base_joints = frames[-1].get("joints", {})
            if not base_joints:
                base_joints = {name: 0.0 for name in self.edit_buffer}
            new_joints = dict(base_joints)
        else:
            # 空项目
            insert_index = 0
            new_joints = {name: 0.0 for name in self.edit_buffer}

        new_pose = {
            "name": f"pose{insert_index + 1}",
            "move_time": 1.0,
            "dwell_time": 0.2,
            "joints": new_joints,
        }

        # 在指定位置插入
        frames.insert(insert_index, new_pose)

        # 更新所有pose名称以保持顺序
        for i, frame in enumerate(frames):
            frame["name"] = f"pose{i + 1}"

        self.refresh_table_from_project()
        self.current_row = insert_index
        self.table.selectRow(insert_index)

        # 同步更新 GUI 滑条和机器人显示
        self.set_current_pose_dict(new_joints)

    def on_rp_delete(self) -> None:
        """删除：移除当前选中行对应的 pose。"""
        frames = self.project["frames"]
        if self.current_row < 0 or self.current_row >= len(frames):
            return
        frames.pop(self.current_row)
        self.current_row = min(self.current_row, len(frames) - 1)
        self.refresh_table_from_project()
        if self.current_row >= 0:
            self.table.selectRow(self.current_row)

    def on_rp_move_up(self) -> None:
        """上移：选中行与上一行互换。"""
        frames = self.project["frames"]
        row = self.current_row
        if row <= 0 or row >= len(frames):
            return
        frames[row - 1], frames[row] = frames[row], frames[row - 1]
        self.current_row = row - 1
        self.refresh_table_from_project()
        self.table.selectRow(self.current_row)

    def on_rp_move_down(self) -> None:
        """下移：选中行与下一行互换。"""
        frames = self.project["frames"]
        row = self.current_row
        if row < 0 or row >= len(frames) - 1:
            return
        frames[row], frames[row + 1] = frames[row + 1], frames[row]
        self.current_row = row + 1
        self.refresh_table_from_project()
        self.table.selectRow(self.current_row)

    # ------------------------------------------------------------------
    # R7: Action buttons — Preview / Generate Action / Load Action / Play / Stop
    # ------------------------------------------------------------------

    def _rp_set_playing_state(self, playing: bool) -> None:
        """Enable/disable right-panel action buttons based on play state."""
        self.rp_btn_generate.setEnabled(not playing)
        self.rp_btn_load_action.setEnabled(not playing)
        self.rp_btn_play.setEnabled(not playing)
        self.rp_btn_stop.setEnabled(playing)

        if not playing:
            # Reset progress label when playback stops
            self.lbl_progress.setText("0 / 0 (0%)")

    def on_rp_zero(self) -> None:
        """Zero: smoothly move robot from current pose to all-zero over 1.5 s.

        Also resets GUI sliders to zero.
        In TF-only mode (robot offline) publishes zeros to /joint_states immediately.
        """
        # 创建全零关节字典
        all_zero = {j: 0.0 for j in self.SAVE_JOINTS}

        if not self.node.is_robot_online:
            # TF-only mode: snap RViz robot to zero, no motor commands
            self.node.action_player.publish_joint_states(all_zero)
        else:
            reply = QMessageBox.warning(
                self, "Safety Confirm",
                "Zero will move the robot to the 0.0 position.\n"
                "Confirm the environment is safe.",
                QMessageBox.Yes | QMessageBox.No, QMessageBox.No,
            )
            if reply != QMessageBox.Yes:
                return

            self.play_temporary_motion(
                start={j: self.node.joint_positions.get(j, 0.0) for j in self.SAVE_JOINTS},
                target=all_zero,
                duration=1.5,
            )

        # 同时重置 GUI 滑条和 edit_buffer 到零
        self.set_current_pose_dict(all_zero)

    def play_temporary_motion(self, start: dict, target: dict, duration: float) -> None:
        """Linear interpolation start → target, publishing to real robot + ghost.

        - Does NOT write to edit_buffer, project, or table.
        - Stops any previous temporary motion before starting a new one.
        """
        # Stop any currently running temporary motion
        if getattr(self, "_tmp_timer", None) is not None:
            self._tmp_timer.stop()
            self._tmp_timer = None

        self._tmp_start    = dict(start)
        self._tmp_target   = dict(target)
        self._tmp_duration = float(duration)
        self._tmp_elapsed  = 0.0
        self._tmp_dt       = 0.02   # seconds per tick (20 ms)

        self._tmp_timer = QTimer()
        self._tmp_timer.timeout.connect(self._on_tmp_motion_tick)
        self._tmp_timer.start(20)   # 20 ms

    def _on_tmp_motion_tick(self) -> None:
        """Timer callback: advance the temporary motion by one step."""
        self._tmp_elapsed += self._tmp_dt
        t = min(self._tmp_elapsed / self._tmp_duration, 1.0)

        # Linear interpolation; update node.joint_positions only
        frame = {}
        for j, tgt in self._tmp_target.items():
            val = self._tmp_start.get(j, 0.0) + (tgt - self._tmp_start.get(j, 0.0)) * t
            self.node.joint_positions[j] = val
            frame[j] = val

        # Publish to real robot (head/arms/hands — no legs, no edit_buffer)
        self.node.action_player._publish_full_frame(frame)
        self.node.action_player.publish_joint_states(frame)   # TF-mode: sync RViz
        self.node.publish_ghost()

        if t >= 1.0:
            self._tmp_timer.stop()
            self._tmp_timer = None

    def _convert_keyframe_sequence_to_actions_format(self, keyframes: list) -> dict:
        """Convert keyframe_sequence format to actions format with proper timing.

        This creates a dense 30Hz frame sequence from the sparse keyframes.
        Each keyframe's move_time determines how many transition frames are generated,
        and dwell_time determines how many hold frames are generated.

        Joints are separated into multiple actions by topic:
        - Head: /head/cmd_pos (IDs 1-3)
        - Arms: /arm/cmd_pos (IDs 11-17, 21-27)
        - Hands: /arm/cmd_pos (IDs 101-106, 111-116)
        """
        ACTION_HZ = 30.0  # Target frame rate for actions format

        # Joint name to ID mapping - complete list including head and hands
        JOINT_NAME_TO_ID = {
            # Head (1-3)
            'head_roll_joint': 1, 'head_pitch_joint': 2, 'head_yaw_joint': 3,
            # Left arm (11-17)
            'shoulder_pitch_l_joint': 11, 'shoulder_roll_l_joint': 12, 'shoulder_yaw_l_joint': 13,
            'elbow_pitch_l_joint': 14, 'elbow_yaw_l_joint': 15, 'wrist_pitch_l_joint': 16, 'wrist_roll_l_joint': 17,
            # Right arm (21-27)
            'shoulder_pitch_r_joint': 21, 'shoulder_roll_r_joint': 22, 'shoulder_yaw_r_joint': 23,
            'elbow_pitch_r_joint': 24, 'elbow_yaw_r_joint': 25, 'wrist_pitch_r_joint': 26, 'wrist_roll_r_joint': 27,
            # Left hand (101-106)
            'left_little_1_joint': 101, 'left_ring_1_joint': 102, 'left_middle_1_joint': 103,
            'left_index_1_joint': 104, 'left_thumb_1_joint': 105, 'left_thumb_2_joint': 106,
            # Right hand (111-116)
            'right_little_1_joint': 111, 'right_ring_1_joint': 112, 'right_middle_1_joint': 113,
            'right_index_1_joint': 114, 'right_thumb_1_joint': 115, 'right_thumb_2_joint': 116,
        }

        # Topic assignments for motor IDs
        HEAD_IDS = {1, 2, 3}
        ARM_IDS = {11, 12, 13, 14, 15, 16, 17, 21, 22, 23, 24, 25, 26, 27}
        HAND_IDS = {101, 102, 103, 104, 105, 106, 111, 112, 113, 114, 115, 116}

        # Group joints by topic
        def get_topic_for_id(joint_id):
            if joint_id in HEAD_IDS:
                return '/head/cmd_pos'
            elif joint_id in HAND_IDS:
                return '/arm/cmd_pos'  # Hands use same topic, filtered in publisher
            else:
                return '/arm/cmd_pos'

        # Collect all joint names in the keyframes
        all_joint_names = sorted(set().union(*[kf.get('joints', {}).keys() for kf in keyframes]))
        # Filter to only joints we have IDs for
        joint_names = [j for j in all_joint_names if j in JOINT_NAME_TO_ID]

        if not joint_names:
            return {'actions': []}

        joint_ids = [JOINT_NAME_TO_ID[j] for j in joint_names]

        # Group joints by topic
        topic_joints: dict[str, list[tuple[str, int]]] = {}
        for jname, jid in zip(joint_names, joint_ids):
            topic = get_topic_for_id(jid)
            if topic not in topic_joints:
                topic_joints[topic] = []
            topic_joints[topic].append((jname, jid))

        # Generate dense frames for all joints
        dense_frames = []

        for i, kf in enumerate(keyframes):
            joints = kf.get('joints', {})
            current_positions = [float(joints.get(j, 0.0)) for j in joint_names]

            if i < len(keyframes) - 1:
                # Use NEXT keyframe's move_time and dwell_time for transition
                next_joints = keyframes[i + 1].get('joints', {})
                next_positions = [float(next_joints.get(j, 0.0)) for j in joint_names]
                move_time = max(0.1, float(keyframes[i + 1].get('move_time', 1.0)))
                dwell_time = max(0.0, float(keyframes[i + 1].get('dwell_time', 0.2)))
            else:
                # Last keyframe: only dwell (no next keyframe to move to)
                next_positions = current_positions
                move_time = 0.0
                dwell_time = max(0.0, float(kf.get('dwell_time', 0.2)))

            # Number of frames for move phase
            move_frames = int(round(move_time * ACTION_HZ))
            if move_frames < 1 and move_time > 0:
                move_frames = 1

            # Number of frames for dwell phase
            dwell_frames = int(round(dwell_time * ACTION_HZ))

            # Generate move frames (interpolate from current to next)
            for f in range(move_frames):
                if f == move_frames - 1:
                    # Last frame of move phase: exactly at next position
                    frame_positions = next_positions
                else:
                    # Linear interpolation
                    alpha = f / (move_frames - 1) if move_frames > 1 else 0.0
                    frame_positions = [
                        current_positions[j] + alpha * (next_positions[j] - current_positions[j])
                        for j in range(len(joint_names))
                    ]
                dense_frames.append(frame_positions)

            # Generate dwell frames (hold at next position)
            for _ in range(dwell_frames):
                dense_frames.append(next_positions)

        # Build actions format output - one action per topic
        actions = []

        for topic, joints_for_topic in topic_joints.items():
            # Get indices for this topic's joints in the full joint_names list
            topic_indices = [joint_names.index(jname) for jname, _ in joints_for_topic]
            topic_joint_ids = [jid for _, jid in joints_for_topic]

            # Extract frames for this topic
            topic_frames = []
            for frame in dense_frames:
                topic_frame = [frame[idx] for idx in topic_indices]
                topic_frames.append(topic_frame)

            # Set different speed/cur for head vs arms
            if topic == '/head/cmd_pos':
                spd, cur = 2.0, 8.0
            else:
                spd, cur = 3.0, 12.0

            actions.append({
                'topic': topic,
                'message_type': 'bodyctrl_msgs/msg/CmdSetMotorPosition',
                'opts': {
                    'spd': spd,
                    'cur': cur,
                },
                'data': {
                    'join_id': topic_joint_ids,
                    'keys': topic_frames,
                },
            })

        # Generate hand topics (/inspire_hand/ctrl/left_hand and /right_hand)
        # Left hand joints: 101-106, Right hand joints: 111-116

        # Hand joint limits (from ActionPlayer.HAND_LIMITS)
        HAND_LIMITS = {
            'left_little_1_joint': 1.333, 'left_ring_1_joint': 1.333, 'left_middle_1_joint': 1.333,
            'left_index_1_joint': 1.333, 'left_thumb_2_joint': 0.48, 'left_thumb_1_joint': 1.246165,
            'right_little_1_joint': 1.333, 'right_ring_1_joint': 1.333, 'right_middle_1_joint': 1.333,
            'right_index_1_joint': 1.333, 'right_thumb_2_joint': 0.48, 'right_thumb_1_joint': 1.246165,
        }

        left_hand_joint_ids = [101, 102, 103, 104, 105, 106]
        right_hand_joint_ids = [111, 112, 113, 114, 115, 116]

        # Check if we have left hand data
        has_left_hand = any(jid in joint_ids for jid in left_hand_joint_ids)
        # Check if we have right hand data
        has_right_hand = any(jid in joint_ids for jid in right_hand_joint_ids)

        # Hand joint names for limits lookup
        left_hand_joint_names = [
            'left_little_1_joint', 'left_ring_1_joint', 'left_middle_1_joint',
            'left_index_1_joint', 'left_thumb_2_joint', 'left_thumb_1_joint',
        ]
        right_hand_joint_names = [
            'right_little_1_joint', 'right_ring_1_joint', 'right_middle_1_joint',
            'right_index_1_joint', 'right_thumb_2_joint', 'right_thumb_1_joint',
        ]

        # Generate left hand topic
        if has_left_hand:
            hand_keys = []
            for frame in dense_frames:
                percentages = []
                for i, joint_name in enumerate(left_hand_joint_names):
                    joint_id = left_hand_joint_ids[i]
                    if joint_id in joint_ids:
                        idx = joint_ids.index(joint_id)
                        rad = frame[idx]
                        limit = HAND_LIMITS.get(joint_name, 1.0)
                        # Convert radians to percentage: rad=0 -> percentage=1.0 (open), rad=limit -> percentage=0.0 (closed)
                        percentage = 1.0 - (rad / limit)
                        percentage = max(0.0, min(1.0, percentage))
                        percentages.append(round(percentage, 6))
                    else:
                        # Missing finger: fully open
                        percentages.append(1.0)
                hand_keys.append(percentages)

            actions.append({
                'topic': '/inspire_hand/ctrl/left_hand',
                'message_type': 'sensor_msgs/msg/JointState',
                'data': {
                    'join_id': [1, 2, 3, 4, 5, 6],
                    'keys': hand_keys,
                },
            })

        # Generate right hand topic
        if has_right_hand:
            hand_keys = []
            for frame in dense_frames:
                percentages = []
                for i, joint_name in enumerate(right_hand_joint_names):
                    joint_id = right_hand_joint_ids[i]
                    if joint_id in joint_ids:
                        idx = joint_ids.index(joint_id)
                        rad = frame[idx]
                        limit = HAND_LIMITS.get(joint_name, 1.0)
                        # Convert radians to percentage: rad=0 -> percentage=1.0 (open), rad=limit -> percentage=0.0 (closed)
                        percentage = 1.0 - (rad / limit)
                        percentage = max(0.0, min(1.0, percentage))
                        percentages.append(round(percentage, 6))
                    else:
                        # Missing finger: fully open
                        percentages.append(1.0)
                hand_keys.append(percentages)

            actions.append({
                'topic': '/inspire_hand/ctrl/right_hand',
                'message_type': 'sensor_msgs/msg/JointState',
                'data': {
                    'join_id': [1, 2, 3, 4, 5, 6],
                    'keys': hand_keys,
                },
            })

        return {'actions': actions}

    def on_rp_generate_action(self) -> None:
        """Generate Action: convert project keyframes → action JSON and load into player.

        Saves action.json in project directory (keyframe_sequence format).
        Use 'Convert' button to convert to editer/ format for run_editer.sh.
        """
        frames = self.project.get("frames", [])
        if not frames:
            QMessageBox.warning(self, "Generate Action",
                                "No keyframes found. Please add poses first.")
            return

        if not self.project_dir:
            QMessageBox.information(
                self, "Save Project First",
                "Project not saved yet.\nPlease save the project before generating an action."
            )
            self.on_rp_save_project()
            if not self.project_dir:
                return

        def get_joints(frame_data: dict) -> dict:
            joints = frame_data.get("joints", {})
            return {j: float(joints.get(j, 0.0)) for j in self.SAVE_JOINTS}

        keyframes = []
        for i, frame in enumerate(frames):
            move_time  = max(0.1, float(frame.get("move_time",  1.0)))
            dwell_time = max(0.0, float(frame.get("dwell_time", 0.5)))
            keyframes.append({
                "joints":     get_joints(frame),
                "move_time":  move_time,
                "dwell_time": dwell_time,
            })

        action_data = {
            "type":      "keyframe_sequence",
            "keyframes": keyframes,
        }

        # Save action.json in project directory
        action_path = os.path.join(self.project_dir, "action.json")
        try:
            with open(action_path, "w", encoding="utf-8") as f:
                json.dump(action_data, f, ensure_ascii=False, indent=2)
        except Exception as e:
            QMessageBox.critical(self, "Save Failed", f"Failed to save action.json: {e}")
            return

        self.node.action_player.load_action(action_path)
        self.rp_action_path = action_path

        total_sec = sum(kf["move_time"] + kf["dwell_time"] for kf in keyframes)

        self.rp_lbl_action.setText(
            f"Action: {action_path} | {len(keyframes)} keyframes ({total_sec:.1f}s)"
        )
        self.rp_lbl_action.setStyleSheet("color: green; font-size: 10px;")
        self.rp_btn_play.setEnabled(True)
        self.rp_btn_convert.setEnabled(True)  # Enable convert button

    def on_rp_convert_action(self) -> None:
        """Convert: convert action.json to editer/ format for run_editer.sh."""
        if not self.project_dir or not self.project.get("name"):
            QMessageBox.warning(self, "No Project", "Please save a project first.")
            return

        action_path = os.path.join(self.project_dir, "action.json")
        if not os.path.exists(action_path):
            QMessageBox.warning(self, "No Action", "Please generate an action first.")
            return

        # Read the action.json file
        try:
            with open(action_path, "r", encoding="utf-8") as f:
                action_data = json.load(f)
        except Exception as e:
            QMessageBox.critical(self, "Read Failed", f"Failed to read action.json:\n{e}")
            return

        # Check if it's in keyframe_sequence format
        if action_data.get("type") != "keyframe_sequence" or "keyframes" not in action_data:
            QMessageBox.warning(self, "Wrong Format", "action.json is not in keyframe_sequence format.")
            return

        keyframes = action_data["keyframes"]

        # Convert to actions format
        try:
            converted_data = self._convert_keyframe_sequence_to_actions_format(keyframes)
        except Exception as e:
            QMessageBox.critical(self, "Conversion Failed", f"Failed to convert:\n{e}")
            return

        # Save to tienkung_action/config/actions/editer/ directory
        actions_dir = os.path.join(get_package_share_directory('tienkung_action'), 'config', 'actions')
        editer_dir = os.path.join(actions_dir, "editer")
        os.makedirs(editer_dir, exist_ok=True)

        project_name = self.project.get("name", "untitled")
        editer_path = os.path.join(editer_dir, f"{project_name}.json")

        try:
            with open(editer_path, "w", encoding="utf-8") as f:
                json.dump(converted_data, f, ensure_ascii=False, indent=2)
        except Exception as e:
            QMessageBox.critical(self, "Save Failed", f"Failed to save to editer/:\n{e}")
            return

        # Calculate stats
        total_sec = sum(kf["move_time"] + kf["dwell_time"] for kf in keyframes)
        total_frames = len(converted_data['actions'][0]['data']['keys']) if converted_data['actions'] else 0

        QMessageBox.information(
            self,
            "Conversion Complete",
            f"Converted action.json → {project_name}.json\n\n"
            f"Keyframes: {len(keyframes)}\n"
            f"Total time: {total_sec:.1f}s\n"
            f"Dense frames: {total_frames}\n\n"
            f"Saved to:\n{editer_path}"
        )

        self.rp_lbl_action.setText(
            f"Action: {action_path} | Converted to {project_name}.json ({total_frames} frames)"
        )

    def on_rp_load_action(self) -> None:
        """Load Action: load action.json from current project or let user select a project folder."""
        action_path = None

        # If project is loaded, use its action.json directly
        if self.project_dir:
            action_path = os.path.join(self.project_dir, "action.json")
            if not os.path.exists(action_path):
                QMessageBox.warning(self, "Action Not Found",
                    f"Project loaded but action.json not found at:\n{action_path}\n\n"
                    f"Please generate action first using 'Generate' button.")
                return
        else:
            # No project loaded: let user select from create/ directory
            actions_dir = os.path.join(get_package_share_directory('tienkung_action'), 'config', 'actions')
            create_dir = os.path.join(actions_dir, "create")
            os.makedirs(create_dir, exist_ok=True)

            # Use directory selection to pick a project folder (e.g., create/1/)
            selected_dir = QFileDialog.getExistingDirectory(
                self, "Select Project Folder (create/xxx)", create_dir
            )
            if not selected_dir:
                return

            action_path = os.path.join(selected_dir, "action.json")
            if not os.path.exists(action_path):
                QMessageBox.warning(self, "Action Not Found",
                    f"action.json not found in selected folder:\n{action_path}")
                return

        # Load the action
        ok = self.node.action_player.load_action(action_path)
        if not ok:
            QMessageBox.critical(self, "加载失败",
                                 f"无法加载 Action 文件:\n{action_path}")
            return

        self.rp_action_path = action_path
        player = self.node.action_player
        n_kf = len(player.keyframes)
        project_name = os.path.basename(os.path.dirname(action_path)) if self.project_dir else os.path.basename(os.path.dirname(action_path))
        self.rp_lbl_action.setText(
            f"Action: {project_name}/action.json | {n_kf} keyframes"
        )
        self.rp_lbl_action.setStyleSheet("color: green; font-size: 10px;")
        self.rp_btn_play.setEnabled(True)

    def on_rp_play(self) -> None:
        """Play: start action playback.  Works in TF-only mode when robot is offline."""
        player = self.node.action_player
        if not player.keyframes:          # keyframes is the canonical source now
            QMessageBox.warning(self, "Play",
                                "没有 Action 数据。\n请先 Generate Action 或 Load Action。")
            return

        if self.node.is_robot_online:
            # Real-robot mode: require explicit safety confirmation
            reply = QMessageBox.warning(
                self, "安全确认",
                "即将驱动真实机器人运动！\n请确认周围环境安全。",
                QMessageBox.Yes | QMessageBox.No, QMessageBox.No,
            )
            if reply != QMessageBox.Yes:
                return

        if player.play(loop=False):
            self._rp_set_playing_state(True)

    def on_rp_stop(self) -> None:
        """Stop: halt action playback and restore button state."""
        player = self.node.action_player
        player.stop()
        self._rp_set_playing_state(False)
        # Freeze TF robot at the last published pose so RViz doesn't snap back
        if player._last_joints:
            player.publish_joint_states(player._last_joints)

    def spin_ros(self):
        if not rclpy.ok():
            self.ros_timer.stop()
            self.close()
            return

        if rclpy.ok():
            try:
                rclpy.spin_once(self.node, timeout_sec=0)

                # Update button states based on connection status
                current = self.node.is_robot_online
                if getattr(self, 'last_status', None) != current:
                    self.last_status = current
                    self.btn_sync.setEnabled(current)
                    self.btn_execute.setEnabled(current)

            except (KeyboardInterrupt, Exception):
                self.ros_timer.stop()
                QApplication.quit()

    def closeEvent(self, event):
        self.ros_timer.stop()
        event.accept()

    def sync_sliders_to_real(self):
        self.node.sync_to_real()
        for jname, slider in self.sliders.items():
            if jname in self.node.joint_positions:
                pos = self.node.joint_positions[jname]
                self.edit_buffer[jname] = pos          # keep edit_buffer in sync
                low, upp = self.node.joint_limits[jname]

                jentry = JOINT_MAP.get(jname, {})
                is_hand = jentry.get("is_hand", False)

                if abs(upp - low) > 1e-6:
                    if is_hand:
                        ratio = (pos - low) / (upp - low)
                        val = int(1000 - ratio * 2000)
                    else:
                        val = int((pos - low) / (upp - low) * 2000 - 1000)

                    slider.blockSignals(True)
                    slider.setValue(val)
                    slider.blockSignals(False)

                # Update spinbox
                if jname in self.value_spinboxes:
                    self.value_spinboxes[jname].blockSignals(True)
                    self.value_spinboxes[jname].setValue(pos)
                    self.value_spinboxes[jname].blockSignals(False)

        self._writeback_joints_to_current_frame()

    # ------------------------------------------------------------------
    # edit_buffer public API
    # ------------------------------------------------------------------

    def get_current_pose_dict(self) -> dict:
        """Return a snapshot of the current editor state (joint_name → rad)."""
        return dict(self.edit_buffer)

    def set_current_pose_dict(self, pose: dict) -> None:
        """Drive all sliders to the values in pose and update edit_buffer.

        Unknown joint names are silently ignored.
        Values are clamped to URDF limits before being applied.
        Existing publish_ghost behaviour is preserved (called once at the end).
        """
        for jname, val in pose.items():
            if jname not in self.sliders or jname not in self.node.joint_limits:
                continue
            low, upp = self.node.joint_limits[jname]
            if abs(upp - low) < 1e-6:
                continue

            jentry = JOINT_MAP.get(jname, {})
            is_hand = jentry.get("is_hand", False)
            display_name = jentry.get("display", jname)
            coupling = jentry.get("coupling", [])

            pos = max(low, min(upp, float(val)))

            # Update data layer
            self.edit_buffer[jname] = pos
            self.node.joint_positions[jname] = pos

            # Update coupled joints in node (for FK / ghost)
            if is_hand:
                ratio = (pos - low) / (upp - low)
                for follower in coupling:
                    if follower in self.node.joint_limits:
                        f_low, f_upp = self.node.joint_limits[follower]
                        self.node.joint_positions[follower] = f_low + ratio * (f_upp - f_low)

            # Update slider widget (blockSignals avoids re-entrant callback)
            if is_hand:
                ratio = (pos - low) / (upp - low)
                slider_val = int(1000 - ratio * 2000)
            else:
                slider_val = int((pos - low) / (upp - low) * 2000 - 1000)
            slider = self.sliders[jname]
            slider.blockSignals(True)
            slider.setValue(slider_val)
            slider.blockSignals(False)

            # Update spinbox
            if jname in self.value_spinboxes:
                self.value_spinboxes[jname].blockSignals(True)
                self.value_spinboxes[jname].setValue(pos)
                self.value_spinboxes[jname].blockSignals(False)

        self.node.publish_ghost()

    # ------------------------------------------------------------------
    # Project data model
    # ------------------------------------------------------------------

    def new_project(self, name: str) -> None:
        """Clear current project and create 3 default frames from current pose."""
        current_joints = self.get_current_pose_dict()
        self.project = {
            "name": name,
            "frames": [
                {
                    "name": f"pose{i}",
                    "move_time": 1.0,
                    "dwell_time": 0.2,
                    "joints": dict(current_joints),
                }
                for i in range(1, 4)
            ],
        }

    def get_project_dict(self) -> dict:
        """Return the full project dict (direct reference, not a copy)."""
        return self.project

    def load_project_dict(self, data: dict) -> None:
        """Replace the current project with data. No UI update."""
        self.project = data

    def save_project_to_json(self, folder_path: str) -> None:
        """Save project to <folder_path>/<project_name>.json."""
        os.makedirs(folder_path, exist_ok=True)
        file_path = os.path.join(folder_path, f"{self.project['name']}.json")
        with open(file_path, "w", encoding="utf-8") as f:
            json.dump(self.project, f, ensure_ascii=False, indent=2)

    def _ensure_all_frames_have_joints(self) -> None:
        """确保 project 中所有 frames 都有完整的 joints 数据。
        
        如果某个 frame 缺少 joints，使用当前 edit_buffer 的值作为 fallback。
        """
        for frame in self.project.get("frames", []):
            if "joints" not in frame or not frame["joints"]:
                # 使用当前 edit_buffer 的值
                frame["joints"] = self.get_current_pose_dict()
            else:
                # 确保所有 SAVE_JOINTS 中的关节都有值
                current_joints = frame["joints"]
                for joint_name in self.SAVE_JOINTS:
                    if joint_name not in current_joints:
                        # 使用当前 edit_buffer 的值，或 0.0
                        current_joints[joint_name] = self.edit_buffer.get(joint_name, 0.0)

    def _normalize_project_schema(self, data: dict, fallback_name: str = "untitled") -> dict:
        """Return a fully-normalized project dict regardless of input format.

        Guarantees the returned structure:
            { 'name': str,
              'frames': [ {'name':str, 'move_time':float,
                           'dwell_time':float, 'joints':dict}, ... ] }
        """
        # Keys that are project/frame metadata, not joint names
        _META = {"name", "move_time", "dwell_time", "joints",
                 "timestamp", "joint_count", "frequency", "count",
                 "frames", "joint_positions"}

        # ── name ─────────────────────────────────────────────────────────
        raw_name = data.get("name")
        name = raw_name if isinstance(raw_name, str) and raw_name.strip() else fallback_name

        # ── raw frame list ────────────────────────────────────────────────
        raw_frames = data.get("frames")

        if raw_frames is None:
            # No 'frames' key: try to derive a single frame from the data.
            if "joint_positions" in data:
                raw_frames = [{"joints": data["joint_positions"]}]
            else:
                # Heuristic: numeric keys not in _META → treat as joint_name→rad
                candidate = {k: v for k, v in data.items()
                             if k not in _META and isinstance(v, (int, float))}
                raw_frames = [{"joints": candidate}] if candidate else []

        # ── fallback joints ───────────────────────────────────────────────
        # 使用当前 edit_buffer 作为 fallback，而不是全 0
        fallback_joints = self.get_current_pose_dict() if hasattr(self, 'edit_buffer') else \
                         {jn: 0.0 for jn in (getattr(self, 'SAVE_JOINTS', []) or 
                          ['head_roll_joint', 'head_pitch_joint', 'head_yaw_joint'] + 
                          ['shoulder_pitch_l_joint', 'shoulder_roll_l_joint', 'shoulder_yaw_l_joint',
                           'elbow_pitch_l_joint', 'elbow_yaw_l_joint', 'wrist_pitch_l_joint', 'wrist_roll_l_joint'] +
                          ['shoulder_pitch_r_joint', 'shoulder_roll_r_joint', 'shoulder_yaw_r_joint',
                           'elbow_pitch_r_joint', 'elbow_yaw_r_joint', 'wrist_pitch_r_joint', 'wrist_roll_r_joint'] +
                          ['left_little_1_joint', 'left_ring_1_joint', 'left_middle_1_joint',
                           'left_index_1_joint', 'left_thumb_1_joint', 'left_thumb_2_joint'] +
                          ['right_little_1_joint', 'right_ring_1_joint', 'right_middle_1_joint',
                           'right_index_1_joint', 'right_thumb_1_joint', 'right_thumb_2_joint'])}

        # ── normalize each frame ──────────────────────────────────────────
        frames = []
        for i, frame in enumerate(raw_frames):
            if not isinstance(frame, dict):
                continue

            # Resolve joints dict
            joints = frame.get("joints")
            if not isinstance(joints, dict) or not joints:
                joints = frame.get("joint_positions")
            if not isinstance(joints, dict) or not joints:
                # Try treating non-meta numeric keys as joint positions
                candidate = {k: float(v) for k, v in frame.items()
                             if k not in _META and isinstance(v, (int, float))}
                joints = candidate if candidate else dict(fallback_joints)

            # 确保所有 SAVE_JOINTS 中的关节都有值（兼容性处理）
            complete_joints = dict(fallback_joints)
            complete_joints.update(joints)

            frames.append({
                "name":       str(frame.get("name", f"pose{i + 1}")),
                "move_time":  float(frame.get("move_time", 1.0)),
                "dwell_time": float(frame.get("dwell_time", 0.2)),
                "joints":     complete_joints,
            })

        return {"name": name, "frames": frames}

    def load_project_from_json(self, file_path: str) -> None:
        """Read a JSON file and load it as the current project."""
        with open(file_path, "r", encoding="utf-8") as f:
            data = json.load(f)
        self.load_project_dict(data)

    def confirm_and_execute(self):
        if not self.node.is_robot_online:
            QMessageBox.warning(self, 'Not Connected', "Not connected to robot.\nPlease check connection.", QMessageBox.Ok)
            return

        reply = QMessageBox.warning(self, 'Safety Warning', 
                                    'This will MOVE the real robot.\nPlease ensure the environment is safe.',
                                    QMessageBox.Yes | QMessageBox.No, QMessageBox.No)
        if reply == QMessageBox.Yes:
            self.node.execute_commands()

    # New: Save current pose to file
    def save_current_pose_to_file(self):
        """Save current joint positions to JSON file with custom filename (only head, arms, hands - 29 DOF)"""
        try:
            # Ask user for filename
            default_name = f"pose_{datetime.now().strftime('%Y%m%d_%H%M%S')}"
            name, ok = QInputDialog.getText(
                self, 
                'Save Pose', 
                'Enter filename (without .json extension):',
                text=default_name
            )
            
            if not ok:
                return  # User cancelled
            
            if not name:
                name = default_name
            
            # Ensure .json extension
            if not name.endswith('.json'):
                filename = f"{name}.json"
            else:
                filename = name
            
            # Filter joint positions - only save head, arms, and hands (29 DOF)
            filtered_positions = {}
            for joint_name in self.SAVE_JOINTS:
                if joint_name in self.node.joint_positions:
                    filtered_positions[joint_name] = self.node.joint_positions[joint_name]
                else:
                    filtered_positions[joint_name] = 0.0  # Default to 0 if not found
            
            # Construct data to save
            data = {
                'timestamp': datetime.now().strftime("%Y%m%d_%H%M%S"),
                'joint_count': len(filtered_positions),
                'joint_positions': filtered_positions
            }
            
            # Save to current working directory
            with open(filename, 'w', encoding='utf-8') as f:
                json.dump(data, f, ensure_ascii=False, indent=2)
            
            # Show success message
            QMessageBox.information(self, 'Save Successful', 
                                   f'Pose saved to file:\n{filename}\n\nRecorded {len(filtered_positions)} joints\n(Head: 3, Arms: 14, Hands: 12)')
            self.node.get_logger().info(f"Pose saved to: {filename} ({len(filtered_positions)} joints)")
            
        except Exception as e:
            QMessageBox.critical(self, 'Save Failed', f'Error saving file:\n{str(e)}')

    # ========== Action Playback Control Methods ==========
    def load_action_file(self):
        """Load action file"""
        filepath, _ = QFileDialog.getOpenFileName(
            self,
            "Load Action File",
            "",
            "JSON Files (*.json)"
        )
        if not filepath:
            return
        
        if self.node.action_player.load_action(filepath):
            filename = os.path.basename(filepath)
            num_frames = len(self.node.action_player.frames)
            fps = self.node.action_player.frequency
            duration = num_frames / fps
            
            self.lbl_action_file.setText(f"{filename} ({num_frames} frames, {duration:.1f}s @ {fps}Hz)")
            self.lbl_action_file.setStyleSheet("color: green;")
            
            self.btn_play.setEnabled(True)
            self.update_progress_label()
            
            QMessageBox.information(self, "Action Loaded", 
                                   f"Loaded: {filename}\n"
                                   f"Frames: {num_frames}\n"
                                   f"Duration: {duration:.2f}s\n"
                                   f"Frequency: {fps}Hz")
        else:
            QMessageBox.critical(self, "Load Failed", "Failed to load action file")
    
    def play_action(self):
        """Start playback"""
        if not self.node.is_robot_online:
            QMessageBox.warning(self, 'Not Connected', 
                              "Not connected to robot.\nPlease check connection.", 
                              QMessageBox.Ok)
            return
        
        loop = (self.chk_loop.currentText() == "Loop")
        
        if self.node.action_player.play(loop=loop):
            self.btn_play.setEnabled(False)
            self.btn_pause.setEnabled(True)
            self.btn_stop.setEnabled(True)
            self.btn_load_action.setEnabled(False)
            self.chk_loop.setEnabled(False)
    
    def pause_resume_action(self):
        """Pause/Resume playback"""
        player = self.node.action_player
        if player.is_paused:
            player.resume()
            self.btn_pause.setText("Pause")
        else:
            player.pause()
            self.btn_pause.setText("Resume")
    
    def stop_action(self):
        """Stop playback"""
        self.node.action_player.stop()
        
        self.btn_play.setEnabled(True)
        self.btn_pause.setEnabled(False)
        self.btn_stop.setEnabled(False)
        self.btn_load_action.setEnabled(True)
        self.chk_loop.setEnabled(True)
        self.btn_pause.setText("Pause")
        
        self.update_progress_label()
    
    def update_playback_status(self):
        """Update playback status display"""
        player = self.node.action_player
        if player.is_playing and not player.is_paused:
            self.update_progress_label()
        elif not player.is_playing:
            if self.btn_stop.isEnabled():
                # Left-panel triggered playback finished naturally
                self.stop_action()
            if self.rp_btn_stop.isEnabled():
                # Right-panel triggered playback finished naturally.
                # Update label FIRST so user sees 100% (current_frame == len(keyframes)).
                self.update_progress_label()
                self._rp_set_playing_state(False)
    
    def update_progress_label(self):
        """Update progress label"""
        player = self.node.action_player
        total = len(player.keyframes) or len(player.frames)
        if total:
            current = min(player.current_frame, total)
            percent = int(100 * current / total)
            self.lbl_progress.setText(f"{current} / {total} ({percent}%)")
        else:
            self.lbl_progress.setText("0 / 0 (0%)")

    def generate_action_dialog(self):
        """Open dialog to generate action file"""
        dialog = GenerateActionDialog(self)
        dialog.exec_()


class GenerateActionDialog(QDialog):
    """Dialog to generate action file"""
    
    def __init__(self, parent):
        super().__init__(parent)
        self.parent = parent
        self.setWindowTitle("Generate Action from Keyframes")
        self.resize(600, 500)
        
        layout = QVBoxLayout(self)
        
        # Keyframe file selection
        file_layout = QHBoxLayout()
        self.btn_add_files = QPushButton("Add Keyframe Files")
        self.btn_add_files.clicked.connect(self.add_files)
        file_layout.addWidget(self.btn_add_files)
        
        self.btn_clear_files = QPushButton("Clear")
        self.btn_clear_files.clicked.connect(self.clear_files)
        file_layout.addWidget(self.btn_clear_files)
        
        file_layout.addStretch()
        layout.addLayout(file_layout)
        
        # File list
        self.file_list = QListWidget()
        self.file_list.setDragDropMode(QListWidget.InternalMove)  # Support drag to reorder
        layout.addWidget(QLabel("Keyframe Files (drag to reorder):"))
        layout.addWidget(self.file_list)
        
        # Parameter settings
        form_layout = QFormLayout()

        self.fps_spin = QSpinBox()
        self.fps_spin.setRange(1, 1000)
        self.fps_spin.setValue(100)
        form_layout.addRow("Frame Rate (Hz):", self.fps_spin)

        self.duration_spin = QDoubleSpinBox()
        self.duration_spin.setRange(0.1, 60.0)
        self.duration_spin.setValue(2.0)
        self.duration_spin.setDecimals(1)
        self.duration_spin.setToolTip(
            "Fixed mode: used as the duration for every segment.\n"
            "Adaptive mode: not used in calculation (kept for reference)."
        )
        form_layout.addRow("Default Duration between frames (s):", self.duration_spin)

        self.timing_mode_combo = QComboBox()
        self.timing_mode_combo.addItems(["Fixed Duration", "Adaptive by Motion Distance"])
        self.timing_mode_combo.setToolTip(
            "Fixed Duration: every segment uses the same Default Duration.\n"
            "Adaptive by Motion Distance: duration is proportional to joint-space distance."
        )
        form_layout.addRow("Timing Mode:", self.timing_mode_combo)

        self.method_combo = QComboBox()
        self.method_combo.addItems(["linear", "cubic", "quintic"])
        self.method_combo.setCurrentText("quintic")
        form_layout.addRow("Interpolation Method:", self.method_combo)

        layout.addLayout(form_layout)

        # Adaptive parameters group (hidden until Adaptive mode is selected)
        self.adaptive_group = QGroupBox("Adaptive Parameters")
        adaptive_form = QFormLayout()

        self.min_duration_spin = QDoubleSpinBox()
        self.min_duration_spin.setRange(0.05, 60.0)
        self.min_duration_spin.setValue(0.3)
        self.min_duration_spin.setDecimals(2)
        self.min_duration_spin.setToolTip("Minimum duration per segment (s)")
        adaptive_form.addRow("Min Duration (s):", self.min_duration_spin)

        self.max_duration_spin = QDoubleSpinBox()
        self.max_duration_spin.setRange(0.1, 60.0)
        self.max_duration_spin.setValue(3.0)
        self.max_duration_spin.setDecimals(2)
        self.max_duration_spin.setToolTip("Maximum duration per segment (s)")
        adaptive_form.addRow("Max Duration (s):", self.max_duration_spin)

        self.speed_scale_spin = QDoubleSpinBox()
        self.speed_scale_spin.setRange(0.01, 100.0)
        self.speed_scale_spin.setValue(1.0)
        self.speed_scale_spin.setDecimals(2)
        self.speed_scale_spin.setToolTip(
            "Speed scale k: duration_i = clamp(min, max, k * dist_i)\n"
            "Larger k → slower motion; smaller k → faster motion."
        )
        adaptive_form.addRow("Speed Scale (k):", self.speed_scale_spin)

        self.adaptive_group.setLayout(adaptive_form)
        self.adaptive_group.setVisible(False)
        layout.addWidget(self.adaptive_group)

        self.timing_mode_combo.currentTextChanged.connect(self._on_timing_mode_changed)

        # Help text
        help_text = QLabel(
            "Methods:\n"
            "- linear: Simple linear interpolation\n"
            "- cubic: Cubic spline (smooth, needs 4+ keyframes)\n"
            "- quintic: S-curve (smooth start/stop, recommended)"
        )
        help_text.setStyleSheet("color: gray; font-size: 11px;")
        layout.addWidget(help_text)

        # Read-only summary label
        self.lbl_summary = QLabel("Total duration: -, Total frames: -")
        self.lbl_summary.setStyleSheet("color: #0055aa; font-size: 11px;")
        layout.addWidget(self.lbl_summary)

        # Generate button
        btn_layout = QHBoxLayout()
        self.btn_generate = QPushButton("Generate Action")
        self.btn_generate.clicked.connect(self.generate_action)
        btn_layout.addWidget(self.btn_generate)

        self.btn_cancel = QPushButton("Cancel")
        self.btn_cancel.clicked.connect(self.reject)
        btn_layout.addWidget(self.btn_cancel)

        layout.addLayout(btn_layout)
    
    def add_files(self):
        """Add keyframe files"""
        files, _ = QFileDialog.getOpenFileNames(
            self, 
            "Select Keyframe Files", 
            "", 
            "JSON Files (*.json)"
        )
        for f in files:
            # Use os.path.basename for cross-platform compatibility
            filename = os.path.basename(f)
            item = QListWidgetItem(filename)
            item.setData(32, f)  # Store full path
            self.file_list.addItem(item)
    
    def clear_files(self):
        """Clear file list"""
        self.file_list.clear()

    def _on_timing_mode_changed(self, text):
        """Show/hide adaptive parameters group based on selected timing mode"""
        self.adaptive_group.setVisible(text == "Adaptive by Motion Distance")

    def generate_action(self):
        """Generate action file"""
        if self.file_list.count() < 2:
            QMessageBox.warning(self, "Error", "Please select at least 2 keyframe files")
            return

        # Get output filename - default to actions directory
        default_actions_dir = os.path.join(get_package_share_directory('tiangong2pro_urdf'), 'config', 'actions')
        os.makedirs(default_actions_dir, exist_ok=True)
        output_file, _ = QFileDialog.getSaveFileName(
            self,
            "Save Action File",
            os.path.join(default_actions_dir, "action.json"),
            "JSON Files (*.json)"
        )
        if not output_file:
            return

        # Collect keyframe file paths
        keyframe_files = []
        for i in range(self.file_list.count()):
            keyframe_files.append(self.file_list.item(i).data(32))

        # Import interpolation module
        try:
            _scripts_dir = os.path.join(get_package_share_directory('tiangong2pro_urdf'), 'scripts')
            if _scripts_dir not in sys.path:
                sys.path.insert(0, _scripts_dir)
            from keyframe_interpolator import (
                load_keyframe, interpolate_keyframes, convert_to_run_editer_format
            )
        except ImportError:
            QMessageBox.critical(self, "Error", "Cannot find keyframe_interpolator.py")
            return

        try:
            # Load keyframes
            keyframes = [load_keyframe(f) for f in keyframe_files]

            fps = self.fps_spin.value()
            method = self.method_combo.currentText()
            timing_mode = self.timing_mode_combo.currentText()
            n_transitions = len(keyframes) - 1

            # Compute per-segment durations based on timing mode
            if timing_mode == "Fixed Duration":
                default_dur = self.duration_spin.value()
                durations = [default_dur] * n_transitions
                print("[Gen Action] Timing Mode: Fixed Duration")
                for i in range(n_transitions):
                    N_i = max(2, round(durations[i] * fps))
                    print(f"  Segment {i}: dist=N/A, duration={durations[i]:.3f}s, N={N_i}")
            else:
                # Adaptive by Motion Distance
                min_dur = self.min_duration_spin.value()
                max_dur = self.max_duration_spin.value()
                k = self.speed_scale_spin.value()
                print(f"[Gen Action] Timing Mode: Adaptive (min={min_dur}s, max={max_dur}s, k={k})")

                joint_names = list(keyframes[0].keys())
                durations = []
                for i in range(n_transitions):
                    dist_i = np.sqrt(sum(
                        (keyframes[i + 1][j] - keyframes[i][j]) ** 2
                        for j in joint_names
                    ))
                    dur_i = max(min_dur, min(max_dur, k * dist_i))
                    durations.append(dur_i)
                    N_i = max(2, round(dur_i * fps))
                    print(f"  Segment {i}: dist={dist_i:.4f} rad, duration={dur_i:.3f}s, N={N_i}")

            # Interpolate
            frames = interpolate_keyframes(keyframes, durations, fps, method)

            # Convert to run_editer compatible format
            output_data = convert_to_run_editer_format(frames)
            total_frames = len(frames)

            # Save
            with open(output_file, 'w', encoding='utf-8') as f:
                json.dump(output_data, f, ensure_ascii=False, indent=2)

            # Update summary label
            total_dur = sum(durations)
            self.lbl_summary.setText(
                f"Total duration: {total_dur:.2f}s, Total frames: {total_frames}"
            )

            QMessageBox.information(
                self,
                "Success",
                f"Action file generated!\n\n"
                f"File: {output_file}\n"
                f"Total frames: {output_data['count']}\n"
                f"Duration: {total_dur:.2f} seconds\n"
                f"Method: {method}\n"
                f"Timing Mode: {timing_mode}"
            )
            self.accept()

        except Exception as e:
            QMessageBox.critical(self, "Error", f"Failed to generate action:\n{str(e)}")


def main():
    try:
        rclpy.init()
        node = InteractiveGuiNode()
        app = QApplication(sys.argv)

        gui = RobotControlGui(node)
        gui.sync_sliders_to_real() 
        gui.show()
        
        exit_code = app.exec_()
        
        node.destroy_node()
        rclpy.shutdown()
        sys.exit(exit_code)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(f"Error in main: {e}")

if __name__ == '__main__':
    main()
