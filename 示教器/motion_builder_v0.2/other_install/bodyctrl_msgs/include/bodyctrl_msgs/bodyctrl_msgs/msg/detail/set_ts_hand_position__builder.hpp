// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/SetTsHandPosition.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_POSITION__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/set_ts_hand_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_SetTsHandPosition_bend_angle
{
public:
  explicit Init_SetTsHandPosition_bend_angle(::bodyctrl_msgs::msg::SetTsHandPosition & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::SetTsHandPosition bend_angle(::bodyctrl_msgs::msg::SetTsHandPosition::_bend_angle_type arg)
  {
    msg_.bend_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SetTsHandPosition msg_;
};

class Init_SetTsHandPosition_rotation_angle
{
public:
  explicit Init_SetTsHandPosition_rotation_angle(::bodyctrl_msgs::msg::SetTsHandPosition & msg)
  : msg_(msg)
  {}
  Init_SetTsHandPosition_bend_angle rotation_angle(::bodyctrl_msgs::msg::SetTsHandPosition::_rotation_angle_type arg)
  {
    msg_.rotation_angle = std::move(arg);
    return Init_SetTsHandPosition_bend_angle(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SetTsHandPosition msg_;
};

class Init_SetTsHandPosition_name
{
public:
  Init_SetTsHandPosition_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetTsHandPosition_rotation_angle name(::bodyctrl_msgs::msg::SetTsHandPosition::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SetTsHandPosition_rotation_angle(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SetTsHandPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::SetTsHandPosition>()
{
  return bodyctrl_msgs::msg::builder::Init_SetTsHandPosition_name();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_POSITION__BUILDER_HPP_
