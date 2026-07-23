// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/TsHandStatusMsg.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__TS_HAND_STATUS_MSG__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__TS_HAND_STATUS_MSG__STRUCT_H_

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
#include "bodyctrl_msgs/msg/detail/ts_hand_status__struct.h"

/// Struct defined in msg/TsHandStatusMsg in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__msg__TsHandStatusMsg
{
  std_msgs__msg__Header header;
  bodyctrl_msgs__msg__TsHandStatus__Sequence status;
} bodyctrl_msgs__msg__TsHandStatusMsg;

// Struct for a sequence of bodyctrl_msgs__msg__TsHandStatusMsg.
typedef struct bodyctrl_msgs__msg__TsHandStatusMsg__Sequence
{
  bodyctrl_msgs__msg__TsHandStatusMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__TsHandStatusMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__TS_HAND_STATUS_MSG__STRUCT_H_
