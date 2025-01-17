// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from amber_b1_interfaces:srv/Mode.idl
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
#include "amber_b1_interfaces/srv/detail/mode__struct.h"
#include "amber_b1_interfaces/srv/detail/mode__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool amber_b1_interfaces__srv__mode__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("amber_b1_interfaces.srv._mode.Mode_Request", full_classname_dest, 42) == 0);
  }
  amber_b1_interfaces__srv__Mode_Request * ros_message = _ros_message;
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // joint_no
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_no");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->joint_no = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // zero_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "zero_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->zero_position = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // gripper_control
    PyObject * field = PyObject_GetAttrString(_pymsg, "gripper_control");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gripper_control = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gripper_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "gripper_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gripper_mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gripper_force
    PyObject * field = PyObject_GetAttrString(_pymsg, "gripper_force");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gripper_force = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // restart
    PyObject * field = PyObject_GetAttrString(_pymsg, "restart");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->restart = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // motor_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor_state = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * amber_b1_interfaces__srv__mode__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Mode_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("amber_b1_interfaces.srv._mode");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Mode_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  amber_b1_interfaces__srv__Mode_Request * ros_message = (amber_b1_interfaces__srv__Mode_Request *)raw_ros_message;
  {  // mode
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_no
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->joint_no);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_no", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // zero_position
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->zero_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "zero_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gripper_control
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gripper_control);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gripper_control", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gripper_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gripper_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gripper_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gripper_force
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gripper_force);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gripper_force", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // restart
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->restart);
    {
      int rc = PyObject_SetAttrString(_pymessage, "restart", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_state
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motor_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_state", field);
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
// #include "amber_b1_interfaces/srv/detail/mode__struct.h"
// already included above
// #include "amber_b1_interfaces/srv/detail/mode__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool amber_b1_interfaces__srv__mode__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("amber_b1_interfaces.srv._mode.Mode_Response", full_classname_dest, 43) == 0);
  }
  amber_b1_interfaces__srv__Mode_Response * ros_message = _ros_message;
  {  // ack
    PyObject * field = PyObject_GetAttrString(_pymsg, "ack");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ack = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // motor_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_state");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(uint8_t);
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->motor_state), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->motor_state.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'motor_state'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->motor_state), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->motor_state.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        uint8_t tmp = (uint8_t)PyLong_AsUnsignedLong(item);

        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * amber_b1_interfaces__srv__mode__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Mode_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("amber_b1_interfaces.srv._mode");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Mode_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  amber_b1_interfaces__srv__Mode_Response * ros_message = (amber_b1_interfaces__srv__Mode_Response *)raw_ros_message;
  {  // ack
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->ack);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ack", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_state
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "motor_state");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(uint8_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->motor_state.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      uint8_t * src = &(ros_message->motor_state.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->motor_state.size * sizeof(uint8_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
