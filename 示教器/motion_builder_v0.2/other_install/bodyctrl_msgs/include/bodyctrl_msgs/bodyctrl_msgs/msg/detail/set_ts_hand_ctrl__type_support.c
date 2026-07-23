// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bodyctrl_msgs:msg/SetTsHandCtrl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bodyctrl_msgs/msg/detail/set_ts_hand_ctrl__rosidl_typesupport_introspection_c.h"
#include "bodyctrl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bodyctrl_msgs/msg/detail/set_ts_hand_ctrl__functions.h"
#include "bodyctrl_msgs/msg/detail/set_ts_hand_ctrl__struct.h"


// Include directives for member types
// Member `rotation`
// Member `bend`
#include "bodyctrl_msgs/msg/set_ts_hand_ctrl_item.h"
// Member `rotation`
// Member `bend`
#include "bodyctrl_msgs/msg/detail/set_ts_hand_ctrl_item__rosidl_typesupport_introspection_c.h"
// Member `threshold`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__SetTsHandCtrl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bodyctrl_msgs__msg__SetTsHandCtrl__init(message_memory);
}

void bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__SetTsHandCtrl_fini_function(void * message_memory)
{
  bodyctrl_msgs__msg__SetTsHandCtrl__fini(message_memory);
}

size_t bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__size_function__SetTsHandCtrl__bend(
  const void * untyped_member)
{
  const bodyctrl_msgs__msg__SetTsHandCtrlItem__Sequence * member =
    (const bodyctrl_msgs__msg__SetTsHandCtrlItem__Sequence *)(untyped_member);
  return member->size;
}

const void * bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__get_const_function__SetTsHandCtrl__bend(
  const void * untyped_member, size_t index)
{
  const bodyctrl_msgs__msg__SetTsHandCtrlItem__Sequence * member =
    (const bodyctrl_msgs__msg__SetTsHandCtrlItem__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__get_function__SetTsHandCtrl__bend(
  void * untyped_member, size_t index)
{
  bodyctrl_msgs__msg__SetTsHandCtrlItem__Sequence * member =
    (bodyctrl_msgs__msg__SetTsHandCtrlItem__Sequence *)(untyped_member);
  return &member->data[index];
}

void bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__fetch_function__SetTsHandCtrl__bend(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bodyctrl_msgs__msg__SetTsHandCtrlItem * item =
    ((const bodyctrl_msgs__msg__SetTsHandCtrlItem *)
    bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__get_const_function__SetTsHandCtrl__bend(untyped_member, index));
  bodyctrl_msgs__msg__SetTsHandCtrlItem * value =
    (bodyctrl_msgs__msg__SetTsHandCtrlItem *)(untyped_value);
  *value = *item;
}

void bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__assign_function__SetTsHandCtrl__bend(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bodyctrl_msgs__msg__SetTsHandCtrlItem * item =
    ((bodyctrl_msgs__msg__SetTsHandCtrlItem *)
    bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__get_function__SetTsHandCtrl__bend(untyped_member, index));
  const bodyctrl_msgs__msg__SetTsHandCtrlItem * value =
    (const bodyctrl_msgs__msg__SetTsHandCtrlItem *)(untyped_value);
  *item = *value;
}

bool bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__resize_function__SetTsHandCtrl__bend(
  void * untyped_member, size_t size)
{
  bodyctrl_msgs__msg__SetTsHandCtrlItem__Sequence * member =
    (bodyctrl_msgs__msg__SetTsHandCtrlItem__Sequence *)(untyped_member);
  bodyctrl_msgs__msg__SetTsHandCtrlItem__Sequence__fini(member);
  return bodyctrl_msgs__msg__SetTsHandCtrlItem__Sequence__init(member, size);
}

size_t bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__size_function__SetTsHandCtrl__threshold(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return member->size;
}

const void * bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__get_const_function__SetTsHandCtrl__threshold(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__get_function__SetTsHandCtrl__threshold(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__fetch_function__SetTsHandCtrl__threshold(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__get_const_function__SetTsHandCtrl__threshold(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__assign_function__SetTsHandCtrl__threshold(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__get_function__SetTsHandCtrl__threshold(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

bool bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__resize_function__SetTsHandCtrl__threshold(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  rosidl_runtime_c__uint16__Sequence__fini(member);
  return rosidl_runtime_c__uint16__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__SetTsHandCtrl_message_member_array[4] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs__msg__SetTsHandCtrl, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rotation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs__msg__SetTsHandCtrl, rotation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bend",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs__msg__SetTsHandCtrl, bend),  // bytes offset in struct
    NULL,  // default value
    bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__size_function__SetTsHandCtrl__bend,  // size() function pointer
    bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__get_const_function__SetTsHandCtrl__bend,  // get_const(index) function pointer
    bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__get_function__SetTsHandCtrl__bend,  // get(index) function pointer
    bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__fetch_function__SetTsHandCtrl__bend,  // fetch(index, &value) function pointer
    bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__assign_function__SetTsHandCtrl__bend,  // assign(index, value) function pointer
    bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__resize_function__SetTsHandCtrl__bend  // resize(index) function pointer
  },
  {
    "threshold",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs__msg__SetTsHandCtrl, threshold),  // bytes offset in struct
    NULL,  // default value
    bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__size_function__SetTsHandCtrl__threshold,  // size() function pointer
    bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__get_const_function__SetTsHandCtrl__threshold,  // get_const(index) function pointer
    bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__get_function__SetTsHandCtrl__threshold,  // get(index) function pointer
    bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__fetch_function__SetTsHandCtrl__threshold,  // fetch(index, &value) function pointer
    bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__assign_function__SetTsHandCtrl__threshold,  // assign(index, value) function pointer
    bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__resize_function__SetTsHandCtrl__threshold  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__SetTsHandCtrl_message_members = {
  "bodyctrl_msgs__msg",  // message namespace
  "SetTsHandCtrl",  // message name
  4,  // number of fields
  sizeof(bodyctrl_msgs__msg__SetTsHandCtrl),
  bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__SetTsHandCtrl_message_member_array,  // message members
  bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__SetTsHandCtrl_init_function,  // function to initialize message memory (memory has to be allocated)
  bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__SetTsHandCtrl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__SetTsHandCtrl_message_type_support_handle = {
  0,
  &bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__SetTsHandCtrl_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bodyctrl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyctrl_msgs, msg, SetTsHandCtrl)() {
  bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__SetTsHandCtrl_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyctrl_msgs, msg, SetTsHandCtrlItem)();
  bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__SetTsHandCtrl_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyctrl_msgs, msg, SetTsHandCtrlItem)();
  if (!bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__SetTsHandCtrl_message_type_support_handle.typesupport_identifier) {
    bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__SetTsHandCtrl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bodyctrl_msgs__msg__SetTsHandCtrl__rosidl_typesupport_introspection_c__SetTsHandCtrl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
