// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from amber_b1_interfaces:srv/Mode.idl
// generated code does not contain a copyright notice
#include "amber_b1_interfaces/srv/detail/mode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
amber_b1_interfaces__srv__Mode_Request__init(amber_b1_interfaces__srv__Mode_Request * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  // joint_no
  // zero_position
  // gripper_control
  // gripper_mode
  // gripper_force
  // restart
  // motor_state
  return true;
}

void
amber_b1_interfaces__srv__Mode_Request__fini(amber_b1_interfaces__srv__Mode_Request * msg)
{
  if (!msg) {
    return;
  }
  // mode
  // joint_no
  // zero_position
  // gripper_control
  // gripper_mode
  // gripper_force
  // restart
  // motor_state
}

bool
amber_b1_interfaces__srv__Mode_Request__are_equal(const amber_b1_interfaces__srv__Mode_Request * lhs, const amber_b1_interfaces__srv__Mode_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // joint_no
  if (lhs->joint_no != rhs->joint_no) {
    return false;
  }
  // zero_position
  if (lhs->zero_position != rhs->zero_position) {
    return false;
  }
  // gripper_control
  if (lhs->gripper_control != rhs->gripper_control) {
    return false;
  }
  // gripper_mode
  if (lhs->gripper_mode != rhs->gripper_mode) {
    return false;
  }
  // gripper_force
  if (lhs->gripper_force != rhs->gripper_force) {
    return false;
  }
  // restart
  if (lhs->restart != rhs->restart) {
    return false;
  }
  // motor_state
  if (lhs->motor_state != rhs->motor_state) {
    return false;
  }
  return true;
}

bool
amber_b1_interfaces__srv__Mode_Request__copy(
  const amber_b1_interfaces__srv__Mode_Request * input,
  amber_b1_interfaces__srv__Mode_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  output->mode = input->mode;
  // joint_no
  output->joint_no = input->joint_no;
  // zero_position
  output->zero_position = input->zero_position;
  // gripper_control
  output->gripper_control = input->gripper_control;
  // gripper_mode
  output->gripper_mode = input->gripper_mode;
  // gripper_force
  output->gripper_force = input->gripper_force;
  // restart
  output->restart = input->restart;
  // motor_state
  output->motor_state = input->motor_state;
  return true;
}

amber_b1_interfaces__srv__Mode_Request *
amber_b1_interfaces__srv__Mode_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amber_b1_interfaces__srv__Mode_Request * msg = (amber_b1_interfaces__srv__Mode_Request *)allocator.allocate(sizeof(amber_b1_interfaces__srv__Mode_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amber_b1_interfaces__srv__Mode_Request));
  bool success = amber_b1_interfaces__srv__Mode_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
