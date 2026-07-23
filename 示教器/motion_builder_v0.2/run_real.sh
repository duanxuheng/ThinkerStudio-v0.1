#!/usr/bin/env bash
set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR"

source /opt/ros/humble/setup.bash
source "/home/nvidia/lyre_ros2/install/lyre_msgs/share/lyre_msgs/local_setup.bash"
source "/home/nvidia/lyre_ros2/install/bodyctrl_msgs/share/bodyctrl_msgs/local_setup.bash"

colcon build --packages-select tienkung_action

source "$SCRIPT_DIR/install/setup.bash"
source "$SCRIPT_DIR/install/tienkung_action/share/tienkung_action/package.sh"
export AMENT_PREFIX_PATH="$SCRIPT_DIR/install/tienkung_action:${AMENT_PREFIX_PATH:-}"

ros2 run tienkung_action trigger_player