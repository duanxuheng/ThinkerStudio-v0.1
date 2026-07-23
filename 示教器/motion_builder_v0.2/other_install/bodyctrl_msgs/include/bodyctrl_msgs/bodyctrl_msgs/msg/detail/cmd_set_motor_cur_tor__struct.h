// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/CmdSetMotorCurTor.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_MOTOR_CUR_TOR__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_MOTOR_CUR_TOR__STRUCT_H_

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
// Member 'cmds'
#include "bodyctrl_msgs/msg/detail/set_motor_cur_tor__struct.h"

/// Struct defined in msg/CmdSetMotorCurTor in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__msg__CmdSetMotorCurTor
{
  std_msgs__msg__Header header;
  bodyctrl_msgs__msg__SetMotorCurTor__Sequence cmds;
} bodyctrl_msgs__msg__CmdSetMotorCurTor;

// Struct for a sequence of bodyctrl_msgs__msg__CmdSetMotorCurTor.
typedef struct bodyctrl_msgs__msg__CmdSetMotorCurTor__Sequence
{
  bodyctrl_msgs__msg__CmdSetMotorCurTor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__CmdSetMotorCurTor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_MOTOR_CUR_TOR__STRUCT_H_
