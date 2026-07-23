// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyctrl_msgs:srv/SetSpeed.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__SET_SPEED__STRUCT_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__SET_SPEED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bodyctrl_msgs__srv__SetSpeed_Request __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__srv__SetSpeed_Request __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetSpeed_Request_
{
  using Type = SetSpeed_Request_<ContainerAllocator>;

  explicit SetSpeed_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed0_ratio = 0.0f;
      this->speed1_ratio = 0.0f;
      this->speed2_ratio = 0.0f;
      this->speed3_ratio = 0.0f;
      this->speed4_ratio = 0.0f;
      this->speed5_ratio = 0.0f;
    }
  }

  explicit SetSpeed_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed0_ratio = 0.0f;
      this->speed1_ratio = 0.0f;
      this->speed2_ratio = 0.0f;
      this->speed3_ratio = 0.0f;
      this->speed4_ratio = 0.0f;
      this->speed5_ratio = 0.0f;
    }
  }

  // field types and members
  using _speed0_ratio_type =
    float;
  _speed0_ratio_type speed0_ratio;
  using _speed1_ratio_type =
    float;
  _speed1_ratio_type speed1_ratio;
  using _speed2_ratio_type =
    float;
  _speed2_ratio_type speed2_ratio;
  using _speed3_ratio_type =
    float;
  _speed3_ratio_type speed3_ratio;
  using _speed4_ratio_type =
    float;
  _speed4_ratio_type speed4_ratio;
  using _speed5_ratio_type =
    float;
  _speed5_ratio_type speed5_ratio;

  // setters for named parameter idiom
  Type & set__speed0_ratio(
    const float & _arg)
  {
    this->speed0_ratio = _arg;
    return *this;
  }
  Type & set__speed1_ratio(
    const float & _arg)
  {
    this->speed1_ratio = _arg;
    return *this;
  }
  Type & set__speed2_ratio(
    const float & _arg)
  {
    this->speed2_ratio = _arg;
    return *this;
  }
  Type & set__speed3_ratio(
    const float & _arg)
  {
    this->speed3_ratio = _arg;
    return *this;
  }
  Type & set__speed4_ratio(
    const float & _arg)
  {
    this->speed4_ratio = _arg;
    return *this;
  }
  Type & set__speed5_ratio(
    const float & _arg)
  {
    this->speed5_ratio = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyctrl_msgs::srv::SetSpeed_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::srv::SetSpeed_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::srv::SetSpeed_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::srv::SetSpeed_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::srv::SetSpeed_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::srv::SetSpeed_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::srv::SetSpeed_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::srv::SetSpeed_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::srv::SetSpeed_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::srv::SetSpeed_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__srv__SetSpeed_Request
    std::shared_ptr<bodyctrl_msgs::srv::SetSpeed_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__srv__SetSpeed_Request
    std::shared_ptr<bodyctrl_msgs::srv::SetSpeed_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetSpeed_Request_ & other) const
  {
    if (this->speed0_ratio != other.speed0_ratio) {
      return false;
    }
    if (this->speed1_ratio != other.speed1_ratio) {
      return false;
    }
    if (this->speed2_ratio != other.speed2_ratio) {
      return false;
    }
    if (this->speed3_ratio != other.speed3_ratio) {
      return false;
    }
    if (this->speed4_ratio != other.speed4_ratio) {
      return false;
    }
    if (this->speed5_ratio != other.speed5_ratio) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetSpeed_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetSpeed_Request_

// alias to use template instance with default allocator
using SetSpeed_Request =
  bodyctrl_msgs::srv::SetSpeed_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bodyctrl_msgs


#ifndef _WIN32
# define DEPRECATED__bodyctrl_msgs__srv__SetSpeed_Response __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__srv__SetSpeed_Response __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetSpeed_Response_
{
  using Type = SetSpeed_Response_<ContainerAllocator>;

  explicit SetSpeed_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed_accepted = false;
    }
  }

  explicit SetSpeed_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed_accepted = false;
    }
  }

  // field types and members
  using _speed_accepted_type =
    bool;
  _speed_accepted_type speed_accepted;

  // setters for named parameter idiom
  Type & set__speed_accepted(
    const bool & _arg)
  {
    this->speed_accepted = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyctrl_msgs::srv::SetSpeed_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::srv::SetSpeed_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::srv::SetSpeed_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::srv::SetSpeed_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::srv::SetSpeed_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::srv::SetSpeed_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::srv::SetSpeed_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::srv::SetSpeed_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::srv::SetSpeed_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::srv::SetSpeed_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__srv__SetSpeed_Response
    std::shared_ptr<bodyctrl_msgs::srv::SetSpeed_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__srv__SetSpeed_Response
    std::shared_ptr<bodyctrl_msgs::srv::SetSpeed_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetSpeed_Response_ & other) const
  {
    if (this->speed_accepted != other.speed_accepted) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetSpeed_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetSpeed_Response_

// alias to use template instance with default allocator
using SetSpeed_Response =
  bodyctrl_msgs::srv::SetSpeed_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bodyctrl_msgs

namespace bodyctrl_msgs
{

namespace srv
{

struct SetSpeed
{
  using Request = bodyctrl_msgs::srv::SetSpeed_Request;
  using Response = bodyctrl_msgs::srv::SetSpeed_Response;
};

}  // namespace srv

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__SRV__DETAIL__SET_SPEED__STRUCT_HPP_
