#!/bin/bash
#
# Thinker-Studio Installation Script
# Version: 1.0.16
#
# Usage: sudo bash install.sh
#
# 功能：
# - 创建服务用户 thinker-studio
# - 创建 venv 环境
# - 默认安装到 systemd，使用 systemd 管理服务
# - 如需跳过 systemd，可显式传入 --no-systemd 或 --direct
#

set -e

SKIP_SYSTEMD=0
for arg in "$@"; do
    case "$arg" in
        --no-systemd|--direct)
            SKIP_SYSTEMD=1
            ;;
        --systemd)
            SKIP_SYSTEMD=0
            ;;
        --help|-h)
            echo "Usage: sudo bash install.sh [--systemd|--no-systemd|--direct]"
            echo "  --systemd     安装并启用 systemd 服务"
            echo "  --no-systemd  跳过 systemd，使用直启"
            echo "  --direct      --no-systemd 的别名"
            exit 0
            ;;
    esac
done

# 检查 sudo 权限
if [ "$EUID" -ne 0 ]; then
    echo "错误: 请使用 sudo 执行此脚本"
    exit 1
fi

REQUIRED_PYTHON_VERSION="3.10.12"

python_version() {
    if command -v python3 >/dev/null 2>&1; then
        python3 --version 2>/dev/null | awk '{print $2}'
    fi
}

ensure_python_toolchain() {
    local current_python_version
    current_python_version="$(python_version)"

    if ! command -v python3 >/dev/null 2>&1; then
        echo "检测到 python3 未安装，开始安装依赖..."
        apt-get update
        apt-get install -y python3 python3-venv python3-pip
    elif ! command -v pip >/dev/null 2>&1; then
        echo "检测到 pip 未安装，开始安装依赖..."
        apt-get update
        apt-get install -y python3-pip
    fi

    if ! command -v pip >/dev/null 2>&1 && command -v pip3 >/dev/null 2>&1; then
        ln -sf "$(command -v pip3)" /usr/local/bin/pip
    fi

    current_python_version="$(python_version)"
    if [ "$current_python_version" != "$REQUIRED_PYTHON_VERSION" ]; then
        echo "============================================================"
        echo "警告: 当前系统 python3 版本为 ${current_python_version:-unknown}"
        echo "警告: 本工具基于 Python ${REQUIRED_PYTHON_VERSION} 构建，其他版本可能存在兼容性问题"
        echo "警告: 如遇依赖或运行异常，建议切换到 Python ${REQUIRED_PYTHON_VERSION}"
        echo "============================================================"
    fi

    if ! command -v pip >/dev/null 2>&1; then
        echo "错误: pip 未安装成功"
        exit 1
    fi
}

ensure_python_toolchain

# 定义路径
INSTALL_DIR="/opt/thinker-studio"
DATA_DIR="/var/lib/thinker-studio"
LOG_DIR="/var/log/thinker-studio"
SERVICE_NAME="thinker-studio"
SERVICE_USER="thinker-studio"

echo "=== thinker-studio 安装脚本 ==="
echo "版本: 1.0.16"
echo "安装目录: $INSTALL_DIR"
echo "数据目录: $DATA_DIR"
echo "日志目录: $LOG_DIR"
echo ""

if systemctl is-active --quiet "${SERVICE_NAME}.service"; then
    echo "检测到运行中的服务，先停止: ${SERVICE_NAME}.service"
    systemctl stop "${SERVICE_NAME}.service"
fi

# 1. 创建服务用户（如果不存在）
if ! id "$SERVICE_USER" &>/dev/null; then
    useradd --create-home --home /var/lib/thinker-studio --shell /bin/bash "$SERVICE_USER"
    usermod -aG video,render "$SERVICE_USER"
else
    # 用户已存在，只更新组
    usermod -aG video,render "$SERVICE_USER"
fi

# 2. 创建安装目录
echo "[2/6] 创建安装目录..."
mkdir -p "$INSTALL_DIR"
mkdir -p "$DATA_DIR"
mkdir -p "$LOG_DIR"

