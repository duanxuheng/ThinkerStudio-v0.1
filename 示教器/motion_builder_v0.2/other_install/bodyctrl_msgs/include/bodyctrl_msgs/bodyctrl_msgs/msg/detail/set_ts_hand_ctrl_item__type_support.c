// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bodyctrl_msgs:msg/SetTsHandCtrlItem.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bodyctrl_msgs/msg/detail/set_ts_hand_ctrl_item__rosidl_typesupport_introspection_c.h"
#include "bodyctrl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bodyctrl_msgs/msg/detail/set_ts_hand_ctrl_item__functions.h"
#include "bodyctrl_msgs/msg/detail/set_ts_hand_ctrl_item__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void bodyctrl_msgs__msg__SetTsHandCtrlItem__rosidl_typesupport_introspection_c__SetTsHandCtrlItem_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bodyctrl_msgs__msg__SetTsHandCtrlItem__init(message_memory);
}

void bodyctrl_msgs__msg__SetTsHandCtrlItem__rosidl_typesupport_introspection_c__SetTsHandCtrlItem_fini_function(void * message_memory)
{
  bodyctrl_msgs__msg__SetTsHandCtrlItem__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bodyctrl_msgs__msg__SetTsHandCtrlItem__rosidl_typesupport_introspection_c__SetTsHandCtrlItem_message_member_array[3] = {
  {
    "vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs__msg__SetTsHandCtrlItem, vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs__msg__SetTsHandCtrlItem, start_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs__msg__SetTsHandCtrlItem, max_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bodyctrl_msgs__msg__SetTsHandCtrlItem__rosidl_typesupport_introspection_c__SetTsHandCtrlItem_message_members = {
  "bodyctrl_msgs__msg",  // message namespace
  "SetTsHandCtrlItem",  // message name
  3,  // number of fields
  sizeof(bodyctrl_msgs__msg__SetTsHandCtrlItem),
  bodyctrl_msgs__msg__SetTsHandCtrlItem__rosidl_typesupport_introspection_c__SetTsHandCtrlItem_message_member_array,  // message members
  bodyctrl_msgs__msg__SetTsHandCtrlItem__rosidl_typesupport_introspection_c__SetTsHandCtrlItem_init_function,  // function to initialize message memory (memory has to be allocated)
  bodyctrl_msgs__msg__SetTsHandCtrlItem__rosidl_typesupport_introspection_c__SetTsHandCtrlItem_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bodyctrl_msgs__msg__SetTsHandCtrlItem__rosidl_typesupport_introspection_c__SetTsHandCtrlItem_message_type_support_handle = {
  0,
  &bodyctrl_msgs__msg__SetTsHandCtrlItem__rosidl_typesupport_introspection_c__SetTsHandCtrlItem_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bodyctrl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyctrl_msgs, msg, SetTsHandCtrlItem)() {
  if (!bodyctrl_msgs__msg__SetTsHandCtrlItem__rosidl_typesupport_introspection_c__SetTsHandCtrlItem_message_type_support_handle.typesupport_identifier) {
    bodyctrl_msgs__msg__SetTsHandCtrlItem__rosidl_typesupport_introspection_c__SetTsHandCtrlItem_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bodyctrl_msgs__msg__SetTsHandCtrlItem__rosidl_typesupport_introspection_c__SetTsHandCtrlItem_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
