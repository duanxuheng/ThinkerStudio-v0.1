// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bodyctrl_msgs:srv/GetStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bodyctrl_msgs/srv/detail/get_status__struct.hpp"
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

void GetStatus_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bodyctrl_msgs::srv::GetStatus_Request(_init);
}

void GetStatus_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bodyctrl_msgs::srv::GetStatus_Request *>(message_memory);
  typed_message->~GetStatus_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetStatus_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs::srv::GetStatus_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetStatus_Request_message_members = {
  "bodyctrl_msgs::srv",  // message namespace
  "GetStatus_Request",  // message name
  1,  // number of fields
  sizeof(bodyctrl_msgs::srv::GetStatus_Request),
  GetStatus_Request_message_member_array,  // message members
  GetStatus_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetStatus_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetStatus_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetStatus_Request_message_members,
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
get_message_type_support_handle<bodyctrl_msgs::srv::GetStatus_Request>()
{
  return &::bodyctrl_msgs::srv::rosidl_typesupport_introspection_cpp::GetStatus_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bodyctrl_msgs, srv, GetStatus_Request)() {
  return &::bodyctrl_msgs::srv::rosidl_typesupport_introspection_cpp::GetStatus_Request_message_type_support_handle;
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
// #include "bodyctrl_msgs/srv/detail/get_status__struct.hpp"
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

void GetStatus_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bodyctrl_msgs::srv::GetStatus_Response(_init);
}

void GetStatus_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bodyctrl_msgs::srv::GetStatus_Response *>(message_memory);
  typed_message->~GetStatus_Response();
}

size_t size_function__GetStatus_Response__statusvalue(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__GetStatus_Response__statusvalue(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__GetStatus_Response__statusvalue(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetStatus_Response__statusvalue(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__GetStatus_Response__statusvalue(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__GetStatus_Response__statusvalue(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__GetStatus_Response__statusvalue(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetStatus_Response_message_member_array[1] = {
  {
    "statusvalue",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs::srv::GetStatus_Response, statusvalue),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetStatus_Response__statusvalue,  // size() function pointer
    get_const_function__GetStatus_Response__statusvalue,  // get_const(index) function pointer
    get_function__GetStatus_Response__statusvalue,  // get(index) function pointer
    fetch_function__GetStatus_Response__statusvalue,  // fetch(index, &value) function pointer
    assign_function__GetStatus_Response__statusvalue,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetStatus_Response_message_members = {
  "bodyctrl_msgs::srv",  // message namespace
  "GetStatus_Response",  // message name
  1,  // number of fields
  sizeof(bodyctrl_msgs::srv::GetStatus_Response),
  GetStatus_Response_message_member_array,  // message members
  GetStatus_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetStatus_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetStatus_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetStatus_Response_message_members,
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
get_message_type_support_handle<bodyctrl_msgs::srv::GetStatus_Response>()
{
  return &::bodyctrl_msgs::srv::rosidl_typesupport_introspection_cpp::GetStatus_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bodyctrl_msgs, srv, GetStatus_Response)() {
  return &::bodyctrl_msgs::srv::rosidl_typesupport_introspection_cpp::GetStatus_Response_message_type_support_handle;
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
// #include "bodyctrl_msgs/srv/detail/get_status__struct.hpp"
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
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetStatus_service_members = {
  "bodyctrl_msgs::srv",  // service namespace
  "GetStatus",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<bodyctrl_msgs::srv::GetStatus>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetStatus_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetStatus_service_members,
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
get_service_type_support_handle<bodyctrl_msgs::srv::GetStatus>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::bodyctrl_msgs::srv::rosidl_typesupport_introspection_cpp::GetStatus_service_type_support_handle;
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
        ::bodyctrl_msgs::srv::GetStatus_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::bodyctrl_msgs::srv::GetStatus_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bodyctrl_msgs, srv, GetStatus)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<bodyctrl_msgs::srv::GetStatus>();
}

#ifdef __cplusplus
}
#endif
