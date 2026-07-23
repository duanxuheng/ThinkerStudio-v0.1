// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lyre_msgs:msg/TtsEvent.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__MSG__DETAIL__TTS_EVENT__STRUCT_H_
#define LYRE_MSGS__MSG__DETAIL__TTS_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TOPIC_NAME'.
static const char * const lyre_msgs__msg__TtsEvent__TOPIC_NAME = "/audio_tts/event";

/// Constant 'EVENT_STARTED'.
enum
{
  lyre_msgs__msg__TtsEvent__EVENT_STARTED = 0
};

/// Constant 'EVENT_COMPLETED'.
enum
{
  lyre_msgs__msg__TtsEvent__EVENT_COMPLETED = 1
};

/// Constant 'EVENT_STOPPED'.
enum
{
  lyre_msgs__msg__TtsEvent__EVENT_STOPPED = 2
};

/// Constant 'EVENT_CANCELLED'.
enum
{
  lyre_msgs__msg__TtsEvent__EVENT_CANCELLED = 3
};

/// Constant 'EVENT_FAILED'.
enum
{
  lyre_msgs__msg__TtsEvent__EVENT_FAILED = 4
};

// Include directives for member types
// Member 'sid'
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TtsEvent in the package lyre_msgs.
/**
  * lyre_msgs/msg/TtsEvent.msg
  * TTS 语音合成的事件。
 */
typedef struct lyre_msgs__msg__TtsEvent
{
  rosidl_runtime_c__String sid;
  uint32_t seq;
  int8_t event;
  rosidl_runtime_c__String message;
} lyre_msgs__msg__TtsEvent;

// Struct for a sequence of lyre_msgs__msg__TtsEvent.
typedef struct lyre_msgs__msg__TtsEvent__Sequence
{
  lyre_msgs__msg__TtsEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lyre_msgs__msg__TtsEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LYRE_MSGS__MSG__DETAIL__TTS_EVENT__STRUCT_H_
