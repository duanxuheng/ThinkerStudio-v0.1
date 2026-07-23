// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lyre_msgs:msg/TtsEvent.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__MSG__DETAIL__TTS_EVENT__BUILDER_HPP_
#define LYRE_MSGS__MSG__DETAIL__TTS_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lyre_msgs/msg/detail/tts_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lyre_msgs
{

namespace msg
{

namespace builder
{

class Init_TtsEvent_message
{
public:
  explicit Init_TtsEvent_message(::lyre_msgs::msg::TtsEvent & msg)
  : msg_(msg)
  {}
  ::lyre_msgs::msg::TtsEvent message(::lyre_msgs::msg::TtsEvent::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lyre_msgs::msg::TtsEvent msg_;
};

class Init_TtsEvent_event
{
public:
  explicit Init_TtsEvent_event(::lyre_msgs::msg::TtsEvent & msg)
  : msg_(msg)
  {}
  Init_TtsEvent_message event(::lyre_msgs::msg::TtsEvent::_event_type arg)
  {
    msg_.event = std::move(arg);
    return Init_TtsEvent_message(msg_);
  }

private:
  ::lyre_msgs::msg::TtsEvent msg_;
};

class Init_TtsEvent_seq
{
public:
  explicit Init_TtsEvent_seq(::lyre_msgs::msg::TtsEvent & msg)
  : msg_(msg)
  {}
  Init_TtsEvent_event seq(::lyre_msgs::msg::TtsEvent::_seq_type arg)
  {
    msg_.seq = std::move(arg);
    return Init_TtsEvent_event(msg_);
  }

private:
  ::lyre_msgs::msg::TtsEvent msg_;
};

class Init_TtsEvent_sid
{
public:
  Init_TtsEvent_sid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TtsEvent_seq sid(::lyre_msgs::msg::TtsEvent::_sid_type arg)
  {
    msg_.sid = std::move(arg);
    return Init_TtsEvent_seq(msg_);
  }

private:
  ::lyre_msgs::msg::TtsEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lyre_msgs::msg::TtsEvent>()
{
  return lyre_msgs::msg::builder::Init_TtsEvent_sid();
}

}  // namespace lyre_msgs

#endif  // LYRE_MSGS__MSG__DETAIL__TTS_EVENT__BUILDER_HPP_
