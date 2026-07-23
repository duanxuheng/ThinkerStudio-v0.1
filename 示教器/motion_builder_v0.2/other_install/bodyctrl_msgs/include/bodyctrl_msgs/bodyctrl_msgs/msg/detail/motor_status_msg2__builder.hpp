// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/MotorStatusMsg2.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG2__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/motor_status_msg2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorStatusMsg2_current
{
public:
  explicit Init_MotorStatusMsg2_current(::bodyctrl_msgs::msg::MotorStatusMsg2 & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::MotorStatusMsg2 current(::bodyctrl_msgs::msg::MotorStatusMsg2::_current_type arg)
  {
    msg_.current = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsg2 msg_;
};

class Init_MotorStatusMsg2_speed
{
public:
  explicit Init_MotorStatusMsg2_speed(::bodyctrl_msgs::msg::MotorStatusMsg2 & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsg2_current speed(::bodyctrl_msgs::msg::MotorStatusMsg2::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_MotorStatusMsg2_current(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsg2 msg_;
};

class Init_MotorStatusMsg2_pos
{
public:
  explicit Init_MotorStatusMsg2_pos(::bodyctrl_msgs::msg::MotorStatusMsg2 & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsg2_speed pos(::bodyctrl_msgs::msg::MotorStatusMsg2::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_MotorStatusMsg2_speed(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsg2 msg_;
};

class Init_MotorStatusMsg2_name
{
public:
  explicit Init_MotorStatusMsg2_name(::bodyctrl_msgs::msg::MotorStatusMsg2 & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsg2_pos name(::bodyctrl_msgs::msg::MotorStatusMsg2::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_MotorStatusMsg2_pos(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsg2 msg_;
};

class Init_MotorStatusMsg2_header
{
public:
  Init_MotorStatusMsg2_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorStatusMsg2_name header(::bodyctrl_msgs::msg::MotorStatusMsg2::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotorStatusMsg2_name(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsg2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::MotorStatusMsg2>()
{
  return bodyctrl_msgs::msg::builder::Init_MotorStatusMsg2_header();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG2__BUILDER_HPP_
