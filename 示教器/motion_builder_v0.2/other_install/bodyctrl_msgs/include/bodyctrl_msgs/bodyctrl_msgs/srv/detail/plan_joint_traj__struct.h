// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:srv/PlanJointTraj.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__PLAN_JOINT_TRAJ__STRUCT_H_
#define BODYCTRL_MSGS__SRV__DETAIL__PLAN_JOINT_TRAJ__STRUCT_H_

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
// Member 'joint_pos'
// Member 'joint_vel'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/PlanJointTraj in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__srv__PlanJointTraj_Request
{
  /// left/right
  rosidl_runtime_c__String arm_name;
  rosidl_runtime_c__double__Sequence joint_pos;
  rosidl_runtime_c__double__Sequence joint_vel;
  double vel_percent;
  double acc_percent;
  double jerk_percent;
  /// 0: position, 1: velocity, 2: acceleration, 3: jerk
  int32_t mode;
} bodyctrl_msgs__srv__PlanJointTraj_Request;

// Struct for a sequence of bodyctrl_msgs__srv__PlanJointTraj_Request.
typedef struct bodyctrl_msgs__srv__PlanJointTraj_Request__Sequence
{
  bodyctrl_msgs__srv__PlanJointTraj_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__srv__PlanJointTraj_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PlanJointTraj in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__srv__PlanJointTraj_Response
{
  bool success;
  rosidl_runtime_c__String message;
} bodyctrl_msgs__srv__PlanJointTraj_Response;

// Struct for a sequence of bodyctrl_msgs__srv__PlanJointTraj_Response.
typedef struct bodyctrl_msgs__srv__PlanJointTraj_Response__Sequence
{
  bodyctrl_msgs__srv__PlanJointTraj_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__srv__PlanJointTraj_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__SRV__DETAIL__PLAN_JOINT_TRAJ__STRUCT_H_
