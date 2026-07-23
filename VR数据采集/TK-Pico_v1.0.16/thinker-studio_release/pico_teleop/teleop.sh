# sudo ufw disable

# 定位到脚本所在目录，确保相对路径正确
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR"

# source ~/miniconda3/bin/activate gmr
source /opt/ros/humble/setup.bash

# 日志目录环境变量（由父进程传入或使用默认值）
# 部署环境: PICO_LOG_DIR=/var/log/thinker-studio
# 开发环境: 自动使用脚本目录下的 logs/
if [ -z "$PICO_LOG_DIR" ]; then
    # 默认使用脚本所在目录的上级目录下的 logs/
    export PICO_LOG_DIR="$(dirname "$SCRIPT_DIR")/logs"
fi

cd deploy_real

# the height (empirically) should be smaller than the actual human height, due to inaccuracy of the PICO estimation.
actual_human_height=1.7

# ==========================================
# XRobotStreamer connection settings
# ==========================================
# Number of retries if connection fails (increase if pc-service needs time to stabilize)
streamer_retries=5
# Delay between retries in seconds
streamer_retry_delay=3.0
# Timeout to wait for PICO data during validation
wait_for_data_timeout=10.0

echo "============================================"
echo "Starting Teleop..."
echo "Please ensure:"
echo "  1. xrobotoolkit-pc-service is running"
echo "  2. PICO is connected to the same network"
echo "  3. PICO app is streaming data"
echo "============================================"

# Small delay to ensure pc-service connection is stable
sleep 1

# 检查 python 命令可用性
PYTHON_CMD="python3"
if command -v python &>/dev/null; then
    PYTHON_CMD="python"
fi

# 确定要执行的脚本文件（开发环境有 .py，部署环境只有 .pyc）
SCRIPT_FILE=""
if [ -f "xrobot_teleop_to_robot_w_hand.py" ]; then
    SCRIPT_FILE="xrobot_teleop_to_robot_w_hand.py"
elif [ -f "xrobot_teleop_to_robot_w_hand.pyc" ]; then
    SCRIPT_FILE="xrobot_teleop_to_robot_w_hand.pyc"
else
    echo "错误: 未找到 xrobot_teleop_to_robot_w_hand.py 或 .pyc 文件"
    exit 1
fi

echo "执行脚本: $SCRIPT_FILE"

$PYTHON_CMD $SCRIPT_FILE --robot tienkung2_pro \
             --actual_human_height $actual_human_height \
             --target_fps 100 \
             --headless \
             --measure_fps 1 \
             --streamer_retries $streamer_retries \
             --streamer_retry_delay $streamer_retry_delay \
             --wait_for_data_timeout $wait_for_data_timeout