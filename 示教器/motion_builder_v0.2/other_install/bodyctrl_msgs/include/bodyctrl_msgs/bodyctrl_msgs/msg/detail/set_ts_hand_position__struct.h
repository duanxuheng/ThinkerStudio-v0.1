// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/SetTsHandPosition.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_POSITION__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bend_angle'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SetTsHandPosition in the package bodyctrl_msgs.
/**
  * TsHandName
 */
typedef struct bodyctrl_msgs__msg__SetTsHandPosition
{
  int32_t name;
  /// thumb
  /// range: 0 ~ 90
  uint16_t rotation_angle;
  /// 0 - thumb, 1 - fore, 2 - middle, 3 - ring, 4 - little
  /// range: 0 ~ 90
  rosidl_runtime_c__uint16__Sequence bend_angle;
} bodyctrl_msgs__msg__SetTsHandPosition;

// Struct for a sequence of bodyctrl_msgs__msg__SetTsHandPosition.
typedef struct bodyctrl_msgs__msg__SetTsHandPosition__Sequence
{
  bodyctrl_msgs__msg__SetTsHandPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__SetTsHandPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_POSITION__STRUCT_H_
