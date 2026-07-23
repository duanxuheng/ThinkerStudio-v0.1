// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyctrl_msgs:srv/SetForce.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__SET_FORCE__STRUCT_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__SET_FORCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bodyctrl_msgs__srv__SetForce_Request __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__srv__SetForce_Request __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetForce_Request_
{
  using Type = SetForce_Request_<ContainerAllocator>;

  explicit SetForce_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->force0_ratio = 0.0f;
      this->force1_ratio = 0.0f;
      this->force2_ratio = 0.0f;
      this->force3_ratio = 0.0f;
      this->force4_ratio = 0.0f;
      this->force5_ratio = 0.0f;
    }
  }

  explicit SetForce_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->force0_ratio = 0.0f;
      this->force1_ratio = 0.0f;
      this->force2_ratio = 0.0f;
      this->force3_ratio = 0.0f;
      this->force4_ratio = 0.0f;
      this->force5_ratio = 0.0f;
    }
  }

  // field types and members
  using _force0_ratio_type =
    float;
  _force0_ratio_type force0_ratio;
  using _force1_ratio_type =
    float;
  _force1_ratio_type force1_ratio;
  using _force2_ratio_type =
    float;
  _force2_ratio_type force2_ratio;
  using _force3_ratio_type =
    float;
  _force3_ratio_type force3_ratio;
  using _force4_ratio_type =
    float;
  _force4_ratio_type force4_ratio;
  using _force5_ratio_type =
    float;
  _force5_ratio_type force5_ratio;

  // setters for named parameter idiom
  Type & set__force0_ratio(
    const float & _arg)
  {
    this->force0_ratio = _arg;
    return *this;
  }
  Type & set__force1_ratio(
    const float & _arg)
  {
    this->force1_ratio = _arg;
    return *this;
  }
  Type & set__force2_ratio(
    const float & _arg)
  {
    this->force2_ratio = _arg;
    return *this;
  }
  Type & set__force3_ratio(
    const float & _arg)
  {
    this->force3_ratio = _arg;
    return *this;
  }
  Type & set__force4_ratio(
    const float & _arg)
  {
    this->force4_ratio = _arg;
    return *this;
  }
  Type & set__force5_ratio(
    const float & _arg)
  {
    this->force5_ratio = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyctrl_msgs::srv::SetForce_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::srv::SetForce_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::srv::SetForce_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::srv::SetForce_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::srv::SetForce_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::srv::SetForce_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::srv::SetForce_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::srv::SetForce_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::srv::SetForce_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::srv::SetForce_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__srv__SetForce_Request
    std::shared_ptr<bodyctrl_msgs::srv::SetForce_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__srv__SetForce_Request
    std::shared_ptr<bodyctrl_msgs::srv::SetForce_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetForce_Request_ & other) const
  {
    if (this->force0_ratio != other.force0_ratio) {
      return false;
    }
    if (this->force1_ratio != other.force1_ratio) {
      return false;
    }
    if (this->force2_ratio != other.force2_ratio) {
      return false;
    }
    if (this->force3_ratio != other.force3_ratio) {
      return false;
    }
    if (this->force4_ratio != other.force4_ratio) {
      return false;
    }
    if (this->force5_ratio != other.force5_ratio) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetForce_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetForce_Request_

// alias to use template instance with default allocator
using SetForce_Request =
  bodyctrl_msgs::srv::SetForce_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bodyctrl_msgs


#ifndef _WIN32
# define DEPRECATED__bodyctrl_msgs__srv__SetForce_Response __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__srv__SetForce_Response __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetForce_Response_
{
  using Type = SetForce_Response_<ContainerAllocator>;

  explicit SetForce_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->force_accepted = false;
    }
  }

  explicit SetForce_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->force_accepted = false;
    }
  }

  // field types and members
  using _force_accepted_type =
    bool;
  _force_accepted_type force_accepted;

  // setters for named parameter idiom
  Type & set__force_accepted(
    const bool & _arg)
  {
    this->force_accepted = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyctrl_msgs::srv::SetForce_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::srv::SetForce_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::srv::SetForce_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::srv::SetForce_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::srv::SetForce_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::srv::SetForce_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::srv::SetForce_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::srv::SetForce_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::srv::SetForce_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::srv::SetForce_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__srv__SetForce_Response
    std::shared_ptr<bodyctrl_msgs::srv::SetForce_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__srv__SetForce_Response
    std::shared_ptr<bodyctrl_msgs::srv::SetForce_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetForce_Response_ & other) const
  {
    if (this->force_accepted != other.force_accepted) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetForce_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetForce_Response_

// alias to use template instance with default allocator
using SetForce_Response =
  bodyctrl_msgs::srv::SetForce_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bodyctrl_msgs

namespace bodyctrl_msgs
{

namespace srv
{

struct SetForce
{
  using Request = bodyctrl_msgs::srv::SetForce_Request;
  using Response = bodyctrl_msgs::srv::SetForce_Response;
};

}  // namespace srv

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__SRV__DETAIL__SET_FORCE__STRUCT_HPP_
