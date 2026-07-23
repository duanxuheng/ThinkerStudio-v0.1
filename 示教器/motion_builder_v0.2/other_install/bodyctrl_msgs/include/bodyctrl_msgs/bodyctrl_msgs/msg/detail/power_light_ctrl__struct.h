// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/PowerLightCtrl.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__POWER_LIGHT_CTRL__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__POWER_LIGHT_CTRL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'POWER_LIGHT_BATTERY_SUPPLY'.
enum
{
  bodyctrl_msgs__msg__PowerLightCtrl__POWER_LIGHT_BATTERY_SUPPLY = 1l
};

/// Constant 'POWER_LIGHT_POWER_ON_START'.
enum
{
  bodyctrl_msgs__msg__PowerLightCtrl__POWER_LIGHT_POWER_ON_START = 2l
};

/// Constant 'POWER_LIGHT_POWER_ON_FINISH'.
enum
{
  bodyctrl_msgs__msg__PowerLightCtrl__POWER_LIGHT_POWER_ON_FINISH = 3l
};

/// Constant 'POWER_LIGHT_SERVICE_START'.
enum
{
  bodyctrl_msgs__msg__PowerLightCtrl__POWER_LIGHT_SERVICE_START = 4l
};

/// Constant 'POWER_LIGHT_SERVICE_FINISH'.
enum
{
  bodyctrl_msgs__msg__PowerLightCtrl__POWER_LIGHT_SERVICE_FINISH = 5l
};

/// Constant 'POWER_LIGHT_SELF_CHECK_START'.
enum
{
  bodyctrl_msgs__msg__PowerLightCtrl__POWER_LIGHT_SELF_CHECK_START = 6l
};

/// Constant 'POWER_LIGHT_SELF_CHECK_FAILED'.
enum
{
  bodyctrl_msgs__msg__PowerLightCtrl__POWER_LIGHT_SELF_CHECK_FAILED = 7l
};

/// Constant 'POWER_LIGHT_SELF_CHECK_SUCCESS'.
enum
{
  bodyctrl_msgs__msg__PowerLightCtrl__POWER_LIGHT_SELF_CHECK_SUCCESS = 8l
};

/// Constant 'POWER_LIGHT_FAULT_OCCUR'.
enum
{
  bodyctrl_msgs__msg__PowerLightCtrl__POWER_LIGHT_FAULT_OCCUR = 9l
};

/// Constant 'POWER_LIGHT_FAULT_CLEAR'.
enum
{
  bodyctrl_msgs__msg__PowerLightCtrl__POWER_LIGHT_FAULT_CLEAR = 10l
};

/// Constant 'POWER_LIGHT_VOICE_WAKEUP'.
enum
{
  bodyctrl_msgs__msg__PowerLightCtrl__POWER_LIGHT_VOICE_WAKEUP = 11l
};

/// Constant 'POWER_LIGHT_VOICE_RESPONSE'.
enum
{
  bodyctrl_msgs__msg__PowerLightCtrl__POWER_LIGHT_VOICE_RESPONSE = 12l
};

/// Constant 'POWER_LIGHT_VOICE_EXIT'.
enum
{
  bodyctrl_msgs__msg__PowerLightCtrl__POWER_LIGHT_VOICE_EXIT = 13l
};

/// Constant 'POWER_LIGHT_RUNNING_START'.
enum
{
  bodyctrl_msgs__msg__PowerLightCtrl__POWER_LIGHT_RUNNING_START = 14l
};

/// Constant 'POWER_LIGHT_RUNNING_FINISH'.
enum
{
  bodyctrl_msgs__msg__PowerLightCtrl__POWER_LIGHT_RUNNING_FINISH = 15l
};

/// Constant 'POWER_LIGHT_POWER_OFF'.
enum
{
  bodyctrl_msgs__msg__PowerLightCtrl__POWER_LIGHT_POWER_OFF = 16l
};

/// Constant 'POWER_LIGHT_WARN_OCCUR'.
enum
{
  bodyctrl_msgs__msg__PowerLightCtrl__POWER_LIGHT_WARN_OCCUR = 17l
};

/// Constant 'POWER_LIGHT_WARN_CLEAR'.
enum
{
  bodyctrl_msgs__msg__PowerLightCtrl__POWER_LIGHT_WARN_CLEAR = 18l
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/PowerLightCtrl in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__msg__PowerLightCtrl
{
  std_msgs__msg__Header header;
  int32_t cmd;
} bodyctrl_msgs__msg__PowerLightCtrl;

// Struct for a sequence of bodyctrl_msgs__msg__PowerLightCtrl.
typedef struct bodyctrl_msgs__msg__PowerLightCtrl__Sequence
{
  bodyctrl_msgs__msg__PowerLightCtrl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__PowerLightCtrl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__POWER_LIGHT_CTRL__STRUCT_H_
