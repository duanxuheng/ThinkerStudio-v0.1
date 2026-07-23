// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:srv/PlanEefLine.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__PLAN_EEF_LINE__BUILDER_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__PLAN_EEF_LINE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/srv/detail/plan_eef_line__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_PlanEefLine_Request_acc_percent
{
public:
  explicit Init_PlanEefLine_Request_acc_percent(::bodyctrl_msgs::srv::PlanEefLine_Request & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::srv::PlanEefLine_Request acc_percent(::bodyctrl_msgs::srv::PlanEefLine_Request::_acc_percent_type arg)
  {
    msg_.acc_percent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::PlanEefLine_Request msg_;
};

class Init_PlanEefLine_Request_vel_percent
{
public:
  explicit Init_PlanEefLine_Request_vel_percent(::bodyctrl_msgs::srv::PlanEefLine_Request & msg)
  : msg_(msg)
  {}
  Init_PlanEefLine_Request_acc_percent vel_percent(::bodyctrl_msgs::srv::PlanEefLine_Request::_vel_percent_type arg)
  {
    msg_.vel_percent = std::move(arg);
    return Init_PlanEefLine_Request_acc_percent(msg_);
  }

private:
  ::bodyctrl_msgs::srv::PlanEefLine_Request msg_;
};

class Init_PlanEefLine_Request_eef_pose
{
public:
  explicit Init_PlanEefLine_Request_eef_pose(::bodyctrl_msgs::srv::PlanEefLine_Request & msg)
  : msg_(msg)
  {}
  Init_PlanEefLine_Request_vel_percent eef_pose(::bodyctrl_msgs::srv::PlanEefLine_Request::_eef_pose_type arg)
  {
    msg_.eef_pose = std::move(arg);
    return Init_PlanEefLine_Request_vel_percent(msg_);
  }

private:
  ::bodyctrl_msgs::srv::PlanEefLine_Request msg_;
};

class Init_PlanEefLine_Request_arm_name
{
public:
  Init_PlanEefLine_Request_arm_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanEefLine_Request_eef_pose arm_name(::bodyctrl_msgs::srv::PlanEefLine_Request::_arm_name_type arg)
  {
    msg_.arm_name = std::move(arg);
    return Init_PlanEefLine_Request_eef_pose(msg_);
  }

private:
  ::bodyctrl_msgs::srv::PlanEefLine_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::PlanEefLine_Request>()
{
  return bodyctrl_msgs::srv::builder::Init_PlanEefLine_Request_arm_name();
}

}  // namespace bodyctrl_msgs


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_PlanEefLine_Response_message
{
public:
  explicit Init_PlanEefLine_Response_message(::bodyctrl_msgs::srv::PlanEefLine_Response & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::srv::PlanEefLine_Response message(::bodyctrl_msgs::srv::PlanEefLine_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::PlanEefLine_Response msg_;
};

class Init_PlanEefLine_Response_success
{
public:
  Init_PlanEefLine_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanEefLine_Response_message success(::bodyctrl_msgs::srv::PlanEefLine_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_PlanEefLine_Response_message(msg_);
  }

private:
  ::bodyctrl_msgs::srv::PlanEefLine_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::PlanEefLine_Response>()
{
  return bodyctrl_msgs::srv::builder::Init_PlanEefLine_Response_success();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__SRV__DETAIL__PLAN_EEF_LINE__BUILDER_HPP_
