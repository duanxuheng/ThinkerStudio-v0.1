import os

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.conditions import IfCondition
from launch.substitutions import Command, LaunchConfiguration
import launch_ros
from launch_ros.actions import Node


def generate_launch_description():
    pkg_share = launch_ros.substitutions.FindPackageShare(
        package='tiangong2pro_urdf'
    ).find('tiangong2pro_urdf')

    default_model = os.path.join(pkg_share, 'urdf', 'tiangong2.0_pro_with_hands.urdf')
    default_rviz = os.path.join(pkg_share, 'config', 'display.rviz')

    args = [
        DeclareLaunchArgument(
            name='model',
            default_value=default_model,
            description='Absolute path to robot URDF file',
        ),
        DeclareLaunchArgument(
            name='rvizconfig',
            default_value=default_rviz,
            description='Absolute path to RViz config file',
        ),
        DeclareLaunchArgument(
            name='action_editor',
            default_value='true',
            description='Whether to launch the joint action editor GUI',
        ),
    ]

    robot_description_content = Command(['cat ', LaunchConfiguration('model')])
    robot_description_param = {
        'robot_description': launch_ros.parameter_descriptions.ParameterValue(
            robot_description_content, value_type=str
        )
    }

    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        parameters=[robot_description_param],
    )

    sim_joint_bridge_node = Node(
        package='tiangong2pro_urdf',
        executable='sim_joint_bridge.py',
        name='sim_joint_bridge',
        output='screen',
    )
    action_editor_node = Node(
        package='tiangong2pro_urdf',
        executable='action_editor.py',
        name='joint_action_editor',
        output='screen',
        condition=IfCondition(LaunchConfiguration('action_editor')),
    )

    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', LaunchConfiguration('rvizconfig')],
    )

    nodes = [
        robot_state_publisher_node,
        sim_joint_bridge_node,
        action_editor_node,
        rviz_node,
    ]

    return LaunchDescription(args + nodes)
