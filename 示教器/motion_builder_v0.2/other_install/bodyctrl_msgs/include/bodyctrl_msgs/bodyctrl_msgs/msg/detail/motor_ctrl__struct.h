// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/MotorCtrl.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__MOTOR_CTRL__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__MOTOR_CTRL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MotorCtrl in the package bodyctrl_msgs.
/**
  * MotorName
 */
typedef struct bodyctrl_msgs__msg__MotorCtrl
{
  uint16_t name;
  float kp;
  float kd;
  float pos;
  float spd;
  float tor;
} bodyctrl_msgs__msg__MotorCtrl;

// Struct for a sequence of bodyctrl_msgs__msg__MotorCtrl.
typedef struct bodyctrl_msgs__msg__MotorCtrl__Sequence
{
  bodyctrl_msgs__msg__MotorCtrl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__MotorCtrl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__MOTOR_CTRL__STRUCT_H_
