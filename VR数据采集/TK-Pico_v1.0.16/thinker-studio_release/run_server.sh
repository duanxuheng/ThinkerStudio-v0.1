#!/bin/bash
#
# Thinker-Studio Server Startup Script
#
# 由 systemd 调用，启动 ROS2 + Flask 服务
#

set -e

# 加载 ROS2 环境
source /opt/ros/humble/setup.bash

# 外部服务动态库路径
export LD_LIBRARY_PATH="/opt/thinker-studio/pico_headless_service/bin:$LD_LIBRARY_PATH"

# retargeting-control ROS2 环境
if [ -d "/opt/thinker-studio/retargeting-control/install" ]; then
    source /opt/thinker-studio/retargeting-control/install/setup.bash
fi

# 激活虚拟环境
source /opt/thinker-studio/venv/bin/activate

# systemd 负责提供部署环境变量；脚本仅保留手工启动时的最小兜底
export ROBOT_INSIGHT_DATA_DIR="${ROBOT_INSIGHT_DATA_DIR:-/var/lib/thinker-studio}"
export ROBOT_INSIGHT_LOG_DIR="${ROBOT_INSIGHT_LOG_DIR:-/var/log/thinker-studio}"
export ROBOT_INSIGHT_LOG_LEVEL="${ROBOT_INSIGHT_LOG_LEVEL:-INFO}"
export ROBOT_INSIGHT_PORT="${ROBOT_INSIGHT_PORT:-9999}"
export ROS_LOG_DIR="${ROS_LOG_DIR:-/var/log/thinker-studio}"
export HOME="${HOME:-/var/lib/thinker-studio}"

# 切换到安装目录
cd /opt/thinker-studio

# 启动服务（使用 pyc 文件）
exec python3 -m robot_insight.main