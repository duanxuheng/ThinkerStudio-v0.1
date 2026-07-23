// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/Exception.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__EXCEPTION__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__EXCEPTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/exception__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_Exception_nodename
{
public:
  explicit Init_Exception_nodename(::bodyctrl_msgs::msg::Exception & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::Exception nodename(::bodyctrl_msgs::msg::Exception::_nodename_type arg)
  {
    msg_.nodename = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::Exception msg_;
};

class Init_Exception_desc
{
public:
  explicit Init_Exception_desc(::bodyctrl_msgs::msg::Exception & msg)
  : msg_(msg)
  {}
  Init_Exception_nodename desc(::bodyctrl_msgs::msg::Exception::_desc_type arg)
  {
    msg_.desc = std::move(arg);
    return Init_Exception_nodename(msg_);
  }

private:
  ::bodyctrl_msgs::msg::Exception msg_;
};

class Init_Exception_code
{
public:
  explicit Init_Exception_code(::bodyctrl_msgs::msg::Exception & msg)
  : msg_(msg)
  {}
  Init_Exception_desc code(::bodyctrl_msgs::msg::Exception::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_Exception_desc(msg_);
  }

private:
  ::bodyctrl_msgs::msg::Exception msg_;
};

class Init_Exception_stamp
{
public:
  Init_Exception_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Exception_code stamp(::bodyctrl_msgs::msg::Exception::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Exception_code(msg_);
  }

private:
  ::bodyctrl_msgs::msg::Exception msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::Exception>()
{
  return bodyctrl_msgs::msg::builder::Init_Exception_stamp();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__EXCEPTION__BUILDER_HPP_
