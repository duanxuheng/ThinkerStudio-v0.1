// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lyre_msgs:msg/LlmRst.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__MSG__DETAIL__LLM_RST__STRUCT_H_
#define LYRE_MSGS__MSG__DETAIL__LLM_RST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TOPIC_NAME'.
static const char * const lyre_msgs__msg__LlmRst__TOPIC_NAME = "/audio_llm/rst";

// Include directives for member types
// Member 'sid'
// Member 'text'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LlmRst in the package lyre_msgs.
/**
  * lyre_msgs/msg/LlmRst.msg
  * LLM 大模型语音对话返回的内容。
 */
typedef struct lyre_msgs__msg__LlmRst
{
  rosidl_runtime_c__String sid;
  uint32_t seq;
  bool last;
  rosidl_runtime_c__String text;
} lyre_msgs__msg__LlmRst;

// Struct for a sequence of lyre_msgs__msg__LlmRst.
typedef struct lyre_msgs__msg__LlmRst__Sequence
{
  lyre_msgs__msg__LlmRst * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lyre_msgs__msg__LlmRst__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LYRE_MSGS__MSG__DETAIL__LLM_RST__STRUCT_H_
