// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:srv/SetForce.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__SET_FORCE__STRUCT_H_
#define BODYCTRL_MSGS__SRV__DETAIL__SET_FORCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetForce in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__srv__SetForce_Request
{
  float force0_ratio;
  float force1_ratio;
  float force2_ratio;
  float force3_ratio;
  float force4_ratio;
  float force5_ratio;
} bodyctrl_msgs__srv__SetForce_Request;

// Struct for a sequence of bodyctrl_msgs__srv__SetForce_Request.
typedef struct bodyctrl_msgs__srv__SetForce_Request__Sequence
{
  bodyctrl_msgs__srv__SetForce_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__srv__SetForce_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetForce in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__srv__SetForce_Response
{
  bool force_accepted;
} bodyctrl_msgs__srv__SetForce_Response;

// Struct for a sequence of bodyctrl_msgs__srv__SetForce_Response.
typedef struct bodyctrl_msgs__srv__SetForce_Response__Sequence
{
  bodyctrl_msgs__srv__SetForce_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__srv__SetForce_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__SRV__DETAIL__SET_FORCE__STRUCT_H_
