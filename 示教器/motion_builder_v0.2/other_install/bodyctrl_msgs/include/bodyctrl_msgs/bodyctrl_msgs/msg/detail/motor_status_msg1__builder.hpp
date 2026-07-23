// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/MotorStatusMsg1.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG1__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG1__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/motor_status_msg1__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorStatusMsg1_status
{
public:
  explicit Init_MotorStatusMsg1_status(::bodyctrl_msgs::msg::MotorStatusMsg1 & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::MotorStatusMsg1 status(::bodyctrl_msgs::msg::MotorStatusMsg1::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsg1 msg_;
};

class Init_MotorStatusMsg1_header
{
public:
  Init_MotorStatusMsg1_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorStatusMsg1_status header(::bodyctrl_msgs::msg::MotorStatusMsg1::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotorStatusMsg1_status(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsg1 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::MotorStatusMsg1>()
{
  return bodyctrl_msgs::msg::builder::Init_MotorStatusMsg1_header();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG1__BUILDER_HPP_
