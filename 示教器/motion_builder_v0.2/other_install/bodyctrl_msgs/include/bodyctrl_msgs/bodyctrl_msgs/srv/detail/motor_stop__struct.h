// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:srv/MotorStop.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__MOTOR_STOP__STRUCT_H_
#define BODYCTRL_MSGS__SRV__DETAIL__MOTOR_STOP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/MotorStop in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__srv__MotorStop_Request
{
  int32_t param;
} bodyctrl_msgs__srv__MotorStop_Request;

// Struct for a sequence of bodyctrl_msgs__srv__MotorStop_Request.
typedef struct bodyctrl_msgs__srv__MotorStop_Request__Sequence
{
  bodyctrl_msgs__srv__MotorStop_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__srv__MotorStop_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/MotorStop in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__srv__MotorStop_Response
{
  int32_t ret;
} bodyctrl_msgs__srv__MotorStop_Response;

// Struct for a sequence of bodyctrl_msgs__srv__MotorStop_Response.
typedef struct bodyctrl_msgs__srv__MotorStop_Response__Sequence
{
  bodyctrl_msgs__srv__MotorStop_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__srv__MotorStop_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__SRV__DETAIL__MOTOR_STOP__STRUCT_H_
