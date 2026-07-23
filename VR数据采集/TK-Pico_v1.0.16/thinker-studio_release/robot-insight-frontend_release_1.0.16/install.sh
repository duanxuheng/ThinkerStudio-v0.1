#!/bin/bash
#
# install.sh - robot-insight-frontend 安装脚本
#
# 使用方法: sudo ./install.sh
#
# 功能:
# - 确保 nginx 已安装
# - 检测可用端口 (8888 或 7777)
# - 备份现有文件
# - 部署静态文件和 nginx 配置
# - 验证并重启 nginx
#

set -e

# ===================== 配置 =====================
SITE_NAME="robot-insight-frontend"
NGINX_CONF_DIR="/etc/nginx"
SITES_AVAILABLE="/etc/nginx/sites-available"
SITES_ENABLED="/etc/nginx/sites-enabled"
WWW_DIR="/var/www"
SITE_DIR="/var/www/${SITE_NAME}"
CONF_FILE="${SITE_NAME}.conf"

# ===================== 时间戳 =====================
TIMESTAMP=$(date +%Y%m%d%H%M%S)

# ===================== 路径状态 =====================
SITE_TMP_DIR="${SITE_DIR}.tmp.${TIMESTAMP}"

# ===================== 颜色输出 =====================
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

log_info() { echo -e "${BLUE}[INFO]${NC} $1"; }
log_ok() { echo -e "${GREEN}[OK]${NC} $1"; }
log_warn() { echo -e "${YELLOW}[WARN]${NC} $1"; }
log_error() { echo -e "${RED}[ERROR]${NC} $1"; }
log_success() { echo -e "${GREEN}[SUCCESS]${NC} $1"; }

# ===================== 前置检查 =====================
# 检查 sudo
if [ "$EUID" -ne 0 ]; then
    log_error "请使用 sudo 执行此脚本"
    exit 1
fi

# cd 到脚本所在目录
SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
cd "$SCRIPT_DIR"
log_info "工作目录: $SCRIPT_DIR"

# 检查必要文件
if [ ! -d "dist" ]; then
    log_error "dist 目录不存在"
    exit 1
fi
if [ ! -f "$CONF_FILE" ]; then
    log_error "$CONF_FILE 配置文件不存在"
    exit 1
fi

HAS_CONFIG_BACKUP=0
HAS_SITE_BACKUP=0
ROLLBACK_ENABLED=0

# ===================== 备份函数 =====================
backup_config() {
    if [ -f "${SITES_AVAILABLE}/${CONF_FILE}" ]; then
        mv "${SITES_AVAILABLE}/${CONF_FILE}" "${SITES_AVAILABLE}/${CONF_FILE}.bak.${TIMESTAMP}"
        HAS_CONFIG_BACKUP=1
        log_ok "已备份配置文件: ${CONF_FILE}.bak.${TIMESTAMP}"
    fi
}

backup_site() {
    if [ -d "$SITE_DIR" ]; then
        mv "$SITE_DIR" "${SITE_DIR}.bak.${TIMESTAMP}"
        HAS_SITE_BACKUP=1
        log_ok "已备份站点目录: ${SITE_DIR}.bak.${TIMESTAMP}"
    fi
}

clean_old_backups() {
    # 清理旧备份
    find "$SITES_AVAILABLE" -name "${CONF_FILE}.bak.*" -type f -delete 2>/dev/null || true
    find "$WWW_DIR" -name "${SITE_NAME}.bak.*" -type d -exec rm -rf {} + 2>/dev/null || true
    find "$WWW_DIR" -name "${SITE_NAME}.tmp.*" -type d -exec rm -rf {} + 2>/dev/null || true
    log_ok "已清理旧备份文件"
}

