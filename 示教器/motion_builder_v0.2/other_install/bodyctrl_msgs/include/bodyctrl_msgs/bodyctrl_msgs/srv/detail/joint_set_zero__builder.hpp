// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:srv/JointSetZero.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__JOINT_SET_ZERO__BUILDER_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__JOINT_SET_ZERO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/srv/detail/joint_set_zero__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_JointSetZero_Request_name
{
public:
  Init_JointSetZero_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bodyctrl_msgs::srv::JointSetZero_Request name(::bodyctrl_msgs::srv::JointSetZero_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::JointSetZero_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::JointSetZero_Request>()
{
  return bodyctrl_msgs::srv::builder::Init_JointSetZero_Request_name();
}

}  // namespace bodyctrl_msgs


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_JointSetZero_Response_zero_accepted
{
public:
  Init_JointSetZero_Response_zero_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bodyctrl_msgs::srv::JointSetZero_Response zero_accepted(::bodyctrl_msgs::srv::JointSetZero_Response::_zero_accepted_type arg)
  {
    msg_.zero_accepted = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::JointSetZero_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::JointSetZero_Response>()
{
  return bodyctrl_msgs::srv::builder::Init_JointSetZero_Response_zero_accepted();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__SRV__DETAIL__JOINT_SET_ZERO__BUILDER_HPP_
