// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amber_b1_interfaces:srv/Mode.idl
// generated code does not contain a copyright notice

#ifndef AMBER_B1_INTERFACES__SRV__DETAIL__MODE__STRUCT_H_
#define AMBER_B1_INTERFACES__SRV__DETAIL__MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Mode in the package amber_b1_interfaces.
typedef struct amber_b1_interfaces__srv__Mode_Request
{
  int64_t mode;
  int64_t joint_no;
  int64_t zero_position;
  int32_t gripper_control;
  int32_t gripper_mode;
  int32_t gripper_force;
  int32_t restart;
  int32_t motor_state;
} amber_b1_interfaces__srv__Mode_Request;

// Struct for a sequence of amber_b1_interfaces__srv__Mode_Request.
typedef struct amber_b1_interfaces__srv__Mode_Request__Sequence
{
  amber_b1_interfaces__srv__Mode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amber_b1_interfaces__srv__Mode_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'motor_state'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/Mode in the package amber_b1_interfaces.
typedef struct amber_b1_interfaces__srv__Mode_Response
{
  int64_t ack;
  rosidl_runtime_c__uint8__Sequence motor_state;
} amber_b1_interfaces__srv__Mode_Response;

// Struct for a sequence of amber_b1_interfaces__srv__Mode_Response.
typedef struct amber_b1_interfaces__srv__Mode_Response__Sequence
{
  amber_b1_interfaces__srv__Mode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amber_b1_interfaces__srv__Mode_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMBER_B1_INTERFACES__SRV__DETAIL__MODE__STRUCT_H_
