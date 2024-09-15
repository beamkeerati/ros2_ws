// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from param_interfaces:srv/SetControllerGain.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "param_interfaces/srv/detail/set_controller_gain__rosidl_typesupport_introspection_c.h"
#include "param_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "param_interfaces/srv/detail/set_controller_gain__functions.h"
#include "param_interfaces/srv/detail/set_controller_gain__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void param_interfaces__srv__SetControllerGain_Request__rosidl_typesupport_introspection_c__SetControllerGain_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  param_interfaces__srv__SetControllerGain_Request__init(message_memory);
}

void param_interfaces__srv__SetControllerGain_Request__rosidl_typesupport_introspection_c__SetControllerGain_Request_fini_function(void * message_memory)
{
  param_interfaces__srv__SetControllerGain_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember param_interfaces__srv__SetControllerGain_Request__rosidl_typesupport_introspection_c__SetControllerGain_Request_message_member_array[2] = {
  {
    "kp_d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(param_interfaces__srv__SetControllerGain_Request, kp_d),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kp_theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(param_interfaces__srv__SetControllerGain_Request, kp_theta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers param_interfaces__srv__SetControllerGain_Request__rosidl_typesupport_introspection_c__SetControllerGain_Request_message_members = {
  "param_interfaces__srv",  // message namespace
  "SetControllerGain_Request",  // message name
  2,  // number of fields
  sizeof(param_interfaces__srv__SetControllerGain_Request),
  param_interfaces__srv__SetControllerGain_Request__rosidl_typesupport_introspection_c__SetControllerGain_Request_message_member_array,  // message members
  param_interfaces__srv__SetControllerGain_Request__rosidl_typesupport_introspection_c__SetControllerGain_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  param_interfaces__srv__SetControllerGain_Request__rosidl_typesupport_introspection_c__SetControllerGain_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t param_interfaces__srv__SetControllerGain_Request__rosidl_typesupport_introspection_c__SetControllerGain_Request_message_type_support_handle = {
  0,
  &param_interfaces__srv__SetControllerGain_Request__rosidl_typesupport_introspection_c__SetControllerGain_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_param_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, param_interfaces, srv, SetControllerGain_Request)() {
  if (!param_interfaces__srv__SetControllerGain_Request__rosidl_typesupport_introspection_c__SetControllerGain_Request_message_type_support_handle.typesupport_identifier) {
    param_interfaces__srv__SetControllerGain_Request__rosidl_typesupport_introspection_c__SetControllerGain_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &param_interfaces__srv__SetControllerGain_Request__rosidl_typesupport_introspection_c__SetControllerGain_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "param_interfaces/srv/detail/set_controller_gain__rosidl_typesupport_introspection_c.h"
// already included above
// #include "param_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "param_interfaces/srv/detail/set_controller_gain__functions.h"
// already included above
// #include "param_interfaces/srv/detail/set_controller_gain__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void param_interfaces__srv__SetControllerGain_Response__rosidl_typesupport_introspection_c__SetControllerGain_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  param_interfaces__srv__SetControllerGain_Response__init(message_memory);
}

void param_interfaces__srv__SetControllerGain_Response__rosidl_typesupport_introspection_c__SetControllerGain_Response_fini_function(void * message_memory)
{
  param_interfaces__srv__SetControllerGain_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember param_interfaces__srv__SetControllerGain_Response__rosidl_typesupport_introspection_c__SetControllerGain_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(param_interfaces__srv__SetControllerGain_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers param_interfaces__srv__SetControllerGain_Response__rosidl_typesupport_introspection_c__SetControllerGain_Response_message_members = {
  "param_interfaces__srv",  // message namespace
  "SetControllerGain_Response",  // message name
  1,  // number of fields
  sizeof(param_interfaces__srv__SetControllerGain_Response),
  param_interfaces__srv__SetControllerGain_Response__rosidl_typesupport_introspection_c__SetControllerGain_Response_message_member_array,  // message members
  param_interfaces__srv__SetControllerGain_Response__rosidl_typesupport_introspection_c__SetControllerGain_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  param_interfaces__srv__SetControllerGain_Response__rosidl_typesupport_introspection_c__SetControllerGain_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t param_interfaces__srv__SetControllerGain_Response__rosidl_typesupport_introspection_c__SetControllerGain_Response_message_type_support_handle = {
  0,
  &param_interfaces__srv__SetControllerGain_Response__rosidl_typesupport_introspection_c__SetControllerGain_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_param_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, param_interfaces, srv, SetControllerGain_Response)() {
  if (!param_interfaces__srv__SetControllerGain_Response__rosidl_typesupport_introspection_c__SetControllerGain_Response_message_type_support_handle.typesupport_identifier) {
    param_interfaces__srv__SetControllerGain_Response__rosidl_typesupport_introspection_c__SetControllerGain_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &param_interfaces__srv__SetControllerGain_Response__rosidl_typesupport_introspection_c__SetControllerGain_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "param_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "param_interfaces/srv/detail/set_controller_gain__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers param_interfaces__srv__detail__set_controller_gain__rosidl_typesupport_introspection_c__SetControllerGain_service_members = {
  "param_interfaces__srv",  // service namespace
  "SetControllerGain",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // param_interfaces__srv__detail__set_controller_gain__rosidl_typesupport_introspection_c__SetControllerGain_Request_message_type_support_handle,
  NULL  // response message
  // param_interfaces__srv__detail__set_controller_gain__rosidl_typesupport_introspection_c__SetControllerGain_Response_message_type_support_handle
};

static rosidl_service_type_support_t param_interfaces__srv__detail__set_controller_gain__rosidl_typesupport_introspection_c__SetControllerGain_service_type_support_handle = {
  0,
  &param_interfaces__srv__detail__set_controller_gain__rosidl_typesupport_introspection_c__SetControllerGain_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, param_interfaces, srv, SetControllerGain_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, param_interfaces, srv, SetControllerGain_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_param_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, param_interfaces, srv, SetControllerGain)() {
  if (!param_interfaces__srv__detail__set_controller_gain__rosidl_typesupport_introspection_c__SetControllerGain_service_type_support_handle.typesupport_identifier) {
    param_interfaces__srv__detail__set_controller_gain__rosidl_typesupport_introspection_c__SetControllerGain_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)param_interfaces__srv__detail__set_controller_gain__rosidl_typesupport_introspection_c__SetControllerGain_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, param_interfaces, srv, SetControllerGain_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, param_interfaces, srv, SetControllerGain_Response)()->data;
  }

  return &param_interfaces__srv__detail__set_controller_gain__rosidl_typesupport_introspection_c__SetControllerGain_service_type_support_handle;
}
