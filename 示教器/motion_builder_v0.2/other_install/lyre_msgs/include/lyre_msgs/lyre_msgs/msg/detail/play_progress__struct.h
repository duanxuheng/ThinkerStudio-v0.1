// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lyre_msgs:msg/PlayProgress.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__MSG__DETAIL__PLAY_PROGRESS__STRUCT_H_
#define LYRE_MSGS__MSG__DETAIL__PLAY_PROGRESS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TOPIC_NAME'.
static const char * const lyre_msgs__msg__PlayProgress__TOPIC_NAME = "/audio_play/progress";

// Include directives for member types
// Member 'sid'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PlayProgress in the package lyre_msgs.
/**
  * lyre_msgs/msg/PlayProgress.msg
  * Play 音频播放的进度。
 */
typedef struct lyre_msgs__msg__PlayProgress
{
  rosidl_runtime_c__String sid;
  uint32_t seq;
  double position;
  double duration;
} lyre_msgs__msg__PlayProgress;

// Struct for a sequence of lyre_msgs__msg__PlayProgress.
typedef struct lyre_msgs__msg__PlayProgress__Sequence
{
  lyre_msgs__msg__PlayProgress * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lyre_msgs__msg__PlayProgress__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LYRE_MSGS__MSG__DETAIL__PLAY_PROGRESS__STRUCT_H_
