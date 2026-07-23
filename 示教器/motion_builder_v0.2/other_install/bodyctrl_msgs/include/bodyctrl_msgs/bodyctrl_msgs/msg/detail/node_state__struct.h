// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/NodeState.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__NODE_STATE__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__NODE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NODE_STATE_IDLE'.
enum
{
  bodyctrl_msgs__msg__NodeState__NODE_STATE_IDLE = 0
};

/// Constant 'NODE_STATE_RUNNING'.
enum
{
  bodyctrl_msgs__msg__NodeState__NODE_STATE_RUNNING = 1
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'topic'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/NodeState in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__msg__NodeState
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String topic;
  uint16_t state;
} bodyctrl_msgs__msg__NodeState;

// Struct for a sequence of bodyctrl_msgs__msg__NodeState.
typedef struct bodyctrl_msgs__msg__NodeState__Sequence
{
  bodyctrl_msgs__msg__NodeState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__NodeState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__NODE_STATE__STRUCT_H_
