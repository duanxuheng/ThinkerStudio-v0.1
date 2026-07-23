// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/MotorStatusMsg2.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG2__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG2__STRUCT_H_

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
// Member 'name'
#include "std_msgs/msg/detail/int32_multi_array__struct.h"
// Member 'pos'
// Member 'speed'
// Member 'current'
#include "std_msgs/msg/detail/float32_multi_array__struct.h"

/// Struct defined in msg/MotorStatusMsg2 in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__msg__MotorStatusMsg2
{
  std_msgs__msg__Header header;
  std_msgs__msg__Int32MultiArray name;
  std_msgs__msg__Float32MultiArray pos;
  std_msgs__msg__Float32MultiArray speed;
  std_msgs__msg__Float32MultiArray current;
} bodyctrl_msgs__msg__MotorStatusMsg2;

// Struct for a sequence of bodyctrl_msgs__msg__MotorStatusMsg2.
typedef struct bodyctrl_msgs__msg__MotorStatusMsg2__Sequence
{
  bodyctrl_msgs__msg__MotorStatusMsg2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__MotorStatusMsg2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG2__STRUCT_H_
