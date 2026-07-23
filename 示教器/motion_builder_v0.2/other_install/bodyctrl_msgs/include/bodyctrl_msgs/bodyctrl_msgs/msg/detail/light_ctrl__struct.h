// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/LightCtrl.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__LIGHT_CTRL__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__LIGHT_CTRL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TOPIC_NAME'.
static const char * const bodyctrl_msgs__msg__LightCtrl__TOPIC_NAME = "/xsys/light/ctrl";

/// Constant 'CMD_SYSTEM_SHUTTING'.
/**
  * 系统
  * 关机中
 */
enum
{
  bodyctrl_msgs__msg__LightCtrl__CMD_SYSTEM_SHUTTING = 0l
};

/// Constant 'CMD_SYSTEM_ERROR_OCCUR'.
/**
  * 故障
 */
enum
{
  bodyctrl_msgs__msg__LightCtrl__CMD_SYSTEM_ERROR_OCCUR = 10l
};

/// Constant 'CMD_SYSTEM_ERROR_CLEAR'.
/**
  * 故障消除
 */
enum
{
  bodyctrl_msgs__msg__LightCtrl__CMD_SYSTEM_ERROR_CLEAR = 11l
};

/// Constant 'CMD_SYSTEM_WARN_OCCUR'.
/**
  * 告警
 */
enum
{
  bodyctrl_msgs__msg__LightCtrl__CMD_SYSTEM_WARN_OCCUR = 12l
};

/// Constant 'CMD_SYSTEM_WARN_CLEAR'.
/**
  * 告警消除
 */
enum
{
  bodyctrl_msgs__msg__LightCtrl__CMD_SYSTEM_WARN_CLEAR = 13l
};

/// Constant 'CMD_SYSTEM_SERVICE_WAIT'.
/**
  * 服务等待中
 */
enum
{
  bodyctrl_msgs__msg__LightCtrl__CMD_SYSTEM_SERVICE_WAIT = 20l
};

/// Constant 'CMD_SYSTEM_SERVICE_START'.
/**
  * 服务启动中
 */
enum
{
  bodyctrl_msgs__msg__LightCtrl__CMD_SYSTEM_SERVICE_START = 21l
};

/// Constant 'CMD_SYSTEM_SERVICE_READY'.
/**
  * 服务就绪
 */
enum
{
  bodyctrl_msgs__msg__LightCtrl__CMD_SYSTEM_SERVICE_READY = 22l
};

/// Constant 'CMD_SYSTEM_SERVICE_FAILED'.
/**
  * 服务启动失败
 */
enum
{
  bodyctrl_msgs__msg__LightCtrl__CMD_SYSTEM_SERVICE_FAILED = 23l
};

/// Constant 'CMD_SYSTEM_STANDBY'.
/**
  * 系统待机
 */
enum
{
  bodyctrl_msgs__msg__LightCtrl__CMD_SYSTEM_STANDBY = 99l
};

/// Constant 'CMD_OTA_QUIT'.
/**
  * 基础组件
  * 升级退出
 */
enum
{
  bodyctrl_msgs__msg__LightCtrl__CMD_OTA_QUIT = 100l
};

/// Constant 'CMD_OTA_START'.
/**
  * 升级开始
 */
enum
{
  bodyctrl_msgs__msg__LightCtrl__CMD_OTA_START = 101l
};

/// Constant 'CMD_POWER_QUIT'.
/**
  * 电源
  * 电量状态退出
 */
enum
{
  bodyctrl_msgs__msg__LightCtrl__CMD_POWER_QUIT = 200l
};

/// Constant 'CMD_POWER_BATTERY_NORMAL'.
/**
  * 放电中，电量充足
 */
enum
{
  bodyctrl_msgs__msg__LightCtrl__CMD_POWER_BATTERY_NORMAL = 201l
};

/// Constant 'CMD_POWER_BATTERY_LOW'.
/**
  * 放电中，低电量
 */
enum
{
  bodyctrl_msgs__msg__LightCtrl__CMD_POWER_BATTERY_LOW = 202l
};

