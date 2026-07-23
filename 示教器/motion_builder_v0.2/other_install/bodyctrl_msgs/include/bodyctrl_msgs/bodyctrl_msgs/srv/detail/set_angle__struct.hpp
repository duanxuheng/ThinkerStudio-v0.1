// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyctrl_msgs:srv/SetAngle.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__SET_ANGLE__STRUCT_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__SET_ANGLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bodyctrl_msgs__srv__SetAngle_Request __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__srv__SetAngle_Request __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetAngle_Request_
{
  using Type = SetAngle_Request_<ContainerAllocator>;

  explicit SetAngle_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle0_ratio = 0.0f;
      this->angle1_ratio = 0.0f;
      this->angle2_ratio = 0.0f;
      this->angle3_ratio = 0.0f;
      this->angle4_ratio = 0.0f;
      this->angle5_ratio = 0.0f;
    }
  }

  explicit SetAngle_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle0_ratio = 0.0f;
      this->angle1_ratio = 0.0f;
      this->angle2_ratio = 0.0f;
      this->angle3_ratio = 0.0f;
      this->angle4_ratio = 0.0f;
      this->angle5_ratio = 0.0f;
    }
  }

  // field types and members
  using _angle0_ratio_type =
    float;
  _angle0_ratio_type angle0_ratio;
  using _angle1_ratio_type =
    float;
  _angle1_ratio_type angle1_ratio;
  using _angle2_ratio_type =
    float;
  _angle2_ratio_type angle2_ratio;
  using _angle3_ratio_type =
    float;
  _angle3_ratio_type angle3_ratio;
  using _angle4_ratio_type =
    float;
  _angle4_ratio_type angle4_ratio;
  using _angle5_ratio_type =
    float;
  _angle5_ratio_type angle5_ratio;

  // setters for named parameter idiom
  Type & set__angle0_ratio(
    const float & _arg)
  {
    this->angle0_ratio = _arg;
    return *this;
  }
  Type & set__angle1_ratio(
    const float & _arg)
  {
    this->angle1_ratio = _arg;
    return *this;
  }
  Type & set__angle2_ratio(
    const float & _arg)
  {
    this->angle2_ratio = _arg;
    return *this;
  }
  Type & set__angle3_ratio(
    const float & _arg)
  {
    this->angle3_ratio = _arg;
    return *this;
  }
  Type & set__angle4_ratio(
    const float & _arg)
  {
    this->angle4_ratio = _arg;
    return *this;
  }
  Type & set__angle5_ratio(
    const float & _arg)
  {
    this->angle5_ratio = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyctrl_msgs::srv::SetAngle_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::srv::SetAngle_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::srv::SetAngle_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::srv::SetAngle_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::srv::SetAngle_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::srv::SetAngle_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::srv::SetAngle_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::srv::SetAngle_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::srv::SetAngle_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::srv::SetAngle_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__srv__SetAngle_Request
    std::shared_ptr<bodyctrl_msgs::srv::SetAngle_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__srv__SetAngle_Request
    std::shared_ptr<bodyctrl_msgs::srv::SetAngle_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetAngle_Request_ & other) const
  {
    if (this->angle0_ratio != other.angle0_ratio) {
      return false;
    }
    if (this->angle1_ratio != other.angle1_ratio) {
      return false;
    }
    if (this->angle2_ratio != other.angle2_ratio) {
      return false;
    }
    if (this->angle3_ratio != other.angle3_ratio) {
      return false;
    }
    if (this->angle4_ratio != other.angle4_ratio) {
      return false;
    }
    if (this->angle5_ratio != other.angle5_ratio) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetAngle_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetAngle_Request_

// alias to use template instance with default allocator
using SetAngle_Request =
  bodyctrl_msgs::srv::SetAngle_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bodyctrl_msgs


#ifndef _WIN32
# define DEPRECATED__bodyctrl_msgs__srv__SetAngle_Response __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__srv__SetAngle_Response __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetAngle_Response_
{
  using Type = SetAngle_Response_<ContainerAllocator>;

  explicit SetAngle_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle_accepted = false;
    }
  }

  explicit SetAngle_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle_accepted = false;
    }
  }

  // field types and members
  using _angle_accepted_type =
    bool;
  _angle_accepted_type angle_accepted;

  // setters for named parameter idiom
  Type & set__angle_accepted(
    const bool & _arg)
  {
    this->angle_accepted = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyctrl_msgs::srv::SetAngle_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::srv::SetAngle_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::srv::SetAngle_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::srv::SetAngle_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::srv::SetAngle_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::srv::SetAngle_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::srv::SetAngle_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::srv::SetAngle_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::srv::SetAngle_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::srv::SetAngle_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__srv__SetAngle_Response
    std::shared_ptr<bodyctrl_msgs::srv::SetAngle_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__srv__SetAngle_Response
    std::shared_ptr<bodyctrl_msgs::srv::SetAngle_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetAngle_Response_ & other) const
  {
    if (this->angle_accepted != other.angle_accepted) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetAngle_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetAngle_Response_

// alias to use template instance with default allocator
using SetAngle_Response =
  bodyctrl_msgs::srv::SetAngle_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bodyctrl_msgs

namespace bodyctrl_msgs
{

namespace srv
{

struct SetAngle
{
  using Request = bodyctrl_msgs::srv::SetAngle_Request;
  using Response = bodyctrl_msgs::srv::SetAngle_Response;
};

}  // namespace srv

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__SRV__DETAIL__SET_ANGLE__STRUCT_HPP_
