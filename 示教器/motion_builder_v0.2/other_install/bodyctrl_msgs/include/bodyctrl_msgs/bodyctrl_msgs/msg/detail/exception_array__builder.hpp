// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/ExceptionArray.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__EXCEPTION_ARRAY__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__EXCEPTION_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/exception_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_ExceptionArray_alarm
{
public:
  explicit Init_ExceptionArray_alarm(::bodyctrl_msgs::msg::ExceptionArray & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::ExceptionArray alarm(::bodyctrl_msgs::msg::ExceptionArray::_alarm_type arg)
  {
    msg_.alarm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::ExceptionArray msg_;
};

class Init_ExceptionArray_header
{
public:
  Init_ExceptionArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExceptionArray_alarm header(::bodyctrl_msgs::msg::ExceptionArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ExceptionArray_alarm(msg_);
  }

private:
  ::bodyctrl_msgs::msg::ExceptionArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::ExceptionArray>()
{
  return bodyctrl_msgs::msg::builder::Init_ExceptionArray_header();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__EXCEPTION_ARRAY__BUILDER_HPP_
