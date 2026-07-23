// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from bodyctrl_msgs:srv/PlanEefRelLine.idl
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
#include "bodyctrl_msgs/srv/detail/plan_eef_rel_line__struct.h"
#include "bodyctrl_msgs/srv/detail/plan_eef_rel_line__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool bodyctrl_msgs__srv__plan_eef_rel_line__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("bodyctrl_msgs.srv._plan_eef_rel_line.PlanEefRelLine_Request", full_classname_dest, 59) == 0);
  }
  bodyctrl_msgs__srv__PlanEefRelLine_Request * ros_message = _ros_message;
  {  // arm_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->arm_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // dx
    PyObject * field = PyObject_GetAttrString(_pymsg, "dx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dx = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dy
    PyObject * field = PyObject_GetAttrString(_pymsg, "dy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dy = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dz
    PyObject * field = PyObject_GetAttrString(_pymsg, "dz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dz = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel_percent
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_percent");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_percent = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_percent
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_percent");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_percent = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * bodyctrl_msgs__srv__plan_eef_rel_line__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PlanEefRelLine_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("bodyctrl_msgs.srv._plan_eef_rel_line");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PlanEefRelLine_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  bodyctrl_msgs__srv__PlanEefRelLine_Request * ros_message = (bodyctrl_msgs__srv__PlanEefRelLine_Request *)raw_ros_message;
  {  // arm_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->arm_name.data,
      strlen(ros_message->arm_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_percent
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_percent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_percent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_percent
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_percent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_percent", field);
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
// #include "bodyctrl_msgs/srv/detail/plan_eef_rel_line__struct.h"
// already included above
// #include "bodyctrl_msgs/srv/detail/plan_eef_rel_line__functions.h"

// already included above
// #include "rosidl_runtime_c/string.h"
// already included above
// #include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool bodyctrl_msgs__srv__plan_eef_rel_line__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("bodyctrl_msgs.srv._plan_eef_rel_line.PlanEefRelLine_Response", full_classname_dest, 60) == 0);
  }
  bodyctrl_msgs__srv__PlanEefRelLine_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }
  {  // message
    PyObject * field = PyObject_GetAttrString(_pymsg, "message");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * bodyctrl_msgs__srv__plan_eef_rel_line__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PlanEefRelLine_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("bodyctrl_msgs.srv._plan_eef_rel_line");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PlanEefRelLine_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  bodyctrl_msgs__srv__PlanEefRelLine_Response * ros_message = (bodyctrl_msgs__srv__PlanEefRelLine_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message.data,
      strlen(ros_message->message.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
