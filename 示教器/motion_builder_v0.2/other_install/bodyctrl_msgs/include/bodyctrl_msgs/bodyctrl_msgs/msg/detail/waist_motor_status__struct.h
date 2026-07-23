// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/WaistMotorStatus.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__WAIST_MOTOR_STATUS__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__WAIST_MOTOR_STATUS__STRUCT_H_

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

/// Struct defined in msg/WaistMotorStatus in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__msg__WaistMotorStatus
{
  std_msgs__msg__Header header;
  /// rad/s
  double pos;
  /// rad/s
  double vel;
  /// A
  double cur;
} bodyctrl_msgs__msg__WaistMotorStatus;

// Struct for a sequence of bodyctrl_msgs__msg__WaistMotorStatus.
typedef struct bodyctrl_msgs__msg__WaistMotorStatus__Sequence
{
  bodyctrl_msgs__msg__WaistMotorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__WaistMotorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__WAIST_MOTOR_STATUS__STRUCT_H_
