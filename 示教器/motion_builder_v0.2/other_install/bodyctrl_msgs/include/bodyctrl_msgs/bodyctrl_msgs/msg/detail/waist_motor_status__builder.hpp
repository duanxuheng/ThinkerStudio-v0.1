// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/WaistMotorStatus.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__WAIST_MOTOR_STATUS__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__WAIST_MOTOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/waist_motor_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_WaistMotorStatus_cur
{
public:
  explicit Init_WaistMotorStatus_cur(::bodyctrl_msgs::msg::WaistMotorStatus & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::WaistMotorStatus cur(::bodyctrl_msgs::msg::WaistMotorStatus::_cur_type arg)
  {
    msg_.cur = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::WaistMotorStatus msg_;
};

class Init_WaistMotorStatus_vel
{
public:
  explicit Init_WaistMotorStatus_vel(::bodyctrl_msgs::msg::WaistMotorStatus & msg)
  : msg_(msg)
  {}
  Init_WaistMotorStatus_cur vel(::bodyctrl_msgs::msg::WaistMotorStatus::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_WaistMotorStatus_cur(msg_);
  }

private:
  ::bodyctrl_msgs::msg::WaistMotorStatus msg_;
};

class Init_WaistMotorStatus_pos
{
public:
  explicit Init_WaistMotorStatus_pos(::bodyctrl_msgs::msg::WaistMotorStatus & msg)
  : msg_(msg)
  {}
  Init_WaistMotorStatus_vel pos(::bodyctrl_msgs::msg::WaistMotorStatus::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_WaistMotorStatus_vel(msg_);
  }

private:
  ::bodyctrl_msgs::msg::WaistMotorStatus msg_;
};

class Init_WaistMotorStatus_header
{
public:
  Init_WaistMotorStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaistMotorStatus_pos header(::bodyctrl_msgs::msg::WaistMotorStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WaistMotorStatus_pos(msg_);
  }

private:
  ::bodyctrl_msgs::msg::WaistMotorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::WaistMotorStatus>()
{
  return bodyctrl_msgs::msg::builder::Init_WaistMotorStatus_header();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__WAIST_MOTOR_STATUS__BUILDER_HPP_
