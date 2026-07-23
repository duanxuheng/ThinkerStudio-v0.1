// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lyre_msgs:srv/LlmAsk.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lyre_msgs/srv/detail/llm_ask__rosidl_typesupport_introspection_c.h"
#include "lyre_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lyre_msgs/srv/detail/llm_ask__functions.h"
#include "lyre_msgs/srv/detail/llm_ask__struct.h"


// Include directives for member types
// Member `id`
// Member `text`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lyre_msgs__srv__LlmAsk_Request__rosidl_typesupport_introspection_c__LlmAsk_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lyre_msgs__srv__LlmAsk_Request__init(message_memory);
}

void lyre_msgs__srv__LlmAsk_Request__rosidl_typesupport_introspection_c__LlmAsk_Request_fini_function(void * message_memory)
{
  lyre_msgs__srv__LlmAsk_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember lyre_msgs__srv__LlmAsk_Request__rosidl_typesupport_introspection_c__LlmAsk_Request_message_member_array[2] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lyre_msgs__srv__LlmAsk_Request, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "text",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lyre_msgs__srv__LlmAsk_Request, text),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lyre_msgs__srv__LlmAsk_Request__rosidl_typesupport_introspection_c__LlmAsk_Request_message_members = {
  "lyre_msgs__srv",  // message namespace
  "LlmAsk_Request",  // message name
  2,  // number of fields
  sizeof(lyre_msgs__srv__LlmAsk_Request),
  lyre_msgs__srv__LlmAsk_Request__rosidl_typesupport_introspection_c__LlmAsk_Request_message_member_array,  // message members
  lyre_msgs__srv__LlmAsk_Request__rosidl_typesupport_introspection_c__LlmAsk_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  lyre_msgs__srv__LlmAsk_Request__rosidl_typesupport_introspection_c__LlmAsk_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lyre_msgs__srv__LlmAsk_Request__rosidl_typesupport_introspection_c__LlmAsk_Request_message_type_support_handle = {
  0,
  &lyre_msgs__srv__LlmAsk_Request__rosidl_typesupport_introspection_c__LlmAsk_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lyre_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lyre_msgs, srv, LlmAsk_Request)() {
  if (!lyre_msgs__srv__LlmAsk_Request__rosidl_typesupport_introspection_c__LlmAsk_Request_message_type_support_handle.typesupport_identifier) {
    lyre_msgs__srv__LlmAsk_Request__rosidl_typesupport_introspection_c__LlmAsk_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lyre_msgs__srv__LlmAsk_Request__rosidl_typesupport_introspection_c__LlmAsk_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "lyre_msgs/srv/detail/llm_ask__rosidl_typesupport_introspection_c.h"
// already included above
// #include "lyre_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "lyre_msgs/srv/detail/llm_ask__functions.h"
// already included above
// #include "lyre_msgs/srv/detail/llm_ask__struct.h"


// Include directives for member types
// Member `sid`
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lyre_msgs__srv__LlmAsk_Response__rosidl_typesupport_introspection_c__LlmAsk_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lyre_msgs__srv__LlmAsk_Response__init(message_memory);
}

void lyre_msgs__srv__LlmAsk_Response__rosidl_typesupport_introspection_c__LlmAsk_Response_fini_function(void * message_memory)
{
  lyre_msgs__srv__LlmAsk_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember lyre_msgs__srv__LlmAsk_Response__rosidl_typesupport_introspection_c__LlmAsk_Response_message_member_array[3] = {
  {
    "sid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lyre_msgs__srv__LlmAsk_Response, sid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lyre_msgs__srv__LlmAsk_Response, code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lyre_msgs__srv__LlmAsk_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lyre_msgs__srv__LlmAsk_Response__rosidl_typesupport_introspection_c__LlmAsk_Response_message_members = {
  "lyre_msgs__srv",  // message namespace
  "LlmAsk_Response",  // message name
  3,  // number of fields
  sizeof(lyre_msgs__srv__LlmAsk_Response),
  lyre_msgs__srv__LlmAsk_Response__rosidl_typesupport_introspection_c__LlmAsk_Response_message_member_array,  // message members
  lyre_msgs__srv__LlmAsk_Response__rosidl_typesupport_introspection_c__LlmAsk_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  lyre_msgs__srv__LlmAsk_Response__rosidl_typesupport_introspection_c__LlmAsk_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lyre_msgs__srv__LlmAsk_Response__rosidl_typesupport_introspection_c__LlmAsk_Response_message_type_support_handle = {
  0,
  &lyre_msgs__srv__LlmAsk_Response__rosidl_typesupport_introspection_c__LlmAsk_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lyre_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lyre_msgs, srv, LlmAsk_Response)() {
  if (!lyre_msgs__srv__LlmAsk_Response__rosidl_typesupport_introspection_c__LlmAsk_Response_message_type_support_handle.typesupport_identifier) {
    lyre_msgs__srv__LlmAsk_Response__rosidl_typesupport_introspection_c__LlmAsk_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lyre_msgs__srv__LlmAsk_Response__rosidl_typesupport_introspection_c__LlmAsk_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "lyre_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "lyre_msgs/srv/detail/llm_ask__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers lyre_msgs__srv__detail__llm_ask__rosidl_typesupport_introspection_c__LlmAsk_service_members = {
  "lyre_msgs__srv",  // service namespace
  "LlmAsk",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // lyre_msgs__srv__detail__llm_ask__rosidl_typesupport_introspection_c__LlmAsk_Request_message_type_support_handle,
  NULL  // response message
  // lyre_msgs__srv__detail__llm_ask__rosidl_typesupport_introspection_c__LlmAsk_Response_message_type_support_handle
};

static rosidl_service_type_support_t lyre_msgs__srv__detail__llm_ask__rosidl_typesupport_introspection_c__LlmAsk_service_type_support_handle = {
  0,
  &lyre_msgs__srv__detail__llm_ask__rosidl_typesupport_introspection_c__LlmAsk_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lyre_msgs, srv, LlmAsk_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lyre_msgs, srv, LlmAsk_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lyre_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lyre_msgs, srv, LlmAsk)() {
  if (!lyre_msgs__srv__detail__llm_ask__rosidl_typesupport_introspection_c__LlmAsk_service_type_support_handle.typesupport_identifier) {
    lyre_msgs__srv__detail__llm_ask__rosidl_typesupport_introspection_c__LlmAsk_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)lyre_msgs__srv__detail__llm_ask__rosidl_typesupport_introspection_c__LlmAsk_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lyre_msgs, srv, LlmAsk_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lyre_msgs, srv, LlmAsk_Response)()->data;
  }

  return &lyre_msgs__srv__detail__llm_ask__rosidl_typesupport_introspection_c__LlmAsk_service_type_support_handle;
}
