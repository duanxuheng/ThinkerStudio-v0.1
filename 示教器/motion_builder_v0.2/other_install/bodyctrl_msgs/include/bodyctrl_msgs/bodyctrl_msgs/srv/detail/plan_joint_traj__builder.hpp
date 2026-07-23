// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:srv/PlanJointTraj.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__PLAN_JOINT_TRAJ__BUILDER_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__PLAN_JOINT_TRAJ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/srv/detail/plan_joint_traj__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_PlanJointTraj_Request_mode
{
public:
  explicit Init_PlanJointTraj_Request_mode(::bodyctrl_msgs::srv::PlanJointTraj_Request & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::srv::PlanJointTraj_Request mode(::bodyctrl_msgs::srv::PlanJointTraj_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::PlanJointTraj_Request msg_;
};

class Init_PlanJointTraj_Request_jerk_percent
{
public:
  explicit Init_PlanJointTraj_Request_jerk_percent(::bodyctrl_msgs::srv::PlanJointTraj_Request & msg)
  : msg_(msg)
  {}
  Init_PlanJointTraj_Request_mode jerk_percent(::bodyctrl_msgs::srv::PlanJointTraj_Request::_jerk_percent_type arg)
  {
    msg_.jerk_percent = std::move(arg);
    return Init_PlanJointTraj_Request_mode(msg_);
  }

private:
  ::bodyctrl_msgs::srv::PlanJointTraj_Request msg_;
};

class Init_PlanJointTraj_Request_acc_percent
{
public:
  explicit Init_PlanJointTraj_Request_acc_percent(::bodyctrl_msgs::srv::PlanJointTraj_Request & msg)
  : msg_(msg)
  {}
  Init_PlanJointTraj_Request_jerk_percent acc_percent(::bodyctrl_msgs::srv::PlanJointTraj_Request::_acc_percent_type arg)
  {
    msg_.acc_percent = std::move(arg);
    return Init_PlanJointTraj_Request_jerk_percent(msg_);
  }

private:
  ::bodyctrl_msgs::srv::PlanJointTraj_Request msg_;
};

class Init_PlanJointTraj_Request_vel_percent
{
public:
  explicit Init_PlanJointTraj_Request_vel_percent(::bodyctrl_msgs::srv::PlanJointTraj_Request & msg)
  : msg_(msg)
  {}
  Init_PlanJointTraj_Request_acc_percent vel_percent(::bodyctrl_msgs::srv::PlanJointTraj_Request::_vel_percent_type arg)
  {
    msg_.vel_percent = std::move(arg);
    return Init_PlanJointTraj_Request_acc_percent(msg_);
  }

private:
  ::bodyctrl_msgs::srv::PlanJointTraj_Request msg_;
};

class Init_PlanJointTraj_Request_joint_vel
{
public:
  explicit Init_PlanJointTraj_Request_joint_vel(::bodyctrl_msgs::srv::PlanJointTraj_Request & msg)
  : msg_(msg)
  {}
  Init_PlanJointTraj_Request_vel_percent joint_vel(::bodyctrl_msgs::srv::PlanJointTraj_Request::_joint_vel_type arg)
  {
    msg_.joint_vel = std::move(arg);
    return Init_PlanJointTraj_Request_vel_percent(msg_);
  }

private:
  ::bodyctrl_msgs::srv::PlanJointTraj_Request msg_;
};

class Init_PlanJointTraj_Request_joint_pos
{
public:
  explicit Init_PlanJointTraj_Request_joint_pos(::bodyctrl_msgs::srv::PlanJointTraj_Request & msg)
  : msg_(msg)
  {}
  Init_PlanJointTraj_Request_joint_vel joint_pos(::bodyctrl_msgs::srv::PlanJointTraj_Request::_joint_pos_type arg)
  {
    msg_.joint_pos = std::move(arg);
    return Init_PlanJointTraj_Request_joint_vel(msg_);
  }

private:
  ::bodyctrl_msgs::srv::PlanJointTraj_Request msg_;
};

class Init_PlanJointTraj_Request_arm_name
{
public:
  Init_PlanJointTraj_Request_arm_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanJointTraj_Request_joint_pos arm_name(::bodyctrl_msgs::srv::PlanJointTraj_Request::_arm_name_type arg)
  {
    msg_.arm_name = std::move(arg);
    return Init_PlanJointTraj_Request_joint_pos(msg_);
  }

private:
  ::bodyctrl_msgs::srv::PlanJointTraj_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::PlanJointTraj_Request>()
{
  return bodyctrl_msgs::srv::builder::Init_PlanJointTraj_Request_arm_name();
}

}  // namespace bodyctrl_msgs


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_PlanJointTraj_Response_message
{
public:
  explicit Init_PlanJointTraj_Response_message(::bodyctrl_msgs::srv::PlanJointTraj_Response & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::srv::PlanJointTraj_Response message(::bodyctrl_msgs::srv::PlanJointTraj_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::PlanJointTraj_Response msg_;
};

class Init_PlanJointTraj_Response_success
{
public:
  Init_PlanJointTraj_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanJointTraj_Response_message success(::bodyctrl_msgs::srv::PlanJointTraj_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_PlanJointTraj_Response_message(msg_);
  }

private:
  ::bodyctrl_msgs::srv::PlanJointTraj_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::PlanJointTraj_Response>()
{
  return bodyctrl_msgs::srv::builder::Init_PlanJointTraj_Response_success();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__SRV__DETAIL__PLAN_JOINT_TRAJ__BUILDER_HPP_
