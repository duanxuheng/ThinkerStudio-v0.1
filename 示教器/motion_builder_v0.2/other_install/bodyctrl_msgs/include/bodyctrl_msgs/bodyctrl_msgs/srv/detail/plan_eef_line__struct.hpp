// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyctrl_msgs:srv/PlanEefLine.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__PLAN_EEF_LINE__STRUCT_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__PLAN_EEF_LINE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'eef_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bodyctrl_msgs__srv__PlanEefLine_Request __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__srv__PlanEefLine_Request __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlanEefLine_Request_
{
  using Type = PlanEefLine_Request_<ContainerAllocator>;

  explicit PlanEefLine_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : eef_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arm_name = "";
      this->vel_percent = 0.0;
      this->acc_percent = 0.0;
    }
  }

  explicit PlanEefLine_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : arm_name(_alloc),
    eef_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arm_name = "";
      this->vel_percent = 0.0;
      this->acc_percent = 0.0;
    }
  }

  // field types and members
  using _arm_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _arm_name_type arm_name;
  using _eef_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _eef_pose_type eef_pose;
  using _vel_percent_type =
    double;
  _vel_percent_type vel_percent;
  using _acc_percent_type =
    double;
  _acc_percent_type acc_percent;

  // setters for named parameter idiom
  Type & set__arm_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->arm_name = _arg;
    return *this;
  }
  Type & set__eef_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->eef_pose = _arg;
    return *this;
  }
  Type & set__vel_percent(
    const double & _arg)
  {
    this->vel_percent = _arg;
    return *this;
  }
  Type & set__acc_percent(
    const double & _arg)
  {
    this->acc_percent = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyctrl_msgs::srv::PlanEefLine_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::srv::PlanEefLine_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::srv::PlanEefLine_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::srv::PlanEefLine_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::srv::PlanEefLine_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::srv::PlanEefLine_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::srv::PlanEefLine_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::srv::PlanEefLine_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::srv::PlanEefLine_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::srv::PlanEefLine_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__srv__PlanEefLine_Request
    std::shared_ptr<bodyctrl_msgs::srv::PlanEefLine_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__srv__PlanEefLine_Request
    std::shared_ptr<bodyctrl_msgs::srv::PlanEefLine_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanEefLine_Request_ & other) const
  {
    if (this->arm_name != other.arm_name) {
      return false;
    }
    if (this->eef_pose != other.eef_pose) {
      return false;
    }
    if (this->vel_percent != other.vel_percent) {
      return false;
    }
    if (this->acc_percent != other.acc_percent) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanEefLine_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanEefLine_Request_

// alias to use template instance with default allocator
using PlanEefLine_Request =
  bodyctrl_msgs::srv::PlanEefLine_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bodyctrl_msgs


#ifndef _WIN32
# define DEPRECATED__bodyctrl_msgs__srv__PlanEefLine_Response __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__srv__PlanEefLine_Response __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlanEefLine_Response_
{
  using Type = PlanEefLine_Response_<ContainerAllocator>;

  explicit PlanEefLine_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit PlanEefLine_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyctrl_msgs::srv::PlanEefLine_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::srv::PlanEefLine_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::srv::PlanEefLine_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::srv::PlanEefLine_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::srv::PlanEefLine_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::srv::PlanEefLine_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::srv::PlanEefLine_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::srv::PlanEefLine_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::srv::PlanEefLine_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::srv::PlanEefLine_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__srv__PlanEefLine_Response
    std::shared_ptr<bodyctrl_msgs::srv::PlanEefLine_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__srv__PlanEefLine_Response
    std::shared_ptr<bodyctrl_msgs::srv::PlanEefLine_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanEefLine_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanEefLine_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanEefLine_Response_

// alias to use template instance with default allocator
using PlanEefLine_Response =
  bodyctrl_msgs::srv::PlanEefLine_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bodyctrl_msgs

namespace bodyctrl_msgs
{

namespace srv
{

struct PlanEefLine
{
  using Request = bodyctrl_msgs::srv::PlanEefLine_Request;
  using Response = bodyctrl_msgs::srv::PlanEefLine_Response;
};

}  // namespace srv

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__SRV__DETAIL__PLAN_EEF_LINE__STRUCT_HPP_
