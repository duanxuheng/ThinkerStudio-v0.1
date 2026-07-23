// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/PowerBoardCtrl.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__POWER_BOARD_CTRL__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__POWER_BOARD_CTRL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'POWER_LIGHT_POWER_ON_START'.
enum
{
  bodyctrl_msgs__msg__PowerBoardCtrl__POWER_LIGHT_POWER_ON_START = 1l
};

/// Constant 'POWER_LIGHT_POWER_ON_FINISH'.
enum
{
  bodyctrl_msgs__msg__PowerBoardCtrl__POWER_LIGHT_POWER_ON_FINISH = 2l
};

/// Constant 'POWER_LIGHT_SERVICE_START'.
enum
{
  bodyctrl_msgs__msg__PowerBoardCtrl__POWER_LIGHT_SERVICE_START = 3l
};

/// Constant 'POWER_LIGHT_SERVICE_FINISH'.
enum
{
  bodyctrl_msgs__msg__PowerBoardCtrl__POWER_LIGHT_SERVICE_FINISH = 4l
};

/// Constant 'POWER_LIGHT_SELF_CHECK_START'.
enum
{
  bodyctrl_msgs__msg__PowerBoardCtrl__POWER_LIGHT_SELF_CHECK_START = 5l
};

/// Constant 'POWER_LIGHT_SELF_CHECK_FAILED'.
enum
{
  bodyctrl_msgs__msg__PowerBoardCtrl__POWER_LIGHT_SELF_CHECK_FAILED = 6l
};

/// Constant 'POWER_LIGHT_SELF_CHECK_SUCCESS'.
enum
{
  bodyctrl_msgs__msg__PowerBoardCtrl__POWER_LIGHT_SELF_CHECK_SUCCESS = 7l
};

/// Constant 'POWER_LIGHT_FAULT_OCCUR'.
enum
{
  bodyctrl_msgs__msg__PowerBoardCtrl__POWER_LIGHT_FAULT_OCCUR = 8l
};

/// Constant 'POWER_LIGHT_FAULT_CLEAR'.
enum
{
  bodyctrl_msgs__msg__PowerBoardCtrl__POWER_LIGHT_FAULT_CLEAR = 9l
};

/// Constant 'POWER_LIGHT_VOICE_WAKEUP'.
enum
{
  bodyctrl_msgs__msg__PowerBoardCtrl__POWER_LIGHT_VOICE_WAKEUP = 10l
};

/// Constant 'POWER_LIGHT_VOICE_RESPONSE'.
enum
{
  bodyctrl_msgs__msg__PowerBoardCtrl__POWER_LIGHT_VOICE_RESPONSE = 11l
};

/// Constant 'POWER_LIGHT_VOICE_EXIT'.
enum
{
  bodyctrl_msgs__msg__PowerBoardCtrl__POWER_LIGHT_VOICE_EXIT = 12l
};

/// Constant 'POWER_LIGHT_RUNNING_START'.
enum
{
  bodyctrl_msgs__msg__PowerBoardCtrl__POWER_LIGHT_RUNNING_START = 13l
};

/// Constant 'POWER_LIGHT_RUNNING_FINISH'.
enum
{
  bodyctrl_msgs__msg__PowerBoardCtrl__POWER_LIGHT_RUNNING_FINISH = 14l
};

/// Constant 'POWER_LIGHT_POWER_OFF'.
enum
{
  bodyctrl_msgs__msg__PowerBoardCtrl__POWER_LIGHT_POWER_OFF = 15l
};

/// Constant 'POWER_LIGHT_WARN_OCCUR'.
enum
{
  bodyctrl_msgs__msg__PowerBoardCtrl__POWER_LIGHT_WARN_OCCUR = 16l
};

/// Constant 'POWER_LIGHT_WARN_CLEAR'.
enum
{
  bodyctrl_msgs__msg__PowerBoardCtrl__POWER_LIGHT_WARN_CLEAR = 17l
};

/// Constant 'POWER_SET_TIME_STAMP'.
enum
{
  bodyctrl_msgs__msg__PowerBoardCtrl__POWER_SET_TIME_STAMP = 100l
};

/// Constant 'POWER_GET_DATA_STATUS'.
enum
{
  bodyctrl_msgs__msg__PowerBoardCtrl__POWER_GET_DATA_STATUS = 101l
};

/// Constant 'POWER_GET_BATTERY_STATUS'.
enum
{
  bodyctrl_msgs__msg__PowerBoardCtrl__POWER_GET_BATTERY_STATUS = 102l
};

/// Constant 'POWER_GET_KEY_STATUS'.
enum
{
  bodyctrl_msgs__msg__PowerBoardCtrl__POWER_GET_KEY_STATUS = 103l
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/PowerBoardCtrl in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__msg__PowerBoardCtrl
{
  std_msgs__msg__Header header;
  int32_t cmd;
} bodyctrl_msgs__msg__PowerBoardCtrl;

// Struct for a sequence of bodyctrl_msgs__msg__PowerBoardCtrl.
typedef struct bodyctrl_msgs__msg__PowerBoardCtrl__Sequence
{
  bodyctrl_msgs__msg__PowerBoardCtrl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__PowerBoardCtrl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__POWER_BOARD_CTRL__STRUCT_H_
