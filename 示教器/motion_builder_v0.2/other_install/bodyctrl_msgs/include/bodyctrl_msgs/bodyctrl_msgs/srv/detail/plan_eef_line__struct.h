// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:srv/PlanEefLine.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__PLAN_EEF_LINE__STRUCT_H_
#define BODYCTRL_MSGS__SRV__DETAIL__PLAN_EEF_LINE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'arm_name'
#include "rosidl_runtime_c/string.h"
// Member 'eef_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/PlanEefLine in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__srv__PlanEefLine_Request
{
  /// left/right
  rosidl_runtime_c__String arm_name;
  geometry_msgs__msg__Pose eef_pose;
  double vel_percent;
  double acc_percent;
} bodyctrl_msgs__srv__PlanEefLine_Request;

// Struct for a sequence of bodyctrl_msgs__srv__PlanEefLine_Request.
typedef struct bodyctrl_msgs__srv__PlanEefLine_Request__Sequence
{
  bodyctrl_msgs__srv__PlanEefLine_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__srv__PlanEefLine_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PlanEefLine in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__srv__PlanEefLine_Response
{
  bool success;
  rosidl_runtime_c__String message;
} bodyctrl_msgs__srv__PlanEefLine_Response;

// Struct for a sequence of bodyctrl_msgs__srv__PlanEefLine_Response.
typedef struct bodyctrl_msgs__srv__PlanEefLine_Response__Sequence
{
  bodyctrl_msgs__srv__PlanEefLine_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__srv__PlanEefLine_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__SRV__DETAIL__PLAN_EEF_LINE__STRUCT_H_
