#!/usr/bin/python3
"""Simulation bridge: subscribes to motor command topics and publishes /joint_states.

Replaces joint_state_publisher.py (which reads real motor status) with a
simulated version that directly applies commanded positions.
"""
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from std_msgs.msg import Bool
from bodyctrl_msgs.msg import CmdSetMotorPosition

PUBLISH_HZ = 30.0
PUBLISH_PERIOD = 1.0 / PUBLISH_HZ

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
    66: 'ankle_roll_r_joint'
}

LEFT_HAND_JOINTS = {
    1: ('left_little_1_joint', 1.333),
    2: ('left_ring_1_joint', 1.333),
    3: ('left_middle_1_joint', 1.333),
    4: ('left_index_1_joint', 1.333),
    5: ('left_thumb_2_joint', 0.48),
    6: ('left_thumb_1_joint', 1.246165),
}

RIGHT_HAND_JOINTS = {
    1: ('right_little_1_joint', 1.333),
    2: ('right_ring_1_joint', 1.333),
    3: ('right_middle_1_joint', 1.333),
    4: ('right_index_1_joint', 1.333),
    5: ('right_thumb_2_joint', 0.48),
    6: ('right_thumb_1_joint', 1.246165),
}

# Additional hand joints (coupled/mimic joints)
LEFT_HAND_COUPLED = [
    'left_little_2_joint',
    'left_ring_2_joint',
    'left_middle_2_joint',
    'left_index_2_joint',
    'left_thumb_3_joint',
    'left_thumb_4_joint',
]

RIGHT_HAND_COUPLED = [
    'right_little_2_joint',
    'right_ring_2_joint',
    'right_middle_2_joint',
    'right_index_2_joint',
    'right_thumb_3_joint',
    'right_thumb_4_joint',
]


class SimJointBridge(Node):
    def __init__(self):
        super().__init__('sim_joint_bridge')

        self.joint_positions: dict[str, float] = {}
        self.joint_targets: dict[str, float] = {}
        self.joint_speeds: dict[str, float] = {}

        for joint_name in MOTOR_ID_TO_JOINT.values():
            self.joint_positions[joint_name] = 0.0
            self.joint_targets[joint_name] = 0.0
            self.joint_speeds[joint_name] = 0.0
        for joint_name, _ in LEFT_HAND_JOINTS.values():
            self.joint_positions[joint_name] = 0.0
            self.joint_targets[joint_name] = 0.0
            self.joint_speeds[joint_name] = 0.0
        for joint_name in LEFT_HAND_COUPLED:
            self.joint_positions[joint_name] = 0.0
            self.joint_targets[joint_name] = 0.0
            self.joint_speeds[joint_name] = 0.0
        for joint_name, _ in RIGHT_HAND_JOINTS.values():
            self.joint_positions[joint_name] = 0.0
            self.joint_targets[joint_name] = 0.0
            self.joint_speeds[joint_name] = 0.0
        for joint_name in RIGHT_HAND_COUPLED:
            self.joint_positions[joint_name] = 0.0
            self.joint_targets[joint_name] = 0.0
            self.joint_speeds[joint_name] = 0.0

        self.create_subscription(CmdSetMotorPosition, '/head/cmd_pos', self._cmd_callback, 10)
        self.create_subscription(CmdSetMotorPosition, '/waist/cmd_pos', self._cmd_callback, 10)
        self.create_subscription(CmdSetMotorPosition, '/arm/cmd_pos', self._cmd_callback, 10)
        self.create_subscription(CmdSetMotorPosition, '/leg/cmd_pos', self._cmd_callback, 10)
        self.create_subscription(JointState, '/inspire_hand/ctrl/left_hand', self._left_hand_callback, 10)
        self.create_subscription(JointState, '/inspire_hand/ctrl/right_hand', self._right_hand_callback, 10)

        # Subscribe to ghost/joint_states from interactive_gui slider movements
        self.create_subscription(JointState, '/ghost/joint_states', self._ghost_joint_callback, 10)

        self._joint_pub = self.create_publisher(JointState, 'joint_states', 10)

        self.create_timer(PUBLISH_PERIOD, self._publish_joint_states)

        self.get_logger().info('SimJointBridge ready — publishing /joint_states at 30 Hz')

    def _cmd_callback(self, msg: CmdSetMotorPosition) -> None:
        for cmd in msg.cmds:
            motor_id = cmd.name
            if motor_id in MOTOR_ID_TO_JOINT:
                joint_name = MOTOR_ID_TO_JOINT[motor_id]
                self.joint_targets[joint_name] = float(cmd.pos)
                self.joint_speeds[joint_name] = abs(float(cmd.spd))

    def _left_hand_callback(self, msg: JointState) -> None:
        self._apply_hand_cmd(msg, LEFT_HAND_JOINTS)

    def _right_hand_callback(self, msg: JointState) -> None:
        self._apply_hand_cmd(msg, RIGHT_HAND_JOINTS)

    def _apply_hand_cmd(self, msg: JointState, hand_map: dict) -> None:
        min_len = min(len(msg.position), 6)
        for i in range(min_len):
            motor_id = i + 1
            if motor_id in hand_map:
                joint_name, limit = hand_map[motor_id]
                percentage = msg.position[i]
                rad = (1.0 - percentage) * limit
                self.joint_positions[joint_name] = rad
                self.joint_targets[joint_name] = rad
                self.joint_speeds[joint_name] = 0.0

    def _ghost_joint_callback(self, msg: JointState) -> None:
        """Callback for /ghost/joint_states from interactive_gui sliders.

        When users move sliders in the GUI, joint positions are published to
        /ghost/joint_states. We forward these to /joint_states so rviz can
        display the robot pose in real-time.
        """
        for i, joint_name in enumerate(msg.name):
            if joint_name in self.joint_positions:
                pos = float(msg.position[i])
                self.joint_positions[joint_name] = pos
                self.joint_targets[joint_name] = pos
                self.joint_speeds[joint_name] = 0.0  # Immediate update, no smoothing

    def _advance_joint_positions(self, dt: float) -> None:
        for joint_name, target in self.joint_targets.items():
            current = self.joint_positions[joint_name]
            delta = target - current
            if abs(delta) <= 1e-9:
                self.joint_positions[joint_name] = target
                continue

            speed = self.joint_speeds.get(joint_name, 0.0)
            if speed <= 0.0:
                self.joint_positions[joint_name] = target
                continue

            max_step = speed * dt
            if abs(delta) <= max_step:
                self.joint_positions[joint_name] = target
                continue

            direction = 1.0 if delta > 0.0 else -1.0
            self.joint_positions[joint_name] = current + direction * max_step

    def _publish_joint_states(self) -> None:
        self._advance_joint_positions(PUBLISH_PERIOD)

        msg = JointState()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = list(self.joint_positions.keys())
        msg.position = list(self.joint_positions.values())
        self._joint_pub.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = SimJointBridge()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        if rclpy.ok():
            node.destroy_node()
            rclpy.shutdown()


if __name__ == '__main__':
    main()