# 3. 复制文件到安装目录
echo "[3/6] 复制文件..."
# 删除旧文件（保留 venv）
find "$INSTALL_DIR" -mindepth 1 -maxdepth 1 ! -name 'venv' -exec rm -rf {} +

# 复制打包内容
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR"

for item in robot_insight requirements.txt start.sh version.txt run_server.sh merge_settings.py thinker-studio.service; do
    if [ -e "$item" ]; then
        cp -r "$item" "$INSTALL_DIR/"
    fi
done

# 复制 data 目录结构（按打包需求策略）
mkdir -p "$DATA_DIR/config"
mkdir -p "$DATA_DIR/tiangong-pro/actions/official"
mkdir -p "$DATA_DIR/tiangong-pro/actions/user"
mkdir -p "$DATA_DIR/tiangong-pro/bag_record"
mkdir -p "$DATA_DIR/tiangong-pro/collect_data"
mkdir -p "$DATA_DIR/tiangong-pro/collect_label"
mkdir -p "$DATA_DIR/tiangong-pro/lerobot_datasets"
mkdir -p "$DATA_DIR/tiangong-pro/custom_record"
mkdir -p "$DATA_DIR/walker-s2/actions/official"
mkdir -p "$DATA_DIR/walker-s2/actions/user"
mkdir -p "$DATA_DIR/walker-s2/bag_record"
mkdir -p "$DATA_DIR/walker-s2/collect_data"
mkdir -p "$DATA_DIR/walker-s2/collect_label"
mkdir -p "$DATA_DIR/walker-s2/lerobot_datasets"

# 复制官方动作文件（覆盖）
if [ -d "$SCRIPT_DIR/data/tiangong-pro/actions/official" ]; then
    cp -r "$SCRIPT_DIR/data/tiangong-pro/actions/official" "$DATA_DIR/tiangong-pro/actions/"
fi
if [ -d "$SCRIPT_DIR/data/walker-s2/actions/official" ]; then
    cp -r "$SCRIPT_DIR/data/walker-s2/actions/official" "$DATA_DIR/walker-s2/actions/"
fi

# 复制外部服务目录（新增）
if [ -d "$SCRIPT_DIR/pico_headless_service" ]; then
    cp -r "$SCRIPT_DIR/pico_headless_service" "$INSTALL_DIR/"
fi
if [ -d "$SCRIPT_DIR/pico_teleop" ]; then
    rsync -a --exclude 'docs' "$SCRIPT_DIR/pico_teleop" "$INSTALL_DIR/"
fi
if [ -d "$SCRIPT_DIR/retargeting-control" ]; then
    cp -r "$SCRIPT_DIR/retargeting-control" "$INSTALL_DIR/"
fi

# 安装 ROS 消息体 deb 包（retargeting-control 依赖）
if [ -f "$INSTALL_DIR/retargeting-control/deps/ros-humble-bodyctrl-msgs_0.0.1-1_amd64.deb" ]; then
    echo "安装 ROS 消息体包..."
    dpkg -i "$INSTALL_DIR/retargeting-control/deps/ros-humble-bodyctrl-msgs_0.0.1-1_amd64.deb"
    echo "  ros-humble-bodyctrl-msgs 已安装"
fi

# 复制默认配置文件
if [ -f "$SCRIPT_DIR/data/config/settings.json" ]; then
    if [ ! -f "$DATA_DIR/config/settings.json" ]; then
        # 首次安装：直接复制
        cp "$SCRIPT_DIR/data/config/settings.json" "$DATA_DIR/config/"
        echo "写入默认配置文件"
    else
        # 升级安装：合并配置
        echo "合并配置文件..."
        cd "$INSTALL_DIR"
        source venv/bin/activate 2>/dev/null || true
        python3 merge_settings.py "$SCRIPT_DIR/data/config/settings.json" "$DATA_DIR/config/settings.json"
    fi
fi

