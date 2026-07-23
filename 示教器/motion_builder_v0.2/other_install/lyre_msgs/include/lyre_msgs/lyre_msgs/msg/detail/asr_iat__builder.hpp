// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lyre_msgs:msg/AsrIat.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__MSG__DETAIL__ASR_IAT__BUILDER_HPP_
#define LYRE_MSGS__MSG__DETAIL__ASR_IAT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lyre_msgs/msg/detail/asr_iat__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lyre_msgs
{

namespace msg
{

namespace builder
{

class Init_AsrIat_text
{
public:
  explicit Init_AsrIat_text(::lyre_msgs::msg::AsrIat & msg)
  : msg_(msg)
  {}
  ::lyre_msgs::msg::AsrIat text(::lyre_msgs::msg::AsrIat::_text_type arg)
  {
    msg_.text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lyre_msgs::msg::AsrIat msg_;
};

class Init_AsrIat_id
{
public:
  Init_AsrIat_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AsrIat_text id(::lyre_msgs::msg::AsrIat::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_AsrIat_text(msg_);
  }

private:
  ::lyre_msgs::msg::AsrIat msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lyre_msgs::msg::AsrIat>()
{
  return lyre_msgs::msg::builder::Init_AsrIat_id();
}

}  // namespace lyre_msgs

#endif  // LYRE_MSGS__MSG__DETAIL__ASR_IAT__BUILDER_HPP_
