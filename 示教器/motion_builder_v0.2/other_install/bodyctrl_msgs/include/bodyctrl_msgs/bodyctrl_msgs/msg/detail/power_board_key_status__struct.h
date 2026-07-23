// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/PowerBoardKeyStatus.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__POWER_BOARD_KEY_STATUS__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__POWER_BOARD_KEY_STATUS__STRUCT_H_

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
// Member 'is_estop'
// Member 'is_remote_estop'
// Member 'is_power_on'
#include "std_msgs/msg/detail/bool__struct.h"

/// Struct defined in msg/PowerBoardKeyStatus in the package bodyctrl_msgs.
/**
  * @brief 电源板按键状态
 */
typedef struct bodyctrl_msgs__msg__PowerBoardKeyStatus
{
  std_msgs__msg__Header header;
  /// power board status
  uint32_t work_time;
  std_msgs__msg__Bool is_estop;
  std_msgs__msg__Bool is_remote_estop;
  std_msgs__msg__Bool is_power_on;
} bodyctrl_msgs__msg__PowerBoardKeyStatus;

// Struct for a sequence of bodyctrl_msgs__msg__PowerBoardKeyStatus.
typedef struct bodyctrl_msgs__msg__PowerBoardKeyStatus__Sequence
{
  bodyctrl_msgs__msg__PowerBoardKeyStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__PowerBoardKeyStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__POWER_BOARD_KEY_STATUS__STRUCT_H_
