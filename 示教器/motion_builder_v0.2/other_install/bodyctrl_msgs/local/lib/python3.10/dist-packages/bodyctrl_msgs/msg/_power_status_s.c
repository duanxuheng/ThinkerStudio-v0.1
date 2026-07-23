// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from bodyctrl_msgs:msg/PowerStatus.idl
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
#include "bodyctrl_msgs/msg/detail/power_status__struct.h"
#include "bodyctrl_msgs/msg/detail/power_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool bodyctrl_msgs__msg__power_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("bodyctrl_msgs.msg._power_status.PowerStatus", full_classname_dest, 43) == 0);
  }
  bodyctrl_msgs__msg__PowerStatus * ros_message = _ros_message;
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
  {  // waist_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "waist_temp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->waist_temp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // arm_a_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm_a_temp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->arm_a_temp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // arm_b_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm_b_temp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->arm_b_temp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leg_a_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "leg_a_temp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leg_a_temp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leg_b_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "leg_b_temp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leg_b_temp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // waist_temp_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "waist_temp_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->waist_temp_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // arm_a_temp_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm_a_temp_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->arm_a_temp_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // arm_b_temp_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm_b_temp_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->arm_b_temp_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leg_a_temp_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "leg_a_temp_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leg_a_temp_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leg_b_temp_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "leg_b_temp_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leg_b_temp_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // waist_temp_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "waist_temp_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->waist_temp_min = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // arm_a_temp_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm_a_temp_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->arm_a_temp_min = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // arm_b_temp_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm_b_temp_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->arm_b_temp_min = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leg_a_temp_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "leg_a_temp_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leg_a_temp_min = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leg_b_temp_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "leg_b_temp_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leg_b_temp_min = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // arm_a_curr
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm_a_curr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->arm_a_curr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // arm_b_curr
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm_b_curr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->arm_b_curr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leg_a_curr
    PyObject * field = PyObject_GetAttrString(_pymsg, "leg_a_curr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leg_a_curr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leg_b_curr
    PyObject * field = PyObject_GetAttrString(_pymsg, "leg_b_curr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leg_b_curr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // waist_curr
    PyObject * field = PyObject_GetAttrString(_pymsg, "waist_curr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->waist_curr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // head_curr
    PyObject * field = PyObject_GetAttrString(_pymsg, "head_curr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->head_curr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // arm_a_curr_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm_a_curr_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->arm_a_curr_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // arm_b_curr_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm_b_curr_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->arm_b_curr_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leg_a_curr_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "leg_a_curr_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leg_a_curr_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leg_b_curr_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "leg_b_curr_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leg_b_curr_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // waist_curr_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "waist_curr_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->waist_curr_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // head_curr_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "head_curr_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->head_curr_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // arm_a_curr_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm_a_curr_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->arm_a_curr_min = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // arm_b_curr_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm_b_curr_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->arm_b_curr_min = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leg_a_curr_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "leg_a_curr_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leg_a_curr_min = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leg_b_curr_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "leg_b_curr_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leg_b_curr_min = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // waist_curr_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "waist_curr_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->waist_curr_min = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // head_curr_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "head_curr_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->head_curr_min = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // arm_a_volt
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm_a_volt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->arm_a_volt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // arm_b_volt
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm_b_volt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->arm_b_volt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leg_a_volt
    PyObject * field = PyObject_GetAttrString(_pymsg, "leg_a_volt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leg_a_volt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leg_b_volt
    PyObject * field = PyObject_GetAttrString(_pymsg, "leg_b_volt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leg_b_volt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // waist_volt
    PyObject * field = PyObject_GetAttrString(_pymsg, "waist_volt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->waist_volt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bus_volt
    PyObject * field = PyObject_GetAttrString(_pymsg, "bus_volt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bus_volt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // arm_a_volt_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm_a_volt_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->arm_a_volt_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // arm_b_volt_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm_b_volt_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->arm_b_volt_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leg_a_volt_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "leg_a_volt_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leg_a_volt_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leg_b_volt_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "leg_b_volt_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leg_b_volt_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // waist_volt_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "waist_volt_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->waist_volt_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bus_volt_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "bus_volt_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bus_volt_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // arm_a_volt_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm_a_volt_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->arm_a_volt_min = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // arm_b_volt_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm_b_volt_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->arm_b_volt_min = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leg_a_volt_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "leg_a_volt_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leg_a_volt_min = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leg_b_volt_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "leg_b_volt_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leg_b_volt_min = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // waist_volt_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "waist_volt_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->waist_volt_min = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bus_volt_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "bus_volt_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bus_volt_min = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // software_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "software_version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->software_version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // hardware_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "hardware_version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->hardware_version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // battery_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_power
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_power");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_power = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * bodyctrl_msgs__msg__power_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PowerStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("bodyctrl_msgs.msg._power_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PowerStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  bodyctrl_msgs__msg__PowerStatus * ros_message = (bodyctrl_msgs__msg__PowerStatus *)raw_ros_message;
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
  {  // waist_temp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->waist_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "waist_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm_a_temp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->arm_a_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm_a_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm_b_temp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->arm_b_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm_b_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leg_a_temp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leg_a_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leg_a_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leg_b_temp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leg_b_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leg_b_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // waist_temp_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->waist_temp_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "waist_temp_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm_a_temp_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->arm_a_temp_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm_a_temp_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm_b_temp_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->arm_b_temp_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm_b_temp_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leg_a_temp_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leg_a_temp_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leg_a_temp_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leg_b_temp_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leg_b_temp_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leg_b_temp_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // waist_temp_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->waist_temp_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "waist_temp_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm_a_temp_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->arm_a_temp_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm_a_temp_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm_b_temp_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->arm_b_temp_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm_b_temp_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leg_a_temp_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leg_a_temp_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leg_a_temp_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leg_b_temp_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leg_b_temp_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leg_b_temp_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm_a_curr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->arm_a_curr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm_a_curr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm_b_curr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->arm_b_curr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm_b_curr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leg_a_curr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leg_a_curr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leg_a_curr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leg_b_curr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leg_b_curr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leg_b_curr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // waist_curr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->waist_curr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "waist_curr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // head_curr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->head_curr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "head_curr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm_a_curr_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->arm_a_curr_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm_a_curr_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm_b_curr_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->arm_b_curr_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm_b_curr_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leg_a_curr_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leg_a_curr_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leg_a_curr_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leg_b_curr_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leg_b_curr_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leg_b_curr_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // waist_curr_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->waist_curr_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "waist_curr_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // head_curr_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->head_curr_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "head_curr_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm_a_curr_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->arm_a_curr_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm_a_curr_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm_b_curr_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->arm_b_curr_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm_b_curr_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leg_a_curr_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leg_a_curr_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leg_a_curr_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leg_b_curr_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leg_b_curr_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leg_b_curr_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // waist_curr_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->waist_curr_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "waist_curr_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // head_curr_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->head_curr_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "head_curr_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm_a_volt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->arm_a_volt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm_a_volt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm_b_volt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->arm_b_volt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm_b_volt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leg_a_volt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leg_a_volt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leg_a_volt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leg_b_volt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leg_b_volt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leg_b_volt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // waist_volt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->waist_volt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "waist_volt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bus_volt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bus_volt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bus_volt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm_a_volt_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->arm_a_volt_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm_a_volt_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm_b_volt_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->arm_b_volt_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm_b_volt_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leg_a_volt_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leg_a_volt_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leg_a_volt_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leg_b_volt_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leg_b_volt_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leg_b_volt_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // waist_volt_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->waist_volt_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "waist_volt_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bus_volt_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bus_volt_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bus_volt_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm_a_volt_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->arm_a_volt_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm_a_volt_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm_b_volt_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->arm_b_volt_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm_b_volt_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leg_a_volt_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leg_a_volt_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leg_a_volt_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leg_b_volt_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leg_b_volt_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leg_b_volt_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // waist_volt_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->waist_volt_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "waist_volt_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bus_volt_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bus_volt_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bus_volt_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // software_version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->software_version.data,
      strlen(ros_message->software_version.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "software_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hardware_version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->hardware_version.data,
      strlen(ros_message->hardware_version.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "hardware_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_power
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_power);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_power", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
