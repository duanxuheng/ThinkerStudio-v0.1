// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lyre_msgs:srv/PlayPause.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__SRV__DETAIL__PLAY_PAUSE__FUNCTIONS_H_
#define LYRE_MSGS__SRV__DETAIL__PLAY_PAUSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "lyre_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "lyre_msgs/srv/detail/play_pause__struct.h"

/// Initialize srv/PlayPause message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lyre_msgs__srv__PlayPause_Request
 * )) before or use
 * lyre_msgs__srv__PlayPause_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
bool
lyre_msgs__srv__PlayPause_Request__init(lyre_msgs__srv__PlayPause_Request * msg);

/// Finalize srv/PlayPause message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
void
lyre_msgs__srv__PlayPause_Request__fini(lyre_msgs__srv__PlayPause_Request * msg);

/// Create srv/PlayPause message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lyre_msgs__srv__PlayPause_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
lyre_msgs__srv__PlayPause_Request *
lyre_msgs__srv__PlayPause_Request__create();

/// Destroy srv/PlayPause message.
/**
 * It calls
 * lyre_msgs__srv__PlayPause_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
void
lyre_msgs__srv__PlayPause_Request__destroy(lyre_msgs__srv__PlayPause_Request * msg);

/// Check for srv/PlayPause message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
bool
lyre_msgs__srv__PlayPause_Request__are_equal(const lyre_msgs__srv__PlayPause_Request * lhs, const lyre_msgs__srv__PlayPause_Request * rhs);

/// Copy a srv/PlayPause message.
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
lyre_msgs__srv__PlayPause_Request__copy(
  const lyre_msgs__srv__PlayPause_Request * input,
  lyre_msgs__srv__PlayPause_Request * output);

/// Initialize array of srv/PlayPause messages.
/**
 * It allocates the memory for the number of elements and calls
 * lyre_msgs__srv__PlayPause_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
bool
lyre_msgs__srv__PlayPause_Request__Sequence__init(lyre_msgs__srv__PlayPause_Request__Sequence * array, size_t size);

/// Finalize array of srv/PlayPause messages.
/**
 * It calls
 * lyre_msgs__srv__PlayPause_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
void
lyre_msgs__srv__PlayPause_Request__Sequence__fini(lyre_msgs__srv__PlayPause_Request__Sequence * array);

/// Create array of srv/PlayPause messages.
/**
 * It allocates the memory for the array and calls
 * lyre_msgs__srv__PlayPause_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
lyre_msgs__srv__PlayPause_Request__Sequence *
lyre_msgs__srv__PlayPause_Request__Sequence__create(size_t size);

/// Destroy array of srv/PlayPause messages.
/**
 * It calls
 * lyre_msgs__srv__PlayPause_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
void
lyre_msgs__srv__PlayPause_Request__Sequence__destroy(lyre_msgs__srv__PlayPause_Request__Sequence * array);

/// Check for srv/PlayPause message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
bool
lyre_msgs__srv__PlayPause_Request__Sequence__are_equal(const lyre_msgs__srv__PlayPause_Request__Sequence * lhs, const lyre_msgs__srv__PlayPause_Request__Sequence * rhs);

/// Copy an array of srv/PlayPause messages.
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
lyre_msgs__srv__PlayPause_Request__Sequence__copy(
  const lyre_msgs__srv__PlayPause_Request__Sequence * input,
  lyre_msgs__srv__PlayPause_Request__Sequence * output);

/// Initialize srv/PlayPause message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lyre_msgs__srv__PlayPause_Response
 * )) before or use
 * lyre_msgs__srv__PlayPause_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
bool
lyre_msgs__srv__PlayPause_Response__init(lyre_msgs__srv__PlayPause_Response * msg);

/// Finalize srv/PlayPause message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
void
lyre_msgs__srv__PlayPause_Response__fini(lyre_msgs__srv__PlayPause_Response * msg);

/// Create srv/PlayPause message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lyre_msgs__srv__PlayPause_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
lyre_msgs__srv__PlayPause_Response *
lyre_msgs__srv__PlayPause_Response__create();

/// Destroy srv/PlayPause message.
/**
 * It calls
 * lyre_msgs__srv__PlayPause_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
void
lyre_msgs__srv__PlayPause_Response__destroy(lyre_msgs__srv__PlayPause_Response * msg);

/// Check for srv/PlayPause message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
bool
lyre_msgs__srv__PlayPause_Response__are_equal(const lyre_msgs__srv__PlayPause_Response * lhs, const lyre_msgs__srv__PlayPause_Response * rhs);

/// Copy a srv/PlayPause message.
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
lyre_msgs__srv__PlayPause_Response__copy(
  const lyre_msgs__srv__PlayPause_Response * input,
  lyre_msgs__srv__PlayPause_Response * output);

/// Initialize array of srv/PlayPause messages.
/**
 * It allocates the memory for the number of elements and calls
 * lyre_msgs__srv__PlayPause_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
bool
lyre_msgs__srv__PlayPause_Response__Sequence__init(lyre_msgs__srv__PlayPause_Response__Sequence * array, size_t size);

/// Finalize array of srv/PlayPause messages.
/**
 * It calls
 * lyre_msgs__srv__PlayPause_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
void
lyre_msgs__srv__PlayPause_Response__Sequence__fini(lyre_msgs__srv__PlayPause_Response__Sequence * array);

/// Create array of srv/PlayPause messages.
/**
 * It allocates the memory for the array and calls
 * lyre_msgs__srv__PlayPause_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
lyre_msgs__srv__PlayPause_Response__Sequence *
lyre_msgs__srv__PlayPause_Response__Sequence__create(size_t size);

/// Destroy array of srv/PlayPause messages.
/**
 * It calls
 * lyre_msgs__srv__PlayPause_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
void
lyre_msgs__srv__PlayPause_Response__Sequence__destroy(lyre_msgs__srv__PlayPause_Response__Sequence * array);

/// Check for srv/PlayPause message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lyre_msgs
bool
lyre_msgs__srv__PlayPause_Response__Sequence__are_equal(const lyre_msgs__srv__PlayPause_Response__Sequence * lhs, const lyre_msgs__srv__PlayPause_Response__Sequence * rhs);

/// Copy an array of srv/PlayPause messages.
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
lyre_msgs__srv__PlayPause_Response__Sequence__copy(
  const lyre_msgs__srv__PlayPause_Response__Sequence * input,
  lyre_msgs__srv__PlayPause_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LYRE_MSGS__SRV__DETAIL__PLAY_PAUSE__FUNCTIONS_H_
