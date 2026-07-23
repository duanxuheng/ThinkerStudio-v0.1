// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lyre_msgs:msg/AsrKeyword.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__MSG__DETAIL__ASR_KEYWORD__FUNCTIONS_H_
#define LYRE_MSGS__MSG__DETAIL__ASR_KEYWORD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "lyre_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "lyre_msgs/msg/detail/asr_keyword__struct.h"

/// Initialize msg/AsrKeyword message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lyre_msgs__msg__AsrKeyword
 * )) before or use
 * lyre_msgs__msg__AsrKeyword__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
bool
lyre_msgs__msg__AsrKeyword__init(lyre_msgs__msg__AsrKeyword * msg);

/// Finalize msg/AsrKeyword message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
void
lyre_msgs__msg__AsrKeyword__fini(lyre_msgs__msg__AsrKeyword * msg);

/// Create msg/AsrKeyword message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lyre_msgs__msg__AsrKeyword__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
lyre_msgs__msg__AsrKeyword *
lyre_msgs__msg__AsrKeyword__create();

/// Destroy msg/AsrKeyword message.
/**
 * It calls
 * lyre_msgs__msg__AsrKeyword__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
void
lyre_msgs__msg__AsrKeyword__destroy(lyre_msgs__msg__AsrKeyword * msg);

/// Check for msg/AsrKeyword message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
bool
lyre_msgs__msg__AsrKeyword__are_equal(const lyre_msgs__msg__AsrKeyword * lhs, const lyre_msgs__msg__AsrKeyword * rhs);

/// Copy a msg/AsrKeyword message.
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
lyre_msgs__msg__AsrKeyword__copy(
  const lyre_msgs__msg__AsrKeyword * input,
  lyre_msgs__msg__AsrKeyword * output);

/// Initialize array of msg/AsrKeyword messages.
/**
 * It allocates the memory for the number of elements and calls
 * lyre_msgs__msg__AsrKeyword__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
bool
lyre_msgs__msg__AsrKeyword__Sequence__init(lyre_msgs__msg__AsrKeyword__Sequence * array, size_t size);

/// Finalize array of msg/AsrKeyword messages.
/**
 * It calls
 * lyre_msgs__msg__AsrKeyword__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
void
lyre_msgs__msg__AsrKeyword__Sequence__fini(lyre_msgs__msg__AsrKeyword__Sequence * array);

/// Create array of msg/AsrKeyword messages.
/**
 * It allocates the memory for the array and calls
 * lyre_msgs__msg__AsrKeyword__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
lyre_msgs__msg__AsrKeyword__Sequence *
lyre_msgs__msg__AsrKeyword__Sequence__create(size_t size);

/// Destroy array of msg/AsrKeyword messages.
/**
 * It calls
 * lyre_msgs__msg__AsrKeyword__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
void
lyre_msgs__msg__AsrKeyword__Sequence__destroy(lyre_msgs__msg__AsrKeyword__Sequence * array);

/// Check for msg/AsrKeyword message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
bool
lyre_msgs__msg__AsrKeyword__Sequence__are_equal(const lyre_msgs__msg__AsrKeyword__Sequence * lhs, const lyre_msgs__msg__AsrKeyword__Sequence * rhs);

/// Copy an array of msg/AsrKeyword messages.
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
lyre_msgs__msg__AsrKeyword__Sequence__copy(
  const lyre_msgs__msg__AsrKeyword__Sequence * input,
  lyre_msgs__msg__AsrKeyword__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LYRE_MSGS__MSG__DETAIL__ASR_KEYWORD__FUNCTIONS_H_