# ===================== 回滚函数 =====================
rollback() {
    trap - ERR
    ROLLBACK_ENABLED=0
    log_error "安装失败，正在回滚..."

    # 删除本次安装生成的新文件，避免恢复时把备份目录移动到新目录内部
    rm -f "${SITES_ENABLED}/${CONF_FILE}" 2>/dev/null || true
    rm -f "${SITES_AVAILABLE}/${CONF_FILE}" 2>/dev/null || true
    rm -rf "$SITE_TMP_DIR" 2>/dev/null || true
    rm -rf "$SITE_DIR" 2>/dev/null || true

    # 恢复配置文件
    if [ "$HAS_CONFIG_BACKUP" -eq 1 ] && [ -f "${SITES_AVAILABLE}/${CONF_FILE}.bak.${TIMESTAMP}" ]; then
        mv "${SITES_AVAILABLE}/${CONF_FILE}.bak.${TIMESTAMP}" "${SITES_AVAILABLE}/${CONF_FILE}"
        ln -sfn "${SITES_AVAILABLE}/${CONF_FILE}" "${SITES_ENABLED}/${CONF_FILE}"
        log_ok "已恢复配置文件"
    fi

    # 恢复站点目录
    if [ "$HAS_SITE_BACKUP" -eq 1 ] && [ -d "${SITE_DIR}.bak.${TIMESTAMP}" ]; then
        mv "${SITE_DIR}.bak.${TIMESTAMP}" "$SITE_DIR"
        log_ok "已恢复站点目录"
    fi

    # 重启 nginx
    systemctl restart nginx || true
    log_ok "已重启 nginx"
    log_warn "回滚完成"
    exit 1
}

handle_error() {
    local exit_code=$?
    if [ "$ROLLBACK_ENABLED" -eq 1 ]; then
        rollback
    fi
    exit "$exit_code"
}

handle_signal() {
    if [ "$ROLLBACK_ENABLED" -eq 1 ]; then
        rollback
    fi
    exit 130
}

trap 'handle_error' ERR
trap 'handle_signal' INT TERM

# ===================== 端口检测 =====================
# 检查端口是否被当前站点占用
is_port_used_by_self() {
    local port=$1
    # 检查当前站点配置是否存在且监听该端口
    if [ -f "${SITES_AVAILABLE}/${CONF_FILE}" ]; then
        if grep -q "listen ${port}" "${SITES_AVAILABLE}/${CONF_FILE}"; then
            return 0  # 是自己占用的
        fi
    fi
    return 1  # 不是自己占用的
}

# 检查端口是否被其他服务占用
is_port_used_by_other() {
    local port=$1
    # 如果端口被监听，且不是自己占用的，则是其他服务占用
    if ss -tlnp | grep -q ":${port} " && ! is_port_used_by_self "$port"; then
        return 0  # 被其他服务占用
    fi
    return 1  # 未被其他服务占用
}

detect_port() {
    PORT=""
    for p in 8888 7777; do
        # 检查是否被自己占用（重复安装场景）
        if is_port_used_by_self "$p"; then
            PORT=$p
            log_ok "端口 ${PORT} 已被当前站点占用，继续使用"
            return
        fi
        # 检查是否被其他服务占用
        if ! is_port_used_by_other "$p"; then
            PORT=$p
            log_ok "将使用端口: $PORT"
            return
        fi
        log_warn "端口 ${p} 已被其他服务占用"
    done
    log_error "端口 8888 和 7777 都已被其他服务占用"
    return 1
}

# ===================== nginx 检查与安装 =====================
ensure_nginx() {
    log_info "正在检查 nginx..."
    if ! command -v nginx &> /dev/null; then
        log_info "nginx 未安装，正在安装..."
        apt update -qq
        apt install nginx -y -qq
        log_ok "nginx 已安装"
    else
        log_ok "nginx 已安装"
    fi
}

# ===================== 配置目录检查 =====================
ensure_dirs() {
    if [ ! -d "$SITES_AVAILABLE" ]; then
        mkdir -p "$SITES_AVAILABLE"
        log_ok "已创建 sites-available 目录"
    fi
    if [ ! -d "$SITES_ENABLED" ]; then
        mkdir -p "$SITES_ENABLED"
        log_ok "已创建 sites-enabled 目录"
    fi
}

# ===================== nginx.conf include 检查 =====================
ensure_include() {
    NGINX_CONF="${NGINX_CONF_DIR}/nginx.conf"

    if grep -q "include.*sites-enabled" "$NGINX_CONF"; then
        log_ok "nginx.conf 已包含 sites-enabled"
        return
    fi

    log_info "正在添加 sites-enabled include..."
    # 在 http 块末尾添加 include
    sed -i '/http {/a\    include /etc/nginx/sites-enabled/*;' "$NGINX_CONF"
    log_ok "已添加 include 到 nginx.conf"
}

