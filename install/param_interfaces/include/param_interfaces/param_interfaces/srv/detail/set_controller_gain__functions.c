// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from param_interfaces:srv/SetControllerGain.idl
// generated code does not contain a copyright notice
#include "param_interfaces/srv/detail/set_controller_gain__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
param_interfaces__srv__SetControllerGain_Request__init(param_interfaces__srv__SetControllerGain_Request * msg)
{
  if (!msg) {
    return false;
  }
  // kp_d
  // kp_theta
  return true;
}

void
param_interfaces__srv__SetControllerGain_Request__fini(param_interfaces__srv__SetControllerGain_Request * msg)
{
  if (!msg) {
    return;
  }
  // kp_d
  // kp_theta
}

bool
param_interfaces__srv__SetControllerGain_Request__are_equal(const param_interfaces__srv__SetControllerGain_Request * lhs, const param_interfaces__srv__SetControllerGain_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // kp_d
  if (lhs->kp_d != rhs->kp_d) {
    return false;
  }
  // kp_theta
  if (lhs->kp_theta != rhs->kp_theta) {
    return false;
  }
  return true;
}

bool
param_interfaces__srv__SetControllerGain_Request__copy(
  const param_interfaces__srv__SetControllerGain_Request * input,
  param_interfaces__srv__SetControllerGain_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // kp_d
  output->kp_d = input->kp_d;
  // kp_theta
  output->kp_theta = input->kp_theta;
  return true;
}

param_interfaces__srv__SetControllerGain_Request *
param_interfaces__srv__SetControllerGain_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  param_interfaces__srv__SetControllerGain_Request * msg = (param_interfaces__srv__SetControllerGain_Request *)allocator.allocate(sizeof(param_interfaces__srv__SetControllerGain_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(param_interfaces__srv__SetControllerGain_Request));
  bool success = param_interfaces__srv__SetControllerGain_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
param_interfaces__srv__SetControllerGain_Request__destroy(param_interfaces__srv__SetControllerGain_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    param_interfaces__srv__SetControllerGain_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
param_interfaces__srv__SetControllerGain_Request__Sequence__init(param_interfaces__srv__SetControllerGain_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  param_interfaces__srv__SetControllerGain_Request * data = NULL;

  if (size) {
    data = (param_interfaces__srv__SetControllerGain_Request *)allocator.zero_allocate(size, sizeof(param_interfaces__srv__SetControllerGain_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = param_interfaces__srv__SetControllerGain_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        param_interfaces__srv__SetControllerGain_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
param_interfaces__srv__SetControllerGain_Request__Sequence__fini(param_interfaces__srv__SetControllerGain_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      param_interfaces__srv__SetControllerGain_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

param_interfaces__srv__SetControllerGain_Request__Sequence *
param_interfaces__srv__SetControllerGain_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  param_interfaces__srv__SetControllerGain_Request__Sequence * array = (param_interfaces__srv__SetControllerGain_Request__Sequence *)allocator.allocate(sizeof(param_interfaces__srv__SetControllerGain_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = param_interfaces__srv__SetControllerGain_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
param_interfaces__srv__SetControllerGain_Request__Sequence__destroy(param_interfaces__srv__SetControllerGain_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    param_interfaces__srv__SetControllerGain_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
param_interfaces__srv__SetControllerGain_Request__Sequence__are_equal(const param_interfaces__srv__SetControllerGain_Request__Sequence * lhs, const param_interfaces__srv__SetControllerGain_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!param_interfaces__srv__SetControllerGain_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
param_interfaces__srv__SetControllerGain_Request__Sequence__copy(
  const param_interfaces__srv__SetControllerGain_Request__Sequence * input,
  param_interfaces__srv__SetControllerGain_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(param_interfaces__srv__SetControllerGain_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    param_interfaces__srv__SetControllerGain_Request * data =
      (param_interfaces__srv__SetControllerGain_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!param_interfaces__srv__SetControllerGain_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          param_interfaces__srv__SetControllerGain_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!param_interfaces__srv__SetControllerGain_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
param_interfaces__srv__SetControllerGain_Response__init(param_interfaces__srv__SetControllerGain_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
param_interfaces__srv__SetControllerGain_Response__fini(param_interfaces__srv__SetControllerGain_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
param_interfaces__srv__SetControllerGain_Response__are_equal(const param_interfaces__srv__SetControllerGain_Response * lhs, const param_interfaces__srv__SetControllerGain_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
param_interfaces__srv__SetControllerGain_Response__copy(
  const param_interfaces__srv__SetControllerGain_Response * input,
  param_interfaces__srv__SetControllerGain_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

param_interfaces__srv__SetControllerGain_Response *
param_interfaces__srv__SetControllerGain_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  param_interfaces__srv__SetControllerGain_Response * msg = (param_interfaces__srv__SetControllerGain_Response *)allocator.allocate(sizeof(param_interfaces__srv__SetControllerGain_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(param_interfaces__srv__SetControllerGain_Response));
  bool success = param_interfaces__srv__SetControllerGain_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
param_interfaces__srv__SetControllerGain_Response__destroy(param_interfaces__srv__SetControllerGain_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    param_interfaces__srv__SetControllerGain_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
param_interfaces__srv__SetControllerGain_Response__Sequence__init(param_interfaces__srv__SetControllerGain_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  param_interfaces__srv__SetControllerGain_Response * data = NULL;

  if (size) {
    data = (param_interfaces__srv__SetControllerGain_Response *)allocator.zero_allocate(size, sizeof(param_interfaces__srv__SetControllerGain_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = param_interfaces__srv__SetControllerGain_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        param_interfaces__srv__SetControllerGain_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
param_interfaces__srv__SetControllerGain_Response__Sequence__fini(param_interfaces__srv__SetControllerGain_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      param_interfaces__srv__SetControllerGain_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

param_interfaces__srv__SetControllerGain_Response__Sequence *
param_interfaces__srv__SetControllerGain_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  param_interfaces__srv__SetControllerGain_Response__Sequence * array = (param_interfaces__srv__SetControllerGain_Response__Sequence *)allocator.allocate(sizeof(param_interfaces__srv__SetControllerGain_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = param_interfaces__srv__SetControllerGain_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
param_interfaces__srv__SetControllerGain_Response__Sequence__destroy(param_interfaces__srv__SetControllerGain_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    param_interfaces__srv__SetControllerGain_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
param_interfaces__srv__SetControllerGain_Response__Sequence__are_equal(const param_interfaces__srv__SetControllerGain_Response__Sequence * lhs, const param_interfaces__srv__SetControllerGain_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!param_interfaces__srv__SetControllerGain_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
param_interfaces__srv__SetControllerGain_Response__Sequence__copy(
  const param_interfaces__srv__SetControllerGain_Response__Sequence * input,
  param_interfaces__srv__SetControllerGain_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(param_interfaces__srv__SetControllerGain_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    param_interfaces__srv__SetControllerGain_Response * data =
      (param_interfaces__srv__SetControllerGain_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!param_interfaces__srv__SetControllerGain_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          param_interfaces__srv__SetControllerGain_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!param_interfaces__srv__SetControllerGain_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
