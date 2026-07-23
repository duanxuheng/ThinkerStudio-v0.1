// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from bodyctrl_msgs:msg/SetTsHandPosition.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_POSITION__FUNCTIONS_H_
#define BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_POSITION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "bodyctrl_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "bodyctrl_msgs/msg/detail/set_ts_hand_position__struct.h"

/// Initialize msg/SetTsHandPosition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bodyctrl_msgs__msg__SetTsHandPosition
 * )) before or use
 * bodyctrl_msgs__msg__SetTsHandPosition__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bool
bodyctrl_msgs__msg__SetTsHandPosition__init(bodyctrl_msgs__msg__SetTsHandPosition * msg);

/// Finalize msg/SetTsHandPosition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
void
bodyctrl_msgs__msg__SetTsHandPosition__fini(bodyctrl_msgs__msg__SetTsHandPosition * msg);

/// Create msg/SetTsHandPosition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bodyctrl_msgs__msg__SetTsHandPosition__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bodyctrl_msgs__msg__SetTsHandPosition *
bodyctrl_msgs__msg__SetTsHandPosition__create();

/// Destroy msg/SetTsHandPosition message.
/**
 * It calls
 * bodyctrl_msgs__msg__SetTsHandPosition__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
void
bodyctrl_msgs__msg__SetTsHandPosition__destroy(bodyctrl_msgs__msg__SetTsHandPosition * msg);

/// Check for msg/SetTsHandPosition message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bool
bodyctrl_msgs__msg__SetTsHandPosition__are_equal(const bodyctrl_msgs__msg__SetTsHandPosition * lhs, const bodyctrl_msgs__msg__SetTsHandPosition * rhs);

/// Copy a msg/SetTsHandPosition message.
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
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bool
bodyctrl_msgs__msg__SetTsHandPosition__copy(
  const bodyctrl_msgs__msg__SetTsHandPosition * input,
  bodyctrl_msgs__msg__SetTsHandPosition * output);

/// Initialize array of msg/SetTsHandPosition messages.
/**
 * It allocates the memory for the number of elements and calls
 * bodyctrl_msgs__msg__SetTsHandPosition__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bool
bodyctrl_msgs__msg__SetTsHandPosition__Sequence__init(bodyctrl_msgs__msg__SetTsHandPosition__Sequence * array, size_t size);

/// Finalize array of msg/SetTsHandPosition messages.
/**
 * It calls
 * bodyctrl_msgs__msg__SetTsHandPosition__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
void
bodyctrl_msgs__msg__SetTsHandPosition__Sequence__fini(bodyctrl_msgs__msg__SetTsHandPosition__Sequence * array);

/// Create array of msg/SetTsHandPosition messages.
/**
 * It allocates the memory for the array and calls
 * bodyctrl_msgs__msg__SetTsHandPosition__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bodyctrl_msgs__msg__SetTsHandPosition__Sequence *
bodyctrl_msgs__msg__SetTsHandPosition__Sequence__create(size_t size);

/// Destroy array of msg/SetTsHandPosition messages.
/**
 * It calls
 * bodyctrl_msgs__msg__SetTsHandPosition__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
void
bodyctrl_msgs__msg__SetTsHandPosition__Sequence__destroy(bodyctrl_msgs__msg__SetTsHandPosition__Sequence * array);

/// Check for msg/SetTsHandPosition message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bool
bodyctrl_msgs__msg__SetTsHandPosition__Sequence__are_equal(const bodyctrl_msgs__msg__SetTsHandPosition__Sequence * lhs, const bodyctrl_msgs__msg__SetTsHandPosition__Sequence * rhs);

/// Copy an array of msg/SetTsHandPosition messages.
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
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bool
bodyctrl_msgs__msg__SetTsHandPosition__Sequence__copy(
  const bodyctrl_msgs__msg__SetTsHandPosition__Sequence * input,
  bodyctrl_msgs__msg__SetTsHandPosition__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_POSITION__FUNCTIONS_H_
