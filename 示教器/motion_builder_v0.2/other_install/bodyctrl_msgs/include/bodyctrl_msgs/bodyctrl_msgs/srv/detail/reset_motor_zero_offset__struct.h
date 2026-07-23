// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:srv/ResetMotorZeroOffset.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__RESET_MOTOR_ZERO_OFFSET__STRUCT_H_
#define BODYCTRL_MSGS__SRV__DETAIL__RESET_MOTOR_ZERO_OFFSET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ResetMotorZeroOffset in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__srv__ResetMotorZeroOffset_Request
{
  uint16_t name;
} bodyctrl_msgs__srv__ResetMotorZeroOffset_Request;

// Struct for a sequence of bodyctrl_msgs__srv__ResetMotorZeroOffset_Request.
typedef struct bodyctrl_msgs__srv__ResetMotorZeroOffset_Request__Sequence
{
  bodyctrl_msgs__srv__ResetMotorZeroOffset_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__srv__ResetMotorZeroOffset_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ResetMotorZeroOffset in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__srv__ResetMotorZeroOffset_Response
{
  bool success;
} bodyctrl_msgs__srv__ResetMotorZeroOffset_Response;

// Struct for a sequence of bodyctrl_msgs__srv__ResetMotorZeroOffset_Response.
typedef struct bodyctrl_msgs__srv__ResetMotorZeroOffset_Response__Sequence
{
  bodyctrl_msgs__srv__ResetMotorZeroOffset_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__srv__ResetMotorZeroOffset_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__SRV__DETAIL__RESET_MOTOR_ZERO_OFFSET__STRUCT_H_
