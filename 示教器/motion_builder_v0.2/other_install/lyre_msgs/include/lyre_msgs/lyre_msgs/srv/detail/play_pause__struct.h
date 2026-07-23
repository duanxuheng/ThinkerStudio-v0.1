// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lyre_msgs:srv/PlayPause.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__SRV__DETAIL__PLAY_PAUSE__STRUCT_H_
#define LYRE_MSGS__SRV__DETAIL__PLAY_PAUSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SERVICE_NAME'.
static const char * const lyre_msgs__srv__PlayPause_Request__SERVICE_NAME = "/audio_play/pause";

/// Struct defined in srv/PlayPause in the package lyre_msgs.
typedef struct lyre_msgs__srv__PlayPause_Request
{
  uint8_t structure_needs_at_least_one_member;
} lyre_msgs__srv__PlayPause_Request;

// Struct for a sequence of lyre_msgs__srv__PlayPause_Request.
typedef struct lyre_msgs__srv__PlayPause_Request__Sequence
{
  lyre_msgs__srv__PlayPause_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lyre_msgs__srv__PlayPause_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/PlayPause in the package lyre_msgs.
typedef struct lyre_msgs__srv__PlayPause_Response
{
  uint8_t structure_needs_at_least_one_member;
} lyre_msgs__srv__PlayPause_Response;

// Struct for a sequence of lyre_msgs__srv__PlayPause_Response.
typedef struct lyre_msgs__srv__PlayPause_Response__Sequence
{
  lyre_msgs__srv__PlayPause_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lyre_msgs__srv__PlayPause_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LYRE_MSGS__SRV__DETAIL__PLAY_PAUSE__STRUCT_H_
