#!/usr/bin/env bash
set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR"

ROS_PYTHON=/usr/bin/python3

source /opt/ros/humble/setup.bash
source "$SCRIPT_DIR/other_install/lyre_msgs/share/lyre_msgs/local_setup.bash"
source "$SCRIPT_DIR/other_install/bodyctrl_msgs/share/bodyctrl_msgs/local_setup.bash"

export COLCON_PYTHON_EXECUTABLE="$ROS_PYTHON"

colcon build \
	--packages-select tiangong2pro_urdf sim_joy tienkung_action \
	--cmake-clean-cache \
	--cmake-args -DPython3_EXECUTABLE="$ROS_PYTHON"

source "$SCRIPT_DIR/install/setup.bash"
source "$SCRIPT_DIR/install/tienkung_action/share/tienkung_action/package.sh"
export AMENT_PREFIX_PATH="$SCRIPT_DIR/install/tienkung_action:${AMENT_PREFIX_PATH:-}"

exec ros2 launch tiangong2pro_urdf interactive_gui.launch.py "$@"
