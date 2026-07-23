// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lyre_msgs:srv/LlmAsk.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__SRV__DETAIL__LLM_ASK__BUILDER_HPP_
#define LYRE_MSGS__SRV__DETAIL__LLM_ASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lyre_msgs/srv/detail/llm_ask__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lyre_msgs
{

namespace srv
{

namespace builder
{

class Init_LlmAsk_Request_text
{
public:
  explicit Init_LlmAsk_Request_text(::lyre_msgs::srv::LlmAsk_Request & msg)
  : msg_(msg)
  {}
  ::lyre_msgs::srv::LlmAsk_Request text(::lyre_msgs::srv::LlmAsk_Request::_text_type arg)
  {
    msg_.text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lyre_msgs::srv::LlmAsk_Request msg_;
};

class Init_LlmAsk_Request_id
{
public:
  Init_LlmAsk_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LlmAsk_Request_text id(::lyre_msgs::srv::LlmAsk_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_LlmAsk_Request_text(msg_);
  }

private:
  ::lyre_msgs::srv::LlmAsk_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lyre_msgs::srv::LlmAsk_Request>()
{
  return lyre_msgs::srv::builder::Init_LlmAsk_Request_id();
}

}  // namespace lyre_msgs


namespace lyre_msgs
{

namespace srv
{

namespace builder
{

class Init_LlmAsk_Response_message
{
public:
  explicit Init_LlmAsk_Response_message(::lyre_msgs::srv::LlmAsk_Response & msg)
  : msg_(msg)
  {}
  ::lyre_msgs::srv::LlmAsk_Response message(::lyre_msgs::srv::LlmAsk_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lyre_msgs::srv::LlmAsk_Response msg_;
};

class Init_LlmAsk_Response_code
{
public:
  explicit Init_LlmAsk_Response_code(::lyre_msgs::srv::LlmAsk_Response & msg)
  : msg_(msg)
  {}
  Init_LlmAsk_Response_message code(::lyre_msgs::srv::LlmAsk_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_LlmAsk_Response_message(msg_);
  }

private:
  ::lyre_msgs::srv::LlmAsk_Response msg_;
};

class Init_LlmAsk_Response_sid
{
public:
  Init_LlmAsk_Response_sid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LlmAsk_Response_code sid(::lyre_msgs::srv::LlmAsk_Response::_sid_type arg)
  {
    msg_.sid = std::move(arg);
    return Init_LlmAsk_Response_code(msg_);
  }

private:
  ::lyre_msgs::srv::LlmAsk_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lyre_msgs::srv::LlmAsk_Response>()
{
  return lyre_msgs::srv::builder::Init_LlmAsk_Response_sid();
}

}  // namespace lyre_msgs

#endif  // LYRE_MSGS__SRV__DETAIL__LLM_ASK__BUILDER_HPP_
