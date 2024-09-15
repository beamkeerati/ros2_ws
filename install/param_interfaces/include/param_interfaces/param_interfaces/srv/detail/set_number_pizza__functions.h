// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from param_interfaces:srv/SetNumberPizza.idl
// generated code does not contain a copyright notice

#ifndef PARAM_INTERFACES__SRV__DETAIL__SET_NUMBER_PIZZA__FUNCTIONS_H_
#define PARAM_INTERFACES__SRV__DETAIL__SET_NUMBER_PIZZA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "param_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "param_interfaces/srv/detail/set_number_pizza__struct.h"

/// Initialize srv/SetNumberPizza message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * param_interfaces__srv__SetNumberPizza_Request
 * )) before or use
 * param_interfaces__srv__SetNumberPizza_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_param_interfaces
bool
param_interfaces__srv__SetNumberPizza_Request__init(param_interfaces__srv__SetNumberPizza_Request * msg);

/// Finalize srv/SetNumberPizza message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_param_interfaces
void
param_interfaces__srv__SetNumberPizza_Request__fini(param_interfaces__srv__SetNumberPizza_Request * msg);

/// Create srv/SetNumberPizza message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * param_interfaces__srv__SetNumberPizza_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_param_interfaces
param_interfaces__srv__SetNumberPizza_Request *
param_interfaces__srv__SetNumberPizza_Request__create();

/// Destroy srv/SetNumberPizza message.
/**
 * It calls
 * param_interfaces__srv__SetNumberPizza_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_param_interfaces
void
param_interfaces__srv__SetNumberPizza_Request__destroy(param_interfaces__srv__SetNumberPizza_Request * msg);

/// Check for srv/SetNumberPizza message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_param_interfaces
bool
param_interfaces__srv__SetNumberPizza_Request__are_equal(const param_interfaces__srv__SetNumberPizza_Request * lhs, const param_interfaces__srv__SetNumberPizza_Request * rhs);

/// Copy a srv/SetNumberPizza message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_param_interfaces
bool
param_interfaces__srv__SetNumberPizza_Request__copy(
  const param_interfaces__srv__SetNumberPizza_Request * input,
  param_interfaces__srv__SetNumberPizza_Request * output);

/// Initialize array of srv/SetNumberPizza messages.
/**
 * It allocates the memory for the number of elements and calls
 * param_interfaces__srv__SetNumberPizza_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_param_interfaces
bool
param_interfaces__srv__SetNumberPizza_Request__Sequence__init(param_interfaces__srv__SetNumberPizza_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetNumberPizza messages.
/**
 * It calls
 * param_interfaces__srv__SetNumberPizza_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_param_interfaces
void
param_interfaces__srv__SetNumberPizza_Request__Sequence__fini(param_interfaces__srv__SetNumberPizza_Request__Sequence * array);

/// Create array of srv/SetNumberPizza messages.
/**
 * It allocates the memory for the array and calls
 * param_interfaces__srv__SetNumberPizza_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_param_interfaces
param_interfaces__srv__SetNumberPizza_Request__Sequence *
param_interfaces__srv__SetNumberPizza_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetNumberPizza messages.
/**
 * It calls
 * param_interfaces__srv__SetNumberPizza_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_param_interfaces
void
param_interfaces__srv__SetNumberPizza_Request__Sequence__destroy(param_interfaces__srv__SetNumberPizza_Request__Sequence * array);

/// Check for srv/SetNumberPizza message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_param_interfaces
bool
param_interfaces__srv__SetNumberPizza_Request__Sequence__are_equal(const param_interfaces__srv__SetNumberPizza_Request__Sequence * lhs, const param_interfaces__srv__SetNumberPizza_Request__Sequence * rhs);

/// Copy an array of srv/SetNumberPizza messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_param_interfaces
bool
param_interfaces__srv__SetNumberPizza_Request__Sequence__copy(
  const param_interfaces__srv__SetNumberPizza_Request__Sequence * input,
  param_interfaces__srv__SetNumberPizza_Request__Sequence * output);

/// Initialize srv/SetNumberPizza message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * param_interfaces__srv__SetNumberPizza_Response
 * )) before or use
 * param_interfaces__srv__SetNumberPizza_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_param_interfaces
bool
param_interfaces__srv__SetNumberPizza_Response__init(param_interfaces__srv__SetNumberPizza_Response * msg);

/// Finalize srv/SetNumberPizza message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_param_interfaces
void
param_interfaces__srv__SetNumberPizza_Response__fini(param_interfaces__srv__SetNumberPizza_Response * msg);

/// Create srv/SetNumberPizza message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * param_interfaces__srv__SetNumberPizza_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_param_interfaces
param_interfaces__srv__SetNumberPizza_Response *
param_interfaces__srv__SetNumberPizza_Response__create();

/// Destroy srv/SetNumberPizza message.
/**
 * It calls
 * param_interfaces__srv__SetNumberPizza_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_param_interfaces
void
param_interfaces__srv__SetNumberPizza_Response__destroy(param_interfaces__srv__SetNumberPizza_Response * msg);

/// Check for srv/SetNumberPizza message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_param_interfaces
bool
param_interfaces__srv__SetNumberPizza_Response__are_equal(const param_interfaces__srv__SetNumberPizza_Response * lhs, const param_interfaces__srv__SetNumberPizza_Response * rhs);

/// Copy a srv/SetNumberPizza message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_param_interfaces
bool
param_interfaces__srv__SetNumberPizza_Response__copy(
  const param_interfaces__srv__SetNumberPizza_Response * input,
  param_interfaces__srv__SetNumberPizza_Response * output);

/// Initialize array of srv/SetNumberPizza messages.
/**
 * It allocates the memory for the number of elements and calls
 * param_interfaces__srv__SetNumberPizza_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_param_interfaces
bool
param_interfaces__srv__SetNumberPizza_Response__Sequence__init(param_interfaces__srv__SetNumberPizza_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetNumberPizza messages.
/**
 * It calls
 * param_interfaces__srv__SetNumberPizza_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_param_interfaces
void
param_interfaces__srv__SetNumberPizza_Response__Sequence__fini(param_interfaces__srv__SetNumberPizza_Response__Sequence * array);

/// Create array of srv/SetNumberPizza messages.
/**
 * It allocates the memory for the array and calls
 * param_interfaces__srv__SetNumberPizza_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_param_interfaces
param_interfaces__srv__SetNumberPizza_Response__Sequence *
param_interfaces__srv__SetNumberPizza_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetNumberPizza messages.
/**
 * It calls
 * param_interfaces__srv__SetNumberPizza_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_param_interfaces
void
param_interfaces__srv__SetNumberPizza_Response__Sequence__destroy(param_interfaces__srv__SetNumberPizza_Response__Sequence * array);

/// Check for srv/SetNumberPizza message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_param_interfaces
bool
param_interfaces__srv__SetNumberPizza_Response__Sequence__are_equal(const param_interfaces__srv__SetNumberPizza_Response__Sequence * lhs, const param_interfaces__srv__SetNumberPizza_Response__Sequence * rhs);

/// Copy an array of srv/SetNumberPizza messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_param_interfaces
bool
param_interfaces__srv__SetNumberPizza_Response__Sequence__copy(
  const param_interfaces__srv__SetNumberPizza_Response__Sequence * input,
  param_interfaces__srv__SetNumberPizza_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PARAM_INTERFACES__SRV__DETAIL__SET_NUMBER_PIZZA__FUNCTIONS_H_
