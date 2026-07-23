// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from bodyctrl_msgs:msg/SetMotorSpeed.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_SPEED__FUNCTIONS_H_
#define BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_SPEED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "bodyctrl_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "bodyctrl_msgs/msg/detail/set_motor_speed__struct.h"

/// Initialize msg/SetMotorSpeed message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bodyctrl_msgs__msg__SetMotorSpeed
 * )) before or use
 * bodyctrl_msgs__msg__SetMotorSpeed__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bool
bodyctrl_msgs__msg__SetMotorSpeed__init(bodyctrl_msgs__msg__SetMotorSpeed * msg);

/// Finalize msg/SetMotorSpeed message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
void
bodyctrl_msgs__msg__SetMotorSpeed__fini(bodyctrl_msgs__msg__SetMotorSpeed * msg);

/// Create msg/SetMotorSpeed message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bodyctrl_msgs__msg__SetMotorSpeed__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bodyctrl_msgs__msg__SetMotorSpeed *
bodyctrl_msgs__msg__SetMotorSpeed__create();

/// Destroy msg/SetMotorSpeed message.
/**
 * It calls
 * bodyctrl_msgs__msg__SetMotorSpeed__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
void
bodyctrl_msgs__msg__SetMotorSpeed__destroy(bodyctrl_msgs__msg__SetMotorSpeed * msg);

/// Check for msg/SetMotorSpeed message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bool
bodyctrl_msgs__msg__SetMotorSpeed__are_equal(const bodyctrl_msgs__msg__SetMotorSpeed * lhs, const bodyctrl_msgs__msg__SetMotorSpeed * rhs);

/// Copy a msg/SetMotorSpeed message.
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
bodyctrl_msgs__msg__SetMotorSpeed__copy(
  const bodyctrl_msgs__msg__SetMotorSpeed * input,
  bodyctrl_msgs__msg__SetMotorSpeed * output);

/// Initialize array of msg/SetMotorSpeed messages.
/**
 * It allocates the memory for the number of elements and calls
 * bodyctrl_msgs__msg__SetMotorSpeed__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bool
bodyctrl_msgs__msg__SetMotorSpeed__Sequence__init(bodyctrl_msgs__msg__SetMotorSpeed__Sequence * array, size_t size);

/// Finalize array of msg/SetMotorSpeed messages.
/**
 * It calls
 * bodyctrl_msgs__msg__SetMotorSpeed__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
void
bodyctrl_msgs__msg__SetMotorSpeed__Sequence__fini(bodyctrl_msgs__msg__SetMotorSpeed__Sequence * array);

/// Create array of msg/SetMotorSpeed messages.
/**
 * It allocates the memory for the array and calls
 * bodyctrl_msgs__msg__SetMotorSpeed__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bodyctrl_msgs__msg__SetMotorSpeed__Sequence *
bodyctrl_msgs__msg__SetMotorSpeed__Sequence__create(size_t size);

/// Destroy array of msg/SetMotorSpeed messages.
/**
 * It calls
 * bodyctrl_msgs__msg__SetMotorSpeed__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
void
bodyctrl_msgs__msg__SetMotorSpeed__Sequence__destroy(bodyctrl_msgs__msg__SetMotorSpeed__Sequence * array);

/// Check for msg/SetMotorSpeed message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bool
bodyctrl_msgs__msg__SetMotorSpeed__Sequence__are_equal(const bodyctrl_msgs__msg__SetMotorSpeed__Sequence * lhs, const bodyctrl_msgs__msg__SetMotorSpeed__Sequence * rhs);

/// Copy an array of msg/SetMotorSpeed messages.
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
bodyctrl_msgs__msg__SetMotorSpeed__Sequence__copy(
  const bodyctrl_msgs__msg__SetMotorSpeed__Sequence * input,
  bodyctrl_msgs__msg__SetMotorSpeed__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_SPEED__FUNCTIONS_H_
