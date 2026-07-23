// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:srv/SetSpeed.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__SET_SPEED__STRUCT_H_
#define BODYCTRL_MSGS__SRV__DETAIL__SET_SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetSpeed in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__srv__SetSpeed_Request
{
  float speed0_ratio;
  float speed1_ratio;
  float speed2_ratio;
  float speed3_ratio;
  float speed4_ratio;
  float speed5_ratio;
} bodyctrl_msgs__srv__SetSpeed_Request;

// Struct for a sequence of bodyctrl_msgs__srv__SetSpeed_Request.
typedef struct bodyctrl_msgs__srv__SetSpeed_Request__Sequence
{
  bodyctrl_msgs__srv__SetSpeed_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__srv__SetSpeed_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetSpeed in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__srv__SetSpeed_Response
{
  bool speed_accepted;
} bodyctrl_msgs__srv__SetSpeed_Response;

// Struct for a sequence of bodyctrl_msgs__srv__SetSpeed_Response.
typedef struct bodyctrl_msgs__srv__SetSpeed_Response__Sequence
{
  bodyctrl_msgs__srv__SetSpeed_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__srv__SetSpeed_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__SRV__DETAIL__SET_SPEED__STRUCT_H_