amber_b1_interfaces__srv__Mode_Request__destroy(amber_b1_interfaces__srv__Mode_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    amber_b1_interfaces__srv__Mode_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
amber_b1_interfaces__srv__Mode_Request__Sequence__init(amber_b1_interfaces__srv__Mode_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amber_b1_interfaces__srv__Mode_Request * data = NULL;

  if (size) {
    data = (amber_b1_interfaces__srv__Mode_Request *)allocator.zero_allocate(size, sizeof(amber_b1_interfaces__srv__Mode_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = amber_b1_interfaces__srv__Mode_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        amber_b1_interfaces__srv__Mode_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
amber_b1_interfaces__srv__Mode_Request__Sequence__fini(amber_b1_interfaces__srv__Mode_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      amber_b1_interfaces__srv__Mode_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

amber_b1_interfaces__srv__Mode_Request__Sequence *
amber_b1_interfaces__srv__Mode_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amber_b1_interfaces__srv__Mode_Request__Sequence * array = (amber_b1_interfaces__srv__Mode_Request__Sequence *)allocator.allocate(sizeof(amber_b1_interfaces__srv__Mode_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = amber_b1_interfaces__srv__Mode_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
amber_b1_interfaces__srv__Mode_Request__Sequence__destroy(amber_b1_interfaces__srv__Mode_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    amber_b1_interfaces__srv__Mode_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
amber_b1_interfaces__srv__Mode_Request__Sequence__are_equal(const amber_b1_interfaces__srv__Mode_Request__Sequence * lhs, const amber_b1_interfaces__srv__Mode_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!amber_b1_interfaces__srv__Mode_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
amber_b1_interfaces__srv__Mode_Request__Sequence__copy(
  const amber_b1_interfaces__srv__Mode_Request__Sequence * input,
  amber_b1_interfaces__srv__Mode_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(amber_b1_interfaces__srv__Mode_Request);
    amber_b1_interfaces__srv__Mode_Request * data =
      (amber_b1_interfaces__srv__Mode_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amber_b1_interfaces__srv__Mode_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          amber_b1_interfaces__srv__Mode_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!amber_b1_interfaces__srv__Mode_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `motor_state`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
amber_b1_interfaces__srv__Mode_Response__init(amber_b1_interfaces__srv__Mode_Response * msg)
{
  if (!msg) {
    return false;
  }
  // ack
  // motor_state
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->motor_state, 0)) {
    amber_b1_interfaces__srv__Mode_Response__fini(msg);
    return false;
  }
  return true;
}

void
amber_b1_interfaces__srv__Mode_Response__fini(amber_b1_interfaces__srv__Mode_Response * msg)
{
  if (!msg) {
    return;
  }
  // ack
  // motor_state
  rosidl_runtime_c__uint8__Sequence__fini(&msg->motor_state);
}

bool
amber_b1_interfaces__srv__Mode_Response__are_equal(const amber_b1_interfaces__srv__Mode_Response * lhs, const amber_b1_interfaces__srv__Mode_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ack
  if (lhs->ack != rhs->ack) {
    return false;
  }
  // motor_state
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->motor_state), &(rhs->motor_state)))
  {
    return false;
  }
  return true;
}

bool
amber_b1_interfaces__srv__Mode_Response__copy(
  const amber_b1_interfaces__srv__Mode_Response * input,
  amber_b1_interfaces__srv__Mode_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // ack
  output->ack = input->ack;
  // motor_state
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->motor_state), &(output->motor_state)))
  {
    return false;
  }
  return true;
}

amber_b1_interfaces__srv__Mode_Response *
amber_b1_interfaces__srv__Mode_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amber_b1_interfaces__srv__Mode_Response * msg = (amber_b1_interfaces__srv__Mode_Response *)allocator.allocate(sizeof(amber_b1_interfaces__srv__Mode_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amber_b1_interfaces__srv__Mode_Response));
  bool success = amber_b1_interfaces__srv__Mode_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
amber_b1_interfaces__srv__Mode_Response__destroy(amber_b1_interfaces__srv__Mode_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    amber_b1_interfaces__srv__Mode_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
amber_b1_interfaces__srv__Mode_Response__Sequence__init(amber_b1_interfaces__srv__Mode_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amber_b1_interfaces__srv__Mode_Response * data = NULL;

  if (size) {
    data = (amber_b1_interfaces__srv__Mode_Response *)allocator.zero_allocate(size, sizeof(amber_b1_interfaces__srv__Mode_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = amber_b1_interfaces__srv__Mode_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        amber_b1_interfaces__srv__Mode_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
amber_b1_interfaces__srv__Mode_Response__Sequence__fini(amber_b1_interfaces__srv__Mode_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      amber_b1_interfaces__srv__Mode_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

amber_b1_interfaces__srv__Mode_Response__Sequence *
amber_b1_interfaces__srv__Mode_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amber_b1_interfaces__srv__Mode_Response__Sequence * array = (amber_b1_interfaces__srv__Mode_Response__Sequence *)allocator.allocate(sizeof(amber_b1_interfaces__srv__Mode_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = amber_b1_interfaces__srv__Mode_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
amber_b1_interfaces__srv__Mode_Response__Sequence__destroy(amber_b1_interfaces__srv__Mode_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    amber_b1_interfaces__srv__Mode_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
amber_b1_interfaces__srv__Mode_Response__Sequence__are_equal(const amber_b1_interfaces__srv__Mode_Response__Sequence * lhs, const amber_b1_interfaces__srv__Mode_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!amber_b1_interfaces__srv__Mode_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
amber_b1_interfaces__srv__Mode_Response__Sequence__copy(
  const amber_b1_interfaces__srv__Mode_Response__Sequence * input,
  amber_b1_interfaces__srv__Mode_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(amber_b1_interfaces__srv__Mode_Response);
    amber_b1_interfaces__srv__Mode_Response * data =
      (amber_b1_interfaces__srv__Mode_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amber_b1_interfaces__srv__Mode_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          amber_b1_interfaces__srv__Mode_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!amber_b1_interfaces__srv__Mode_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
