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

    audio_service_node = Node(
        package='tiangong2pro_urdf',
        executable='audio_service.py',
        name='audio_service',
        output='screen',
    )

    teleop_joy_node = Node(
        package='sim_joy',
        executable='teleop_gui',
        name='sim_joy',
        output='screen',
    )

    trigger_player_node = Node(
        package='tienkung_action',
        executable='trigger_player',
        name='trigger_player',
        output='screen',
        parameters=[
            {'base_dir_key': 'sim_base_dir'},
            {'scenario_file': os.path.join(pkg_share, '../../../../../motion_builder/src/tienkung_action/config/scenarios.json')},
        ],
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
        audio_service_node,
        teleop_joy_node,
        trigger_player_node,
        rviz_node,
    ]

    return LaunchDescription(args + nodes)
