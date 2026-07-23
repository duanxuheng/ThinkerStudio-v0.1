// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/ExceptionArray.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__EXCEPTION_ARRAY__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__EXCEPTION_ARRAY__STRUCT_H_

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
#include "bodyctrl_msgs/msg/detail/exception__struct.h"

/// Struct defined in msg/ExceptionArray in the package bodyctrl_msgs.
/**
  * @brief 异常码消息队列
 */
typedef struct bodyctrl_msgs__msg__ExceptionArray
{
  std_msgs__msg__Header header;
  bodyctrl_msgs__msg__Exception__Sequence alarm;
} bodyctrl_msgs__msg__ExceptionArray;

// Struct for a sequence of bodyctrl_msgs__msg__ExceptionArray.
typedef struct bodyctrl_msgs__msg__ExceptionArray__Sequence
{
  bodyctrl_msgs__msg__ExceptionArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__ExceptionArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__EXCEPTION_ARRAY__STRUCT_H_
