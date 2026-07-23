// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lyre_msgs:msg/TtsEvent.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__MSG__DETAIL__TTS_EVENT__FUNCTIONS_H_
#define LYRE_MSGS__MSG__DETAIL__TTS_EVENT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "lyre_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "lyre_msgs/msg/detail/tts_event__struct.h"

/// Initialize msg/TtsEvent message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lyre_msgs__msg__TtsEvent
 * )) before or use
 * lyre_msgs__msg__TtsEvent__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
bool
lyre_msgs__msg__TtsEvent__init(lyre_msgs__msg__TtsEvent * msg);

/// Finalize msg/TtsEvent message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
void
lyre_msgs__msg__TtsEvent__fini(lyre_msgs__msg__TtsEvent * msg);

/// Create msg/TtsEvent message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lyre_msgs__msg__TtsEvent__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
lyre_msgs__msg__TtsEvent *
lyre_msgs__msg__TtsEvent__create();

/// Destroy msg/TtsEvent message.
/**
 * It calls
 * lyre_msgs__msg__TtsEvent__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
void
lyre_msgs__msg__TtsEvent__destroy(lyre_msgs__msg__TtsEvent * msg);

/// Check for msg/TtsEvent message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
bool
lyre_msgs__msg__TtsEvent__are_equal(const lyre_msgs__msg__TtsEvent * lhs, const lyre_msgs__msg__TtsEvent * rhs);

/// Copy a msg/TtsEvent message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
bool
lyre_msgs__msg__TtsEvent__copy(
  const lyre_msgs__msg__TtsEvent * input,
  lyre_msgs__msg__TtsEvent * output);

/// Initialize array of msg/TtsEvent messages.
/**
 * It allocates the memory for the number of elements and calls
 * lyre_msgs__msg__TtsEvent__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
bool
lyre_msgs__msg__TtsEvent__Sequence__init(lyre_msgs__msg__TtsEvent__Sequence * array, size_t size);

/// Finalize array of msg/TtsEvent messages.
/**
 * It calls
 * lyre_msgs__msg__TtsEvent__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
void
lyre_msgs__msg__TtsEvent__Sequence__fini(lyre_msgs__msg__TtsEvent__Sequence * array);

/// Create array of msg/TtsEvent messages.
/**
 * It allocates the memory for the array and calls
 * lyre_msgs__msg__TtsEvent__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
lyre_msgs__msg__TtsEvent__Sequence *
lyre_msgs__msg__TtsEvent__Sequence__create(size_t size);

/// Destroy array of msg/TtsEvent messages.
/**
 * It calls
 * lyre_msgs__msg__TtsEvent__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
void
lyre_msgs__msg__TtsEvent__Sequence__destroy(lyre_msgs__msg__TtsEvent__Sequence * array);

/// Check for msg/TtsEvent message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
bool
lyre_msgs__msg__TtsEvent__Sequence__are_equal(const lyre_msgs__msg__TtsEvent__Sequence * lhs, const lyre_msgs__msg__TtsEvent__Sequence * rhs);

/// Copy an array of msg/TtsEvent messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
bool
lyre_msgs__msg__TtsEvent__Sequence__copy(
  const lyre_msgs__msg__TtsEvent__Sequence * input,
  lyre_msgs__msg__TtsEvent__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LYRE_MSGS__MSG__DETAIL__TTS_EVENT__FUNCTIONS_H_
