// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/NodeState.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__NODE_STATE__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__NODE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/node_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeState_state
{
public:
  explicit Init_NodeState_state(::bodyctrl_msgs::msg::NodeState & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::NodeState state(::bodyctrl_msgs::msg::NodeState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::NodeState msg_;
};

class Init_NodeState_topic
{
public:
  explicit Init_NodeState_topic(::bodyctrl_msgs::msg::NodeState & msg)
  : msg_(msg)
  {}
  Init_NodeState_state topic(::bodyctrl_msgs::msg::NodeState::_topic_type arg)
  {
    msg_.topic = std::move(arg);
    return Init_NodeState_state(msg_);
  }

private:
  ::bodyctrl_msgs::msg::NodeState msg_;
};

class Init_NodeState_header
{
public:
  Init_NodeState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeState_topic header(::bodyctrl_msgs::msg::NodeState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NodeState_topic(msg_);
  }

private:
  ::bodyctrl_msgs::msg::NodeState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::NodeState>()
{
  return bodyctrl_msgs::msg::builder::Init_NodeState_header();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__NODE_STATE__BUILDER_HPP_
