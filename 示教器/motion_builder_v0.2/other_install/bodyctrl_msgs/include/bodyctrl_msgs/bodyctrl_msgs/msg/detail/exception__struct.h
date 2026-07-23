// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/Exception.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__EXCEPTION__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__EXCEPTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'desc'
// Member 'nodename'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Exception in the package bodyctrl_msgs.
/**
  * @brief 异常码消息定义
 */
typedef struct bodyctrl_msgs__msg__Exception
{
  /// 时间戳
  builtin_interfaces__msg__Time stamp;
  /// 异常码
  int64_t code;
  /// 异常描述
  rosidl_runtime_c__String desc;
  /// 节点名称
  rosidl_runtime_c__String nodename;
} bodyctrl_msgs__msg__Exception;

// Struct for a sequence of bodyctrl_msgs__msg__Exception.
typedef struct bodyctrl_msgs__msg__Exception__Sequence
{
  bodyctrl_msgs__msg__Exception * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__Exception__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__EXCEPTION__STRUCT_H_
