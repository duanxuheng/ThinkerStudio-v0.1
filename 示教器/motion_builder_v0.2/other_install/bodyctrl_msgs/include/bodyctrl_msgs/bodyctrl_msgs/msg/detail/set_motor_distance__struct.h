// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/SetMotorDistance.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_DISTANCE__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_DISTANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SetMotorDistance in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__msg__SetMotorDistance
{
  /// MotorName
  uint16_t name;
  /// rad
  float distance;
  /// rpm
  float spd;
  /// A
  float cur;
} bodyctrl_msgs__msg__SetMotorDistance;

// Struct for a sequence of bodyctrl_msgs__msg__SetMotorDistance.
typedef struct bodyctrl_msgs__msg__SetMotorDistance__Sequence
{
  bodyctrl_msgs__msg__SetMotorDistance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__SetMotorDistance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_DISTANCE__STRUCT_H_
