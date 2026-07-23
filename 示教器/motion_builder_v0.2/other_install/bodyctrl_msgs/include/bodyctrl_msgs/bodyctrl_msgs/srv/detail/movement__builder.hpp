// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:srv/Movement.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__MOVEMENT__BUILDER_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__MOVEMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/srv/detail/movement__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_Movement_Request_value
{
public:
  explicit Init_Movement_Request_value(::bodyctrl_msgs::srv::Movement_Request & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::srv::Movement_Request value(::bodyctrl_msgs::srv::Movement_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::Movement_Request msg_;
};

class Init_Movement_Request_name
{
public:
  Init_Movement_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Movement_Request_value name(::bodyctrl_msgs::srv::Movement_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Movement_Request_value(msg_);
  }

private:
  ::bodyctrl_msgs::srv::Movement_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::Movement_Request>()
{
  return bodyctrl_msgs::srv::builder::Init_Movement_Request_name();
}

}  // namespace bodyctrl_msgs


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_Movement_Response_action_completed
{
public:
  Init_Movement_Response_action_completed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bodyctrl_msgs::srv::Movement_Response action_completed(::bodyctrl_msgs::srv::Movement_Response::_action_completed_type arg)
  {
    msg_.action_completed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::Movement_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::Movement_Response>()
{
  return bodyctrl_msgs::srv::builder::Init_Movement_Response_action_completed();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__SRV__DETAIL__MOVEMENT__BUILDER_HPP_
