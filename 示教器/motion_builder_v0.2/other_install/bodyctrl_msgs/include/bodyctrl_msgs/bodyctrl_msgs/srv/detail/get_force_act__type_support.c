// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bodyctrl_msgs:srv/GetForceAct.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bodyctrl_msgs/srv/detail/get_force_act__rosidl_typesupport_introspection_c.h"
#include "bodyctrl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bodyctrl_msgs/srv/detail/get_force_act__functions.h"
#include "bodyctrl_msgs/srv/detail/get_force_act__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void bodyctrl_msgs__srv__GetForceAct_Request__rosidl_typesupport_introspection_c__GetForceAct_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bodyctrl_msgs__srv__GetForceAct_Request__init(message_memory);
}

void bodyctrl_msgs__srv__GetForceAct_Request__rosidl_typesupport_introspection_c__GetForceAct_Request_fini_function(void * message_memory)
{
  bodyctrl_msgs__srv__GetForceAct_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bodyctrl_msgs__srv__GetForceAct_Request__rosidl_typesupport_introspection_c__GetForceAct_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs__srv__GetForceAct_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bodyctrl_msgs__srv__GetForceAct_Request__rosidl_typesupport_introspection_c__GetForceAct_Request_message_members = {
  "bodyctrl_msgs__srv",  // message namespace
  "GetForceAct_Request",  // message name
  1,  // number of fields
  sizeof(bodyctrl_msgs__srv__GetForceAct_Request),
  bodyctrl_msgs__srv__GetForceAct_Request__rosidl_typesupport_introspection_c__GetForceAct_Request_message_member_array,  // message members
  bodyctrl_msgs__srv__GetForceAct_Request__rosidl_typesupport_introspection_c__GetForceAct_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  bodyctrl_msgs__srv__GetForceAct_Request__rosidl_typesupport_introspection_c__GetForceAct_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bodyctrl_msgs__srv__GetForceAct_Request__rosidl_typesupport_introspection_c__GetForceAct_Request_message_type_support_handle = {
  0,
  &bodyctrl_msgs__srv__GetForceAct_Request__rosidl_typesupport_introspection_c__GetForceAct_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bodyctrl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyctrl_msgs, srv, GetForceAct_Request)() {
  if (!bodyctrl_msgs__srv__GetForceAct_Request__rosidl_typesupport_introspection_c__GetForceAct_Request_message_type_support_handle.typesupport_identifier) {
    bodyctrl_msgs__srv__GetForceAct_Request__rosidl_typesupport_introspection_c__GetForceAct_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bodyctrl_msgs__srv__GetForceAct_Request__rosidl_typesupport_introspection_c__GetForceAct_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "bodyctrl_msgs/srv/detail/get_force_act__rosidl_typesupport_introspection_c.h"
// already included above
// #include "bodyctrl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "bodyctrl_msgs/srv/detail/get_force_act__functions.h"
// already included above
// #include "bodyctrl_msgs/srv/detail/get_force_act__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void bodyctrl_msgs__srv__GetForceAct_Response__rosidl_typesupport_introspection_c__GetForceAct_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bodyctrl_msgs__srv__GetForceAct_Response__init(message_memory);
}

void bodyctrl_msgs__srv__GetForceAct_Response__rosidl_typesupport_introspection_c__GetForceAct_Response_fini_function(void * message_memory)
{
  bodyctrl_msgs__srv__GetForceAct_Response__fini(message_memory);
}

size_t bodyctrl_msgs__srv__GetForceAct_Response__rosidl_typesupport_introspection_c__size_function__GetForceAct_Response__curforce_ratio(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * bodyctrl_msgs__srv__GetForceAct_Response__rosidl_typesupport_introspection_c__get_const_function__GetForceAct_Response__curforce_ratio(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * bodyctrl_msgs__srv__GetForceAct_Response__rosidl_typesupport_introspection_c__get_function__GetForceAct_Response__curforce_ratio(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void bodyctrl_msgs__srv__GetForceAct_Response__rosidl_typesupport_introspection_c__fetch_function__GetForceAct_Response__curforce_ratio(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    bodyctrl_msgs__srv__GetForceAct_Response__rosidl_typesupport_introspection_c__get_const_function__GetForceAct_Response__curforce_ratio(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void bodyctrl_msgs__srv__GetForceAct_Response__rosidl_typesupport_introspection_c__assign_function__GetForceAct_Response__curforce_ratio(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    bodyctrl_msgs__srv__GetForceAct_Response__rosidl_typesupport_introspection_c__get_function__GetForceAct_Response__curforce_ratio(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember bodyctrl_msgs__srv__GetForceAct_Response__rosidl_typesupport_introspection_c__GetForceAct_Response_message_member_array[1] = {
  {
    "curforce_ratio",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs__srv__GetForceAct_Response, curforce_ratio),  // bytes offset in struct
    NULL,  // default value
    bodyctrl_msgs__srv__GetForceAct_Response__rosidl_typesupport_introspection_c__size_function__GetForceAct_Response__curforce_ratio,  // size() function pointer
    bodyctrl_msgs__srv__GetForceAct_Response__rosidl_typesupport_introspection_c__get_const_function__GetForceAct_Response__curforce_ratio,  // get_const(index) function pointer
    bodyctrl_msgs__srv__GetForceAct_Response__rosidl_typesupport_introspection_c__get_function__GetForceAct_Response__curforce_ratio,  // get(index) function pointer
    bodyctrl_msgs__srv__GetForceAct_Response__rosidl_typesupport_introspection_c__fetch_function__GetForceAct_Response__curforce_ratio,  // fetch(index, &value) function pointer
    bodyctrl_msgs__srv__GetForceAct_Response__rosidl_typesupport_introspection_c__assign_function__GetForceAct_Response__curforce_ratio,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bodyctrl_msgs__srv__GetForceAct_Response__rosidl_typesupport_introspection_c__GetForceAct_Response_message_members = {
  "bodyctrl_msgs__srv",  // message namespace
  "GetForceAct_Response",  // message name
  1,  // number of fields
  sizeof(bodyctrl_msgs__srv__GetForceAct_Response),
  bodyctrl_msgs__srv__GetForceAct_Response__rosidl_typesupport_introspection_c__GetForceAct_Response_message_member_array,  // message members
  bodyctrl_msgs__srv__GetForceAct_Response__rosidl_typesupport_introspection_c__GetForceAct_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  bodyctrl_msgs__srv__GetForceAct_Response__rosidl_typesupport_introspection_c__GetForceAct_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bodyctrl_msgs__srv__GetForceAct_Response__rosidl_typesupport_introspection_c__GetForceAct_Response_message_type_support_handle = {
  0,
  &bodyctrl_msgs__srv__GetForceAct_Response__rosidl_typesupport_introspection_c__GetForceAct_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bodyctrl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyctrl_msgs, srv, GetForceAct_Response)() {
  if (!bodyctrl_msgs__srv__GetForceAct_Response__rosidl_typesupport_introspection_c__GetForceAct_Response_message_type_support_handle.typesupport_identifier) {
    bodyctrl_msgs__srv__GetForceAct_Response__rosidl_typesupport_introspection_c__GetForceAct_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bodyctrl_msgs__srv__GetForceAct_Response__rosidl_typesupport_introspection_c__GetForceAct_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "bodyctrl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "bodyctrl_msgs/srv/detail/get_force_act__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers bodyctrl_msgs__srv__detail__get_force_act__rosidl_typesupport_introspection_c__GetForceAct_service_members = {
  "bodyctrl_msgs__srv",  // service namespace
  "GetForceAct",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // bodyctrl_msgs__srv__detail__get_force_act__rosidl_typesupport_introspection_c__GetForceAct_Request_message_type_support_handle,
  NULL  // response message
  // bodyctrl_msgs__srv__detail__get_force_act__rosidl_typesupport_introspection_c__GetForceAct_Response_message_type_support_handle
};

static rosidl_service_type_support_t bodyctrl_msgs__srv__detail__get_force_act__rosidl_typesupport_introspection_c__GetForceAct_service_type_support_handle = {
  0,
  &bodyctrl_msgs__srv__detail__get_force_act__rosidl_typesupport_introspection_c__GetForceAct_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyctrl_msgs, srv, GetForceAct_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyctrl_msgs, srv, GetForceAct_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bodyctrl_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyctrl_msgs, srv, GetForceAct)() {
  if (!bodyctrl_msgs__srv__detail__get_force_act__rosidl_typesupport_introspection_c__GetForceAct_service_type_support_handle.typesupport_identifier) {
    bodyctrl_msgs__srv__detail__get_force_act__rosidl_typesupport_introspection_c__GetForceAct_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)bodyctrl_msgs__srv__detail__get_force_act__rosidl_typesupport_introspection_c__GetForceAct_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyctrl_msgs, srv, GetForceAct_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyctrl_msgs, srv, GetForceAct_Response)()->data;
  }

  return &bodyctrl_msgs__srv__detail__get_force_act__rosidl_typesupport_introspection_c__GetForceAct_service_type_support_handle;
}
