// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:srv/MotorStart.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__MOTOR_START__BUILDER_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__MOTOR_START__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/srv/detail/motor_start__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_MotorStart_Request_param
{
public:
  Init_MotorStart_Request_param()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bodyctrl_msgs::srv::MotorStart_Request param(::bodyctrl_msgs::srv::MotorStart_Request::_param_type arg)
  {
    msg_.param = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::MotorStart_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::MotorStart_Request>()
{
  return bodyctrl_msgs::srv::builder::Init_MotorStart_Request_param();
}

}  // namespace bodyctrl_msgs


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_MotorStart_Response_ret
{
public:
  Init_MotorStart_Response_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bodyctrl_msgs::srv::MotorStart_Response ret(::bodyctrl_msgs::srv::MotorStart_Response::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::MotorStart_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::MotorStart_Response>()
{
  return bodyctrl_msgs::srv::builder::Init_MotorStart_Response_ret();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__SRV__DETAIL__MOTOR_START__BUILDER_HPP_
