// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/MotorStatusMsg1.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG1__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG1__STRUCT_H_

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
// Member 'status'
#include "bodyctrl_msgs/msg/detail/motor_status1__struct.h"

/// Struct defined in msg/MotorStatusMsg1 in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__msg__MotorStatusMsg1
{
  std_msgs__msg__Header header;
  bodyctrl_msgs__msg__MotorStatus1__Sequence status;
} bodyctrl_msgs__msg__MotorStatusMsg1;

// Struct for a sequence of bodyctrl_msgs__msg__MotorStatusMsg1.
typedef struct bodyctrl_msgs__msg__MotorStatusMsg1__Sequence
{
  bodyctrl_msgs__msg__MotorStatusMsg1 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__MotorStatusMsg1__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG1__STRUCT_H_
