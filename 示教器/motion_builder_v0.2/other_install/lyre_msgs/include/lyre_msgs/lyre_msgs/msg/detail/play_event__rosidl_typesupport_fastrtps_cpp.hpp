// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from lyre_msgs:msg/PlayEvent.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__MSG__DETAIL__PLAY_EVENT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define LYRE_MSGS__MSG__DETAIL__PLAY_EVENT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "lyre_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "lyre_msgs/msg/detail/play_event__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace lyre_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lyre_msgs
cdr_serialize(
  const lyre_msgs::msg::PlayEvent & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lyre_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  lyre_msgs::msg::PlayEvent & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lyre_msgs
get_serialized_size(
  const lyre_msgs::msg::PlayEvent & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lyre_msgs
max_serialized_size_PlayEvent(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace lyre_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lyre_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lyre_msgs, msg, PlayEvent)();

#ifdef __cplusplus
}
#endif

#endif  // LYRE_MSGS__MSG__DETAIL__PLAY_EVENT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
