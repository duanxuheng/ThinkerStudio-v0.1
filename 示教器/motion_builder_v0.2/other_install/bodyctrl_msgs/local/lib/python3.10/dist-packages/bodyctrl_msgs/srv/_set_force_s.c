// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from bodyctrl_msgs:srv/SetForce.idl
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
#include "bodyctrl_msgs/srv/detail/set_force__struct.h"
#include "bodyctrl_msgs/srv/detail/set_force__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool bodyctrl_msgs__srv__set_force__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("bodyctrl_msgs.srv._set_force.SetForce_Request", full_classname_dest, 45) == 0);
  }
  bodyctrl_msgs__srv__SetForce_Request * ros_message = _ros_message;
  {  // force0_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "force0_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->force0_ratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // force1_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "force1_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->force1_ratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // force2_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "force2_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->force2_ratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // force3_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "force3_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->force3_ratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // force4_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "force4_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->force4_ratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // force5_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "force5_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->force5_ratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * bodyctrl_msgs__srv__set_force__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetForce_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("bodyctrl_msgs.srv._set_force");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetForce_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  bodyctrl_msgs__srv__SetForce_Request * ros_message = (bodyctrl_msgs__srv__SetForce_Request *)raw_ros_message;
  {  // force0_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->force0_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "force0_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // force1_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->force1_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "force1_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // force2_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->force2_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "force2_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // force3_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->force3_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "force3_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // force4_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->force4_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "force4_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // force5_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->force5_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "force5_ratio", field);
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
// #include "bodyctrl_msgs/srv/detail/set_force__struct.h"
// already included above
// #include "bodyctrl_msgs/srv/detail/set_force__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool bodyctrl_msgs__srv__set_force__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("bodyctrl_msgs.srv._set_force.SetForce_Response", full_classname_dest, 46) == 0);
  }
  bodyctrl_msgs__srv__SetForce_Response * ros_message = _ros_message;
  {  // force_accepted
    PyObject * field = PyObject_GetAttrString(_pymsg, "force_accepted");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->force_accepted = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * bodyctrl_msgs__srv__set_force__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetForce_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("bodyctrl_msgs.srv._set_force");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetForce_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  bodyctrl_msgs__srv__SetForce_Response * ros_message = (bodyctrl_msgs__srv__SetForce_Response *)raw_ros_message;
  {  // force_accepted
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->force_accepted ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "force_accepted", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
