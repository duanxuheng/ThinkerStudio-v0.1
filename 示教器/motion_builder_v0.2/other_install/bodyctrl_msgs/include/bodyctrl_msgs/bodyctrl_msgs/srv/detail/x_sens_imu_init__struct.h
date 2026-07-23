// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:srv/XSensImuInit.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__X_SENS_IMU_INIT__STRUCT_H_
#define BODYCTRL_MSGS__SRV__DETAIL__X_SENS_IMU_INIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'dev_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/XSensImuInit in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__srv__XSensImuInit_Request
{
  rosidl_runtime_c__String dev_name;
} bodyctrl_msgs__srv__XSensImuInit_Request;

// Struct for a sequence of bodyctrl_msgs__srv__XSensImuInit_Request.
typedef struct bodyctrl_msgs__srv__XSensImuInit_Request__Sequence
{
  bodyctrl_msgs__srv__XSensImuInit_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__srv__XSensImuInit_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/XSensImuInit in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__srv__XSensImuInit_Response
{
  bool ret;
} bodyctrl_msgs__srv__XSensImuInit_Response;

// Struct for a sequence of bodyctrl_msgs__srv__XSensImuInit_Response.
typedef struct bodyctrl_msgs__srv__XSensImuInit_Response__Sequence
{
  bodyctrl_msgs__srv__XSensImuInit_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__srv__XSensImuInit_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__SRV__DETAIL__X_SENS_IMU_INIT__STRUCT_H_
