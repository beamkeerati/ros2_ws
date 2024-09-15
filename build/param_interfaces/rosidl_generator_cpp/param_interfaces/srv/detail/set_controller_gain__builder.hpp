// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from param_interfaces:srv/SetControllerGain.idl
// generated code does not contain a copyright notice

#ifndef PARAM_INTERFACES__SRV__DETAIL__SET_CONTROLLER_GAIN__BUILDER_HPP_
#define PARAM_INTERFACES__SRV__DETAIL__SET_CONTROLLER_GAIN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "param_interfaces/srv/detail/set_controller_gain__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace param_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetControllerGain_Request_kp_theta
{
public:
  explicit Init_SetControllerGain_Request_kp_theta(::param_interfaces::srv::SetControllerGain_Request & msg)
  : msg_(msg)
  {}
  ::param_interfaces::srv::SetControllerGain_Request kp_theta(::param_interfaces::srv::SetControllerGain_Request::_kp_theta_type arg)
  {
    msg_.kp_theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::param_interfaces::srv::SetControllerGain_Request msg_;
};

class Init_SetControllerGain_Request_kp_d
{
public:
  Init_SetControllerGain_Request_kp_d()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetControllerGain_Request_kp_theta kp_d(::param_interfaces::srv::SetControllerGain_Request::_kp_d_type arg)
  {
    msg_.kp_d = std::move(arg);
    return Init_SetControllerGain_Request_kp_theta(msg_);
  }

private:
  ::param_interfaces::srv::SetControllerGain_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::param_interfaces::srv::SetControllerGain_Request>()
{
  return param_interfaces::srv::builder::Init_SetControllerGain_Request_kp_d();
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
auto build<::param_interfaces::srv::SetControllerGain_Response>()
{
  return ::param_interfaces::srv::SetControllerGain_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace param_interfaces

#endif  // PARAM_INTERFACES__SRV__DETAIL__SET_CONTROLLER_GAIN__BUILDER_HPP_
