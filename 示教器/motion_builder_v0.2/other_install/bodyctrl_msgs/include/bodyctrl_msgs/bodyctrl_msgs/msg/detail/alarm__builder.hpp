// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/Alarm.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__ALARM__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__ALARM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/alarm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_Alarm_description
{
public:
  explicit Init_Alarm_description(::bodyctrl_msgs::msg::Alarm & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::Alarm description(::bodyctrl_msgs::msg::Alarm::_description_type arg)
  {
    msg_.description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::Alarm msg_;
};

class Init_Alarm_level
{
public:
  explicit Init_Alarm_level(::bodyctrl_msgs::msg::Alarm & msg)
  : msg_(msg)
  {}
  Init_Alarm_description level(::bodyctrl_msgs::msg::Alarm::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_Alarm_description(msg_);
  }

private:
  ::bodyctrl_msgs::msg::Alarm msg_;
};

class Init_Alarm_error_code
{
public:
  explicit Init_Alarm_error_code(::bodyctrl_msgs::msg::Alarm & msg)
  : msg_(msg)
  {}
  Init_Alarm_level error_code(::bodyctrl_msgs::msg::Alarm::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_Alarm_level(msg_);
  }

private:
  ::bodyctrl_msgs::msg::Alarm msg_;
};

class Init_Alarm_node_name
{
public:
  explicit Init_Alarm_node_name(::bodyctrl_msgs::msg::Alarm & msg)
  : msg_(msg)
  {}
  Init_Alarm_error_code node_name(::bodyctrl_msgs::msg::Alarm::_node_name_type arg)
  {
    msg_.node_name = std::move(arg);
    return Init_Alarm_error_code(msg_);
  }

private:
  ::bodyctrl_msgs::msg::Alarm msg_;
};

class Init_Alarm_stamp
{
public:
  Init_Alarm_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Alarm_node_name stamp(::bodyctrl_msgs::msg::Alarm::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Alarm_node_name(msg_);
  }

private:
  ::bodyctrl_msgs::msg::Alarm msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::Alarm>()
{
  return bodyctrl_msgs::msg::builder::Init_Alarm_stamp();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__ALARM__BUILDER_HPP_