# ===================== 生成配置文件 =====================
generate_config() {
    # 读取模板并替换端口和路径
    sed -e "s/listen 80;/listen ${PORT};/" \
        -e "s|{{PROJECT_DIR}}/dist|${SITE_DIR}|g" \
        "$CONF_FILE" > "${SITES_AVAILABLE}/${CONF_FILE}"
    log_ok "已生成配置文件 (端口: ${PORT})"
}

# ===================== 部署静态文件 =====================
deploy_site() {
    log_info "正在复制静态文件..."
    rm -rf "$SITE_TMP_DIR"
    mkdir -p "$SITE_TMP_DIR"

    # 先复制到临时目录，复制完成后再原子切换到正式目录
    cp -a dist/. "$SITE_TMP_DIR/"
    mv "$SITE_TMP_DIR" "$SITE_DIR"
    log_ok "静态文件已通过临时目录切换部署到 ${SITE_DIR}"
}

# ===================== 部署 nginx 配置 =====================
deploy_config() {
    log_info "正在部署 nginx 配置..."

    # 清理 sites-enabled 中的旧入口，兼容软链接和普通文件
    if [ -L "${SITES_ENABLED}/${CONF_FILE}" ]; then
        rm "${SITES_ENABLED}/${CONF_FILE}"
        log_ok "已删除旧软链接"
    elif [ -e "${SITES_ENABLED}/${CONF_FILE}" ]; then
        rm -f "${SITES_ENABLED}/${CONF_FILE}"
        log_ok "已删除旧配置入口"
    fi

    # 生成新配置
    generate_config

    # 创建软链接
    ln -sfn "${SITES_AVAILABLE}/${CONF_FILE}" "${SITES_ENABLED}/${CONF_FILE}"
    log_ok "配置已部署并链接"
}

# ===================== 验证 nginx 配置 =====================
validate_nginx() {
    log_info "正在验证 nginx 配置..."
    if ! nginx -t; then
        rollback
    fi
    log_ok "nginx 配置验证通过"
}

# ===================== 重启 nginx =====================
restart_nginx() {
    log_info "正在重启 nginx..."
    if ! systemctl restart nginx; then
        rollback
    fi
    log_ok "nginx 已重启"
}

# ===================== 端口监听验证 =====================
verify_port() {
    log_info "正在验证端口监听..."
    sleep 2  # 等待 nginx 启动
    if ! ss -tlnp | grep -q ":${PORT} "; then
        log_error "端口 ${PORT} 未监听"
        rollback
    fi
    log_ok "端口 ${PORT} 已监听"
}

# ===================== 获取服务器 IP =====================
get_server_ip() {
    # 获取主要网卡的 IP
    ip addr show | grep -oP 'inet \K[\d.]+(?!127\.0\.0\.1)' | head -1 || echo "localhost"
}

# ===================== 主流程 =====================
main() {
    log_info "===== 开始安装 ${SITE_NAME} ====="

    # 1. 确保 nginx 已安装
    ensure_nginx

    # 2. 确保目录存在
    ensure_dirs

    # 3. 清理旧备份
    clean_old_backups

    # 4. 检测可用端口（在备份前执行，确保端口判断时配置文件仍在原位置）
    log_info "正在检测可用端口..."
    detect_port

    # 从备份开始后，任何失败都需要回滚
    ROLLBACK_ENABLED=1

    # 5. 备份现有文件
    log_info "正在备份现有文件..."
    backup_config
    backup_site

    # 6. 部署静态文件
    deploy_site

    # 7. 部署 nginx 配置
    deploy_config

    # 8. 确保 include
    ensure_include

    # 9. 验证配置
    validate_nginx

    # 10. 重启 nginx
    restart_nginx

    # 11. 验证端口监听
    verify_port

    ROLLBACK_ENABLED=0

    # 完成
    SERVER_IP=$(get_server_ip)
    log_success "安装完成！请访问 http://${SERVER_IP}:${PORT}"
}

main