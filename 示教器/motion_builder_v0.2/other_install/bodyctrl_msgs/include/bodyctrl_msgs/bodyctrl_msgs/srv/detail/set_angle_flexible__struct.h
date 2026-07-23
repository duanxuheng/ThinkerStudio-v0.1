// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:srv/SetAngleFlexible.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__SET_ANGLE_FLEXIBLE__STRUCT_H_
#define BODYCTRL_MSGS__SRV__DETAIL__SET_ANGLE_FLEXIBLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'angle_ratio'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetAngleFlexible in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__srv__SetAngleFlexible_Request
{
  rosidl_runtime_c__String__Sequence name;
  rosidl_runtime_c__float__Sequence angle_ratio;
} bodyctrl_msgs__srv__SetAngleFlexible_Request;

// Struct for a sequence of bodyctrl_msgs__srv__SetAngleFlexible_Request.
typedef struct bodyctrl_msgs__srv__SetAngleFlexible_Request__Sequence
{
  bodyctrl_msgs__srv__SetAngleFlexible_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__srv__SetAngleFlexible_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetAngleFlexible in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__srv__SetAngleFlexible_Response
{
  bool angle_accepted;
} bodyctrl_msgs__srv__SetAngleFlexible_Response;

// Struct for a sequence of bodyctrl_msgs__srv__SetAngleFlexible_Response.
typedef struct bodyctrl_msgs__srv__SetAngleFlexible_Response__Sequence
{
  bodyctrl_msgs__srv__SetAngleFlexible_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__srv__SetAngleFlexible_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__SRV__DETAIL__SET_ANGLE_FLEXIBLE__STRUCT_H_
