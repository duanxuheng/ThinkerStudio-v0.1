// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lyre_msgs:msg/PlayProgress.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__MSG__DETAIL__PLAY_PROGRESS__FUNCTIONS_H_
#define LYRE_MSGS__MSG__DETAIL__PLAY_PROGRESS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "lyre_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "lyre_msgs/msg/detail/play_progress__struct.h"

/// Initialize msg/PlayProgress message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lyre_msgs__msg__PlayProgress
 * )) before or use
 * lyre_msgs__msg__PlayProgress__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
bool
lyre_msgs__msg__PlayProgress__init(lyre_msgs__msg__PlayProgress * msg);

/// Finalize msg/PlayProgress message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
void
lyre_msgs__msg__PlayProgress__fini(lyre_msgs__msg__PlayProgress * msg);

/// Create msg/PlayProgress message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lyre_msgs__msg__PlayProgress__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
lyre_msgs__msg__PlayProgress *
lyre_msgs__msg__PlayProgress__create();

/// Destroy msg/PlayProgress message.
/**
 * It calls
 * lyre_msgs__msg__PlayProgress__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
void
lyre_msgs__msg__PlayProgress__destroy(lyre_msgs__msg__PlayProgress * msg);

/// Check for msg/PlayProgress message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
bool
lyre_msgs__msg__PlayProgress__are_equal(const lyre_msgs__msg__PlayProgress * lhs, const lyre_msgs__msg__PlayProgress * rhs);

/// Copy a msg/PlayProgress message.
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
lyre_msgs__msg__PlayProgress__copy(
  const lyre_msgs__msg__PlayProgress * input,
  lyre_msgs__msg__PlayProgress * output);

/// Initialize array of msg/PlayProgress messages.
/**
 * It allocates the memory for the number of elements and calls
 * lyre_msgs__msg__PlayProgress__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
bool
lyre_msgs__msg__PlayProgress__Sequence__init(lyre_msgs__msg__PlayProgress__Sequence * array, size_t size);

/// Finalize array of msg/PlayProgress messages.
/**
 * It calls
 * lyre_msgs__msg__PlayProgress__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
void
lyre_msgs__msg__PlayProgress__Sequence__fini(lyre_msgs__msg__PlayProgress__Sequence * array);

/// Create array of msg/PlayProgress messages.
/**
 * It allocates the memory for the array and calls
 * lyre_msgs__msg__PlayProgress__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
lyre_msgs__msg__PlayProgress__Sequence *
lyre_msgs__msg__PlayProgress__Sequence__create(size_t size);

/// Destroy array of msg/PlayProgress messages.
/**
 * It calls
 * lyre_msgs__msg__PlayProgress__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
void
lyre_msgs__msg__PlayProgress__Sequence__destroy(lyre_msgs__msg__PlayProgress__Sequence * array);

/// Check for msg/PlayProgress message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
bool
lyre_msgs__msg__PlayProgress__Sequence__are_equal(const lyre_msgs__msg__PlayProgress__Sequence * lhs, const lyre_msgs__msg__PlayProgress__Sequence * rhs);

/// Copy an array of msg/PlayProgress messages.
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
lyre_msgs__msg__PlayProgress__Sequence__copy(
  const lyre_msgs__msg__PlayProgress__Sequence * input,
  lyre_msgs__msg__PlayProgress__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LYRE_MSGS__MSG__DETAIL__PLAY_PROGRESS__FUNCTIONS_H_
