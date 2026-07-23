// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/SetMotorCurTor.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_CUR_TOR__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_CUR_TOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/set_motor_cur_tor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_SetMotorCurTor_ctrl_status
{
public:
  explicit Init_SetMotorCurTor_ctrl_status(::bodyctrl_msgs::msg::SetMotorCurTor & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::SetMotorCurTor ctrl_status(::bodyctrl_msgs::msg::SetMotorCurTor::_ctrl_status_type arg)
  {
    msg_.ctrl_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SetMotorCurTor msg_;
};

class Init_SetMotorCurTor_cur_tor
{
public:
  explicit Init_SetMotorCurTor_cur_tor(::bodyctrl_msgs::msg::SetMotorCurTor & msg)
  : msg_(msg)
  {}
  Init_SetMotorCurTor_ctrl_status cur_tor(::bodyctrl_msgs::msg::SetMotorCurTor::_cur_tor_type arg)
  {
    msg_.cur_tor = std::move(arg);
    return Init_SetMotorCurTor_ctrl_status(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SetMotorCurTor msg_;
};

class Init_SetMotorCurTor_name
{
public:
  Init_SetMotorCurTor_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMotorCurTor_cur_tor name(::bodyctrl_msgs::msg::SetMotorCurTor::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SetMotorCurTor_cur_tor(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SetMotorCurTor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::SetMotorCurTor>()
{
  return bodyctrl_msgs::msg::builder::Init_SetMotorCurTor_name();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_CUR_TOR__BUILDER_HPP_
