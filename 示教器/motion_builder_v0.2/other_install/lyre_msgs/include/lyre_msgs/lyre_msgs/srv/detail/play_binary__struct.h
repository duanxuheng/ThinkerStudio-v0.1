// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lyre_msgs:srv/PlayBinary.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__SRV__DETAIL__PLAY_BINARY__STRUCT_H_
#define LYRE_MSGS__SRV__DETAIL__PLAY_BINARY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SERVICE_NAME'.
static const char * const lyre_msgs__srv__PlayBinary_Request__SERVICE_NAME = "/audio_play/play_binary";

// Include directives for member types
// Member 'sid'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/PlayBinary in the package lyre_msgs.
typedef struct lyre_msgs__srv__PlayBinary_Request
{
  /// Stream identifier (unique per audio stream).
  rosidl_runtime_c__String sid;
  /// Sequence number (incremental per packet).
  uint32_t seq;
  /// Last flag (true if this is the final packet).
  bool last;
  /// Force playback (stop all running tasks and play immediately).
  bool force;
  /// Audio data in binary format.
  rosidl_runtime_c__uint8__Sequence data;
} lyre_msgs__srv__PlayBinary_Request;

// Struct for a sequence of lyre_msgs__srv__PlayBinary_Request.
typedef struct lyre_msgs__srv__PlayBinary_Request__Sequence
{
  lyre_msgs__srv__PlayBinary_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lyre_msgs__srv__PlayBinary_Request__Sequence;


// Constants defined in the message

/// Constant 'CODE_OK'.
enum
{
  lyre_msgs__srv__PlayBinary_Response__CODE_OK = 0
};

/// Constant 'CODE_INVALID_PARAMS'.
enum
{
  lyre_msgs__srv__PlayBinary_Response__CODE_INVALID_PARAMS = 1
};

/// Constant 'CODE_FAILED'.
enum
{
  lyre_msgs__srv__PlayBinary_Response__CODE_FAILED = -1
};

// Include directives for member types
// Member 'sid'
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PlayBinary in the package lyre_msgs.
typedef struct lyre_msgs__srv__PlayBinary_Response
{
  /// Playback stream ID (generated internally if absent).
  rosidl_runtime_c__String sid;
  /// Status code.
  int8_t code;
  /// Human-readable status message.
  rosidl_runtime_c__String message;
} lyre_msgs__srv__PlayBinary_Response;

// Struct for a sequence of lyre_msgs__srv__PlayBinary_Response.
typedef struct lyre_msgs__srv__PlayBinary_Response__Sequence
{
  lyre_msgs__srv__PlayBinary_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lyre_msgs__srv__PlayBinary_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LYRE_MSGS__SRV__DETAIL__PLAY_BINARY__STRUCT_H_
