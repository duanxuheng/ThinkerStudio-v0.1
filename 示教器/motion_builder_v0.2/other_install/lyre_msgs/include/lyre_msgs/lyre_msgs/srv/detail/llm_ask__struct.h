// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lyre_msgs:srv/LlmAsk.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__SRV__DETAIL__LLM_ASK__STRUCT_H_
#define LYRE_MSGS__SRV__DETAIL__LLM_ASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SERVICE_NAME'.
static const char * const lyre_msgs__srv__LlmAsk_Request__SERVICE_NAME = "/audio_llm/ask";

// Include directives for member types
// Member 'id'
// Member 'text'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LlmAsk in the package lyre_msgs.
typedef struct lyre_msgs__srv__LlmAsk_Request
{
  /// optional. An identifier responds to the IAT ID.
  rosidl_runtime_c__String id;
  /// required.
  rosidl_runtime_c__String text;
} lyre_msgs__srv__LlmAsk_Request;

// Struct for a sequence of lyre_msgs__srv__LlmAsk_Request.
typedef struct lyre_msgs__srv__LlmAsk_Request__Sequence
{
  lyre_msgs__srv__LlmAsk_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lyre_msgs__srv__LlmAsk_Request__Sequence;


// Constants defined in the message

/// Constant 'CODE_OK'.
enum
{
  lyre_msgs__srv__LlmAsk_Response__CODE_OK = 0
};

/// Constant 'CODE_INVALID_PARAMS'.
enum
{
  lyre_msgs__srv__LlmAsk_Response__CODE_INVALID_PARAMS = 1
};

/// Constant 'CODE_FAILED'.
enum
{
  lyre_msgs__srv__LlmAsk_Response__CODE_FAILED = -1
};

// Include directives for member types
// Member 'sid'
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LlmAsk in the package lyre_msgs.
typedef struct lyre_msgs__srv__LlmAsk_Response
{
  /// Stream identifier (unique per llm question).
  rosidl_runtime_c__String sid;
  /// Status code.
  int8_t code;
  /// Human-readable status message.
  rosidl_runtime_c__String message;
} lyre_msgs__srv__LlmAsk_Response;

// Struct for a sequence of lyre_msgs__srv__LlmAsk_Response.
typedef struct lyre_msgs__srv__LlmAsk_Response__Sequence
{
  lyre_msgs__srv__LlmAsk_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lyre_msgs__srv__LlmAsk_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LYRE_MSGS__SRV__DETAIL__LLM_ASK__STRUCT_H_
