// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from param_interfaces:srv/SetControllerGain.idl
// generated code does not contain a copyright notice

#ifndef PARAM_INTERFACES__SRV__DETAIL__SET_CONTROLLER_GAIN__STRUCT_HPP_
#define PARAM_INTERFACES__SRV__DETAIL__SET_CONTROLLER_GAIN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__param_interfaces__srv__SetControllerGain_Request __attribute__((deprecated))
#else
# define DEPRECATED__param_interfaces__srv__SetControllerGain_Request __declspec(deprecated)
#endif

namespace param_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetControllerGain_Request_
{
  using Type = SetControllerGain_Request_<ContainerAllocator>;

  explicit SetControllerGain_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kp_d = 0.0;
      this->kp_theta = 0.0;
    }
  }

  explicit SetControllerGain_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kp_d = 0.0;
      this->kp_theta = 0.0;
    }
  }

  // field types and members
  using _kp_d_type =
    double;
  _kp_d_type kp_d;
  using _kp_theta_type =
    double;
  _kp_theta_type kp_theta;

  // setters for named parameter idiom
  Type & set__kp_d(
    const double & _arg)
  {
    this->kp_d = _arg;
    return *this;
  }
  Type & set__kp_theta(
    const double & _arg)
  {
    this->kp_theta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    param_interfaces::srv::SetControllerGain_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const param_interfaces::srv::SetControllerGain_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<param_interfaces::srv::SetControllerGain_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<param_interfaces::srv::SetControllerGain_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      param_interfaces::srv::SetControllerGain_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<param_interfaces::srv::SetControllerGain_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      param_interfaces::srv::SetControllerGain_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<param_interfaces::srv::SetControllerGain_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<param_interfaces::srv::SetControllerGain_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<param_interfaces::srv::SetControllerGain_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__param_interfaces__srv__SetControllerGain_Request
    std::shared_ptr<param_interfaces::srv::SetControllerGain_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__param_interfaces__srv__SetControllerGain_Request
    std::shared_ptr<param_interfaces::srv::SetControllerGain_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetControllerGain_Request_ & other) const
  {
    if (this->kp_d != other.kp_d) {
      return false;
    }
    if (this->kp_theta != other.kp_theta) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetControllerGain_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetControllerGain_Request_

// alias to use template instance with default allocator
using SetControllerGain_Request =
  param_interfaces::srv::SetControllerGain_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace param_interfaces


#ifndef _WIN32
# define DEPRECATED__param_interfaces__srv__SetControllerGain_Response __attribute__((deprecated))
#else
# define DEPRECATED__param_interfaces__srv__SetControllerGain_Response __declspec(deprecated)
#endif

namespace param_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetControllerGain_Response_
{
  using Type = SetControllerGain_Response_<ContainerAllocator>;

  explicit SetControllerGain_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SetControllerGain_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    param_interfaces::srv::SetControllerGain_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const param_interfaces::srv::SetControllerGain_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<param_interfaces::srv::SetControllerGain_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<param_interfaces::srv::SetControllerGain_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      param_interfaces::srv::SetControllerGain_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<param_interfaces::srv::SetControllerGain_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      param_interfaces::srv::SetControllerGain_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<param_interfaces::srv::SetControllerGain_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<param_interfaces::srv::SetControllerGain_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<param_interfaces::srv::SetControllerGain_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__param_interfaces__srv__SetControllerGain_Response
    std::shared_ptr<param_interfaces::srv::SetControllerGain_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__param_interfaces__srv__SetControllerGain_Response
    std::shared_ptr<param_interfaces::srv::SetControllerGain_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetControllerGain_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetControllerGain_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetControllerGain_Response_

// alias to use template instance with default allocator
using SetControllerGain_Response =
  param_interfaces::srv::SetControllerGain_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace param_interfaces

namespace param_interfaces
{

namespace srv
{

struct SetControllerGain
{
  using Request = param_interfaces::srv::SetControllerGain_Request;
  using Response = param_interfaces::srv::SetControllerGain_Response;
};

}  // namespace srv

}  // namespace param_interfaces

#endif  // PARAM_INTERFACES__SRV__DETAIL__SET_CONTROLLER_GAIN__STRUCT_HPP_
