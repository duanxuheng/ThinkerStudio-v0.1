// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bodyctrl_msgs:msg/TsHandName.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bodyctrl_msgs/msg/detail/ts_hand_name__rosidl_typesupport_introspection_c.h"
#include "bodyctrl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bodyctrl_msgs/msg/detail/ts_hand_name__functions.h"
#include "bodyctrl_msgs/msg/detail/ts_hand_name__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void bodyctrl_msgs__msg__TsHandName__rosidl_typesupport_introspection_c__TsHandName_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bodyctrl_msgs__msg__TsHandName__init(message_memory);
}

void bodyctrl_msgs__msg__TsHandName__rosidl_typesupport_introspection_c__TsHandName_fini_function(void * message_memory)
{
  bodyctrl_msgs__msg__TsHandName__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bodyctrl_msgs__msg__TsHandName__rosidl_typesupport_introspection_c__TsHandName_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs__msg__TsHandName, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bodyctrl_msgs__msg__TsHandName__rosidl_typesupport_introspection_c__TsHandName_message_members = {
  "bodyctrl_msgs__msg",  // message namespace
  "TsHandName",  // message name
  1,  // number of fields
  sizeof(bodyctrl_msgs__msg__TsHandName),
  bodyctrl_msgs__msg__TsHandName__rosidl_typesupport_introspection_c__TsHandName_message_member_array,  // message members
  bodyctrl_msgs__msg__TsHandName__rosidl_typesupport_introspection_c__TsHandName_init_function,  // function to initialize message memory (memory has to be allocated)
  bodyctrl_msgs__msg__TsHandName__rosidl_typesupport_introspection_c__TsHandName_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bodyctrl_msgs__msg__TsHandName__rosidl_typesupport_introspection_c__TsHandName_message_type_support_handle = {
  0,
  &bodyctrl_msgs__msg__TsHandName__rosidl_typesupport_introspection_c__TsHandName_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bodyctrl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyctrl_msgs, msg, TsHandName)() {
  if (!bodyctrl_msgs__msg__TsHandName__rosidl_typesupport_introspection_c__TsHandName_message_type_support_handle.typesupport_identifier) {
    bodyctrl_msgs__msg__TsHandName__rosidl_typesupport_introspection_c__TsHandName_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bodyctrl_msgs__msg__TsHandName__rosidl_typesupport_introspection_c__TsHandName_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
