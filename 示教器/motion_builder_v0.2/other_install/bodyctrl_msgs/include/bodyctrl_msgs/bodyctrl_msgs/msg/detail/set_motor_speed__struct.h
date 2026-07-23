// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/SetMotorSpeed.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_SPEED__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SetMotorSpeed in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__msg__SetMotorSpeed
{
  /// MotorName
  uint16_t name;
  /// rpm
  float spd;
  /// A
  float cur;
} bodyctrl_msgs__msg__SetMotorSpeed;

// Struct for a sequence of bodyctrl_msgs__msg__SetMotorSpeed.
typedef struct bodyctrl_msgs__msg__SetMotorSpeed__Sequence
{
  bodyctrl_msgs__msg__SetMotorSpeed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__SetMotorSpeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_SPEED__STRUCT_H_