# 安装前端（如果存在）
FRONTEND_DIR=$(find "$SCRIPT_DIR" -maxdepth 1 -type d -name "robot-insight-frontend_release_*" | head -1)
if [ -n "$FRONTEND_DIR" ] && [ -d "$FRONTEND_DIR" ]; then
    echo "检测到前端安装包: $(basename "$FRONTEND_DIR")"
    cd "$FRONTEND_DIR"
    if [ -f "install.sh" ]; then
        bash install.sh
        echo "前端安装完成"
    else
        echo "警告: 前端 install.sh 不存在"
    fi
    cd "$SCRIPT_DIR"
fi

# 4. 创建 venv 环境
echo "[4/6] 创建虚拟环境..."
if [ ! -d "$INSTALL_DIR/venv" ]; then
    python3 -m venv "$INSTALL_DIR/venv"
fi

# 安装依赖
cd "$INSTALL_DIR"
source venv/bin/activate
pip install --upgrade pip
pip install -i https://mirrors.aliyun.com/pypi/simple -r requirements.txt

# 安装 wheels（pico_teleop/deps 目录下的预编译包）
if [ -d "$INSTALL_DIR/pico_teleop/deps" ]; then
    echo "安装预编译 wheels..."

    # 先安装 smplx（避免 general_motion_retargeting 尝试从 GitHub 克隆）
    for whl in "$INSTALL_DIR/pico_teleop/deps"/smplx*.whl; do
        if [ -f "$whl" ]; then
            echo "  安装: $(basename $whl)"
            pip install "$whl"
        fi
    done

    # 再安装 xrobotoolkit_sdk
    for whl in "$INSTALL_DIR/pico_teleop/deps"/xrobotoolkit*.whl; do
        if [ -f "$whl" ]; then
            echo "  安装: $(basename $whl)"
            pip install "$whl"
        fi
    done

    # 最后用 --no-deps 安装 general_motion_retargeting（避免重新解析 git+https 依赖）
    for whl in "$INSTALL_DIR/pico_teleop/deps"/general_motion_retargeting*.whl; do
        if [ -f "$whl" ]; then
            echo "  安装: $(basename $whl) (--no-deps)"
            pip install --no-deps "$whl"
        fi
    done
fi

deactivate

# 4.5 安装 PXREA SDK 动态库（xrobotoolkit_sdk 依赖）
if [ -f "$INSTALL_DIR/pico_teleop/deps/libPXREARobotSDK.so" ]; then
    echo "安装 PXREA SDK 动态库..."
    cp "$INSTALL_DIR/pico_teleop/deps/libPXREARobotSDK.so" /usr/local/lib/
    ldconfig
    echo "  libPXREARobotSDK.so 已安装到 /usr/local/lib/"
else
    echo "警告: libPXREARobotSDK.so 不存在，xrobotoolkit_sdk 可能无法正常工作"
fi

# 5. 设置权限
echo "[5/6] 设置权限..."
chown -R "$SERVICE_USER:$SERVICE_USER" "$INSTALL_DIR" 2>/dev/null || true
chown -R "$SERVICE_USER:$SERVICE_USER" "$DATA_DIR" 2>/dev/null || true
chown -R "$SERVICE_USER:$SERVICE_USER" "$LOG_DIR" 2>/dev/null || true
chmod -R 777 "$INSTALL_DIR"
chmod -R 777 "$DATA_DIR"
chmod -R 777 "$LOG_DIR"

# 清理旧版 logrotate 配置（日志轮转现已由 Python 应用层处理）
if [ -f "/etc/logrotate.d/thinker-studio" ]; then
    echo "移除旧版 logrotate 配置..."
    rm -f "/etc/logrotate.d/thinker-studio"
fi

