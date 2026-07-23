// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/SetMotorSpeed.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_SPEED__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/set_motor_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_SetMotorSpeed_cur
{
public:
  explicit Init_SetMotorSpeed_cur(::bodyctrl_msgs::msg::SetMotorSpeed & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::SetMotorSpeed cur(::bodyctrl_msgs::msg::SetMotorSpeed::_cur_type arg)
  {
    msg_.cur = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SetMotorSpeed msg_;
};

class Init_SetMotorSpeed_spd
{
public:
  explicit Init_SetMotorSpeed_spd(::bodyctrl_msgs::msg::SetMotorSpeed & msg)
  : msg_(msg)
  {}
  Init_SetMotorSpeed_cur spd(::bodyctrl_msgs::msg::SetMotorSpeed::_spd_type arg)
  {
    msg_.spd = std::move(arg);
    return Init_SetMotorSpeed_cur(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SetMotorSpeed msg_;
};

class Init_SetMotorSpeed_name
{
public:
  Init_SetMotorSpeed_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMotorSpeed_spd name(::bodyctrl_msgs::msg::SetMotorSpeed::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SetMotorSpeed_spd(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SetMotorSpeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::SetMotorSpeed>()
{
  return bodyctrl_msgs::msg::builder::Init_SetMotorSpeed_name();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_SPEED__BUILDER_HPP_
