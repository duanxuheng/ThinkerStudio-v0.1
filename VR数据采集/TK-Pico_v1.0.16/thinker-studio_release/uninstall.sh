#!/bin/bash
#
# Thinker-Studio Uninstallation Script
# Version: 1.0.16
#
# Usage: sudo bash uninstall.sh
#
# 功能：
# - 停止服务
# - 禁用服务
# - 卸载前端
# - 删除文件（可选保留 venv）
# - 删除用户（可选）
# - 提示确认删除数据目录
#

set -e

# 检查 sudo 权限
if [ "$EUID" -ne 0 ]; then
    echo "错误: 请使用 sudo 执行此脚本"
    exit 1
fi

SERVICE_NAME="thinker-studio"
SERVICE_USER="thinker-studio"
INSTALL_DIR="/opt/thinker-studio"
VENV_DIR="$INSTALL_DIR/venv"
DATA_DIR="/var/lib/thinker-studio"
LOG_DIR="/var/log/thinker-studio"

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

echo "=== Thinker-Studio 卸载脚本 ==="
echo ""

# 1. 停止服务
echo "[1/7] 停止服务..."
if systemctl is-active --quiet "$SERVICE_NAME.service"; then
    systemctl stop "$SERVICE_NAME.service"
    echo "服务已停止"
else
    echo "服务未运行"
fi

# 2. 禁用服务
echo "[2/7] 禁用服务..."
if systemctl is-enabled --quiet "$SERVICE_NAME.service" 2>/dev/null; then
    systemctl disable "$SERVICE_NAME.service"
    echo "服务已禁用"
fi

# 删除服务文件
if [ -f "/etc/systemd/system/$SERVICE_NAME.service" ]; then
    rm -f "/etc/systemd/system/$SERVICE_NAME.service"
    systemctl daemon-reload
    echo "服务文件已删除"
fi

# 3. 卸载前端（如果存在）
echo "[3/7] 卸载前端..."
FRONTEND_DIR=$(find "$SCRIPT_DIR" -maxdepth 1 -type d -name "robot-insight-frontend_release_*" | head -1)
if [ -n "$FRONTEND_DIR" ] && [ -d "$FRONTEND_DIR" ]; then
    if [ -f "$FRONTEND_DIR/uninstall.sh" ]; then
        echo "检测到前端安装包: $(basename "$FRONTEND_DIR")"
        cd "$FRONTEND_DIR"
        bash uninstall.sh
        echo "前端卸载完成"
        cd "$SCRIPT_DIR"
    else
        echo "警告: 前端 uninstall.sh 不存在，跳过前端卸载"
    fi
else
    echo "未检测到前端安装包，跳过前端卸载"
fi

# 4. 询问是否保留 venv（默认保留）
echo "[4/7] 处理虚拟环境..."
KEEP_VENV=true
if [ -d "$VENV_DIR" ]; then
    echo ""
    echo "虚拟环境: $VENV_DIR"
    echo "保留 venv 可避免下次安装时重新下载依赖（节省时间）"
    echo ""
    read -p "是否删除虚拟环境? (y/N): " choice
    case "$choice" in
        y|Y|yes|YES)
            KEEP_VENV=false
            echo "将删除虚拟环境"
            ;;
        *)
            echo "保留虚拟环境: $VENV_DIR"
            ;;
    esac
else
    echo "虚拟环境不存在"
fi

# 4.5 删除 PXREA SDK 动态库
echo "[4.5/7] 删除 PXREA SDK 动态库..."
if [ -f "/usr/local/lib/libPXREARobotSDK.so" ]; then
    rm -f "/usr/local/lib/libPXREARobotSDK.so"
    ldconfig
    echo "libPXREARobotSDK.so 已删除"
else
    echo "libPXREARobotSDK.so 不存在，跳过"
fi

# 5. 删除安装目录
echo "[5/7] 删除安装目录..."
if [ -d "$INSTALL_DIR" ]; then
    if [ "$KEEP_VENV" = true ] && [ -d "$VENV_DIR" ]; then
        # 保留 venv，删除其他文件
        find "$INSTALL_DIR" -mindepth 1 -maxdepth 1 ! -name 'venv' -exec rm -rf {} +
        echo "安装目录已清理（保留 venv）: $INSTALL_DIR"
    else
        # 删除整个目录
        rm -rf "$INSTALL_DIR"
        echo "安装目录已删除: $INSTALL_DIR"
    fi
fi

# 删除日志目录
if [ -d "$LOG_DIR" ]; then
    rm -rf "$LOG_DIR"
    echo "日志目录已删除: $LOG_DIR"
fi

# 6. 删除用户（可选）
echo "[6/7] 删除服务用户..."
if id "$SERVICE_USER" &>/dev/null; then
    read -p "是否删除服务用户 '$SERVICE_USER'? (y/N): " choice
    case "$choice" in
        y|Y|yes|YES)
            userdel "$SERVICE_USER" 2>/dev/null || true
            echo "用户已删除: $SERVICE_USER"
            ;;
        *)
            echo "保留用户: $SERVICE_USER"
            ;;
    esac
fi

# 7. 提示确认删除数据目录
echo "[7/7] 处理数据目录..."
if [ -d "$DATA_DIR" ]; then
    echo ""
    echo "警告: 数据目录 $DATA_DIR 包含用户数据!"
    echo "删除后数据将无法恢复!"
    echo ""
    read -p "是否删除数据目录 '$DATA_DIR'? (y/N): " choice
    case "$choice" in
        y|Y|yes|YES)
            rm -rf "$DATA_DIR"
            echo "数据目录已删除: $DATA_DIR"
            ;;
        *)
            echo "保留数据目录: $DATA_DIR"
            ;;
    esac
fi

echo ""
echo "=== 卸载完成 ==="
if [ "$KEEP_VENV" = true ] && [ -d "$VENV_DIR" ]; then
    echo ""
    echo "提示: 虚拟环境已保留，下次安装时无需重新下载依赖"
fi