// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bodyctrl_msgs:srv/SetAngleFlexible.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bodyctrl_msgs/srv/detail/set_angle_flexible__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace bodyctrl_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SetAngleFlexible_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bodyctrl_msgs::srv::SetAngleFlexible_Request(_init);
}

void SetAngleFlexible_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bodyctrl_msgs::srv::SetAngleFlexible_Request *>(message_memory);
  typed_message->~SetAngleFlexible_Request();
}

size_t size_function__SetAngleFlexible_Request__name(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetAngleFlexible_Request__name(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SetAngleFlexible_Request__name(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetAngleFlexible_Request__name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SetAngleFlexible_Request__name(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SetAngleFlexible_Request__name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SetAngleFlexible_Request__name(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SetAngleFlexible_Request__name(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SetAngleFlexible_Request__angle_ratio(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetAngleFlexible_Request__angle_ratio(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SetAngleFlexible_Request__angle_ratio(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetAngleFlexible_Request__angle_ratio(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SetAngleFlexible_Request__angle_ratio(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SetAngleFlexible_Request__angle_ratio(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SetAngleFlexible_Request__angle_ratio(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SetAngleFlexible_Request__angle_ratio(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetAngleFlexible_Request_message_member_array[2] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs::srv::SetAngleFlexible_Request, name),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetAngleFlexible_Request__name,  // size() function pointer
    get_const_function__SetAngleFlexible_Request__name,  // get_const(index) function pointer
    get_function__SetAngleFlexible_Request__name,  // get(index) function pointer
    fetch_function__SetAngleFlexible_Request__name,  // fetch(index, &value) function pointer
    assign_function__SetAngleFlexible_Request__name,  // assign(index, value) function pointer
    resize_function__SetAngleFlexible_Request__name  // resize(index) function pointer
  },
  {
    "angle_ratio",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs::srv::SetAngleFlexible_Request, angle_ratio),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetAngleFlexible_Request__angle_ratio,  // size() function pointer
    get_const_function__SetAngleFlexible_Request__angle_ratio,  // get_const(index) function pointer
    get_function__SetAngleFlexible_Request__angle_ratio,  // get(index) function pointer
    fetch_function__SetAngleFlexible_Request__angle_ratio,  // fetch(index, &value) function pointer
    assign_function__SetAngleFlexible_Request__angle_ratio,  // assign(index, value) function pointer
    resize_function__SetAngleFlexible_Request__angle_ratio  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetAngleFlexible_Request_message_members = {
  "bodyctrl_msgs::srv",  // message namespace
  "SetAngleFlexible_Request",  // message name
  2,  // number of fields
  sizeof(bodyctrl_msgs::srv::SetAngleFlexible_Request),
  SetAngleFlexible_Request_message_member_array,  // message members
  SetAngleFlexible_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetAngleFlexible_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetAngleFlexible_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetAngleFlexible_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace bodyctrl_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bodyctrl_msgs::srv::SetAngleFlexible_Request>()
{
  return &::bodyctrl_msgs::srv::rosidl_typesupport_introspection_cpp::SetAngleFlexible_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bodyctrl_msgs, srv, SetAngleFlexible_Request)() {
  return &::bodyctrl_msgs::srv::rosidl_typesupport_introspection_cpp::SetAngleFlexible_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "bodyctrl_msgs/srv/detail/set_angle_flexible__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace bodyctrl_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SetAngleFlexible_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bodyctrl_msgs::srv::SetAngleFlexible_Response(_init);
}

void SetAngleFlexible_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bodyctrl_msgs::srv::SetAngleFlexible_Response *>(message_memory);
  typed_message->~SetAngleFlexible_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetAngleFlexible_Response_message_member_array[1] = {
  {
    "angle_accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs::srv::SetAngleFlexible_Response, angle_accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetAngleFlexible_Response_message_members = {
  "bodyctrl_msgs::srv",  // message namespace
  "SetAngleFlexible_Response",  // message name
  1,  // number of fields
  sizeof(bodyctrl_msgs::srv::SetAngleFlexible_Response),
  SetAngleFlexible_Response_message_member_array,  // message members
  SetAngleFlexible_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetAngleFlexible_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetAngleFlexible_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetAngleFlexible_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace bodyctrl_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bodyctrl_msgs::srv::SetAngleFlexible_Response>()
{
  return &::bodyctrl_msgs::srv::rosidl_typesupport_introspection_cpp::SetAngleFlexible_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bodyctrl_msgs, srv, SetAngleFlexible_Response)() {
  return &::bodyctrl_msgs::srv::rosidl_typesupport_introspection_cpp::SetAngleFlexible_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "bodyctrl_msgs/srv/detail/set_angle_flexible__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace bodyctrl_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers SetAngleFlexible_service_members = {
  "bodyctrl_msgs::srv",  // service namespace
  "SetAngleFlexible",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<bodyctrl_msgs::srv::SetAngleFlexible>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t SetAngleFlexible_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetAngleFlexible_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace bodyctrl_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<bodyctrl_msgs::srv::SetAngleFlexible>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::bodyctrl_msgs::srv::rosidl_typesupport_introspection_cpp::SetAngleFlexible_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::bodyctrl_msgs::srv::SetAngleFlexible_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::bodyctrl_msgs::srv::SetAngleFlexible_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bodyctrl_msgs, srv, SetAngleFlexible)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<bodyctrl_msgs::srv::SetAngleFlexible>();
}

#ifdef __cplusplus
}
#endif
