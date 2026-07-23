// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/CmdSetWaistMotorPos.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_WAIST_MOTOR_POS__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_WAIST_MOTOR_POS__STRUCT_H_

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

/// Struct defined in msg/CmdSetWaistMotorPos in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__msg__CmdSetWaistMotorPos
{
  std_msgs__msg__Header header;
  double pos;
  double spd;
  double accel;
  double decel;
} bodyctrl_msgs__msg__CmdSetWaistMotorPos;

// Struct for a sequence of bodyctrl_msgs__msg__CmdSetWaistMotorPos.
typedef struct bodyctrl_msgs__msg__CmdSetWaistMotorPos__Sequence
{
  bodyctrl_msgs__msg__CmdSetWaistMotorPos * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__CmdSetWaistMotorPos__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_WAIST_MOTOR_POS__STRUCT_H_
