// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lyre_msgs:msg/AsrKeyword.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__MSG__DETAIL__ASR_KEYWORD__BUILDER_HPP_
#define LYRE_MSGS__MSG__DETAIL__ASR_KEYWORD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lyre_msgs/msg/detail/asr_keyword__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lyre_msgs
{

namespace msg
{

namespace builder
{

class Init_AsrKeyword_angle
{
public:
  explicit Init_AsrKeyword_angle(::lyre_msgs::msg::AsrKeyword & msg)
  : msg_(msg)
  {}
  ::lyre_msgs::msg::AsrKeyword angle(::lyre_msgs::msg::AsrKeyword::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lyre_msgs::msg::AsrKeyword msg_;
};

class Init_AsrKeyword_keyword
{
public:
  Init_AsrKeyword_keyword()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AsrKeyword_angle keyword(::lyre_msgs::msg::AsrKeyword::_keyword_type arg)
  {
    msg_.keyword = std::move(arg);
    return Init_AsrKeyword_angle(msg_);
  }

private:
  ::lyre_msgs::msg::AsrKeyword msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lyre_msgs::msg::AsrKeyword>()
{
  return lyre_msgs::msg::builder::Init_AsrKeyword_keyword();
}

}  // namespace lyre_msgs

#endif  // LYRE_MSGS__MSG__DETAIL__ASR_KEYWORD__BUILDER_HPP_
