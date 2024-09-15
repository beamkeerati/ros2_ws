// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from param_interfaces:srv/SetNumberPizza.idl
// generated code does not contain a copyright notice

#ifndef PARAM_INTERFACES__SRV__DETAIL__SET_NUMBER_PIZZA__TRAITS_HPP_
#define PARAM_INTERFACES__SRV__DETAIL__SET_NUMBER_PIZZA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "param_interfaces/srv/detail/set_number_pizza__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace param_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetNumberPizza_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: num_usable_pizza
  {
    out << "num_usable_pizza: ";
    rosidl_generator_traits::value_to_yaml(msg.num_usable_pizza, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetNumberPizza_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num_usable_pizza
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_usable_pizza: ";
    rosidl_generator_traits::value_to_yaml(msg.num_usable_pizza, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetNumberPizza_Request & msg, bool use_flow_style = false)
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
  const param_interfaces::srv::SetNumberPizza_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  param_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use param_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const param_interfaces::srv::SetNumberPizza_Request & msg)
{
  return param_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<param_interfaces::srv::SetNumberPizza_Request>()
{
  return "param_interfaces::srv::SetNumberPizza_Request";
}

template<>
inline const char * name<param_interfaces::srv::SetNumberPizza_Request>()
{
  return "param_interfaces/srv/SetNumberPizza_Request";
}

template<>
struct has_fixed_size<param_interfaces::srv::SetNumberPizza_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<param_interfaces::srv::SetNumberPizza_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<param_interfaces::srv::SetNumberPizza_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace param_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetNumberPizza_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetNumberPizza_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetNumberPizza_Response & msg, bool use_flow_style = false)
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
  const param_interfaces::srv::SetNumberPizza_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  param_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use param_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const param_interfaces::srv::SetNumberPizza_Response & msg)
{
  return param_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<param_interfaces::srv::SetNumberPizza_Response>()
{
  return "param_interfaces::srv::SetNumberPizza_Response";
}

template<>
inline const char * name<param_interfaces::srv::SetNumberPizza_Response>()
{
  return "param_interfaces/srv/SetNumberPizza_Response";
}

template<>
struct has_fixed_size<param_interfaces::srv::SetNumberPizza_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<param_interfaces::srv::SetNumberPizza_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<param_interfaces::srv::SetNumberPizza_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<param_interfaces::srv::SetNumberPizza>()
{
  return "param_interfaces::srv::SetNumberPizza";
}

template<>
inline const char * name<param_interfaces::srv::SetNumberPizza>()
{
  return "param_interfaces/srv/SetNumberPizza";
}

template<>
struct has_fixed_size<param_interfaces::srv::SetNumberPizza>
  : std::integral_constant<
    bool,
    has_fixed_size<param_interfaces::srv::SetNumberPizza_Request>::value &&
    has_fixed_size<param_interfaces::srv::SetNumberPizza_Response>::value
  >
{
};

template<>
struct has_bounded_size<param_interfaces::srv::SetNumberPizza>
  : std::integral_constant<
    bool,
    has_bounded_size<param_interfaces::srv::SetNumberPizza_Request>::value &&
    has_bounded_size<param_interfaces::srv::SetNumberPizza_Response>::value
  >
{
};

template<>
struct is_service<param_interfaces::srv::SetNumberPizza>
  : std::true_type
{
};

template<>
struct is_service_request<param_interfaces::srv::SetNumberPizza_Request>
  : std::true_type
{
};

template<>
struct is_service_response<param_interfaces::srv::SetNumberPizza_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PARAM_INTERFACES__SRV__DETAIL__SET_NUMBER_PIZZA__TRAITS_HPP_
