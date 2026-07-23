// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bodyctrl_msgs:msg/SetTsHandCtrl.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bodyctrl_msgs/msg/detail/set_ts_hand_ctrl__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace bodyctrl_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SetTsHandCtrl_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bodyctrl_msgs::msg::SetTsHandCtrl(_init);
}

void SetTsHandCtrl_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bodyctrl_msgs::msg::SetTsHandCtrl *>(message_memory);
  typed_message->~SetTsHandCtrl();
}

size_t size_function__SetTsHandCtrl__bend(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bodyctrl_msgs::msg::SetTsHandCtrlItem> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetTsHandCtrl__bend(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bodyctrl_msgs::msg::SetTsHandCtrlItem> *>(untyped_member);
  return &member[index];
}

void * get_function__SetTsHandCtrl__bend(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bodyctrl_msgs::msg::SetTsHandCtrlItem> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetTsHandCtrl__bend(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bodyctrl_msgs::msg::SetTsHandCtrlItem *>(
    get_const_function__SetTsHandCtrl__bend(untyped_member, index));
  auto & value = *reinterpret_cast<bodyctrl_msgs::msg::SetTsHandCtrlItem *>(untyped_value);
  value = item;
}

void assign_function__SetTsHandCtrl__bend(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bodyctrl_msgs::msg::SetTsHandCtrlItem *>(
    get_function__SetTsHandCtrl__bend(untyped_member, index));
  const auto & value = *reinterpret_cast<const bodyctrl_msgs::msg::SetTsHandCtrlItem *>(untyped_value);
  item = value;
}

void resize_function__SetTsHandCtrl__bend(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bodyctrl_msgs::msg::SetTsHandCtrlItem> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SetTsHandCtrl__threshold(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetTsHandCtrl__threshold(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SetTsHandCtrl__threshold(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetTsHandCtrl__threshold(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__SetTsHandCtrl__threshold(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__SetTsHandCtrl__threshold(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__SetTsHandCtrl__threshold(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

void resize_function__SetTsHandCtrl__threshold(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetTsHandCtrl_message_member_array[4] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs::msg::SetTsHandCtrl, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rotation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bodyctrl_msgs::msg::SetTsHandCtrlItem>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs::msg::SetTsHandCtrl, rotation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bend",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bodyctrl_msgs::msg::SetTsHandCtrlItem>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs::msg::SetTsHandCtrl, bend),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetTsHandCtrl__bend,  // size() function pointer
    get_const_function__SetTsHandCtrl__bend,  // get_const(index) function pointer
    get_function__SetTsHandCtrl__bend,  // get(index) function pointer
    fetch_function__SetTsHandCtrl__bend,  // fetch(index, &value) function pointer
    assign_function__SetTsHandCtrl__bend,  // assign(index, value) function pointer
    resize_function__SetTsHandCtrl__bend  // resize(index) function pointer
  },
  {
    "threshold",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs::msg::SetTsHandCtrl, threshold),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetTsHandCtrl__threshold,  // size() function pointer
    get_const_function__SetTsHandCtrl__threshold,  // get_const(index) function pointer
    get_function__SetTsHandCtrl__threshold,  // get(index) function pointer
    fetch_function__SetTsHandCtrl__threshold,  // fetch(index, &value) function pointer
    assign_function__SetTsHandCtrl__threshold,  // assign(index, value) function pointer
    resize_function__SetTsHandCtrl__threshold  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetTsHandCtrl_message_members = {
  "bodyctrl_msgs::msg",  // message namespace
  "SetTsHandCtrl",  // message name
  4,  // number of fields
  sizeof(bodyctrl_msgs::msg::SetTsHandCtrl),
  SetTsHandCtrl_message_member_array,  // message members
  SetTsHandCtrl_init_function,  // function to initialize message memory (memory has to be allocated)
  SetTsHandCtrl_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetTsHandCtrl_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetTsHandCtrl_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace bodyctrl_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bodyctrl_msgs::msg::SetTsHandCtrl>()
{
  return &::bodyctrl_msgs::msg::rosidl_typesupport_introspection_cpp::SetTsHandCtrl_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bodyctrl_msgs, msg, SetTsHandCtrl)() {
  return &::bodyctrl_msgs::msg::rosidl_typesupport_introspection_cpp::SetTsHandCtrl_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
