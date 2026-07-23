// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lyre_msgs:msg/LlmRst.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__MSG__DETAIL__LLM_RST__BUILDER_HPP_
#define LYRE_MSGS__MSG__DETAIL__LLM_RST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lyre_msgs/msg/detail/llm_rst__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lyre_msgs
{

namespace msg
{

namespace builder
{

class Init_LlmRst_text
{
public:
  explicit Init_LlmRst_text(::lyre_msgs::msg::LlmRst & msg)
  : msg_(msg)
  {}
  ::lyre_msgs::msg::LlmRst text(::lyre_msgs::msg::LlmRst::_text_type arg)
  {
    msg_.text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lyre_msgs::msg::LlmRst msg_;
};

class Init_LlmRst_last
{
public:
  explicit Init_LlmRst_last(::lyre_msgs::msg::LlmRst & msg)
  : msg_(msg)
  {}
  Init_LlmRst_text last(::lyre_msgs::msg::LlmRst::_last_type arg)
  {
    msg_.last = std::move(arg);
    return Init_LlmRst_text(msg_);
  }

private:
  ::lyre_msgs::msg::LlmRst msg_;
};

class Init_LlmRst_seq
{
public:
  explicit Init_LlmRst_seq(::lyre_msgs::msg::LlmRst & msg)
  : msg_(msg)
  {}
  Init_LlmRst_last seq(::lyre_msgs::msg::LlmRst::_seq_type arg)
  {
    msg_.seq = std::move(arg);
    return Init_LlmRst_last(msg_);
  }

private:
  ::lyre_msgs::msg::LlmRst msg_;
};

class Init_LlmRst_sid
{
public:
  Init_LlmRst_sid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LlmRst_seq sid(::lyre_msgs::msg::LlmRst::_sid_type arg)
  {
    msg_.sid = std::move(arg);
    return Init_LlmRst_seq(msg_);
  }

private:
  ::lyre_msgs::msg::LlmRst msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lyre_msgs::msg::LlmRst>()
{
  return lyre_msgs::msg::builder::Init_LlmRst_sid();
}

}  // namespace lyre_msgs

#endif  // LYRE_MSGS__MSG__DETAIL__LLM_RST__BUILDER_HPP_
