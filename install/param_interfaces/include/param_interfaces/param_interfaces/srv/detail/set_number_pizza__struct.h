// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from param_interfaces:srv/SetNumberPizza.idl
// generated code does not contain a copyright notice

#ifndef PARAM_INTERFACES__SRV__DETAIL__SET_NUMBER_PIZZA__STRUCT_H_
#define PARAM_INTERFACES__SRV__DETAIL__SET_NUMBER_PIZZA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetNumberPizza in the package param_interfaces.
typedef struct param_interfaces__srv__SetNumberPizza_Request
{
  int64_t num_usable_pizza;
} param_interfaces__srv__SetNumberPizza_Request;

// Struct for a sequence of param_interfaces__srv__SetNumberPizza_Request.
typedef struct param_interfaces__srv__SetNumberPizza_Request__Sequence
{
  param_interfaces__srv__SetNumberPizza_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} param_interfaces__srv__SetNumberPizza_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetNumberPizza in the package param_interfaces.
typedef struct param_interfaces__srv__SetNumberPizza_Response
{
  uint8_t structure_needs_at_least_one_member;
} param_interfaces__srv__SetNumberPizza_Response;

// Struct for a sequence of param_interfaces__srv__SetNumberPizza_Response.
typedef struct param_interfaces__srv__SetNumberPizza_Response__Sequence
{
  param_interfaces__srv__SetNumberPizza_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} param_interfaces__srv__SetNumberPizza_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PARAM_INTERFACES__SRV__DETAIL__SET_NUMBER_PIZZA__STRUCT_H_
