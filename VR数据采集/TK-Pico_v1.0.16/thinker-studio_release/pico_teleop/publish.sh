# #!/bin/bash
# # 启动ROS2 Joint States Publisher脚本
# # 使用方法: bash run_joint_states_publisher.sh [redis_host] [redis_port] [publish_freq]

# # 加载bashrc配置文件
# source /opt/ros/humble/setup.bash
# # 获取脚本所在目录的绝对路径
# SCRIPT_DIR=$(cd "$(dirname "${BASH_SOURCE[0]}")" &> /dev/null && pwd)


# # 启用venv
# if [ ! -d "${SCRIPT_DIR}/twist-publish-venv" ]; then
#     echo "未检测到虚拟环境，正在创建..."
#     python3 -m venv "${SCRIPT_DIR}/twist-publish-venv"

#     if [ $? -ne 0 ]; then
#         echo "错误: 虚拟环境创建失败"
#         exit 1
#     fi
#     echo "虚拟环境创建完成"
# fi
# source "${SCRIPT_DIR}/twist-publish-venv/bin/activate"

# # 安装依赖
# echo "正在安装 twist-publish 依赖..."
# pip install -i https://mirrors.aliyun.com/pypi/simple -r "$SCRIPT_DIR/requirements.txt"


# if [ $? -ne 0 ]; then
#     echo "错误: 依赖安装失败"
#     exit 1
# fi
# echo "依赖安装完成"

# set -e  # 遇到错误时退出

# cd deploy_real

# # 默认参数
# REDIS_HOST="${1:-localhost}"
# REDIS_PORT="${2:-6379}"
# PUBLISH_FREQ="${3:-30}"

# # 颜色定义
# RED='\033[0;31m'
# GREEN='\033[0;32m'
# YELLOW='\033[1;33m'
# NC='\033[0m' # No Color

# echo -e "${GREEN}================================================${NC}"
# echo -e "${GREEN}ROS2 Joint States Publisher for TWIST2${NC}"
# echo -e "${GREEN}================================================${NC}"
# echo ""
# echo "Configuration:"
# echo "  Redis Host: $REDIS_HOST"
# echo "  Redis Port: $REDIS_PORT"
# echo "  Publish Frequency: $PUBLISH_FREQ Hz"
# echo ""

# # 检查ROS2环境
# if [ -z "$ROS_DISTRO" ]; then
#     echo -e "${YELLOW}⚠ ROS2 environment not sourced. Attempting to source...${NC}"
#     if [ -f /opt/ros/humble/setup.bash ]; then
#         source /opt/ros/humble/setup.bash
#         echo -e "${GREEN}✓ ROS2 humble sourced${NC}"
#     elif [ -f /opt/ros/iron/setup.bash ]; then
#         source /opt/ros/iron/setup.bash
#         echo -e "${GREEN}✓ ROS2 iron sourced${NC}"
#     else
#         echo -e "${RED}✗ Cannot find ROS2 installation. Please install ROS2 first.${NC}"
#         exit 1
#     fi
# fi

# # 检查Redis连接
# echo -e "${YELLOW}Checking Redis connection...${NC}"
# if ! redis-cli -h "$REDIS_HOST" -p "$REDIS_PORT" ping > /dev/null 2>&1; then
#     echo -e "${RED}✗ Cannot connect to Redis at $REDIS_HOST:$REDIS_PORT${NC}"
#     echo -e "${YELLOW}Please ensure Redis is running:${NC}"
#     echo "  redis-server --daemonize yes"
#     exit 1
# fi
# echo -e "${GREEN}✓ Redis connection OK${NC}"

# # 检查Python依赖
# echo -e "${YELLOW}Checking Python dependencies...${NC}"
# MISSING_PACKAGES=()

# # 检查rclpy
# if ! python3 -c "import rclpy" 2>/dev/null; then
#     MISSING_PACKAGES+=("rclpy")
# fi

# # 检查sensor_msgs
# if ! python3 -c "from sensor_msgs.msg import JointState" 2>/dev/null; then
#     MISSING_PACKAGES+=("sensor-msgs-py")
# fi

# # 检查redis
# if ! python3 -c "import redis" 2>/dev/null; then
#     MISSING_PACKAGES+=("redis")
# fi

# if [ ${#MISSING_PACKAGES[@]} -gt 0 ]; then
#     echo -e "${YELLOW}Missing dependencies: ${MISSING_PACKAGES[*]}${NC}"
#     echo -e "${YELLOW}Installing...${NC}"
#     for package in "${MISSING_PACKAGES[@]}"; do
#         if [ "$package" = "sensor-msgs-py" ]; then
#             sudo apt-get install -y python3-sensor-msgs 2>/dev/null || pip install sensor-msgs-py
#         else
#             pip install "$package"
#         fi
#     done
# fi
# echo -e "${GREEN}✓ All dependencies satisfied${NC}"

# echo ""
# echo -e "${GREEN}Starting Joint States Publisher...${NC}"
# # echo -e "${YELLOW}Press Ctrl+C to stop${NC}"
# echo ""

# # 运行Joint States Publisher
# cd "$(dirname "$0")"
# python3 server_publish_joint_states.py \
#     --redis-host "$REDIS_HOST" \
#     --redis-port "$REDIS_PORT" \
#     --publish-freq "$PUBLISH_FREQ"
