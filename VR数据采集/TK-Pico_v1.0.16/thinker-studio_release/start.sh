#!/bin/bash

# 加载bashrc配置文件
source /opt/ros/humble/setup.bash


# 获取脚本所在目录的绝对路径
SCRIPT_DIR=$(cd "$(dirname "${BASH_SOURCE[0]}")" &> /dev/null && pwd)


# 启用venv
if [ -d "/opt/robot-insight/venv" ]; then
    echo "检测到系统虚拟环境 /opt/robot-insight/venv，正在使用..."
    source "/opt/robot-insight/venv/bin/activate"
elif [ -d "${SCRIPT_DIR}/insight-venv" ]; then
    echo "检测到本地虚拟环境，正在使用..."
    source "${SCRIPT_DIR}/insight-venv/bin/activate"
else
    echo "未检测到虚拟环境，正在创建..."
    python3 -m venv "${SCRIPT_DIR}/insight-venv"

    if [ $? -ne 0 ]; then
        echo "错误: 虚拟环境创建失败"
        exit 1
    fi

    echo "虚拟环境创建完成"
    source "${SCRIPT_DIR}/insight-venv/bin/activate"
fi

# 安装依赖
echo "正在安装 robot_insight 依赖..."
pip install -i https://mirrors.aliyun.com/pypi/simple -r "$SCRIPT_DIR/requirements.txt"
cd pico_teleop/deps
# 先安装 smplx（避免 general_motion_retargeting 尝试从 GitHub 克隆）
pip install smplx-0.1.28-py3-none-any.whl -i https://mirrors.aliyun.com/pypi/simple
pip install xrobotoolkit_sdk-1.0.2-cp310-cp310-linux_x86_64.whl -i https://mirrors.aliyun.com/pypi/simple
# 用 --no-deps 安装 general_motion_retargeting（避免重新解析 git+https 依赖）
pip install --no-deps general_motion_retargeting-0.2.0-py3-none-any.whl -i https://mirrors.aliyun.com/pypi/simple

if [ $? -ne 0 ]; then
    echo "错误: 依赖安装失败"
    exit 1
fi
echo "依赖安装完成"

# 启动遥操数采服务
echo "正在启动遥操数采服务..."
cd $SCRIPT_DIR
python3 -m robot_insight.main

