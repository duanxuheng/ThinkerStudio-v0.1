// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lyre_msgs:msg/AsrKeyword.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__MSG__DETAIL__ASR_KEYWORD__STRUCT_H_
#define LYRE_MSGS__MSG__DETAIL__ASR_KEYWORD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TOPIC_NAME'.
static const char * const lyre_msgs__msg__AsrKeyword__TOPIC_NAME = "/audio_asr/keyword";

// Include directives for member types
// Member 'keyword'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AsrKeyword in the package lyre_msgs.
/**
  * lyre_msgs/msg/AsrKeyword.msg
  * ASR 唤醒时识别到的关键字。
 */
typedef struct lyre_msgs__msg__AsrKeyword
{
  rosidl_runtime_c__String keyword;
  int32_t angle;
} lyre_msgs__msg__AsrKeyword;

// Struct for a sequence of lyre_msgs__msg__AsrKeyword.
typedef struct lyre_msgs__msg__AsrKeyword__Sequence
{
  lyre_msgs__msg__AsrKeyword * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lyre_msgs__msg__AsrKeyword__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LYRE_MSGS__MSG__DETAIL__ASR_KEYWORD__STRUCT_H_
