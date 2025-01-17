// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from amber_b1_interfaces:srv/Mode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "amber_b1_interfaces/srv/detail/mode__rosidl_typesupport_introspection_c.h"
#include "amber_b1_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "amber_b1_interfaces/srv/detail/mode__functions.h"
#include "amber_b1_interfaces/srv/detail/mode__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Mode_Request__rosidl_typesupport_introspection_c__Mode_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  amber_b1_interfaces__srv__Mode_Request__init(message_memory);
}

void Mode_Request__rosidl_typesupport_introspection_c__Mode_Request_fini_function(void * message_memory)
{
  amber_b1_interfaces__srv__Mode_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Mode_Request__rosidl_typesupport_introspection_c__Mode_Request_message_member_array[8] = {
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amber_b1_interfaces__srv__Mode_Request, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_no",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amber_b1_interfaces__srv__Mode_Request, joint_no),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "zero_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amber_b1_interfaces__srv__Mode_Request, zero_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gripper_control",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amber_b1_interfaces__srv__Mode_Request, gripper_control),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gripper_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amber_b1_interfaces__srv__Mode_Request, gripper_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gripper_force",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amber_b1_interfaces__srv__Mode_Request, gripper_force),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "restart",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amber_b1_interfaces__srv__Mode_Request, restart),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amber_b1_interfaces__srv__Mode_Request, motor_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Mode_Request__rosidl_typesupport_introspection_c__Mode_Request_message_members = {
  "amber_b1_interfaces__srv",  // message namespace
  "Mode_Request",  // message name
  8,  // number of fields
  sizeof(amber_b1_interfaces__srv__Mode_Request),
  Mode_Request__rosidl_typesupport_introspection_c__Mode_Request_message_member_array,  // message members
  Mode_Request__rosidl_typesupport_introspection_c__Mode_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Mode_Request__rosidl_typesupport_introspection_c__Mode_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Mode_Request__rosidl_typesupport_introspection_c__Mode_Request_message_type_support_handle = {
  0,
  &Mode_Request__rosidl_typesupport_introspection_c__Mode_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_amber_b1_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amber_b1_interfaces, srv, Mode_Request)() {
  if (!Mode_Request__rosidl_typesupport_introspection_c__Mode_Request_message_type_support_handle.typesupport_identifier) {
    Mode_Request__rosidl_typesupport_introspection_c__Mode_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Mode_Request__rosidl_typesupport_introspection_c__Mode_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "amber_b1_interfaces/srv/detail/mode__rosidl_typesupport_introspection_c.h"
// already included above
// #include "amber_b1_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "amber_b1_interfaces/srv/detail/mode__functions.h"
// already included above
// #include "amber_b1_interfaces/srv/detail/mode__struct.h"


// Include directives for member types
// Member `motor_state`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Mode_Response__rosidl_typesupport_introspection_c__Mode_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  amber_b1_interfaces__srv__Mode_Response__init(message_memory);
}

void Mode_Response__rosidl_typesupport_introspection_c__Mode_Response_fini_function(void * message_memory)
{
  amber_b1_interfaces__srv__Mode_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Mode_Response__rosidl_typesupport_introspection_c__Mode_Response_message_member_array[2] = {
  {
    "ack",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amber_b1_interfaces__srv__Mode_Response, ack),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amber_b1_interfaces__srv__Mode_Response, motor_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Mode_Response__rosidl_typesupport_introspection_c__Mode_Response_message_members = {
  "amber_b1_interfaces__srv",  // message namespace
  "Mode_Response",  // message name
  2,  // number of fields
  sizeof(amber_b1_interfaces__srv__Mode_Response),
  Mode_Response__rosidl_typesupport_introspection_c__Mode_Response_message_member_array,  // message members
  Mode_Response__rosidl_typesupport_introspection_c__Mode_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Mode_Response__rosidl_typesupport_introspection_c__Mode_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Mode_Response__rosidl_typesupport_introspection_c__Mode_Response_message_type_support_handle = {
  0,
  &Mode_Response__rosidl_typesupport_introspection_c__Mode_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_amber_b1_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amber_b1_interfaces, srv, Mode_Response)() {
  if (!Mode_Response__rosidl_typesupport_introspection_c__Mode_Response_message_type_support_handle.typesupport_identifier) {
    Mode_Response__rosidl_typesupport_introspection_c__Mode_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Mode_Response__rosidl_typesupport_introspection_c__Mode_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "amber_b1_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "amber_b1_interfaces/srv/detail/mode__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers amber_b1_interfaces__srv__detail__mode__rosidl_typesupport_introspection_c__Mode_service_members = {
  "amber_b1_interfaces__srv",  // service namespace
  "Mode",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // amber_b1_interfaces__srv__detail__mode__rosidl_typesupport_introspection_c__Mode_Request_message_type_support_handle,
  NULL  // response message
  // amber_b1_interfaces__srv__detail__mode__rosidl_typesupport_introspection_c__Mode_Response_message_type_support_handle
};

static rosidl_service_type_support_t amber_b1_interfaces__srv__detail__mode__rosidl_typesupport_introspection_c__Mode_service_type_support_handle = {
  0,
  &amber_b1_interfaces__srv__detail__mode__rosidl_typesupport_introspection_c__Mode_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amber_b1_interfaces, srv, Mode_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amber_b1_interfaces, srv, Mode_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_amber_b1_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amber_b1_interfaces, srv, Mode)() {
  if (!amber_b1_interfaces__srv__detail__mode__rosidl_typesupport_introspection_c__Mode_service_type_support_handle.typesupport_identifier) {
    amber_b1_interfaces__srv__detail__mode__rosidl_typesupport_introspection_c__Mode_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)amber_b1_interfaces__srv__detail__mode__rosidl_typesupport_introspection_c__Mode_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amber_b1_interfaces, srv, Mode_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amber_b1_interfaces, srv, Mode_Response)()->data;
  }

  return &amber_b1_interfaces__srv__detail__mode__rosidl_typesupport_introspection_c__Mode_service_type_support_handle;
}
