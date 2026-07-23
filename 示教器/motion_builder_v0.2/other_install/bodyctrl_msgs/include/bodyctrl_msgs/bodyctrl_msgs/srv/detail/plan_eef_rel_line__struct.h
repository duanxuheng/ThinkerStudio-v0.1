// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:srv/PlanEefRelLine.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__PLAN_EEF_REL_LINE__STRUCT_H_
#define BODYCTRL_MSGS__SRV__DETAIL__PLAN_EEF_REL_LINE__STRUCT_H_

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

/// Struct defined in srv/PlanEefRelLine in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__srv__PlanEefRelLine_Request
{
  /// left/right
  rosidl_runtime_c__String arm_name;
  /// in meters
  double dx;
  /// in meters
  double dy;
  /// in meters
  double dz;
  double vel_percent;
  double acc_percent;
} bodyctrl_msgs__srv__PlanEefRelLine_Request;

// Struct for a sequence of bodyctrl_msgs__srv__PlanEefRelLine_Request.
typedef struct bodyctrl_msgs__srv__PlanEefRelLine_Request__Sequence
{
  bodyctrl_msgs__srv__PlanEefRelLine_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__srv__PlanEefRelLine_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PlanEefRelLine in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__srv__PlanEefRelLine_Response
{
  bool success;
  rosidl_runtime_c__String message;
} bodyctrl_msgs__srv__PlanEefRelLine_Response;

// Struct for a sequence of bodyctrl_msgs__srv__PlanEefRelLine_Response.
typedef struct bodyctrl_msgs__srv__PlanEefRelLine_Response__Sequence
{
  bodyctrl_msgs__srv__PlanEefRelLine_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__srv__PlanEefRelLine_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__SRV__DETAIL__PLAN_EEF_REL_LINE__STRUCT_H_
