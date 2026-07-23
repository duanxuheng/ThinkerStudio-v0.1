// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from bodyctrl_msgs:srv/SetForce.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__SET_FORCE__FUNCTIONS_H_
#define BODYCTRL_MSGS__SRV__DETAIL__SET_FORCE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "bodyctrl_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "bodyctrl_msgs/srv/detail/set_force__struct.h"

/// Initialize srv/SetForce message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bodyctrl_msgs__srv__SetForce_Request
 * )) before or use
 * bodyctrl_msgs__srv__SetForce_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bool
bodyctrl_msgs__srv__SetForce_Request__init(bodyctrl_msgs__srv__SetForce_Request * msg);

/// Finalize srv/SetForce message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
void
bodyctrl_msgs__srv__SetForce_Request__fini(bodyctrl_msgs__srv__SetForce_Request * msg);

/// Create srv/SetForce message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bodyctrl_msgs__srv__SetForce_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bodyctrl_msgs__srv__SetForce_Request *
bodyctrl_msgs__srv__SetForce_Request__create();

/// Destroy srv/SetForce message.
/**
 * It calls
 * bodyctrl_msgs__srv__SetForce_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
void
bodyctrl_msgs__srv__SetForce_Request__destroy(bodyctrl_msgs__srv__SetForce_Request * msg);

/// Check for srv/SetForce message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bool
bodyctrl_msgs__srv__SetForce_Request__are_equal(const bodyctrl_msgs__srv__SetForce_Request * lhs, const bodyctrl_msgs__srv__SetForce_Request * rhs);

/// Copy a srv/SetForce message.
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
bodyctrl_msgs__srv__SetForce_Request__copy(
  const bodyctrl_msgs__srv__SetForce_Request * input,
  bodyctrl_msgs__srv__SetForce_Request * output);

/// Initialize array of srv/SetForce messages.
/**
 * It allocates the memory for the number of elements and calls
 * bodyctrl_msgs__srv__SetForce_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bool
bodyctrl_msgs__srv__SetForce_Request__Sequence__init(bodyctrl_msgs__srv__SetForce_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetForce messages.
/**
 * It calls
 * bodyctrl_msgs__srv__SetForce_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
void
bodyctrl_msgs__srv__SetForce_Request__Sequence__fini(bodyctrl_msgs__srv__SetForce_Request__Sequence * array);

/// Create array of srv/SetForce messages.
/**
 * It allocates the memory for the array and calls
 * bodyctrl_msgs__srv__SetForce_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bodyctrl_msgs__srv__SetForce_Request__Sequence *
bodyctrl_msgs__srv__SetForce_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetForce messages.
/**
 * It calls
 * bodyctrl_msgs__srv__SetForce_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
void
bodyctrl_msgs__srv__SetForce_Request__Sequence__destroy(bodyctrl_msgs__srv__SetForce_Request__Sequence * array);

/// Check for srv/SetForce message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bool
bodyctrl_msgs__srv__SetForce_Request__Sequence__are_equal(const bodyctrl_msgs__srv__SetForce_Request__Sequence * lhs, const bodyctrl_msgs__srv__SetForce_Request__Sequence * rhs);

/// Copy an array of srv/SetForce messages.
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
bodyctrl_msgs__srv__SetForce_Request__Sequence__copy(
  const bodyctrl_msgs__srv__SetForce_Request__Sequence * input,
  bodyctrl_msgs__srv__SetForce_Request__Sequence * output);

/// Initialize srv/SetForce message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bodyctrl_msgs__srv__SetForce_Response
 * )) before or use
 * bodyctrl_msgs__srv__SetForce_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bool
bodyctrl_msgs__srv__SetForce_Response__init(bodyctrl_msgs__srv__SetForce_Response * msg);

/// Finalize srv/SetForce message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
void
bodyctrl_msgs__srv__SetForce_Response__fini(bodyctrl_msgs__srv__SetForce_Response * msg);

/// Create srv/SetForce message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bodyctrl_msgs__srv__SetForce_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bodyctrl_msgs__srv__SetForce_Response *
bodyctrl_msgs__srv__SetForce_Response__create();

/// Destroy srv/SetForce message.
/**
 * It calls
 * bodyctrl_msgs__srv__SetForce_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
void
bodyctrl_msgs__srv__SetForce_Response__destroy(bodyctrl_msgs__srv__SetForce_Response * msg);

/// Check for srv/SetForce message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bool
bodyctrl_msgs__srv__SetForce_Response__are_equal(const bodyctrl_msgs__srv__SetForce_Response * lhs, const bodyctrl_msgs__srv__SetForce_Response * rhs);

/// Copy a srv/SetForce message.
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
bodyctrl_msgs__srv__SetForce_Response__copy(
  const bodyctrl_msgs__srv__SetForce_Response * input,
  bodyctrl_msgs__srv__SetForce_Response * output);

/// Initialize array of srv/SetForce messages.
/**
 * It allocates the memory for the number of elements and calls
 * bodyctrl_msgs__srv__SetForce_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bool
bodyctrl_msgs__srv__SetForce_Response__Sequence__init(bodyctrl_msgs__srv__SetForce_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetForce messages.
/**
 * It calls
 * bodyctrl_msgs__srv__SetForce_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
void
bodyctrl_msgs__srv__SetForce_Response__Sequence__fini(bodyctrl_msgs__srv__SetForce_Response__Sequence * array);

/// Create array of srv/SetForce messages.
/**
 * It allocates the memory for the array and calls
 * bodyctrl_msgs__srv__SetForce_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bodyctrl_msgs__srv__SetForce_Response__Sequence *
bodyctrl_msgs__srv__SetForce_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetForce messages.
/**
 * It calls
 * bodyctrl_msgs__srv__SetForce_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
void
bodyctrl_msgs__srv__SetForce_Response__Sequence__destroy(bodyctrl_msgs__srv__SetForce_Response__Sequence * array);

/// Check for srv/SetForce message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bool
bodyctrl_msgs__srv__SetForce_Response__Sequence__are_equal(const bodyctrl_msgs__srv__SetForce_Response__Sequence * lhs, const bodyctrl_msgs__srv__SetForce_Response__Sequence * rhs);

/// Copy an array of srv/SetForce messages.
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
bodyctrl_msgs__srv__SetForce_Response__Sequence__copy(
  const bodyctrl_msgs__srv__SetForce_Response__Sequence * input,
  bodyctrl_msgs__srv__SetForce_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__SRV__DETAIL__SET_FORCE__FUNCTIONS_H_
