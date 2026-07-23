// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lyre_msgs:msg/PlayEvent.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__MSG__DETAIL__PLAY_EVENT__BUILDER_HPP_
#define LYRE_MSGS__MSG__DETAIL__PLAY_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lyre_msgs/msg/detail/play_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lyre_msgs
{

namespace msg
{

namespace builder
{

class Init_PlayEvent_message
{
public:
  explicit Init_PlayEvent_message(::lyre_msgs::msg::PlayEvent & msg)
  : msg_(msg)
  {}
  ::lyre_msgs::msg::PlayEvent message(::lyre_msgs::msg::PlayEvent::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lyre_msgs::msg::PlayEvent msg_;
};

class Init_PlayEvent_event
{
public:
  explicit Init_PlayEvent_event(::lyre_msgs::msg::PlayEvent & msg)
  : msg_(msg)
  {}
  Init_PlayEvent_message event(::lyre_msgs::msg::PlayEvent::_event_type arg)
  {
    msg_.event = std::move(arg);
    return Init_PlayEvent_message(msg_);
  }

private:
  ::lyre_msgs::msg::PlayEvent msg_;
};

class Init_PlayEvent_seq
{
public:
  explicit Init_PlayEvent_seq(::lyre_msgs::msg::PlayEvent & msg)
  : msg_(msg)
  {}
  Init_PlayEvent_event seq(::lyre_msgs::msg::PlayEvent::_seq_type arg)
  {
    msg_.seq = std::move(arg);
    return Init_PlayEvent_event(msg_);
  }

private:
  ::lyre_msgs::msg::PlayEvent msg_;
};

class Init_PlayEvent_sid
{
public:
  Init_PlayEvent_sid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlayEvent_seq sid(::lyre_msgs::msg::PlayEvent::_sid_type arg)
  {
    msg_.sid = std::move(arg);
    return Init_PlayEvent_seq(msg_);
  }

private:
  ::lyre_msgs::msg::PlayEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lyre_msgs::msg::PlayEvent>()
{
  return lyre_msgs::msg::builder::Init_PlayEvent_sid();
}

}  // namespace lyre_msgs

#endif  // LYRE_MSGS__MSG__DETAIL__PLAY_EVENT__BUILDER_HPP_
