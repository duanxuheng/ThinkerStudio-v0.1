// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:srv/VersionUpgrade.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__VERSION_UPGRADE__BUILDER_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__VERSION_UPGRADE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/srv/detail/version_upgrade__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_VersionUpgrade_Request_param
{
public:
  Init_VersionUpgrade_Request_param()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bodyctrl_msgs::srv::VersionUpgrade_Request param(::bodyctrl_msgs::srv::VersionUpgrade_Request::_param_type arg)
  {
    msg_.param = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::VersionUpgrade_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::VersionUpgrade_Request>()
{
  return bodyctrl_msgs::srv::builder::Init_VersionUpgrade_Request_param();
}

}  // namespace bodyctrl_msgs


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_VersionUpgrade_Response_result
{
public:
  Init_VersionUpgrade_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bodyctrl_msgs::srv::VersionUpgrade_Response result(::bodyctrl_msgs::srv::VersionUpgrade_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::VersionUpgrade_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::VersionUpgrade_Response>()
{
  return bodyctrl_msgs::srv::builder::Init_VersionUpgrade_Response_result();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__SRV__DETAIL__VERSION_UPGRADE__BUILDER_HPP_
