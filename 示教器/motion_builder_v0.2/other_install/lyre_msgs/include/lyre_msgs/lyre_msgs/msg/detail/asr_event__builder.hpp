// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lyre_msgs:msg/AsrEvent.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__MSG__DETAIL__ASR_EVENT__BUILDER_HPP_
#define LYRE_MSGS__MSG__DETAIL__ASR_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lyre_msgs/msg/detail/asr_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lyre_msgs
{

namespace msg
{

namespace builder
{

class Init_AsrEvent_arg2
{
public:
  explicit Init_AsrEvent_arg2(::lyre_msgs::msg::AsrEvent & msg)
  : msg_(msg)
  {}
  ::lyre_msgs::msg::AsrEvent arg2(::lyre_msgs::msg::AsrEvent::_arg2_type arg)
  {
    msg_.arg2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lyre_msgs::msg::AsrEvent msg_;
};

class Init_AsrEvent_arg1
{
public:
  explicit Init_AsrEvent_arg1(::lyre_msgs::msg::AsrEvent & msg)
  : msg_(msg)
  {}
  Init_AsrEvent_arg2 arg1(::lyre_msgs::msg::AsrEvent::_arg1_type arg)
  {
    msg_.arg1 = std::move(arg);
    return Init_AsrEvent_arg2(msg_);
  }

private:
  ::lyre_msgs::msg::AsrEvent msg_;
};

class Init_AsrEvent_event
{
public:
  Init_AsrEvent_event()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AsrEvent_arg1 event(::lyre_msgs::msg::AsrEvent::_event_type arg)
  {
    msg_.event = std::move(arg);
    return Init_AsrEvent_arg1(msg_);
  }

private:
  ::lyre_msgs::msg::AsrEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lyre_msgs::msg::AsrEvent>()
{
  return lyre_msgs::msg::builder::Init_AsrEvent_event();
}

}  // namespace lyre_msgs

#endif  // LYRE_MSGS__MSG__DETAIL__ASR_EVENT__BUILDER_HPP_
