// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/AlarmArray.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__ALARM_ARRAY__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__ALARM_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/alarm_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_AlarmArray_alarm
{
public:
  explicit Init_AlarmArray_alarm(::bodyctrl_msgs::msg::AlarmArray & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::AlarmArray alarm(::bodyctrl_msgs::msg::AlarmArray::_alarm_type arg)
  {
    msg_.alarm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::AlarmArray msg_;
};

class Init_AlarmArray_header
{
public:
  Init_AlarmArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AlarmArray_alarm header(::bodyctrl_msgs::msg::AlarmArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AlarmArray_alarm(msg_);
  }

private:
  ::bodyctrl_msgs::msg::AlarmArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::AlarmArray>()
{
  return bodyctrl_msgs::msg::builder::Init_AlarmArray_header();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__ALARM_ARRAY__BUILDER_HPP_
