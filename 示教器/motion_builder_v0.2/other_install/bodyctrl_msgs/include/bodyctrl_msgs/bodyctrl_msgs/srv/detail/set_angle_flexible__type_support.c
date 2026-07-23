// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bodyctrl_msgs:srv/SetAngleFlexible.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bodyctrl_msgs/srv/detail/set_angle_flexible__rosidl_typesupport_introspection_c.h"
#include "bodyctrl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bodyctrl_msgs/srv/detail/set_angle_flexible__functions.h"
#include "bodyctrl_msgs/srv/detail/set_angle_flexible__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `angle_ratio`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__SetAngleFlexible_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bodyctrl_msgs__srv__SetAngleFlexible_Request__init(message_memory);
}

void bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__SetAngleFlexible_Request_fini_function(void * message_memory)
{
  bodyctrl_msgs__srv__SetAngleFlexible_Request__fini(message_memory);
}

size_t bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__size_function__SetAngleFlexible_Request__name(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__get_const_function__SetAngleFlexible_Request__name(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__get_function__SetAngleFlexible_Request__name(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__fetch_function__SetAngleFlexible_Request__name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__get_const_function__SetAngleFlexible_Request__name(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__assign_function__SetAngleFlexible_Request__name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__get_function__SetAngleFlexible_Request__name(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__resize_function__SetAngleFlexible_Request__name(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__size_function__SetAngleFlexible_Request__angle_ratio(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__get_const_function__SetAngleFlexible_Request__angle_ratio(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__get_function__SetAngleFlexible_Request__angle_ratio(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__fetch_function__SetAngleFlexible_Request__angle_ratio(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__get_const_function__SetAngleFlexible_Request__angle_ratio(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__assign_function__SetAngleFlexible_Request__angle_ratio(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__get_function__SetAngleFlexible_Request__angle_ratio(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__resize_function__SetAngleFlexible_Request__angle_ratio(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__SetAngleFlexible_Request_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs__srv__SetAngleFlexible_Request, name),  // bytes offset in struct
    NULL,  // default value
    bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__size_function__SetAngleFlexible_Request__name,  // size() function pointer
    bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__get_const_function__SetAngleFlexible_Request__name,  // get_const(index) function pointer
    bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__get_function__SetAngleFlexible_Request__name,  // get(index) function pointer
    bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__fetch_function__SetAngleFlexible_Request__name,  // fetch(index, &value) function pointer
    bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__assign_function__SetAngleFlexible_Request__name,  // assign(index, value) function pointer
    bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__resize_function__SetAngleFlexible_Request__name  // resize(index) function pointer
  },
  {
    "angle_ratio",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs__srv__SetAngleFlexible_Request, angle_ratio),  // bytes offset in struct
    NULL,  // default value
    bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__size_function__SetAngleFlexible_Request__angle_ratio,  // size() function pointer
    bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__get_const_function__SetAngleFlexible_Request__angle_ratio,  // get_const(index) function pointer
    bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__get_function__SetAngleFlexible_Request__angle_ratio,  // get(index) function pointer
    bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__fetch_function__SetAngleFlexible_Request__angle_ratio,  // fetch(index, &value) function pointer
    bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__assign_function__SetAngleFlexible_Request__angle_ratio,  // assign(index, value) function pointer
    bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__resize_function__SetAngleFlexible_Request__angle_ratio  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__SetAngleFlexible_Request_message_members = {
  "bodyctrl_msgs__srv",  // message namespace
  "SetAngleFlexible_Request",  // message name
  2,  // number of fields
  sizeof(bodyctrl_msgs__srv__SetAngleFlexible_Request),
  bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__SetAngleFlexible_Request_message_member_array,  // message members
  bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__SetAngleFlexible_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__SetAngleFlexible_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__SetAngleFlexible_Request_message_type_support_handle = {
  0,
  &bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__SetAngleFlexible_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bodyctrl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyctrl_msgs, srv, SetAngleFlexible_Request)() {
  if (!bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__SetAngleFlexible_Request_message_type_support_handle.typesupport_identifier) {
    bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__SetAngleFlexible_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bodyctrl_msgs__srv__SetAngleFlexible_Request__rosidl_typesupport_introspection_c__SetAngleFlexible_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "bodyctrl_msgs/srv/detail/set_angle_flexible__rosidl_typesupport_introspection_c.h"
// already included above
// #include "bodyctrl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "bodyctrl_msgs/srv/detail/set_angle_flexible__functions.h"
// already included above
// #include "bodyctrl_msgs/srv/detail/set_angle_flexible__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void bodyctrl_msgs__srv__SetAngleFlexible_Response__rosidl_typesupport_introspection_c__SetAngleFlexible_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bodyctrl_msgs__srv__SetAngleFlexible_Response__init(message_memory);
}

void bodyctrl_msgs__srv__SetAngleFlexible_Response__rosidl_typesupport_introspection_c__SetAngleFlexible_Response_fini_function(void * message_memory)
{
  bodyctrl_msgs__srv__SetAngleFlexible_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bodyctrl_msgs__srv__SetAngleFlexible_Response__rosidl_typesupport_introspection_c__SetAngleFlexible_Response_message_member_array[1] = {
  {
    "angle_accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs__srv__SetAngleFlexible_Response, angle_accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bodyctrl_msgs__srv__SetAngleFlexible_Response__rosidl_typesupport_introspection_c__SetAngleFlexible_Response_message_members = {
  "bodyctrl_msgs__srv",  // message namespace
  "SetAngleFlexible_Response",  // message name
  1,  // number of fields
  sizeof(bodyctrl_msgs__srv__SetAngleFlexible_Response),
  bodyctrl_msgs__srv__SetAngleFlexible_Response__rosidl_typesupport_introspection_c__SetAngleFlexible_Response_message_member_array,  // message members
  bodyctrl_msgs__srv__SetAngleFlexible_Response__rosidl_typesupport_introspection_c__SetAngleFlexible_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  bodyctrl_msgs__srv__SetAngleFlexible_Response__rosidl_typesupport_introspection_c__SetAngleFlexible_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bodyctrl_msgs__srv__SetAngleFlexible_Response__rosidl_typesupport_introspection_c__SetAngleFlexible_Response_message_type_support_handle = {
  0,
  &bodyctrl_msgs__srv__SetAngleFlexible_Response__rosidl_typesupport_introspection_c__SetAngleFlexible_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bodyctrl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyctrl_msgs, srv, SetAngleFlexible_Response)() {
  if (!bodyctrl_msgs__srv__SetAngleFlexible_Response__rosidl_typesupport_introspection_c__SetAngleFlexible_Response_message_type_support_handle.typesupport_identifier) {
    bodyctrl_msgs__srv__SetAngleFlexible_Response__rosidl_typesupport_introspection_c__SetAngleFlexible_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bodyctrl_msgs__srv__SetAngleFlexible_Response__rosidl_typesupport_introspection_c__SetAngleFlexible_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "bodyctrl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "bodyctrl_msgs/srv/detail/set_angle_flexible__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers bodyctrl_msgs__srv__detail__set_angle_flexible__rosidl_typesupport_introspection_c__SetAngleFlexible_service_members = {
  "bodyctrl_msgs__srv",  // service namespace
  "SetAngleFlexible",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // bodyctrl_msgs__srv__detail__set_angle_flexible__rosidl_typesupport_introspection_c__SetAngleFlexible_Request_message_type_support_handle,
  NULL  // response message
  // bodyctrl_msgs__srv__detail__set_angle_flexible__rosidl_typesupport_introspection_c__SetAngleFlexible_Response_message_type_support_handle
};

static rosidl_service_type_support_t bodyctrl_msgs__srv__detail__set_angle_flexible__rosidl_typesupport_introspection_c__SetAngleFlexible_service_type_support_handle = {
  0,
  &bodyctrl_msgs__srv__detail__set_angle_flexible__rosidl_typesupport_introspection_c__SetAngleFlexible_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyctrl_msgs, srv, SetAngleFlexible_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyctrl_msgs, srv, SetAngleFlexible_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bodyctrl_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyctrl_msgs, srv, SetAngleFlexible)() {
  if (!bodyctrl_msgs__srv__detail__set_angle_flexible__rosidl_typesupport_introspection_c__SetAngleFlexible_service_type_support_handle.typesupport_identifier) {
    bodyctrl_msgs__srv__detail__set_angle_flexible__rosidl_typesupport_introspection_c__SetAngleFlexible_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)bodyctrl_msgs__srv__detail__set_angle_flexible__rosidl_typesupport_introspection_c__SetAngleFlexible_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyctrl_msgs, srv, SetAngleFlexible_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyctrl_msgs, srv, SetAngleFlexible_Response)()->data;
  }

  return &bodyctrl_msgs__srv__detail__set_angle_flexible__rosidl_typesupport_introspection_c__SetAngleFlexible_service_type_support_handle;
}
