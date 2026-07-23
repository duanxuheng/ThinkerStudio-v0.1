// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/SriName.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SRI_NAME__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__SRI_NAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SRI_LEFT'.
enum
{
  bodyctrl_msgs__msg__SriName__SRI_LEFT = 1l
};

/// Constant 'SRI_RIGHT'.
enum
{
  bodyctrl_msgs__msg__SriName__SRI_RIGHT = 2l
};

/// Struct defined in msg/SriName in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__msg__SriName
{
  uint8_t structure_needs_at_least_one_member;
} bodyctrl_msgs__msg__SriName;

// Struct for a sequence of bodyctrl_msgs__msg__SriName.
typedef struct bodyctrl_msgs__msg__SriName__Sequence
{
  bodyctrl_msgs__msg__SriName * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__SriName__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SRI_NAME__STRUCT_H_
