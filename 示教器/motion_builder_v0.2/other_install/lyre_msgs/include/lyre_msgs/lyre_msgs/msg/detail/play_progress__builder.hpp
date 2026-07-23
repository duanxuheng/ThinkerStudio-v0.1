// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lyre_msgs:msg/PlayProgress.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__MSG__DETAIL__PLAY_PROGRESS__BUILDER_HPP_
#define LYRE_MSGS__MSG__DETAIL__PLAY_PROGRESS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lyre_msgs/msg/detail/play_progress__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lyre_msgs
{

namespace msg
{

namespace builder
{

class Init_PlayProgress_duration
{
public:
  explicit Init_PlayProgress_duration(::lyre_msgs::msg::PlayProgress & msg)
  : msg_(msg)
  {}
  ::lyre_msgs::msg::PlayProgress duration(::lyre_msgs::msg::PlayProgress::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lyre_msgs::msg::PlayProgress msg_;
};

class Init_PlayProgress_position
{
public:
  explicit Init_PlayProgress_position(::lyre_msgs::msg::PlayProgress & msg)
  : msg_(msg)
  {}
  Init_PlayProgress_duration position(::lyre_msgs::msg::PlayProgress::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_PlayProgress_duration(msg_);
  }

private:
  ::lyre_msgs::msg::PlayProgress msg_;
};

class Init_PlayProgress_seq
{
public:
  explicit Init_PlayProgress_seq(::lyre_msgs::msg::PlayProgress & msg)
  : msg_(msg)
  {}
  Init_PlayProgress_position seq(::lyre_msgs::msg::PlayProgress::_seq_type arg)
  {
    msg_.seq = std::move(arg);
    return Init_PlayProgress_position(msg_);
  }

private:
  ::lyre_msgs::msg::PlayProgress msg_;
};

class Init_PlayProgress_sid
{
public:
  Init_PlayProgress_sid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlayProgress_seq sid(::lyre_msgs::msg::PlayProgress::_sid_type arg)
  {
    msg_.sid = std::move(arg);
    return Init_PlayProgress_seq(msg_);
  }

private:
  ::lyre_msgs::msg::PlayProgress msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lyre_msgs::msg::PlayProgress>()
{
  return lyre_msgs::msg::builder::Init_PlayProgress_sid();
}

}  // namespace lyre_msgs

#endif  // LYRE_MSGS__MSG__DETAIL__PLAY_PROGRESS__BUILDER_HPP_
