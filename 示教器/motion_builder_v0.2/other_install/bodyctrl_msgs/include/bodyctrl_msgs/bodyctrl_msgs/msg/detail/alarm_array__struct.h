// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/AlarmArray.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__ALARM_ARRAY__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__ALARM_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'alarm'
#include "bodyctrl_msgs/msg/detail/alarm__struct.h"

/// Struct defined in msg/AlarmArray in the package bodyctrl_msgs.
/**
  * @brief 异常码消息队列
 */
typedef struct bodyctrl_msgs__msg__AlarmArray
{
  std_msgs__msg__Header header;
  bodyctrl_msgs__msg__Alarm__Sequence alarm;
} bodyctrl_msgs__msg__AlarmArray;

// Struct for a sequence of bodyctrl_msgs__msg__AlarmArray.
typedef struct bodyctrl_msgs__msg__AlarmArray__Sequence
{
  bodyctrl_msgs__msg__AlarmArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__AlarmArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__ALARM_ARRAY__STRUCT_H_
