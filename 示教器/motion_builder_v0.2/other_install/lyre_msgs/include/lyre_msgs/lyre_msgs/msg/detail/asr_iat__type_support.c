// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lyre_msgs:msg/AsrIat.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lyre_msgs/msg/detail/asr_iat__rosidl_typesupport_introspection_c.h"
#include "lyre_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lyre_msgs/msg/detail/asr_iat__functions.h"
#include "lyre_msgs/msg/detail/asr_iat__struct.h"


// Include directives for member types
// Member `id`
// Member `text`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lyre_msgs__msg__AsrIat__rosidl_typesupport_introspection_c__AsrIat_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lyre_msgs__msg__AsrIat__init(message_memory);
}

void lyre_msgs__msg__AsrIat__rosidl_typesupport_introspection_c__AsrIat_fini_function(void * message_memory)
{
  lyre_msgs__msg__AsrIat__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember lyre_msgs__msg__AsrIat__rosidl_typesupport_introspection_c__AsrIat_message_member_array[2] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lyre_msgs__msg__AsrIat, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "text",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lyre_msgs__msg__AsrIat, text),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lyre_msgs__msg__AsrIat__rosidl_typesupport_introspection_c__AsrIat_message_members = {
  "lyre_msgs__msg",  // message namespace
  "AsrIat",  // message name
  2,  // number of fields
  sizeof(lyre_msgs__msg__AsrIat),
  lyre_msgs__msg__AsrIat__rosidl_typesupport_introspection_c__AsrIat_message_member_array,  // message members
  lyre_msgs__msg__AsrIat__rosidl_typesupport_introspection_c__AsrIat_init_function,  // function to initialize message memory (memory has to be allocated)
  lyre_msgs__msg__AsrIat__rosidl_typesupport_introspection_c__AsrIat_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lyre_msgs__msg__AsrIat__rosidl_typesupport_introspection_c__AsrIat_message_type_support_handle = {
  0,
  &lyre_msgs__msg__AsrIat__rosidl_typesupport_introspection_c__AsrIat_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lyre_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lyre_msgs, msg, AsrIat)() {
  if (!lyre_msgs__msg__AsrIat__rosidl_typesupport_introspection_c__AsrIat_message_type_support_handle.typesupport_identifier) {
    lyre_msgs__msg__AsrIat__rosidl_typesupport_introspection_c__AsrIat_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lyre_msgs__msg__AsrIat__rosidl_typesupport_introspection_c__AsrIat_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
