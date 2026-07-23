// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from bodyctrl_msgs:msg/SbusData.idl
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
#include "bodyctrl_msgs/msg/detail/sbus_data__struct.h"
#include "bodyctrl_msgs/msg/detail/sbus_data__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool bodyctrl_msgs__msg__sbus_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("bodyctrl_msgs.msg._sbus_data.SbusData", full_classname_dest, 37) == 0);
  }
  bodyctrl_msgs__msg__SbusData * ros_message = _ros_message;
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
  {  // key_event_new
    PyObject * field = PyObject_GetAttrString(_pymsg, "key_event_new");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->key_event_new = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // key_event_old
    PyObject * field = PyObject_GetAttrString(_pymsg, "key_event_old");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->key_event_old = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // button_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_a");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->button_a = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // button_b
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_b");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->button_b = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // button_c
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_c");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->button_c = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // button_d
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_d");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->button_d = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // button_e
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_e");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->button_e = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // button_f
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_f");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->button_f = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // button_g
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_g");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->button_g = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // button_h
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_h");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->button_h = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // x1
    PyObject * field = PyObject_GetAttrString(_pymsg, "x1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y1
    PyObject * field = PyObject_GetAttrString(_pymsg, "y1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x2
    PyObject * field = PyObject_GetAttrString(_pymsg, "x2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y2
    PyObject * field = PyObject_GetAttrString(_pymsg, "y2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * bodyctrl_msgs__msg__sbus_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SbusData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("bodyctrl_msgs.msg._sbus_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SbusData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  bodyctrl_msgs__msg__SbusData * ros_message = (bodyctrl_msgs__msg__SbusData *)raw_ros_message;
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
  {  // key_event_new
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->key_event_new);
    {
      int rc = PyObject_SetAttrString(_pymessage, "key_event_new", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // key_event_old
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->key_event_old);
    {
      int rc = PyObject_SetAttrString(_pymessage, "key_event_old", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_a
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->button_a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_b
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->button_b);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_c
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->button_c);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_c", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_d
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->button_d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_e
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->button_e);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_e", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_f
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->button_f);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_f", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_g
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->button_g);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_g", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_h
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->button_h);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_h", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
