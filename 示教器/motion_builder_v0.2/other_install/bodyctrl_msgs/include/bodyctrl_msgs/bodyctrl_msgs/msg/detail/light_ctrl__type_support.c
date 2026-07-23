// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bodyctrl_msgs:msg/LightCtrl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bodyctrl_msgs/msg/detail/light_ctrl__rosidl_typesupport_introspection_c.h"
#include "bodyctrl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bodyctrl_msgs/msg/detail/light_ctrl__functions.h"
#include "bodyctrl_msgs/msg/detail/light_ctrl__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `caller_id`
// Member `caller_msg`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bodyctrl_msgs__msg__LightCtrl__rosidl_typesupport_introspection_c__LightCtrl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bodyctrl_msgs__msg__LightCtrl__init(message_memory);
}

void bodyctrl_msgs__msg__LightCtrl__rosidl_typesupport_introspection_c__LightCtrl_fini_function(void * message_memory)
{
  bodyctrl_msgs__msg__LightCtrl__fini(message_memory);
}

size_t bodyctrl_msgs__msg__LightCtrl__rosidl_typesupport_introspection_c__size_function__LightCtrl__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__int8__Sequence * member =
    (const rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return member->size;
}

const void * bodyctrl_msgs__msg__LightCtrl__rosidl_typesupport_introspection_c__get_const_function__LightCtrl__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int8__Sequence * member =
    (const rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bodyctrl_msgs__msg__LightCtrl__rosidl_typesupport_introspection_c__get_function__LightCtrl__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int8__Sequence * member =
    (rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return &member->data[index];
}

void bodyctrl_msgs__msg__LightCtrl__rosidl_typesupport_introspection_c__fetch_function__LightCtrl__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int8_t * item =
    ((const int8_t *)
    bodyctrl_msgs__msg__LightCtrl__rosidl_typesupport_introspection_c__get_const_function__LightCtrl__data(untyped_member, index));
  int8_t * value =
    (int8_t *)(untyped_value);
  *value = *item;
}

void bodyctrl_msgs__msg__LightCtrl__rosidl_typesupport_introspection_c__assign_function__LightCtrl__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int8_t * item =
    ((int8_t *)
    bodyctrl_msgs__msg__LightCtrl__rosidl_typesupport_introspection_c__get_function__LightCtrl__data(untyped_member, index));
  const int8_t * value =
    (const int8_t *)(untyped_value);
  *item = *value;
}

bool bodyctrl_msgs__msg__LightCtrl__rosidl_typesupport_introspection_c__resize_function__LightCtrl__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int8__Sequence * member =
    (rosidl_runtime_c__int8__Sequence *)(untyped_member);
  rosidl_runtime_c__int8__Sequence__fini(member);
  return rosidl_runtime_c__int8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bodyctrl_msgs__msg__LightCtrl__rosidl_typesupport_introspection_c__LightCtrl_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs__msg__LightCtrl, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs__msg__LightCtrl, cmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs__msg__LightCtrl, data),  // bytes offset in struct
    NULL,  // default value
    bodyctrl_msgs__msg__LightCtrl__rosidl_typesupport_introspection_c__size_function__LightCtrl__data,  // size() function pointer
    bodyctrl_msgs__msg__LightCtrl__rosidl_typesupport_introspection_c__get_const_function__LightCtrl__data,  // get_const(index) function pointer
    bodyctrl_msgs__msg__LightCtrl__rosidl_typesupport_introspection_c__get_function__LightCtrl__data,  // get(index) function pointer
    bodyctrl_msgs__msg__LightCtrl__rosidl_typesupport_introspection_c__fetch_function__LightCtrl__data,  // fetch(index, &value) function pointer
    bodyctrl_msgs__msg__LightCtrl__rosidl_typesupport_introspection_c__assign_function__LightCtrl__data,  // assign(index, value) function pointer
    bodyctrl_msgs__msg__LightCtrl__rosidl_typesupport_introspection_c__resize_function__LightCtrl__data  // resize(index) function pointer
  },
  {
    "caller_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs__msg__LightCtrl, caller_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "caller_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs__msg__LightCtrl, caller_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bodyctrl_msgs__msg__LightCtrl__rosidl_typesupport_introspection_c__LightCtrl_message_members = {
  "bodyctrl_msgs__msg",  // message namespace
  "LightCtrl",  // message name
  5,  // number of fields
  sizeof(bodyctrl_msgs__msg__LightCtrl),
  bodyctrl_msgs__msg__LightCtrl__rosidl_typesupport_introspection_c__LightCtrl_message_member_array,  // message members
  bodyctrl_msgs__msg__LightCtrl__rosidl_typesupport_introspection_c__LightCtrl_init_function,  // function to initialize message memory (memory has to be allocated)
  bodyctrl_msgs__msg__LightCtrl__rosidl_typesupport_introspection_c__LightCtrl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bodyctrl_msgs__msg__LightCtrl__rosidl_typesupport_introspection_c__LightCtrl_message_type_support_handle = {
  0,
  &bodyctrl_msgs__msg__LightCtrl__rosidl_typesupport_introspection_c__LightCtrl_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bodyctrl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyctrl_msgs, msg, LightCtrl)() {
  bodyctrl_msgs__msg__LightCtrl__rosidl_typesupport_introspection_c__LightCtrl_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!bodyctrl_msgs__msg__LightCtrl__rosidl_typesupport_introspection_c__LightCtrl_message_type_support_handle.typesupport_identifier) {
    bodyctrl_msgs__msg__LightCtrl__rosidl_typesupport_introspection_c__LightCtrl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bodyctrl_msgs__msg__LightCtrl__rosidl_typesupport_introspection_c__LightCtrl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
