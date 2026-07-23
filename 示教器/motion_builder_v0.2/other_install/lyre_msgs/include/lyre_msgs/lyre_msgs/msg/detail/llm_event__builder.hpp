// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lyre_msgs:msg/LlmEvent.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__MSG__DETAIL__LLM_EVENT__BUILDER_HPP_
#define LYRE_MSGS__MSG__DETAIL__LLM_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lyre_msgs/msg/detail/llm_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lyre_msgs
{

namespace msg
{

namespace builder
{

class Init_LlmEvent_message
{
public:
  explicit Init_LlmEvent_message(::lyre_msgs::msg::LlmEvent & msg)
  : msg_(msg)
  {}
  ::lyre_msgs::msg::LlmEvent message(::lyre_msgs::msg::LlmEvent::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lyre_msgs::msg::LlmEvent msg_;
};

class Init_LlmEvent_event
{
public:
  explicit Init_LlmEvent_event(::lyre_msgs::msg::LlmEvent & msg)
  : msg_(msg)
  {}
  Init_LlmEvent_message event(::lyre_msgs::msg::LlmEvent::_event_type arg)
  {
    msg_.event = std::move(arg);
    return Init_LlmEvent_message(msg_);
  }

private:
  ::lyre_msgs::msg::LlmEvent msg_;
};

class Init_LlmEvent_seq
{
public:
  explicit Init_LlmEvent_seq(::lyre_msgs::msg::LlmEvent & msg)
  : msg_(msg)
  {}
  Init_LlmEvent_event seq(::lyre_msgs::msg::LlmEvent::_seq_type arg)
  {
    msg_.seq = std::move(arg);
    return Init_LlmEvent_event(msg_);
  }

private:
  ::lyre_msgs::msg::LlmEvent msg_;
};

class Init_LlmEvent_sid
{
public:
  Init_LlmEvent_sid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LlmEvent_seq sid(::lyre_msgs::msg::LlmEvent::_sid_type arg)
  {
    msg_.sid = std::move(arg);
    return Init_LlmEvent_seq(msg_);
  }

private:
  ::lyre_msgs::msg::LlmEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lyre_msgs::msg::LlmEvent>()
{
  return lyre_msgs::msg::builder::Init_LlmEvent_sid();
}

}  // namespace lyre_msgs

#endif  // LYRE_MSGS__MSG__DETAIL__LLM_EVENT__BUILDER_HPP_
