// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lyre_msgs:msg/AsrEvent.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__MSG__DETAIL__ASR_EVENT__STRUCT_H_
#define LYRE_MSGS__MSG__DETAIL__ASR_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TOPIC_NAME'.
static const char * const lyre_msgs__msg__AsrEvent__TOPIC_NAME = "/audio_asr/event";

/// Constant 'EVENT_ERROR'.
/**
  * 出错事件。arg1 是错误码。
 */
enum
{
  lyre_msgs__msg__AsrEvent__EVENT_ERROR = 2
};

/// Constant 'EVENT_STATE'.
/**
  * 服务状态事件。
 */
enum
{
  lyre_msgs__msg__AsrEvent__EVENT_STATE = 3
};

/// Constant 'EVENT_WAKEUP'.
/**
  * 唤醒事件。
 */
enum
{
  lyre_msgs__msg__AsrEvent__EVENT_WAKEUP = 4
};

/// Constant 'EVENT_SLEEP'.
/**
  * 休眠事件。
 */
enum
{
  lyre_msgs__msg__AsrEvent__EVENT_SLEEP = 5
};

/// Constant 'EVENT_VAD'.
/**
  * VAD 事件。
 */
enum
{
  lyre_msgs__msg__AsrEvent__EVENT_VAD = 6
};

/// Constant 'EVENT_PRE_SLEEP'.
/**
  * 准备休眠事件。
 */
enum
{
  lyre_msgs__msg__AsrEvent__EVENT_PRE_SLEEP = 10
};

/// Constant 'EVENT_CONNECTED_TO_SERVER'.
/**
  * 与服务端建立连接。
 */
enum
{
  lyre_msgs__msg__AsrEvent__EVENT_CONNECTED_TO_SERVER = 13
};

/// Constant 'EVENT_SERVER_DISCONNECTED'.
/**
  * 与服务端断开连接。
 */
enum
{
  lyre_msgs__msg__AsrEvent__EVENT_SERVER_DISCONNECTED = 14
};

/// Struct defined in msg/AsrEvent in the package lyre_msgs.
/**
  * lyre_msgs/msg/AsrEvent.msg
  * ASR 设备报出的事件。
 */
typedef struct lyre_msgs__msg__AsrEvent
{
  int8_t event;
  int8_t arg1;
  int8_t arg2;
} lyre_msgs__msg__AsrEvent;

// Struct for a sequence of lyre_msgs__msg__AsrEvent.
typedef struct lyre_msgs__msg__AsrEvent__Sequence
{
  lyre_msgs__msg__AsrEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lyre_msgs__msg__AsrEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LYRE_MSGS__MSG__DETAIL__ASR_EVENT__STRUCT_H_
