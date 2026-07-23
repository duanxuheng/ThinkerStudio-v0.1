// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from bodyctrl_msgs:msg/MotorStatusMsgPlate.idl
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
#include "bodyctrl_msgs/msg/detail/motor_status_msg_plate__struct.h"
#include "bodyctrl_msgs/msg/detail/motor_status_msg_plate__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool bodyctrl_msgs__msg__motor_status_msg_plate__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("bodyctrl_msgs.msg._motor_status_msg_plate.MotorStatusMsgPlate", full_classname_dest, 61) == 0);
  }
  bodyctrl_msgs__msg__MotorStatusMsgPlate * ros_message = _ros_message;
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
  {  // name1
    PyObject * field = PyObject_GetAttrString(_pymsg, "name1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->name1 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pos1
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed1
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current1
    PyObject * field = PyObject_GetAttrString(_pymsg, "current1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // name2
    PyObject * field = PyObject_GetAttrString(_pymsg, "name2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->name2 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pos2
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed2
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current2
    PyObject * field = PyObject_GetAttrString(_pymsg, "current2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // name3
    PyObject * field = PyObject_GetAttrString(_pymsg, "name3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->name3 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pos3
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed3
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current3
    PyObject * field = PyObject_GetAttrString(_pymsg, "current3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // name4
    PyObject * field = PyObject_GetAttrString(_pymsg, "name4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->name4 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pos4
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed4
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current4
    PyObject * field = PyObject_GetAttrString(_pymsg, "current4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // name5
    PyObject * field = PyObject_GetAttrString(_pymsg, "name5");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->name5 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pos5
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos5 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed5
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed5 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current5
    PyObject * field = PyObject_GetAttrString(_pymsg, "current5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current5 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // name6
    PyObject * field = PyObject_GetAttrString(_pymsg, "name6");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->name6 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pos6
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos6");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos6 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed6
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed6");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed6 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current6
    PyObject * field = PyObject_GetAttrString(_pymsg, "current6");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current6 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // name7
    PyObject * field = PyObject_GetAttrString(_pymsg, "name7");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->name7 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pos7
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos7");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos7 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed7
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed7");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed7 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current7
    PyObject * field = PyObject_GetAttrString(_pymsg, "current7");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current7 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // name8
    PyObject * field = PyObject_GetAttrString(_pymsg, "name8");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->name8 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pos8
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos8");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos8 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed8
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed8");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed8 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current8
    PyObject * field = PyObject_GetAttrString(_pymsg, "current8");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current8 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // name9
    PyObject * field = PyObject_GetAttrString(_pymsg, "name9");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->name9 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pos9
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos9");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos9 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed9
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed9");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed9 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current9
    PyObject * field = PyObject_GetAttrString(_pymsg, "current9");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current9 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // name10
    PyObject * field = PyObject_GetAttrString(_pymsg, "name10");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->name10 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pos10
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos10");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos10 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed10
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed10");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed10 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current10
    PyObject * field = PyObject_GetAttrString(_pymsg, "current10");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current10 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // name11
    PyObject * field = PyObject_GetAttrString(_pymsg, "name11");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->name11 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pos11
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos11");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos11 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed11
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed11");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed11 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current11
    PyObject * field = PyObject_GetAttrString(_pymsg, "current11");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current11 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // name12
    PyObject * field = PyObject_GetAttrString(_pymsg, "name12");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->name12 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pos12
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos12");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos12 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed12
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed12");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed12 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current12
    PyObject * field = PyObject_GetAttrString(_pymsg, "current12");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current12 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * bodyctrl_msgs__msg__motor_status_msg_plate__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotorStatusMsgPlate */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("bodyctrl_msgs.msg._motor_status_msg_plate");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotorStatusMsgPlate");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  bodyctrl_msgs__msg__MotorStatusMsgPlate * ros_message = (bodyctrl_msgs__msg__MotorStatusMsgPlate *)raw_ros_message;
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
  {  // name1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->name1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "name1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // name2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->name2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "name2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // name3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->name3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "name3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // name4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->name4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "name4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // name5
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->name5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "name5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // name6
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->name6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "name6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos6
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed6
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current6
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // name7
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->name7);
    {
      int rc = PyObject_SetAttrString(_pymessage, "name7", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos7
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos7);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos7", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed7
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed7);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed7", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current7
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current7);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current7", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // name8
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->name8);
    {
      int rc = PyObject_SetAttrString(_pymessage, "name8", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos8
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos8);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos8", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed8
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed8);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed8", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current8
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current8);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current8", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // name9
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->name9);
    {
      int rc = PyObject_SetAttrString(_pymessage, "name9", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos9
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos9);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos9", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed9
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed9);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed9", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current9
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current9);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current9", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // name10
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->name10);
    {
      int rc = PyObject_SetAttrString(_pymessage, "name10", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos10
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos10);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos10", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed10
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed10);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed10", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current10
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current10);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current10", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // name11
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->name11);
    {
      int rc = PyObject_SetAttrString(_pymessage, "name11", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos11
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos11);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos11", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed11
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed11);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed11", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current11
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current11);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current11", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // name12
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->name12);
    {
      int rc = PyObject_SetAttrString(_pymessage, "name12", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos12
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos12);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos12", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed12
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed12);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed12", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current12
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current12);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current12", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
