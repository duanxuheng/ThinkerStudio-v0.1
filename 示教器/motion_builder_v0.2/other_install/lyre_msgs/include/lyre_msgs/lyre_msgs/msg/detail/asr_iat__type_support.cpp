// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from lyre_msgs:msg/AsrIat.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "lyre_msgs/msg/detail/asr_iat__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace lyre_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AsrIat_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) lyre_msgs::msg::AsrIat(_init);
}

void AsrIat_fini_function(void * message_memory)
{
  auto typed_message = static_cast<lyre_msgs::msg::AsrIat *>(message_memory);
  typed_message->~AsrIat();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AsrIat_message_member_array[2] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lyre_msgs::msg::AsrIat, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "text",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lyre_msgs::msg::AsrIat, text),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AsrIat_message_members = {
  "lyre_msgs::msg",  // message namespace
  "AsrIat",  // message name
  2,  // number of fields
  sizeof(lyre_msgs::msg::AsrIat),
  AsrIat_message_member_array,  // message members
  AsrIat_init_function,  // function to initialize message memory (memory has to be allocated)
  AsrIat_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AsrIat_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AsrIat_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace lyre_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<lyre_msgs::msg::AsrIat>()
{
  return &::lyre_msgs::msg::rosidl_typesupport_introspection_cpp::AsrIat_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lyre_msgs, msg, AsrIat)() {
  return &::lyre_msgs::msg::rosidl_typesupport_introspection_cpp::AsrIat_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
