// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/MotorCtrl.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__MOTOR_CTRL__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__MOTOR_CTRL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/motor_ctrl__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorCtrl_tor
{
public:
  explicit Init_MotorCtrl_tor(::bodyctrl_msgs::msg::MotorCtrl & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::MotorCtrl tor(::bodyctrl_msgs::msg::MotorCtrl::_tor_type arg)
  {
    msg_.tor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorCtrl msg_;
};

class Init_MotorCtrl_spd
{
public:
  explicit Init_MotorCtrl_spd(::bodyctrl_msgs::msg::MotorCtrl & msg)
  : msg_(msg)
  {}
  Init_MotorCtrl_tor spd(::bodyctrl_msgs::msg::MotorCtrl::_spd_type arg)
  {
    msg_.spd = std::move(arg);
    return Init_MotorCtrl_tor(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorCtrl msg_;
};

class Init_MotorCtrl_pos
{
public:
  explicit Init_MotorCtrl_pos(::bodyctrl_msgs::msg::MotorCtrl & msg)
  : msg_(msg)
  {}
  Init_MotorCtrl_spd pos(::bodyctrl_msgs::msg::MotorCtrl::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_MotorCtrl_spd(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorCtrl msg_;
};

class Init_MotorCtrl_kd
{
public:
  explicit Init_MotorCtrl_kd(::bodyctrl_msgs::msg::MotorCtrl & msg)
  : msg_(msg)
  {}
  Init_MotorCtrl_pos kd(::bodyctrl_msgs::msg::MotorCtrl::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return Init_MotorCtrl_pos(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorCtrl msg_;
};

class Init_MotorCtrl_kp
{
public:
  explicit Init_MotorCtrl_kp(::bodyctrl_msgs::msg::MotorCtrl & msg)
  : msg_(msg)
  {}
  Init_MotorCtrl_kd kp(::bodyctrl_msgs::msg::MotorCtrl::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_MotorCtrl_kd(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorCtrl msg_;
};

class Init_MotorCtrl_name
{
public:
  Init_MotorCtrl_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCtrl_kp name(::bodyctrl_msgs::msg::MotorCtrl::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_MotorCtrl_kp(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorCtrl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::MotorCtrl>()
{
  return bodyctrl_msgs::msg::builder::Init_MotorCtrl_name();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__MOTOR_CTRL__BUILDER_HPP_
