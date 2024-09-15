// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from param_interfaces:srv/SetNumberPizza.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "param_interfaces/srv/detail/set_number_pizza__struct.h"
#include "param_interfaces/srv/detail/set_number_pizza__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool param_interfaces__srv__set_number_pizza__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("param_interfaces.srv._set_number_pizza.SetNumberPizza_Request", full_classname_dest, 61) == 0);
  }
  param_interfaces__srv__SetNumberPizza_Request * ros_message = _ros_message;
  {  // num_usable_pizza
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_usable_pizza");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_usable_pizza = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * param_interfaces__srv__set_number_pizza__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetNumberPizza_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("param_interfaces.srv._set_number_pizza");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetNumberPizza_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  param_interfaces__srv__SetNumberPizza_Request * ros_message = (param_interfaces__srv__SetNumberPizza_Request *)raw_ros_message;
  {  // num_usable_pizza
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->num_usable_pizza);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_usable_pizza", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "param_interfaces/srv/detail/set_number_pizza__struct.h"
// already included above
// #include "param_interfaces/srv/detail/set_number_pizza__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool param_interfaces__srv__set_number_pizza__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("param_interfaces.srv._set_number_pizza.SetNumberPizza_Response", full_classname_dest, 62) == 0);
  }
  param_interfaces__srv__SetNumberPizza_Response * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * param_interfaces__srv__set_number_pizza__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetNumberPizza_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("param_interfaces.srv._set_number_pizza");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetNumberPizza_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  (void)raw_ros_message;

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
