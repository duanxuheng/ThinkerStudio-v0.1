#!/bin/bash
#
# uninstall.sh - robot-insight-frontend 卸载脚本
#
# 使用方法: sudo ./uninstall.sh
#
# 功能:
# - 删除 nginx 配置文件和软链接
# - 删除站点静态文件目录
# - 删除所有备份文件
# - 重启 nginx
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
if [ "$EUID" -ne 0 ]; then
    log_error "请使用 sudo 执行此脚本"
    exit 1
fi

# ===================== 主流程 =====================
main() {
    log_info "===== 开始卸载 ${SITE_NAME} ====="

    # 1. 删除 nginx 配置文件
    log_info "正在删除 nginx 配置..."
    if [ -f "${SITES_AVAILABLE}/${CONF_FILE}" ]; then
        rm "${SITES_AVAILABLE}/${CONF_FILE}"
        log_ok "已删除 ${SITES_AVAILABLE}/${CONF_FILE}"
    else
        log_warn "配置文件不存在: ${SITES_AVAILABLE}/${CONF_FILE}"
    fi

    # 2. 删除软链接
    if [ -L "${SITES_ENABLED}/${CONF_FILE}" ]; then
        rm "${SITES_ENABLED}/${CONF_FILE}"
        log_ok "已删除软链接: ${SITES_ENABLED}/${CONF_FILE}"
    elif [ -f "${SITES_ENABLED}/${CONF_FILE}" ]; then
        rm "${SITES_ENABLED}/${CONF_FILE}"
        log_ok "已删除: ${SITES_ENABLED}/${CONF_FILE}"
    else
        log_warn "软链接不存在: ${SITES_ENABLED}/${CONF_FILE}"
    fi

    # 3. 删除站点目录
    log_info "正在删除站点文件..."
    if [ -d "$SITE_DIR" ]; then
        rm -rf "$SITE_DIR"
        log_ok "已删除站点目录: ${SITE_DIR}"
    else
        log_warn "站点目录不存在: ${SITE_DIR}"
    fi

    # 4. 删除所有备份文件
    log_info "正在清理备份文件..."
    # 清理配置备份
    find "$SITES_AVAILABLE" -name "${CONF_FILE}.bak.*" -type f -delete 2>/dev/null || true
    # 清理站点备份
    find "$WWW_DIR" -name "${SITE_NAME}.bak.*" -type d -exec rm -rf {} + 2>/dev/null || true
    log_ok "已清理备份文件"

    # 5. 重启 nginx
    log_info "正在重启 nginx..."
    systemctl restart nginx || true
    log_ok "nginx 已重启"

    # 完成
    log_success "卸载完成"
}

main