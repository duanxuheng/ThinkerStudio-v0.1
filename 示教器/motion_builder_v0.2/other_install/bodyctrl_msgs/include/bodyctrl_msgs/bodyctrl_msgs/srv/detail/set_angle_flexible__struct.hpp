// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyctrl_msgs:srv/SetAngleFlexible.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__SET_ANGLE_FLEXIBLE__STRUCT_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__SET_ANGLE_FLEXIBLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bodyctrl_msgs__srv__SetAngleFlexible_Request __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__srv__SetAngleFlexible_Request __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetAngleFlexible_Request_
{
  using Type = SetAngleFlexible_Request_<ContainerAllocator>;

  explicit SetAngleFlexible_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SetAngleFlexible_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _name_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _name_type name;
  using _angle_ratio_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _angle_ratio_type angle_ratio;

  // setters for named parameter idiom
  Type & set__name(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__angle_ratio(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->angle_ratio = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyctrl_msgs::srv::SetAngleFlexible_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::srv::SetAngleFlexible_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::srv::SetAngleFlexible_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::srv::SetAngleFlexible_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::srv::SetAngleFlexible_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::srv::SetAngleFlexible_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::srv::SetAngleFlexible_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::srv::SetAngleFlexible_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::srv::SetAngleFlexible_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::srv::SetAngleFlexible_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__srv__SetAngleFlexible_Request
    std::shared_ptr<bodyctrl_msgs::srv::SetAngleFlexible_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__srv__SetAngleFlexible_Request
    std::shared_ptr<bodyctrl_msgs::srv::SetAngleFlexible_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetAngleFlexible_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->angle_ratio != other.angle_ratio) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetAngleFlexible_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetAngleFlexible_Request_

// alias to use template instance with default allocator
using SetAngleFlexible_Request =
  bodyctrl_msgs::srv::SetAngleFlexible_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bodyctrl_msgs


#ifndef _WIN32
# define DEPRECATED__bodyctrl_msgs__srv__SetAngleFlexible_Response __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__srv__SetAngleFlexible_Response __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetAngleFlexible_Response_
{
  using Type = SetAngleFlexible_Response_<ContainerAllocator>;

  explicit SetAngleFlexible_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle_accepted = false;
    }
  }

  explicit SetAngleFlexible_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    bodyctrl_msgs::srv::SetAngleFlexible_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::srv::SetAngleFlexible_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::srv::SetAngleFlexible_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::srv::SetAngleFlexible_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::srv::SetAngleFlexible_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::srv::SetAngleFlexible_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::srv::SetAngleFlexible_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::srv::SetAngleFlexible_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::srv::SetAngleFlexible_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::srv::SetAngleFlexible_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__srv__SetAngleFlexible_Response
    std::shared_ptr<bodyctrl_msgs::srv::SetAngleFlexible_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__srv__SetAngleFlexible_Response
    std::shared_ptr<bodyctrl_msgs::srv::SetAngleFlexible_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetAngleFlexible_Response_ & other) const
  {
    if (this->angle_accepted != other.angle_accepted) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetAngleFlexible_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetAngleFlexible_Response_

// alias to use template instance with default allocator
using SetAngleFlexible_Response =
  bodyctrl_msgs::srv::SetAngleFlexible_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bodyctrl_msgs

namespace bodyctrl_msgs
{

namespace srv
{

struct SetAngleFlexible
{
  using Request = bodyctrl_msgs::srv::SetAngleFlexible_Request;
  using Response = bodyctrl_msgs::srv::SetAngleFlexible_Response;
};

}  // namespace srv

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__SRV__DETAIL__SET_ANGLE_FLEXIBLE__STRUCT_HPP_
