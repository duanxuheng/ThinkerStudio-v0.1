// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/SetMotorCurTor.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_CUR_TOR__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_CUR_TOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SetMotorCurTor in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__msg__SetMotorCurTor
{
  /// MotorName
  uint16_t name;
  float cur_tor;
  uint8_t ctrl_status;
} bodyctrl_msgs__msg__SetMotorCurTor;

// Struct for a sequence of bodyctrl_msgs__msg__SetMotorCurTor.
typedef struct bodyctrl_msgs__msg__SetMotorCurTor__Sequence
{
  bodyctrl_msgs__msg__SetMotorCurTor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__SetMotorCurTor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_CUR_TOR__STRUCT_H_
