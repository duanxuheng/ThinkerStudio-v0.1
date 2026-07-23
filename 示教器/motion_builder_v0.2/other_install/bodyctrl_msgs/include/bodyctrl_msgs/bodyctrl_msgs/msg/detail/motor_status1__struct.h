// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/MotorStatus1.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS1__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS1__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MotorStatus1 in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__msg__MotorStatus1
{
  /// MotorName
  uint16_t name;
  float motortemperature;
  float mostemperature;
} bodyctrl_msgs__msg__MotorStatus1;

// Struct for a sequence of bodyctrl_msgs__msg__MotorStatus1.
typedef struct bodyctrl_msgs__msg__MotorStatus1__Sequence
{
  bodyctrl_msgs__msg__MotorStatus1 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__MotorStatus1__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS1__STRUCT_H_
