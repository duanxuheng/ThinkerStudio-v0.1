// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from bodyctrl_msgs:srv/SetSpeed.idl
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
#include "bodyctrl_msgs/srv/detail/set_speed__struct.h"
#include "bodyctrl_msgs/srv/detail/set_speed__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool bodyctrl_msgs__srv__set_speed__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("bodyctrl_msgs.srv._set_speed.SetSpeed_Request", full_classname_dest, 45) == 0);
  }
  bodyctrl_msgs__srv__SetSpeed_Request * ros_message = _ros_message;
  {  // speed0_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed0_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed0_ratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed1_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed1_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed1_ratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed2_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed2_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed2_ratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed3_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed3_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed3_ratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed4_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed4_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed4_ratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed5_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed5_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed5_ratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * bodyctrl_msgs__srv__set_speed__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetSpeed_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("bodyctrl_msgs.srv._set_speed");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetSpeed_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  bodyctrl_msgs__srv__SetSpeed_Request * ros_message = (bodyctrl_msgs__srv__SetSpeed_Request *)raw_ros_message;
  {  // speed0_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed0_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed0_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed1_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed1_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed1_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed2_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed2_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed2_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed3_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed3_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed3_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed4_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed4_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed4_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed5_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed5_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed5_ratio", field);
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
// #include "bodyctrl_msgs/srv/detail/set_speed__struct.h"
// already included above
// #include "bodyctrl_msgs/srv/detail/set_speed__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool bodyctrl_msgs__srv__set_speed__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("bodyctrl_msgs.srv._set_speed.SetSpeed_Response", full_classname_dest, 46) == 0);
  }
  bodyctrl_msgs__srv__SetSpeed_Response * ros_message = _ros_message;
  {  // speed_accepted
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_accepted");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->speed_accepted = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * bodyctrl_msgs__srv__set_speed__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetSpeed_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("bodyctrl_msgs.srv._set_speed");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetSpeed_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  bodyctrl_msgs__srv__SetSpeed_Response * ros_message = (bodyctrl_msgs__srv__SetSpeed_Response *)raw_ros_message;
  {  // speed_accepted
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->speed_accepted ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_accepted", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
