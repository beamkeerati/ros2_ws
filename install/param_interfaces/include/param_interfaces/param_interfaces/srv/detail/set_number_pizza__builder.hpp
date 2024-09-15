// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from param_interfaces:srv/SetNumberPizza.idl
// generated code does not contain a copyright notice

#ifndef PARAM_INTERFACES__SRV__DETAIL__SET_NUMBER_PIZZA__BUILDER_HPP_
#define PARAM_INTERFACES__SRV__DETAIL__SET_NUMBER_PIZZA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "param_interfaces/srv/detail/set_number_pizza__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace param_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetNumberPizza_Request_num_usable_pizza
{
public:
  Init_SetNumberPizza_Request_num_usable_pizza()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::param_interfaces::srv::SetNumberPizza_Request num_usable_pizza(::param_interfaces::srv::SetNumberPizza_Request::_num_usable_pizza_type arg)
  {
    msg_.num_usable_pizza = std::move(arg);
    return std::move(msg_);
  }

private:
  ::param_interfaces::srv::SetNumberPizza_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::param_interfaces::srv::SetNumberPizza_Request>()
{
  return param_interfaces::srv::builder::Init_SetNumberPizza_Request_num_usable_pizza();
}

}  // namespace param_interfaces


namespace param_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::param_interfaces::srv::SetNumberPizza_Response>()
{
  return ::param_interfaces::srv::SetNumberPizza_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace param_interfaces

#endif  // PARAM_INTERFACES__SRV__DETAIL__SET_NUMBER_PIZZA__BUILDER_HPP_