ensure_camera_compressed_lib() {
    local remote_host="192.168.41.2"
    local remote_user="nvidia"
    local remote_home="/home/${remote_user}"
    local remote_target_dir="${remote_home}/camera_compressed_lib"
    local remote_include_file="/opt/ros/humble/include/compressed_depth_image_transport/rvl_codec.hpp"
    local remote_lib_file="/opt/ros/humble/lib/libcompressed_depth_image_transport.so"

    if ! ping -c 1 -W 2 "${remote_host}" >/dev/null 2>&1; then
        echo "============================================================"
        echo "警告: ${remote_host} 未连接，因此未检测相机压缩库"
        echo "提示: 请先连接 ${remote_host}，否则不会执行 camera_compressed_lib 检查与安装"
        echo "============================================================"
        return 0
    fi

    if ! command -v sshpass >/dev/null 2>&1; then
        echo "检测到 sshpass 未安装，开始安装..."
        if ! apt-get update || ! apt-get install -y sshpass; then
            echo "警告: sshpass 安装失败，跳过 camera_compressed_lib 检查"
            return 0
        fi
    fi

    echo "检查 ${remote_user}@${remote_host} 上的 ROS 压缩库文件..."
    if sshpass -p "${remote_user}" ssh -o ConnectTimeout=5 -o StrictHostKeyChecking=no "${remote_user}@${remote_host}" "test -f '${remote_include_file}' && test -f '${remote_lib_file}'"; then
        echo "远端已存在所需文件，跳过 camera_compressed_lib 安装"
        return
    fi

    if [ ! -d "$SCRIPT_DIR/camera_compressed_lib" ]; then
        echo "警告: camera_compressed_lib 目录不存在，跳过"
        return
    fi

    echo "远端缺少 ROS 压缩库文件，开始传输并安装..."
    if ! sshpass -p "${remote_user}" rsync -av --progress --delete -e "ssh -o ConnectTimeout=5 -o StrictHostKeyChecking=no" "$SCRIPT_DIR/camera_compressed_lib/" "${remote_user}@${remote_host}:${remote_target_dir}/"; then
        echo "警告: 传输 camera_compressed_lib 失败，跳过后续安装"
        return 0
    fi
    if ! sshpass -p "${remote_user}" ssh -tt -o ConnectTimeout=5 -o StrictHostKeyChecking=no "${remote_user}@${remote_host}" "chmod +x '${remote_target_dir}/install_camera_compressed_lib.sh' && printf '%s\n' '${remote_user}' | sudo -S -p '' bash '${remote_target_dir}/install_camera_compressed_lib.sh'"; then
        echo "警告: 执行 install_camera_compressed_lib.sh 失败，但不影响后续流程，请检查 ${remote_host} 上是否已存在 ${remote_include_file} 和 ${remote_lib_file}"
        return 0
    fi
    echo "camera_compressed_lib 安装完成"
}

ensure_camera_compressed_lib || true

if [ "$SKIP_SYSTEMD" -eq 1 ]; then
    # echo "[6/6] 默认跳过 systemd 服务安装，使用直启模式"
    echo ""
    echo "[6/6] 安装完成，使用直启模式"
    echo "已安装到: $INSTALL_DIR"
    echo "数据目录: $DATA_DIR"
    echo "日志目录: $LOG_DIR"
    echo ""
    echo "直启命令: cd $INSTALL_DIR && bash run_server.sh"
    echo ""
else
    # 6. 安装 systemctl 服务（日志轮转由应用层 Python 处理）
    echo "[6/6] 安装 systemd 服务..."
    if [ -f "$INSTALL_DIR/thinker-studio.service" ]; then
        cp "$INSTALL_DIR/thinker-studio.service" /etc/systemd/system/
    else
        echo "错误: thinker-studio.service 文件不存在"
        exit 1
    fi

    # 重载 systemd
    systemctl daemon-reload

    # 启用开机启动
    systemctl enable thinker-studio.service

    # 重启服务
    echo ""
    echo "重启服务..."
    systemctl restart thinker-studio.service

    # 检查状态
    sleep 3
    systemctl status thinker-studio.service --no-pager

    echo ""
    echo "=== 安装完成 ==="
    echo "服务状态: systemctl status thinker-studio"
    echo "查看日志: journalctl -u thinker-studio -f"
    echo "停止服务: systemctl stop thinker-studio"
    echo "重启服务: systemctl restart thinker-studio"
    echo ""
    echo "安装目录: $INSTALL_DIR"
    echo "数据目录: $DATA_DIR"
    echo "日志目录: $LOG_DIR"
    echo "配置文件: $DATA_DIR/config/settings.json"
fi