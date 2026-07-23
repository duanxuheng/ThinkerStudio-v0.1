// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/SbusData.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SBUS_DATA__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__SBUS_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/sbus_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_SbusData_y2
{
public:
  explicit Init_SbusData_y2(::bodyctrl_msgs::msg::SbusData & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::SbusData y2(::bodyctrl_msgs::msg::SbusData::_y2_type arg)
  {
    msg_.y2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SbusData msg_;
};

class Init_SbusData_x2
{
public:
  explicit Init_SbusData_x2(::bodyctrl_msgs::msg::SbusData & msg)
  : msg_(msg)
  {}
  Init_SbusData_y2 x2(::bodyctrl_msgs::msg::SbusData::_x2_type arg)
  {
    msg_.x2 = std::move(arg);
    return Init_SbusData_y2(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SbusData msg_;
};

class Init_SbusData_y1
{
public:
  explicit Init_SbusData_y1(::bodyctrl_msgs::msg::SbusData & msg)
  : msg_(msg)
  {}
  Init_SbusData_x2 y1(::bodyctrl_msgs::msg::SbusData::_y1_type arg)
  {
    msg_.y1 = std::move(arg);
    return Init_SbusData_x2(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SbusData msg_;
};

class Init_SbusData_x1
{
public:
  explicit Init_SbusData_x1(::bodyctrl_msgs::msg::SbusData & msg)
  : msg_(msg)
  {}
  Init_SbusData_y1 x1(::bodyctrl_msgs::msg::SbusData::_x1_type arg)
  {
    msg_.x1 = std::move(arg);
    return Init_SbusData_y1(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SbusData msg_;
};

class Init_SbusData_button_h
{
public:
  explicit Init_SbusData_button_h(::bodyctrl_msgs::msg::SbusData & msg)
  : msg_(msg)
  {}
  Init_SbusData_x1 button_h(::bodyctrl_msgs::msg::SbusData::_button_h_type arg)
  {
    msg_.button_h = std::move(arg);
    return Init_SbusData_x1(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SbusData msg_;
};

class Init_SbusData_button_g
{
public:
  explicit Init_SbusData_button_g(::bodyctrl_msgs::msg::SbusData & msg)
  : msg_(msg)
  {}
  Init_SbusData_button_h button_g(::bodyctrl_msgs::msg::SbusData::_button_g_type arg)
  {
    msg_.button_g = std::move(arg);
    return Init_SbusData_button_h(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SbusData msg_;
};

class Init_SbusData_button_f
{
public:
  explicit Init_SbusData_button_f(::bodyctrl_msgs::msg::SbusData & msg)
  : msg_(msg)
  {}
  Init_SbusData_button_g button_f(::bodyctrl_msgs::msg::SbusData::_button_f_type arg)
  {
    msg_.button_f = std::move(arg);
    return Init_SbusData_button_g(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SbusData msg_;
};

class Init_SbusData_button_e
{
public:
  explicit Init_SbusData_button_e(::bodyctrl_msgs::msg::SbusData & msg)
  : msg_(msg)
  {}
  Init_SbusData_button_f button_e(::bodyctrl_msgs::msg::SbusData::_button_e_type arg)
  {
    msg_.button_e = std::move(arg);
    return Init_SbusData_button_f(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SbusData msg_;
};

class Init_SbusData_button_d
{
public:
  explicit Init_SbusData_button_d(::bodyctrl_msgs::msg::SbusData & msg)
  : msg_(msg)
  {}
  Init_SbusData_button_e button_d(::bodyctrl_msgs::msg::SbusData::_button_d_type arg)
  {
    msg_.button_d = std::move(arg);
    return Init_SbusData_button_e(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SbusData msg_;
};

class Init_SbusData_button_c
{
public:
  explicit Init_SbusData_button_c(::bodyctrl_msgs::msg::SbusData & msg)
  : msg_(msg)
  {}
  Init_SbusData_button_d button_c(::bodyctrl_msgs::msg::SbusData::_button_c_type arg)
  {
    msg_.button_c = std::move(arg);
    return Init_SbusData_button_d(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SbusData msg_;
};

class Init_SbusData_button_b
{
public:
  explicit Init_SbusData_button_b(::bodyctrl_msgs::msg::SbusData & msg)
  : msg_(msg)
  {}
  Init_SbusData_button_c button_b(::bodyctrl_msgs::msg::SbusData::_button_b_type arg)
  {
    msg_.button_b = std::move(arg);
    return Init_SbusData_button_c(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SbusData msg_;
};

class Init_SbusData_button_a
{
public:
  explicit Init_SbusData_button_a(::bodyctrl_msgs::msg::SbusData & msg)
  : msg_(msg)
  {}
  Init_SbusData_button_b button_a(::bodyctrl_msgs::msg::SbusData::_button_a_type arg)
  {
    msg_.button_a = std::move(arg);
    return Init_SbusData_button_b(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SbusData msg_;
};

class Init_SbusData_key_event_old
{
public:
  explicit Init_SbusData_key_event_old(::bodyctrl_msgs::msg::SbusData & msg)
  : msg_(msg)
  {}
  Init_SbusData_button_a key_event_old(::bodyctrl_msgs::msg::SbusData::_key_event_old_type arg)
  {
    msg_.key_event_old = std::move(arg);
    return Init_SbusData_button_a(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SbusData msg_;
};

class Init_SbusData_key_event_new
{
public:
  explicit Init_SbusData_key_event_new(::bodyctrl_msgs::msg::SbusData & msg)
  : msg_(msg)
  {}
  Init_SbusData_key_event_old key_event_new(::bodyctrl_msgs::msg::SbusData::_key_event_new_type arg)
  {
    msg_.key_event_new = std::move(arg);
    return Init_SbusData_key_event_old(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SbusData msg_;
};

class Init_SbusData_header
{
public:
  Init_SbusData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbusData_key_event_new header(::bodyctrl_msgs::msg::SbusData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SbusData_key_event_new(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SbusData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::SbusData>()
{
  return bodyctrl_msgs::msg::builder::Init_SbusData_header();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SBUS_DATA__BUILDER_HPP_
