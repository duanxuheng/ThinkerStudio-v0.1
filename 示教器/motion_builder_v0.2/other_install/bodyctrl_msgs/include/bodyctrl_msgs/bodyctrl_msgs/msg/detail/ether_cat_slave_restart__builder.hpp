// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/EtherCatSlaveRestart.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__ETHER_CAT_SLAVE_RESTART__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__ETHER_CAT_SLAVE_RESTART__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/ether_cat_slave_restart__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_EtherCatSlaveRestart_flag
{
public:
  explicit Init_EtherCatSlaveRestart_flag(::bodyctrl_msgs::msg::EtherCatSlaveRestart & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::EtherCatSlaveRestart flag(::bodyctrl_msgs::msg::EtherCatSlaveRestart::_flag_type arg)
  {
    msg_.flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::EtherCatSlaveRestart msg_;
};

class Init_EtherCatSlaveRestart_topic
{
public:
  explicit Init_EtherCatSlaveRestart_topic(::bodyctrl_msgs::msg::EtherCatSlaveRestart & msg)
  : msg_(msg)
  {}
  Init_EtherCatSlaveRestart_flag topic(::bodyctrl_msgs::msg::EtherCatSlaveRestart::_topic_type arg)
  {
    msg_.topic = std::move(arg);
    return Init_EtherCatSlaveRestart_flag(msg_);
  }

private:
  ::bodyctrl_msgs::msg::EtherCatSlaveRestart msg_;
};

class Init_EtherCatSlaveRestart_header
{
public:
  Init_EtherCatSlaveRestart_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EtherCatSlaveRestart_topic header(::bodyctrl_msgs::msg::EtherCatSlaveRestart::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EtherCatSlaveRestart_topic(msg_);
  }

private:
  ::bodyctrl_msgs::msg::EtherCatSlaveRestart msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::EtherCatSlaveRestart>()
{
  return bodyctrl_msgs::msg::builder::Init_EtherCatSlaveRestart_header();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__ETHER_CAT_SLAVE_RESTART__BUILDER_HPP_
