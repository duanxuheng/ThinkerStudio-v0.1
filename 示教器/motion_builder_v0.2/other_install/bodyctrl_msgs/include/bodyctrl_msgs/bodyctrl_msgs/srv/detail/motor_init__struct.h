// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:srv/MotorInit.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__MOTOR_INIT__STRUCT_H_
#define BODYCTRL_MSGS__SRV__DETAIL__MOTOR_INIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name_of_net'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MotorInit in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__srv__MotorInit_Request
{
  rosidl_runtime_c__String name_of_net;
} bodyctrl_msgs__srv__MotorInit_Request;

// Struct for a sequence of bodyctrl_msgs__srv__MotorInit_Request.
typedef struct bodyctrl_msgs__srv__MotorInit_Request__Sequence
{
  bodyctrl_msgs__srv__MotorInit_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__srv__MotorInit_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/MotorInit in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__srv__MotorInit_Response
{
  int32_t ret;
} bodyctrl_msgs__srv__MotorInit_Response;

// Struct for a sequence of bodyctrl_msgs__srv__MotorInit_Response.
typedef struct bodyctrl_msgs__srv__MotorInit_Response__Sequence
{
  bodyctrl_msgs__srv__MotorInit_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__srv__MotorInit_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__SRV__DETAIL__MOTOR_INIT__STRUCT_H_
