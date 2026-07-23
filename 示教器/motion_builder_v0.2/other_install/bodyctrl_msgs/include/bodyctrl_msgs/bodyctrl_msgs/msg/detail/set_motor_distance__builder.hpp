// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/SetMotorDistance.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_DISTANCE__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_DISTANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/set_motor_distance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_SetMotorDistance_cur
{
public:
  explicit Init_SetMotorDistance_cur(::bodyctrl_msgs::msg::SetMotorDistance & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::SetMotorDistance cur(::bodyctrl_msgs::msg::SetMotorDistance::_cur_type arg)
  {
    msg_.cur = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SetMotorDistance msg_;
};

class Init_SetMotorDistance_spd
{
public:
  explicit Init_SetMotorDistance_spd(::bodyctrl_msgs::msg::SetMotorDistance & msg)
  : msg_(msg)
  {}
  Init_SetMotorDistance_cur spd(::bodyctrl_msgs::msg::SetMotorDistance::_spd_type arg)
  {
    msg_.spd = std::move(arg);
    return Init_SetMotorDistance_cur(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SetMotorDistance msg_;
};

class Init_SetMotorDistance_distance
{
public:
  explicit Init_SetMotorDistance_distance(::bodyctrl_msgs::msg::SetMotorDistance & msg)
  : msg_(msg)
  {}
  Init_SetMotorDistance_spd distance(::bodyctrl_msgs::msg::SetMotorDistance::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_SetMotorDistance_spd(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SetMotorDistance msg_;
};

class Init_SetMotorDistance_name
{
public:
  Init_SetMotorDistance_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMotorDistance_distance name(::bodyctrl_msgs::msg::SetMotorDistance::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SetMotorDistance_distance(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SetMotorDistance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::SetMotorDistance>()
{
  return bodyctrl_msgs::msg::builder::Init_SetMotorDistance_name();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_DISTANCE__BUILDER_HPP_