/// Constant 'CMD_POWER_BATTERY_CRITICAL'.
/**
  * 放电中，电量危急
 */
enum
{
  bodyctrl_msgs__msg__LightCtrl__CMD_POWER_BATTERY_CRITICAL = 203l
};

/// Constant 'CMD_POWER_CHARGING'.
/**
  * 充电中
 */
enum
{
  bodyctrl_msgs__msg__LightCtrl__CMD_POWER_CHARGING = 210l
};

/// Constant 'CMD_POWER_CHARGING_FULL'.
/**
  * 充电中，已充满
 */
enum
{
  bodyctrl_msgs__msg__LightCtrl__CMD_POWER_CHARGING_FULL = 211l
};

/// Constant 'CMD_POWER_BACKUP_NORMAL'.
/**
  * 备份电池放电中
 */
enum
{
  bodyctrl_msgs__msg__LightCtrl__CMD_POWER_BACKUP_NORMAL = 220l
};

/// Constant 'CMD_CHAT_QUIT'.
/**
  * 交互
  * 对话结束，已休眠
 */
enum
{
  bodyctrl_msgs__msg__LightCtrl__CMD_CHAT_QUIT = 300l
};

/// Constant 'CMD_CHAT_WAKEUP'.
/**
  * 对话开始，已唤醒
 */
enum
{
  bodyctrl_msgs__msg__LightCtrl__CMD_CHAT_WAKEUP = 301l
};

/// Constant 'CMD_CHAT_ASR'.
/**
  * 拾音中
 */
enum
{
  bodyctrl_msgs__msg__LightCtrl__CMD_CHAT_ASR = 310l
};

/// Constant 'CMD_CHAT_LLM'.
/**
  * 推理中
 */
enum
{
  bodyctrl_msgs__msg__LightCtrl__CMD_CHAT_LLM = 311l
};

/// Constant 'CMD_CHAT_TTS'.
/**
  * 合成中
 */
enum
{
  bodyctrl_msgs__msg__LightCtrl__CMD_CHAT_TTS = 312l
};

/// Constant 'CMD_CHAT_PLAY'.
/**
  * 应答播报中
 */
enum
{
  bodyctrl_msgs__msg__LightCtrl__CMD_CHAT_PLAY = 313l
};

/// Constant 'CMD_CHAT_NET_OFFLINE'.
/**
  * 断网
 */
enum
{
  bodyctrl_msgs__msg__LightCtrl__CMD_CHAT_NET_OFFLINE = 320l
};

/// Constant 'CMD_CHAT_NET_ONLINE'.
/**
  * 网络恢复
 */
enum
{
  bodyctrl_msgs__msg__LightCtrl__CMD_CHAT_NET_ONLINE = 321l
};

/// Constant 'CMD_MOTION_QUIT'.
/**
  * 运动
  * 运动退出
 */
enum
{
  bodyctrl_msgs__msg__LightCtrl__CMD_MOTION_QUIT = 400l
};

/// Constant 'CMD_MOTION_RUNNING'.
/**
  * 奔跑中
 */
enum
{
  bodyctrl_msgs__msg__LightCtrl__CMD_MOTION_RUNNING = 401l
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'caller_id'
// Member 'caller_msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LightCtrl in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__msg__LightCtrl
{
  std_msgs__msg__Header header;
  /// 灯效定义
  int32_t cmd;
  /// 可选的载荷数据
  rosidl_runtime_c__int8__Sequence data;
  /// 调用方身份
  rosidl_runtime_c__String caller_id;
  /// 调用方提供的描述信息 —— 基于什么原因更新了灯效，用作日志审计目的
  rosidl_runtime_c__String caller_msg;
} bodyctrl_msgs__msg__LightCtrl;

// Struct for a sequence of bodyctrl_msgs__msg__LightCtrl.
typedef struct bodyctrl_msgs__msg__LightCtrl__Sequence
{
  bodyctrl_msgs__msg__LightCtrl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__LightCtrl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__LIGHT_CTRL__STRUCT_H_
