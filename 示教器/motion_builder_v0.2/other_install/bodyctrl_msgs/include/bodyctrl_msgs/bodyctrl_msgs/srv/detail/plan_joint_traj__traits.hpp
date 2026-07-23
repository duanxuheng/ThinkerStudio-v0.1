// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyctrl_msgs:srv/PlanJointTraj.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__PLAN_JOINT_TRAJ__TRAITS_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__PLAN_JOINT_TRAJ__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyctrl_msgs/srv/detail/plan_joint_traj__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bodyctrl_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlanJointTraj_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: arm_name
  {
    out << "arm_name: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_name, out);
    out << ", ";
  }

  // member: joint_pos
  {
    if (msg.joint_pos.size() == 0) {
      out << "joint_pos: []";
    } else {
      out << "joint_pos: [";
      size_t pending_items = msg.joint_pos.size();
      for (auto item : msg.joint_pos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_vel
  {
    if (msg.joint_vel.size() == 0) {
      out << "joint_vel: []";
    } else {
      out << "joint_vel: [";
      size_t pending_items = msg.joint_vel.size();
      for (auto item : msg.joint_vel) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vel_percent
  {
    out << "vel_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_percent, out);
    out << ", ";
  }

  // member: acc_percent
  {
    out << "acc_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_percent, out);
    out << ", ";
  }

  // member: jerk_percent
  {
    out << "jerk_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.jerk_percent, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanJointTraj_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: arm_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_name: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_name, out);
    out << "\n";
  }

  // member: joint_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_pos.size() == 0) {
      out << "joint_pos: []\n";
    } else {
      out << "joint_pos:\n";
      for (auto item : msg.joint_pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_vel.size() == 0) {
      out << "joint_vel: []\n";
    } else {
      out << "joint_vel:\n";
      for (auto item : msg.joint_vel) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: vel_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_percent, out);
    out << "\n";
  }

  // member: acc_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_percent, out);
    out << "\n";
  }

  // member: jerk_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "jerk_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.jerk_percent, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanJointTraj_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace bodyctrl_msgs

namespace rosidl_generator_traits
{

[[deprecated("use bodyctrl_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bodyctrl_msgs::srv::PlanJointTraj_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::srv::PlanJointTraj_Request & msg)
{
  return bodyctrl_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::srv::PlanJointTraj_Request>()
{
  return "bodyctrl_msgs::srv::PlanJointTraj_Request";
}

template<>
inline const char * name<bodyctrl_msgs::srv::PlanJointTraj_Request>()
{
  return "bodyctrl_msgs/srv/PlanJointTraj_Request";
}

template<>
struct has_fixed_size<bodyctrl_msgs::srv::PlanJointTraj_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bodyctrl_msgs::srv::PlanJointTraj_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bodyctrl_msgs::srv::PlanJointTraj_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace bodyctrl_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlanJointTraj_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanJointTraj_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanJointTraj_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace bodyctrl_msgs

namespace rosidl_generator_traits
{

[[deprecated("use bodyctrl_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bodyctrl_msgs::srv::PlanJointTraj_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::srv::PlanJointTraj_Response & msg)
{
  return bodyctrl_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::srv::PlanJointTraj_Response>()
{
  return "bodyctrl_msgs::srv::PlanJointTraj_Response";
}

template<>
inline const char * name<bodyctrl_msgs::srv::PlanJointTraj_Response>()
{
  return "bodyctrl_msgs/srv/PlanJointTraj_Response";
}

template<>
struct has_fixed_size<bodyctrl_msgs::srv::PlanJointTraj_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bodyctrl_msgs::srv::PlanJointTraj_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bodyctrl_msgs::srv::PlanJointTraj_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bodyctrl_msgs::srv::PlanJointTraj>()
{
  return "bodyctrl_msgs::srv::PlanJointTraj";
}

template<>
inline const char * name<bodyctrl_msgs::srv::PlanJointTraj>()
{
  return "bodyctrl_msgs/srv/PlanJointTraj";
}

template<>
struct has_fixed_size<bodyctrl_msgs::srv::PlanJointTraj>
  : std::integral_constant<
    bool,
    has_fixed_size<bodyctrl_msgs::srv::PlanJointTraj_Request>::value &&
    has_fixed_size<bodyctrl_msgs::srv::PlanJointTraj_Response>::value
  >
{
};

template<>
struct has_bounded_size<bodyctrl_msgs::srv::PlanJointTraj>
  : std::integral_constant<
    bool,
    has_bounded_size<bodyctrl_msgs::srv::PlanJointTraj_Request>::value &&
    has_bounded_size<bodyctrl_msgs::srv::PlanJointTraj_Response>::value
  >
{
};

template<>
struct is_service<bodyctrl_msgs::srv::PlanJointTraj>
  : std::true_type
{
};

template<>
struct is_service_request<bodyctrl_msgs::srv::PlanJointTraj_Request>
  : std::true_type
{
};

template<>
struct is_service_response<bodyctrl_msgs::srv::PlanJointTraj_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BODYCTRL_MSGS__SRV__DETAIL__PLAN_JOINT_TRAJ__TRAITS_HPP_
