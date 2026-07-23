// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lyre_msgs:srv/PlayUrl.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__SRV__DETAIL__PLAY_URL__BUILDER_HPP_
#define LYRE_MSGS__SRV__DETAIL__PLAY_URL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lyre_msgs/srv/detail/play_url__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lyre_msgs
{

namespace srv
{

namespace builder
{

class Init_PlayUrl_Request_url
{
public:
  explicit Init_PlayUrl_Request_url(::lyre_msgs::srv::PlayUrl_Request & msg)
  : msg_(msg)
  {}
  ::lyre_msgs::srv::PlayUrl_Request url(::lyre_msgs::srv::PlayUrl_Request::_url_type arg)
  {
    msg_.url = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lyre_msgs::srv::PlayUrl_Request msg_;
};

class Init_PlayUrl_Request_force
{
public:
  explicit Init_PlayUrl_Request_force(::lyre_msgs::srv::PlayUrl_Request & msg)
  : msg_(msg)
  {}
  Init_PlayUrl_Request_url force(::lyre_msgs::srv::PlayUrl_Request::_force_type arg)
  {
    msg_.force = std::move(arg);
    return Init_PlayUrl_Request_url(msg_);
  }

private:
  ::lyre_msgs::srv::PlayUrl_Request msg_;
};

class Init_PlayUrl_Request_last
{
public:
  explicit Init_PlayUrl_Request_last(::lyre_msgs::srv::PlayUrl_Request & msg)
  : msg_(msg)
  {}
  Init_PlayUrl_Request_force last(::lyre_msgs::srv::PlayUrl_Request::_last_type arg)
  {
    msg_.last = std::move(arg);
    return Init_PlayUrl_Request_force(msg_);
  }

private:
  ::lyre_msgs::srv::PlayUrl_Request msg_;
};

class Init_PlayUrl_Request_seq
{
public:
  explicit Init_PlayUrl_Request_seq(::lyre_msgs::srv::PlayUrl_Request & msg)
  : msg_(msg)
  {}
  Init_PlayUrl_Request_last seq(::lyre_msgs::srv::PlayUrl_Request::_seq_type arg)
  {
    msg_.seq = std::move(arg);
    return Init_PlayUrl_Request_last(msg_);
  }

private:
  ::lyre_msgs::srv::PlayUrl_Request msg_;
};

class Init_PlayUrl_Request_sid
{
public:
  Init_PlayUrl_Request_sid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlayUrl_Request_seq sid(::lyre_msgs::srv::PlayUrl_Request::_sid_type arg)
  {
    msg_.sid = std::move(arg);
    return Init_PlayUrl_Request_seq(msg_);
  }

private:
  ::lyre_msgs::srv::PlayUrl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lyre_msgs::srv::PlayUrl_Request>()
{
  return lyre_msgs::srv::builder::Init_PlayUrl_Request_sid();
}

}  // namespace lyre_msgs


namespace lyre_msgs
{

namespace srv
{

namespace builder
{

class Init_PlayUrl_Response_message
{
public:
  explicit Init_PlayUrl_Response_message(::lyre_msgs::srv::PlayUrl_Response & msg)
  : msg_(msg)
  {}
  ::lyre_msgs::srv::PlayUrl_Response message(::lyre_msgs::srv::PlayUrl_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lyre_msgs::srv::PlayUrl_Response msg_;
};

class Init_PlayUrl_Response_code
{
public:
  explicit Init_PlayUrl_Response_code(::lyre_msgs::srv::PlayUrl_Response & msg)
  : msg_(msg)
  {}
  Init_PlayUrl_Response_message code(::lyre_msgs::srv::PlayUrl_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_PlayUrl_Response_message(msg_);
  }

private:
  ::lyre_msgs::srv::PlayUrl_Response msg_;
};

class Init_PlayUrl_Response_sid
{
public:
  Init_PlayUrl_Response_sid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlayUrl_Response_code sid(::lyre_msgs::srv::PlayUrl_Response::_sid_type arg)
  {
    msg_.sid = std::move(arg);
    return Init_PlayUrl_Response_code(msg_);
  }

private:
  ::lyre_msgs::srv::PlayUrl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lyre_msgs::srv::PlayUrl_Response>()
{
  return lyre_msgs::srv::builder::Init_PlayUrl_Response_sid();
}

}  // namespace lyre_msgs

#endif  // LYRE_MSGS__SRV__DETAIL__PLAY_URL__BUILDER_HPP_
