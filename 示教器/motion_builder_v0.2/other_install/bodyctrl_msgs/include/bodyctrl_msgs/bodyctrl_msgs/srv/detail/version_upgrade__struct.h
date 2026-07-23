// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:srv/VersionUpgrade.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__VERSION_UPGRADE__STRUCT_H_
#define BODYCTRL_MSGS__SRV__DETAIL__VERSION_UPGRADE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'param'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/VersionUpgrade in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__srv__VersionUpgrade_Request
{
  rosidl_runtime_c__String param;
} bodyctrl_msgs__srv__VersionUpgrade_Request;

// Struct for a sequence of bodyctrl_msgs__srv__VersionUpgrade_Request.
typedef struct bodyctrl_msgs__srv__VersionUpgrade_Request__Sequence
{
  bodyctrl_msgs__srv__VersionUpgrade_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__srv__VersionUpgrade_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/VersionUpgrade in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__srv__VersionUpgrade_Response
{
  rosidl_runtime_c__String result;
} bodyctrl_msgs__srv__VersionUpgrade_Response;

// Struct for a sequence of bodyctrl_msgs__srv__VersionUpgrade_Response.
typedef struct bodyctrl_msgs__srv__VersionUpgrade_Response__Sequence
{
  bodyctrl_msgs__srv__VersionUpgrade_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__srv__VersionUpgrade_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__SRV__DETAIL__VERSION_UPGRADE__STRUCT_H_
