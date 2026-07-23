#!/bin/bash

set -e

if [ "$(id -u)" -ne 0 ]; then
	echo "请使用 root 或 sudo 执行 install_camera_compressed_lib.sh"
	exit 1
fi

export ROS_DISIRO=humble
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
apt-get update
apt-get install -y libgflags-dev nlohmann-json3-dev ros-$ROS_DISIRO-image-transport ros-$ROS_DISIRO-image-transport-plugins ros-$ROS_DISIRO-compressed-image-transport ros-$ROS_DISIRO-image-publisher ros-$ROS_DISIRO-camera-info-manager

cp "$SCRIPT_DIR/rvl_codec.hpp" /opt/ros/$ROS_DISIRO/include/compressed_depth_image_transport/
cp "$SCRIPT_DIR/libcompressed_depth_image_transport.so" /opt/ros/$ROS_DISIRO/lib/