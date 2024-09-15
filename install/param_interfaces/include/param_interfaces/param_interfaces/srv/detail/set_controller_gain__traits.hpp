// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from param_interfaces:srv/SetControllerGain.idl
// generated code does not contain a copyright notice

#ifndef PARAM_INTERFACES__SRV__DETAIL__SET_CONTROLLER_GAIN__TRAITS_HPP_
#define PARAM_INTERFACES__SRV__DETAIL__SET_CONTROLLER_GAIN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "param_interfaces/srv/detail/set_controller_gain__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace param_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetControllerGain_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: kp_d
  {
    out << "kp_d: ";
    rosidl_generator_traits::value_to_yaml(msg.kp_d, out);
    out << ", ";
  }

  // member: kp_theta
  {
    out << "kp_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.kp_theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetControllerGain_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: kp_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kp_d: ";
    rosidl_generator_traits::value_to_yaml(msg.kp_d, out);
    out << "\n";
  }

  // member: kp_theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kp_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.kp_theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetControllerGain_Request & msg, bool use_flow_style = false)
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

}  // namespace param_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use param_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const param_interfaces::srv::SetControllerGain_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  param_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use param_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const param_interfaces::srv::SetControllerGain_Request & msg)
{
  return param_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<param_interfaces::srv::SetControllerGain_Request>()
{
  return "param_interfaces::srv::SetControllerGain_Request";
}

template<>
inline const char * name<param_interfaces::srv::SetControllerGain_Request>()
{
  return "param_interfaces/srv/SetControllerGain_Request";
}

template<>
struct has_fixed_size<param_interfaces::srv::SetControllerGain_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<param_interfaces::srv::SetControllerGain_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<param_interfaces::srv::SetControllerGain_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace param_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetControllerGain_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetControllerGain_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetControllerGain_Response & msg, bool use_flow_style = false)
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

}  // namespace param_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use param_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const param_interfaces::srv::SetControllerGain_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  param_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use param_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const param_interfaces::srv::SetControllerGain_Response & msg)
{
  return param_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<param_interfaces::srv::SetControllerGain_Response>()
{
  return "param_interfaces::srv::SetControllerGain_Response";
}

template<>
inline const char * name<param_interfaces::srv::SetControllerGain_Response>()
{
  return "param_interfaces/srv/SetControllerGain_Response";
}

template<>
struct has_fixed_size<param_interfaces::srv::SetControllerGain_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<param_interfaces::srv::SetControllerGain_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<param_interfaces::srv::SetControllerGain_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<param_interfaces::srv::SetControllerGain>()
{
  return "param_interfaces::srv::SetControllerGain";
}

template<>
inline const char * name<param_interfaces::srv::SetControllerGain>()
{
  return "param_interfaces/srv/SetControllerGain";
}

template<>
struct has_fixed_size<param_interfaces::srv::SetControllerGain>
  : std::integral_constant<
    bool,
    has_fixed_size<param_interfaces::srv::SetControllerGain_Request>::value &&
    has_fixed_size<param_interfaces::srv::SetControllerGain_Response>::value
  >
{
};

template<>
struct has_bounded_size<param_interfaces::srv::SetControllerGain>
  : std::integral_constant<
    bool,
    has_bounded_size<param_interfaces::srv::SetControllerGain_Request>::value &&
    has_bounded_size<param_interfaces::srv::SetControllerGain_Response>::value
  >
{
};

template<>
struct is_service<param_interfaces::srv::SetControllerGain>
  : std::true_type
{
};

template<>
struct is_service_request<param_interfaces::srv::SetControllerGain_Request>
  : std::true_type
{
};

template<>
struct is_service_response<param_interfaces::srv::SetControllerGain_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PARAM_INTERFACES__SRV__DETAIL__SET_CONTROLLER_GAIN__TRAITS_HPP_
