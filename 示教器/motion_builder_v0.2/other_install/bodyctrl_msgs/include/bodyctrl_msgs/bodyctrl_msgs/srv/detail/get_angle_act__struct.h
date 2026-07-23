// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:srv/GetAngleAct.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__GET_ANGLE_ACT__STRUCT_H_
#define BODYCTRL_MSGS__SRV__DETAIL__GET_ANGLE_ACT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetAngleAct in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__srv__GetAngleAct_Request
{
  uint8_t structure_needs_at_least_one_member;
} bodyctrl_msgs__srv__GetAngleAct_Request;

// Struct for a sequence of bodyctrl_msgs__srv__GetAngleAct_Request.
typedef struct bodyctrl_msgs__srv__GetAngleAct_Request__Sequence
{
  bodyctrl_msgs__srv__GetAngleAct_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__srv__GetAngleAct_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GetAngleAct in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__srv__GetAngleAct_Response
{
  float curangle_ratio[6];
} bodyctrl_msgs__srv__GetAngleAct_Response;

// Struct for a sequence of bodyctrl_msgs__srv__GetAngleAct_Response.
typedef struct bodyctrl_msgs__srv__GetAngleAct_Response__Sequence
{
  bodyctrl_msgs__srv__GetAngleAct_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__srv__GetAngleAct_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__SRV__DETAIL__GET_ANGLE_ACT__STRUCT_H_
