// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from bodyctrl_msgs:msg/PowerBatteryStatus.idl
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
#include "bodyctrl_msgs/msg/detail/power_battery_status__struct.h"
#include "bodyctrl_msgs/msg/detail/power_battery_status__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool bodyctrl_msgs__msg__power_battery_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("bodyctrl_msgs.msg._power_battery_status.PowerBatteryStatus", full_classname_dest, 58) == 0);
  }
  bodyctrl_msgs__msg__PowerBatteryStatus * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // battery_installed
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_installed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->battery_installed = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // battery_working
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_working");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->battery_working = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // master_battery_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "master_battery_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->master_battery_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // master_battery_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "master_battery_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->master_battery_current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // master_battery_power
    PyObject * field = PyObject_GetAttrString(_pymsg, "master_battery_power");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->master_battery_power = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // little_battery_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "little_battery_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->little_battery_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // little_battery_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "little_battery_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->little_battery_current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // little_battery_power
    PyObject * field = PyObject_GetAttrString(_pymsg, "little_battery_power");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->little_battery_power = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pg12a
    PyObject * field = PyObject_GetAttrString(_pymsg, "pg12a");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pg12a = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pg12b
    PyObject * field = PyObject_GetAttrString(_pymsg, "pg12b");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pg12b = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pg12c
    PyObject * field = PyObject_GetAttrString(_pymsg, "pg12c");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pg12c = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pg12d
    PyObject * field = PyObject_GetAttrString(_pymsg, "pg12d");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pg12d = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pg5cd
    PyObject * field = PyObject_GetAttrString(_pymsg, "pg5cd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pg5cd = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pg5ab
    PyObject * field = PyObject_GetAttrString(_pymsg, "pg5ab");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pg5ab = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pgrdc2
    PyObject * field = PyObject_GetAttrString(_pymsg, "pgrdc2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pgrdc2 = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pgrdc1
    PyObject * field = PyObject_GetAttrString(_pymsg, "pgrdc1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pgrdc1 = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pgheader
    PyObject * field = PyObject_GetAttrString(_pymsg, "pgheader");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pgheader = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pgbutton2
    PyObject * field = PyObject_GetAttrString(_pymsg, "pgbutton2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pgbutton2 = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * bodyctrl_msgs__msg__power_battery_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PowerBatteryStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("bodyctrl_msgs.msg._power_battery_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PowerBatteryStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  bodyctrl_msgs__msg__PowerBatteryStatus * ros_message = (bodyctrl_msgs__msg__PowerBatteryStatus *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_installed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->battery_installed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_installed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_working
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->battery_working);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_working", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // master_battery_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->master_battery_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "master_battery_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // master_battery_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->master_battery_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "master_battery_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // master_battery_power
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->master_battery_power);
    {
      int rc = PyObject_SetAttrString(_pymessage, "master_battery_power", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // little_battery_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->little_battery_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "little_battery_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // little_battery_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->little_battery_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "little_battery_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // little_battery_power
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->little_battery_power);
    {
      int rc = PyObject_SetAttrString(_pymessage, "little_battery_power", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pg12a
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pg12a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pg12a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pg12b
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pg12b);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pg12b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pg12c
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pg12c);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pg12c", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pg12d
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pg12d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pg12d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pg5cd
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pg5cd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pg5cd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pg5ab
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pg5ab);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pg5ab", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pgrdc2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pgrdc2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pgrdc2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pgrdc1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pgrdc1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pgrdc1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pgheader
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pgheader);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pgheader", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pgbutton2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pgbutton2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pgbutton2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
