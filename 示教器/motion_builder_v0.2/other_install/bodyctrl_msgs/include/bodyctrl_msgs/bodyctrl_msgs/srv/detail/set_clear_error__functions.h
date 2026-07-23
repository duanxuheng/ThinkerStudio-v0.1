// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from bodyctrl_msgs:srv/SetClearError.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__SET_CLEAR_ERROR__FUNCTIONS_H_
#define BODYCTRL_MSGS__SRV__DETAIL__SET_CLEAR_ERROR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "bodyctrl_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "bodyctrl_msgs/srv/detail/set_clear_error__struct.h"

/// Initialize srv/SetClearError message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bodyctrl_msgs__srv__SetClearError_Request
 * )) before or use
 * bodyctrl_msgs__srv__SetClearError_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bool
bodyctrl_msgs__srv__SetClearError_Request__init(bodyctrl_msgs__srv__SetClearError_Request * msg);

/// Finalize srv/SetClearError message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
void
bodyctrl_msgs__srv__SetClearError_Request__fini(bodyctrl_msgs__srv__SetClearError_Request * msg);

/// Create srv/SetClearError message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bodyctrl_msgs__srv__SetClearError_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bodyctrl_msgs__srv__SetClearError_Request *
bodyctrl_msgs__srv__SetClearError_Request__create();

/// Destroy srv/SetClearError message.
/**
 * It calls
 * bodyctrl_msgs__srv__SetClearError_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
void
bodyctrl_msgs__srv__SetClearError_Request__destroy(bodyctrl_msgs__srv__SetClearError_Request * msg);

/// Check for srv/SetClearError message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bool
bodyctrl_msgs__srv__SetClearError_Request__are_equal(const bodyctrl_msgs__srv__SetClearError_Request * lhs, const bodyctrl_msgs__srv__SetClearError_Request * rhs);

/// Copy a srv/SetClearError message.
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
bodyctrl_msgs__srv__SetClearError_Request__copy(
  const bodyctrl_msgs__srv__SetClearError_Request * input,
  bodyctrl_msgs__srv__SetClearError_Request * output);

/// Initialize array of srv/SetClearError messages.
/**
 * It allocates the memory for the number of elements and calls
 * bodyctrl_msgs__srv__SetClearError_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bool
bodyctrl_msgs__srv__SetClearError_Request__Sequence__init(bodyctrl_msgs__srv__SetClearError_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetClearError messages.
/**
 * It calls
 * bodyctrl_msgs__srv__SetClearError_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
void
bodyctrl_msgs__srv__SetClearError_Request__Sequence__fini(bodyctrl_msgs__srv__SetClearError_Request__Sequence * array);

/// Create array of srv/SetClearError messages.
/**
 * It allocates the memory for the array and calls
 * bodyctrl_msgs__srv__SetClearError_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bodyctrl_msgs__srv__SetClearError_Request__Sequence *
bodyctrl_msgs__srv__SetClearError_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetClearError messages.
/**
 * It calls
 * bodyctrl_msgs__srv__SetClearError_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
void
bodyctrl_msgs__srv__SetClearError_Request__Sequence__destroy(bodyctrl_msgs__srv__SetClearError_Request__Sequence * array);

/// Check for srv/SetClearError message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bool
bodyctrl_msgs__srv__SetClearError_Request__Sequence__are_equal(const bodyctrl_msgs__srv__SetClearError_Request__Sequence * lhs, const bodyctrl_msgs__srv__SetClearError_Request__Sequence * rhs);

/// Copy an array of srv/SetClearError messages.
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
bodyctrl_msgs__srv__SetClearError_Request__Sequence__copy(
  const bodyctrl_msgs__srv__SetClearError_Request__Sequence * input,
  bodyctrl_msgs__srv__SetClearError_Request__Sequence * output);

/// Initialize srv/SetClearError message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bodyctrl_msgs__srv__SetClearError_Response
 * )) before or use
 * bodyctrl_msgs__srv__SetClearError_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bool
bodyctrl_msgs__srv__SetClearError_Response__init(bodyctrl_msgs__srv__SetClearError_Response * msg);

/// Finalize srv/SetClearError message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
void
bodyctrl_msgs__srv__SetClearError_Response__fini(bodyctrl_msgs__srv__SetClearError_Response * msg);

/// Create srv/SetClearError message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bodyctrl_msgs__srv__SetClearError_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bodyctrl_msgs__srv__SetClearError_Response *
bodyctrl_msgs__srv__SetClearError_Response__create();

/// Destroy srv/SetClearError message.
/**
 * It calls
 * bodyctrl_msgs__srv__SetClearError_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
void
bodyctrl_msgs__srv__SetClearError_Response__destroy(bodyctrl_msgs__srv__SetClearError_Response * msg);

/// Check for srv/SetClearError message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bool
bodyctrl_msgs__srv__SetClearError_Response__are_equal(const bodyctrl_msgs__srv__SetClearError_Response * lhs, const bodyctrl_msgs__srv__SetClearError_Response * rhs);

/// Copy a srv/SetClearError message.
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
bodyctrl_msgs__srv__SetClearError_Response__copy(
  const bodyctrl_msgs__srv__SetClearError_Response * input,
  bodyctrl_msgs__srv__SetClearError_Response * output);

/// Initialize array of srv/SetClearError messages.
/**
 * It allocates the memory for the number of elements and calls
 * bodyctrl_msgs__srv__SetClearError_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bool
bodyctrl_msgs__srv__SetClearError_Response__Sequence__init(bodyctrl_msgs__srv__SetClearError_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetClearError messages.
/**
 * It calls
 * bodyctrl_msgs__srv__SetClearError_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
void
bodyctrl_msgs__srv__SetClearError_Response__Sequence__fini(bodyctrl_msgs__srv__SetClearError_Response__Sequence * array);

/// Create array of srv/SetClearError messages.
/**
 * It allocates the memory for the array and calls
 * bodyctrl_msgs__srv__SetClearError_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bodyctrl_msgs__srv__SetClearError_Response__Sequence *
bodyctrl_msgs__srv__SetClearError_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetClearError messages.
/**
 * It calls
 * bodyctrl_msgs__srv__SetClearError_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
void
bodyctrl_msgs__srv__SetClearError_Response__Sequence__destroy(bodyctrl_msgs__srv__SetClearError_Response__Sequence * array);

/// Check for srv/SetClearError message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bodyctrl_msgs
bool
bodyctrl_msgs__srv__SetClearError_Response__Sequence__are_equal(const bodyctrl_msgs__srv__SetClearError_Response__Sequence * lhs, const bodyctrl_msgs__srv__SetClearError_Response__Sequence * rhs);

/// Copy an array of srv/SetClearError messages.
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
bodyctrl_msgs__srv__SetClearError_Response__Sequence__copy(
  const bodyctrl_msgs__srv__SetClearError_Response__Sequence * input,
  bodyctrl_msgs__srv__SetClearError_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__SRV__DETAIL__SET_CLEAR_ERROR__FUNCTIONS_H_
