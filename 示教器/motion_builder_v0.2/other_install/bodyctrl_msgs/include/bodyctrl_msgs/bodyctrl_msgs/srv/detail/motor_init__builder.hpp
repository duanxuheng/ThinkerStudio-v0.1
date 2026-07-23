// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:srv/MotorInit.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__MOTOR_INIT__BUILDER_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__MOTOR_INIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/srv/detail/motor_init__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_MotorInit_Request_name_of_net
{
public:
  Init_MotorInit_Request_name_of_net()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bodyctrl_msgs::srv::MotorInit_Request name_of_net(::bodyctrl_msgs::srv::MotorInit_Request::_name_of_net_type arg)
  {
    msg_.name_of_net = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::MotorInit_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::MotorInit_Request>()
{
  return bodyctrl_msgs::srv::builder::Init_MotorInit_Request_name_of_net();
}

}  // namespace bodyctrl_msgs


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_MotorInit_Response_ret
{
public:
  Init_MotorInit_Response_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bodyctrl_msgs::srv::MotorInit_Response ret(::bodyctrl_msgs::srv::MotorInit_Response::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::MotorInit_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::MotorInit_Response>()
{
  return bodyctrl_msgs::srv::builder::Init_MotorInit_Response_ret();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__SRV__DETAIL__MOTOR_INIT__BUILDER_HPP_
