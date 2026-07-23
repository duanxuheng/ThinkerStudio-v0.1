// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:srv/SetAngle.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__SET_ANGLE__STRUCT_H_
#define BODYCTRL_MSGS__SRV__DETAIL__SET_ANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetAngle in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__srv__SetAngle_Request
{
  float angle0_ratio;
  float angle1_ratio;
  float angle2_ratio;
  float angle3_ratio;
  float angle4_ratio;
  float angle5_ratio;
} bodyctrl_msgs__srv__SetAngle_Request;

// Struct for a sequence of bodyctrl_msgs__srv__SetAngle_Request.
typedef struct bodyctrl_msgs__srv__SetAngle_Request__Sequence
{
  bodyctrl_msgs__srv__SetAngle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__srv__SetAngle_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetAngle in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__srv__SetAngle_Response
{
  bool angle_accepted;
} bodyctrl_msgs__srv__SetAngle_Response;

// Struct for a sequence of bodyctrl_msgs__srv__SetAngle_Response.
typedef struct bodyctrl_msgs__srv__SetAngle_Response__Sequence
{
  bodyctrl_msgs__srv__SetAngle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__srv__SetAngle_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__SRV__DETAIL__SET_ANGLE__STRUCT_H_
