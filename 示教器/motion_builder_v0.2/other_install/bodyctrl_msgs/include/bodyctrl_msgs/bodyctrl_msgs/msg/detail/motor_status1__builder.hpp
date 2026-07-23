// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/MotorStatus1.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS1__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS1__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/motor_status1__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorStatus1_mostemperature
{
public:
  explicit Init_MotorStatus1_mostemperature(::bodyctrl_msgs::msg::MotorStatus1 & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::MotorStatus1 mostemperature(::bodyctrl_msgs::msg::MotorStatus1::_mostemperature_type arg)
  {
    msg_.mostemperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatus1 msg_;
};

class Init_MotorStatus1_motortemperature
{
public:
  explicit Init_MotorStatus1_motortemperature(::bodyctrl_msgs::msg::MotorStatus1 & msg)
  : msg_(msg)
  {}
  Init_MotorStatus1_mostemperature motortemperature(::bodyctrl_msgs::msg::MotorStatus1::_motortemperature_type arg)
  {
    msg_.motortemperature = std::move(arg);
    return Init_MotorStatus1_mostemperature(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatus1 msg_;
};

class Init_MotorStatus1_name
{
public:
  Init_MotorStatus1_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorStatus1_motortemperature name(::bodyctrl_msgs::msg::MotorStatus1::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_MotorStatus1_motortemperature(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatus1 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::MotorStatus1>()
{
  return bodyctrl_msgs::msg::builder::Init_MotorStatus1_name();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS1__BUILDER_HPP_
