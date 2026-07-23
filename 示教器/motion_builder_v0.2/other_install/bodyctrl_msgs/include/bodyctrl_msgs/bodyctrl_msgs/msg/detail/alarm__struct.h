// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/Alarm.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__ALARM__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__ALARM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ALARM_INFO'.
enum
{
  bodyctrl_msgs__msg__Alarm__ALARM_INFO = 0
};

/// Constant 'ALARM_WARN'.
enum
{
  bodyctrl_msgs__msg__Alarm__ALARM_WARN = 1
};

/// Constant 'ALARM_ERROR'.
enum
{
  bodyctrl_msgs__msg__Alarm__ALARM_ERROR = 2
};

/// Constant 'ALARM_FATAL'.
enum
{
  bodyctrl_msgs__msg__Alarm__ALARM_FATAL = 3
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'node_name'
// Member 'description'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Alarm in the package bodyctrl_msgs.
/**
  * @brief 异常码消息定义
 */
typedef struct bodyctrl_msgs__msg__Alarm
{
  /// 时间戳
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__String node_name;
  /// 异常码
  int32_t error_code;
  int8_t level;
  /// 异常描述
  rosidl_runtime_c__String description;
} bodyctrl_msgs__msg__Alarm;

// Struct for a sequence of bodyctrl_msgs__msg__Alarm.
typedef struct bodyctrl_msgs__msg__Alarm__Sequence
{
  bodyctrl_msgs__msg__Alarm * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__Alarm__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__ALARM__STRUCT_H_
