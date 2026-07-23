// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/Sri.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SRI__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__SRI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/sri__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_Sri_mz
{
public:
  explicit Init_Sri_mz(::bodyctrl_msgs::msg::Sri & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::Sri mz(::bodyctrl_msgs::msg::Sri::_mz_type arg)
  {
    msg_.mz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::Sri msg_;
};

class Init_Sri_my
{
public:
  explicit Init_Sri_my(::bodyctrl_msgs::msg::Sri & msg)
  : msg_(msg)
  {}
  Init_Sri_mz my(::bodyctrl_msgs::msg::Sri::_my_type arg)
  {
    msg_.my = std::move(arg);
    return Init_Sri_mz(msg_);
  }

private:
  ::bodyctrl_msgs::msg::Sri msg_;
};

class Init_Sri_mx
{
public:
  explicit Init_Sri_mx(::bodyctrl_msgs::msg::Sri & msg)
  : msg_(msg)
  {}
  Init_Sri_my mx(::bodyctrl_msgs::msg::Sri::_mx_type arg)
  {
    msg_.mx = std::move(arg);
    return Init_Sri_my(msg_);
  }

private:
  ::bodyctrl_msgs::msg::Sri msg_;
};

class Init_Sri_fz
{
public:
  explicit Init_Sri_fz(::bodyctrl_msgs::msg::Sri & msg)
  : msg_(msg)
  {}
  Init_Sri_mx fz(::bodyctrl_msgs::msg::Sri::_fz_type arg)
  {
    msg_.fz = std::move(arg);
    return Init_Sri_mx(msg_);
  }

private:
  ::bodyctrl_msgs::msg::Sri msg_;
};

class Init_Sri_fy
{
public:
  explicit Init_Sri_fy(::bodyctrl_msgs::msg::Sri & msg)
  : msg_(msg)
  {}
  Init_Sri_fz fy(::bodyctrl_msgs::msg::Sri::_fy_type arg)
  {
    msg_.fy = std::move(arg);
    return Init_Sri_fz(msg_);
  }

private:
  ::bodyctrl_msgs::msg::Sri msg_;
};

class Init_Sri_fx
{
public:
  explicit Init_Sri_fx(::bodyctrl_msgs::msg::Sri & msg)
  : msg_(msg)
  {}
  Init_Sri_fy fx(::bodyctrl_msgs::msg::Sri::_fx_type arg)
  {
    msg_.fx = std::move(arg);
    return Init_Sri_fy(msg_);
  }

private:
  ::bodyctrl_msgs::msg::Sri msg_;
};

class Init_Sri_name
{
public:
  explicit Init_Sri_name(::bodyctrl_msgs::msg::Sri & msg)
  : msg_(msg)
  {}
  Init_Sri_fx name(::bodyctrl_msgs::msg::Sri::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Sri_fx(msg_);
  }

private:
  ::bodyctrl_msgs::msg::Sri msg_;
};

class Init_Sri_header
{
public:
  Init_Sri_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sri_name header(::bodyctrl_msgs::msg::Sri::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Sri_name(msg_);
  }

private:
  ::bodyctrl_msgs::msg::Sri msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::Sri>()
{
  return bodyctrl_msgs::msg::builder::Init_Sri_header();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SRI__BUILDER_HPP_
