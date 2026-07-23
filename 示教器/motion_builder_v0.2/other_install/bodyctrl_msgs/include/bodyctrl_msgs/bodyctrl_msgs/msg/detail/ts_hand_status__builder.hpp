// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/TsHandStatus.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__TS_HAND_STATUS__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__TS_HAND_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/ts_hand_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_TsHandStatus_bend_angle
{
public:
  explicit Init_TsHandStatus_bend_angle(::bodyctrl_msgs::msg::TsHandStatus & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::TsHandStatus bend_angle(::bodyctrl_msgs::msg::TsHandStatus::_bend_angle_type arg)
  {
    msg_.bend_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::TsHandStatus msg_;
};

class Init_TsHandStatus_rotation_angle
{
public:
  explicit Init_TsHandStatus_rotation_angle(::bodyctrl_msgs::msg::TsHandStatus & msg)
  : msg_(msg)
  {}
  Init_TsHandStatus_bend_angle rotation_angle(::bodyctrl_msgs::msg::TsHandStatus::_rotation_angle_type arg)
  {
    msg_.rotation_angle = std::move(arg);
    return Init_TsHandStatus_bend_angle(msg_);
  }

private:
  ::bodyctrl_msgs::msg::TsHandStatus msg_;
};

class Init_TsHandStatus_name
{
public:
  Init_TsHandStatus_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TsHandStatus_rotation_angle name(::bodyctrl_msgs::msg::TsHandStatus::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_TsHandStatus_rotation_angle(msg_);
  }

private:
  ::bodyctrl_msgs::msg::TsHandStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::TsHandStatus>()
{
  return bodyctrl_msgs::msg::builder::Init_TsHandStatus_name();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__TS_HAND_STATUS__BUILDER_HPP_
