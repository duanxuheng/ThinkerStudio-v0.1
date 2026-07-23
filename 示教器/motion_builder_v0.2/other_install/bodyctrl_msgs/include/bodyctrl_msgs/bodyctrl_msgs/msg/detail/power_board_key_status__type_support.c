// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bodyctrl_msgs:msg/PowerBoardKeyStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bodyctrl_msgs/msg/detail/power_board_key_status__rosidl_typesupport_introspection_c.h"
#include "bodyctrl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bodyctrl_msgs/msg/detail/power_board_key_status__functions.h"
#include "bodyctrl_msgs/msg/detail/power_board_key_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `is_estop`
// Member `is_remote_estop`
// Member `is_power_on`
#include "std_msgs/msg/bool.h"
// Member `is_estop`
// Member `is_remote_estop`
// Member `is_power_on`
#include "std_msgs/msg/detail/bool__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bodyctrl_msgs__msg__PowerBoardKeyStatus__rosidl_typesupport_introspection_c__PowerBoardKeyStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bodyctrl_msgs__msg__PowerBoardKeyStatus__init(message_memory);
}

void bodyctrl_msgs__msg__PowerBoardKeyStatus__rosidl_typesupport_introspection_c__PowerBoardKeyStatus_fini_function(void * message_memory)
{
  bodyctrl_msgs__msg__PowerBoardKeyStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bodyctrl_msgs__msg__PowerBoardKeyStatus__rosidl_typesupport_introspection_c__PowerBoardKeyStatus_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs__msg__PowerBoardKeyStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "work_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs__msg__PowerBoardKeyStatus, work_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_estop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs__msg__PowerBoardKeyStatus, is_estop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_remote_estop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs__msg__PowerBoardKeyStatus, is_remote_estop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_power_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs__msg__PowerBoardKeyStatus, is_power_on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bodyctrl_msgs__msg__PowerBoardKeyStatus__rosidl_typesupport_introspection_c__PowerBoardKeyStatus_message_members = {
  "bodyctrl_msgs__msg",  // message namespace
  "PowerBoardKeyStatus",  // message name
  5,  // number of fields
  sizeof(bodyctrl_msgs__msg__PowerBoardKeyStatus),
  bodyctrl_msgs__msg__PowerBoardKeyStatus__rosidl_typesupport_introspection_c__PowerBoardKeyStatus_message_member_array,  // message members
  bodyctrl_msgs__msg__PowerBoardKeyStatus__rosidl_typesupport_introspection_c__PowerBoardKeyStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  bodyctrl_msgs__msg__PowerBoardKeyStatus__rosidl_typesupport_introspection_c__PowerBoardKeyStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bodyctrl_msgs__msg__PowerBoardKeyStatus__rosidl_typesupport_introspection_c__PowerBoardKeyStatus_message_type_support_handle = {
  0,
  &bodyctrl_msgs__msg__PowerBoardKeyStatus__rosidl_typesupport_introspection_c__PowerBoardKeyStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bodyctrl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyctrl_msgs, msg, PowerBoardKeyStatus)() {
  bodyctrl_msgs__msg__PowerBoardKeyStatus__rosidl_typesupport_introspection_c__PowerBoardKeyStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  bodyctrl_msgs__msg__PowerBoardKeyStatus__rosidl_typesupport_introspection_c__PowerBoardKeyStatus_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Bool)();
  bodyctrl_msgs__msg__PowerBoardKeyStatus__rosidl_typesupport_introspection_c__PowerBoardKeyStatus_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Bool)();
  bodyctrl_msgs__msg__PowerBoardKeyStatus__rosidl_typesupport_introspection_c__PowerBoardKeyStatus_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Bool)();
  if (!bodyctrl_msgs__msg__PowerBoardKeyStatus__rosidl_typesupport_introspection_c__PowerBoardKeyStatus_message_type_support_handle.typesupport_identifier) {
    bodyctrl_msgs__msg__PowerBoardKeyStatus__rosidl_typesupport_introspection_c__PowerBoardKeyStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bodyctrl_msgs__msg__PowerBoardKeyStatus__rosidl_typesupport_introspection_c__PowerBoardKeyStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
