// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__IMU__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__IMU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'angular_velocity'
// Member 'linear_acceleration'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'euler'
#include "bodyctrl_msgs/msg/detail/euler__struct.h"

/// Struct defined in msg/Imu in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__msg__Imu
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Quaternion orientation;
  geometry_msgs__msg__Vector3 angular_velocity;
  geometry_msgs__msg__Vector3 linear_acceleration;
  bodyctrl_msgs__msg__Euler euler;
  uint32_t error;
  double angular_velocity_covariance[3];
  double orientation_covariance[3];
  double linear_acceleration_covariance[3];
} bodyctrl_msgs__msg__Imu;

// Struct for a sequence of bodyctrl_msgs__msg__Imu.
typedef struct bodyctrl_msgs__msg__Imu__Sequence
{
  bodyctrl_msgs__msg__Imu * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__Imu__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__IMU__STRUCT_H_
