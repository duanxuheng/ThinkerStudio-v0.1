// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/SbusData.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SBUS_DATA__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__SBUS_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'KEY_NONE'.
enum
{
  bodyctrl_msgs__msg__SbusData__KEY_NONE = 0l
};

/// Constant 'KEY_A_UP'.
enum
{
  bodyctrl_msgs__msg__SbusData__KEY_A_UP = 1l
};

/// Constant 'KEY_A_DOWN'.
enum
{
  bodyctrl_msgs__msg__SbusData__KEY_A_DOWN = 2l
};

/// Constant 'KEY_B_UP'.
enum
{
  bodyctrl_msgs__msg__SbusData__KEY_B_UP = 3l
};

/// Constant 'KEY_B_DOWN'.
enum
{
  bodyctrl_msgs__msg__SbusData__KEY_B_DOWN = 4l
};

/// Constant 'KEY_C_UP'.
enum
{
  bodyctrl_msgs__msg__SbusData__KEY_C_UP = 5l
};

/// Constant 'KEY_C_DOWN'.
enum
{
  bodyctrl_msgs__msg__SbusData__KEY_C_DOWN = 6l
};

/// Constant 'KEY_D_UP'.
enum
{
  bodyctrl_msgs__msg__SbusData__KEY_D_UP = 7l
};

/// Constant 'KEY_D_DOWN'.
enum
{
  bodyctrl_msgs__msg__SbusData__KEY_D_DOWN = 8l
};

/// Constant 'KEY_E_UP'.
enum
{
  bodyctrl_msgs__msg__SbusData__KEY_E_UP = 9l
};

/// Constant 'KEY_E_MID'.
enum
{
  bodyctrl_msgs__msg__SbusData__KEY_E_MID = 10l
};

/// Constant 'KEY_E_DOWN'.
enum
{
  bodyctrl_msgs__msg__SbusData__KEY_E_DOWN = 11l
};

/// Constant 'KEY_F_UP'.
enum
{
  bodyctrl_msgs__msg__SbusData__KEY_F_UP = 12l
};

/// Constant 'KEY_F_MID'.
enum
{
  bodyctrl_msgs__msg__SbusData__KEY_F_MID = 13l
};

/// Constant 'KEY_F_DOWN'.
enum
{
  bodyctrl_msgs__msg__SbusData__KEY_F_DOWN = 14l
};

/// Constant 'KEY_G_LEFT'.
enum
{
  bodyctrl_msgs__msg__SbusData__KEY_G_LEFT = 15l
};

/// Constant 'KEY_G_MID'.
enum
{
  bodyctrl_msgs__msg__SbusData__KEY_G_MID = 16l
};

/// Constant 'KEY_G_RIGHT'.
enum
{
  bodyctrl_msgs__msg__SbusData__KEY_G_RIGHT = 17l
};

/// Constant 'KEY_H_LEFT'.
enum
{
  bodyctrl_msgs__msg__SbusData__KEY_H_LEFT = 18l
};

/// Constant 'KEY_H_MID'.
enum
{
  bodyctrl_msgs__msg__SbusData__KEY_H_MID = 19l
};

/// Constant 'KEY_H_RIGHT'.
enum
{
  bodyctrl_msgs__msg__SbusData__KEY_H_RIGHT = 20l
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/SbusData in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__msg__SbusData
{
  std_msgs__msg__Header header;
  int32_t key_event_new;
  int32_t key_event_old;
  int8_t button_a;
  int8_t button_b;
  int8_t button_c;
  int8_t button_d;
  int8_t button_e;
  int8_t button_f;
  int8_t button_g;
  int8_t button_h;
  float x1;
  float y1;
  float x2;
  float y2;
} bodyctrl_msgs__msg__SbusData;

// Struct for a sequence of bodyctrl_msgs__msg__SbusData.
typedef struct bodyctrl_msgs__msg__SbusData__Sequence
{
  bodyctrl_msgs__msg__SbusData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__SbusData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SBUS_DATA__STRUCT_H_
