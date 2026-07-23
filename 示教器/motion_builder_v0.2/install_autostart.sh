#!/usr/bin/env bash
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
SERVICE_NAME="tienkung-trigger-player.service"
SYSTEMD_DIR="/etc/systemd/system"
USER_SYSTEMD_DIR="/home/ubuntu/.config/systemd/user"

if [[ "${EUID}" -ne 0 ]]; then
	exec sudo "$0" "$@"
fi

chmod +x "$SCRIPT_DIR/run_real.sh"

if sudo -u ubuntu systemctl --user list-unit-files | grep -q "^${SERVICE_NAME}"; then
	sudo -u ubuntu systemctl --user disable --now "$SERVICE_NAME" || true
	rm -f "$USER_SYSTEMD_DIR/$SERVICE_NAME"
fi

cp "$SCRIPT_DIR/systemd/$SERVICE_NAME" "$SYSTEMD_DIR/$SERVICE_NAME"

systemctl daemon-reload
systemctl enable "$SERVICE_NAME"
systemctl restart "$SERVICE_NAME"

echo "Installed and started (system-wide): $SERVICE_NAME"
echo "Check status: systemctl status $SERVICE_NAME"
echo "Check logs:   journalctl -u $SERVICE_NAME -f"