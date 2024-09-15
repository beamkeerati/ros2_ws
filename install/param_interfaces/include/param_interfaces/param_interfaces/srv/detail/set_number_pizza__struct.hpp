// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from param_interfaces:srv/SetNumberPizza.idl
// generated code does not contain a copyright notice

#ifndef PARAM_INTERFACES__SRV__DETAIL__SET_NUMBER_PIZZA__STRUCT_HPP_
#define PARAM_INTERFACES__SRV__DETAIL__SET_NUMBER_PIZZA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__param_interfaces__srv__SetNumberPizza_Request __attribute__((deprecated))
#else
# define DEPRECATED__param_interfaces__srv__SetNumberPizza_Request __declspec(deprecated)
#endif

namespace param_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetNumberPizza_Request_
{
  using Type = SetNumberPizza_Request_<ContainerAllocator>;

  explicit SetNumberPizza_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_usable_pizza = 0ll;
    }
  }

  explicit SetNumberPizza_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_usable_pizza = 0ll;
    }
  }

  // field types and members
  using _num_usable_pizza_type =
    int64_t;
  _num_usable_pizza_type num_usable_pizza;

  // setters for named parameter idiom
  Type & set__num_usable_pizza(
    const int64_t & _arg)
  {
    this->num_usable_pizza = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    param_interfaces::srv::SetNumberPizza_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const param_interfaces::srv::SetNumberPizza_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<param_interfaces::srv::SetNumberPizza_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<param_interfaces::srv::SetNumberPizza_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      param_interfaces::srv::SetNumberPizza_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<param_interfaces::srv::SetNumberPizza_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      param_interfaces::srv::SetNumberPizza_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<param_interfaces::srv::SetNumberPizza_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<param_interfaces::srv::SetNumberPizza_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<param_interfaces::srv::SetNumberPizza_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__param_interfaces__srv__SetNumberPizza_Request
    std::shared_ptr<param_interfaces::srv::SetNumberPizza_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__param_interfaces__srv__SetNumberPizza_Request
    std::shared_ptr<param_interfaces::srv::SetNumberPizza_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetNumberPizza_Request_ & other) const
  {
    if (this->num_usable_pizza != other.num_usable_pizza) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetNumberPizza_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetNumberPizza_Request_

// alias to use template instance with default allocator
using SetNumberPizza_Request =
  param_interfaces::srv::SetNumberPizza_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace param_interfaces


#ifndef _WIN32
# define DEPRECATED__param_interfaces__srv__SetNumberPizza_Response __attribute__((deprecated))
#else
# define DEPRECATED__param_interfaces__srv__SetNumberPizza_Response __declspec(deprecated)
#endif

namespace param_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetNumberPizza_Response_
{
  using Type = SetNumberPizza_Response_<ContainerAllocator>;

  explicit SetNumberPizza_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SetNumberPizza_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    param_interfaces::srv::SetNumberPizza_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const param_interfaces::srv::SetNumberPizza_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<param_interfaces::srv::SetNumberPizza_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<param_interfaces::srv::SetNumberPizza_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      param_interfaces::srv::SetNumberPizza_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<param_interfaces::srv::SetNumberPizza_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      param_interfaces::srv::SetNumberPizza_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<param_interfaces::srv::SetNumberPizza_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<param_interfaces::srv::SetNumberPizza_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<param_interfaces::srv::SetNumberPizza_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__param_interfaces__srv__SetNumberPizza_Response
    std::shared_ptr<param_interfaces::srv::SetNumberPizza_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__param_interfaces__srv__SetNumberPizza_Response
    std::shared_ptr<param_interfaces::srv::SetNumberPizza_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetNumberPizza_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetNumberPizza_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetNumberPizza_Response_

// alias to use template instance with default allocator
using SetNumberPizza_Response =
  param_interfaces::srv::SetNumberPizza_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace param_interfaces

namespace param_interfaces
{

namespace srv
{

struct SetNumberPizza
{
  using Request = param_interfaces::srv::SetNumberPizza_Request;
  using Response = param_interfaces::srv::SetNumberPizza_Response;
};

}  // namespace srv

}  // namespace param_interfaces

#endif  // PARAM_INTERFACES__SRV__DETAIL__SET_NUMBER_PIZZA__STRUCT_HPP_
