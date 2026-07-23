// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/Euler.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__EULER__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__EULER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/euler__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_Euler_yaw
{
public:
  explicit Init_Euler_yaw(::bodyctrl_msgs::msg::Euler & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::Euler yaw(::bodyctrl_msgs::msg::Euler::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::Euler msg_;
};

class Init_Euler_pitch
{
public:
  explicit Init_Euler_pitch(::bodyctrl_msgs::msg::Euler & msg)
  : msg_(msg)
  {}
  Init_Euler_yaw pitch(::bodyctrl_msgs::msg::Euler::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Euler_yaw(msg_);
  }

private:
  ::bodyctrl_msgs::msg::Euler msg_;
};

class Init_Euler_roll
{
public:
  Init_Euler_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Euler_pitch roll(::bodyctrl_msgs::msg::Euler::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_Euler_pitch(msg_);
  }

private:
  ::bodyctrl_msgs::msg::Euler msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::Euler>()
{
  return bodyctrl_msgs::msg::builder::Init_Euler_roll();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__EULER__BUILDER_HPP_
