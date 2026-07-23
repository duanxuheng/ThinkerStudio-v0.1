// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/CmdSetParam.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_PARAM__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_PARAM__STRUCT_H_

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
#include "bodyctrl_msgs/msg/detail/set_param__struct.h"

/// Struct defined in msg/CmdSetParam in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__msg__CmdSetParam
{
  std_msgs__msg__Header header;
  bodyctrl_msgs__msg__SetParam__Sequence cmds;
} bodyctrl_msgs__msg__CmdSetParam;

// Struct for a sequence of bodyctrl_msgs__msg__CmdSetParam.
typedef struct bodyctrl_msgs__msg__CmdSetParam__Sequence
{
  bodyctrl_msgs__msg__CmdSetParam * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__CmdSetParam__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_PARAM__STRUCT_H_
