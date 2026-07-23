// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lyre_msgs:msg/AsrIat.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__MSG__DETAIL__ASR_IAT__STRUCT_H_
#define LYRE_MSGS__MSG__DETAIL__ASR_IAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TOPIC_NAME'.
static const char * const lyre_msgs__msg__AsrIat__TOPIC_NAME = "/audio_asr/iat";

// Include directives for member types
// Member 'id'
// Member 'text'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AsrIat in the package lyre_msgs.
/**
  * lyre_msgs/msg/AsrIat.msg
  * ASR 语音识别到的内容。
 */
typedef struct lyre_msgs__msg__AsrIat
{
  rosidl_runtime_c__String id;
  rosidl_runtime_c__String text;
} lyre_msgs__msg__AsrIat;

// Struct for a sequence of lyre_msgs__msg__AsrIat.
typedef struct lyre_msgs__msg__AsrIat__Sequence
{
  lyre_msgs__msg__AsrIat * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lyre_msgs__msg__AsrIat__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LYRE_MSGS__MSG__DETAIL__ASR_IAT__STRUCT_H_
