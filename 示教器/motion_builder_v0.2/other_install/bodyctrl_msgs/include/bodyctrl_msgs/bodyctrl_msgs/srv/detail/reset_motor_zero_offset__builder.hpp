// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:srv/ResetMotorZeroOffset.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__RESET_MOTOR_ZERO_OFFSET__BUILDER_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__RESET_MOTOR_ZERO_OFFSET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/srv/detail/reset_motor_zero_offset__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_ResetMotorZeroOffset_Request_name
{
public:
  Init_ResetMotorZeroOffset_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bodyctrl_msgs::srv::ResetMotorZeroOffset_Request name(::bodyctrl_msgs::srv::ResetMotorZeroOffset_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::ResetMotorZeroOffset_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::ResetMotorZeroOffset_Request>()
{
  return bodyctrl_msgs::srv::builder::Init_ResetMotorZeroOffset_Request_name();
}

}  // namespace bodyctrl_msgs


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_ResetMotorZeroOffset_Response_success
{
public:
  Init_ResetMotorZeroOffset_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bodyctrl_msgs::srv::ResetMotorZeroOffset_Response success(::bodyctrl_msgs::srv::ResetMotorZeroOffset_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::ResetMotorZeroOffset_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::ResetMotorZeroOffset_Response>()
{
  return bodyctrl_msgs::srv::builder::Init_ResetMotorZeroOffset_Response_success();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__SRV__DETAIL__RESET_MOTOR_ZERO_OFFSET__BUILDER_HPP_
