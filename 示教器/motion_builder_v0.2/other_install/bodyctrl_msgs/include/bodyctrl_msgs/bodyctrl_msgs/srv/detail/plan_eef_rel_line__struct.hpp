// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyctrl_msgs:srv/PlanEefRelLine.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__PLAN_EEF_REL_LINE__STRUCT_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__PLAN_EEF_REL_LINE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bodyctrl_msgs__srv__PlanEefRelLine_Request __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__srv__PlanEefRelLine_Request __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlanEefRelLine_Request_
{
  using Type = PlanEefRelLine_Request_<ContainerAllocator>;

  explicit PlanEefRelLine_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arm_name = "";
      this->dx = 0.0;
      this->dy = 0.0;
      this->dz = 0.0;
      this->vel_percent = 0.0;
      this->acc_percent = 0.0;
    }
  }

  explicit PlanEefRelLine_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : arm_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arm_name = "";
      this->dx = 0.0;
      this->dy = 0.0;
      this->dz = 0.0;
      this->vel_percent = 0.0;
      this->acc_percent = 0.0;
    }
  }

  // field types and members
  using _arm_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _arm_name_type arm_name;
  using _dx_type =
    double;
  _dx_type dx;
  using _dy_type =
    double;
  _dy_type dy;
  using _dz_type =
    double;
  _dz_type dz;
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
  Type & set__dx(
    const double & _arg)
  {
    this->dx = _arg;
    return *this;
  }
  Type & set__dy(
    const double & _arg)
  {
    this->dy = _arg;
    return *this;
  }
  Type & set__dz(
    const double & _arg)
  {
    this->dz = _arg;
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
    bodyctrl_msgs::srv::PlanEefRelLine_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::srv::PlanEefRelLine_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::srv::PlanEefRelLine_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::srv::PlanEefRelLine_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::srv::PlanEefRelLine_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::srv::PlanEefRelLine_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::srv::PlanEefRelLine_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::srv::PlanEefRelLine_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::srv::PlanEefRelLine_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::srv::PlanEefRelLine_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__srv__PlanEefRelLine_Request
    std::shared_ptr<bodyctrl_msgs::srv::PlanEefRelLine_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__srv__PlanEefRelLine_Request
    std::shared_ptr<bodyctrl_msgs::srv::PlanEefRelLine_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanEefRelLine_Request_ & other) const
  {
    if (this->arm_name != other.arm_name) {
      return false;
    }
    if (this->dx != other.dx) {
      return false;
    }
    if (this->dy != other.dy) {
      return false;
    }
    if (this->dz != other.dz) {
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
  bool operator!=(const PlanEefRelLine_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanEefRelLine_Request_

// alias to use template instance with default allocator
using PlanEefRelLine_Request =
  bodyctrl_msgs::srv::PlanEefRelLine_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bodyctrl_msgs


#ifndef _WIN32
# define DEPRECATED__bodyctrl_msgs__srv__PlanEefRelLine_Response __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__srv__PlanEefRelLine_Response __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlanEefRelLine_Response_
{
  using Type = PlanEefRelLine_Response_<ContainerAllocator>;

  explicit PlanEefRelLine_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit PlanEefRelLine_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    bodyctrl_msgs::srv::PlanEefRelLine_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::srv::PlanEefRelLine_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::srv::PlanEefRelLine_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::srv::PlanEefRelLine_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::srv::PlanEefRelLine_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::srv::PlanEefRelLine_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::srv::PlanEefRelLine_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::srv::PlanEefRelLine_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::srv::PlanEefRelLine_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::srv::PlanEefRelLine_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__srv__PlanEefRelLine_Response
    std::shared_ptr<bodyctrl_msgs::srv::PlanEefRelLine_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__srv__PlanEefRelLine_Response
    std::shared_ptr<bodyctrl_msgs::srv::PlanEefRelLine_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanEefRelLine_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanEefRelLine_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanEefRelLine_Response_

// alias to use template instance with default allocator
using PlanEefRelLine_Response =
  bodyctrl_msgs::srv::PlanEefRelLine_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bodyctrl_msgs

namespace bodyctrl_msgs
{

namespace srv
{

struct PlanEefRelLine
{
  using Request = bodyctrl_msgs::srv::PlanEefRelLine_Request;
  using Response = bodyctrl_msgs::srv::PlanEefRelLine_Response;
};

}  // namespace srv

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__SRV__DETAIL__PLAN_EEF_REL_LINE__STRUCT_HPP_
