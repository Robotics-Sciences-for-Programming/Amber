// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from amber_b1_interfaces:srv/Mode.idl
// generated code does not contain a copyright notice
#include "amber_b1_interfaces/srv/detail/mode__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "amber_b1_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "amber_b1_interfaces/srv/detail/mode__struct.h"
#include "amber_b1_interfaces/srv/detail/mode__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Mode_Request__ros_msg_type = amber_b1_interfaces__srv__Mode_Request;

static bool _Mode_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Mode_Request__ros_msg_type * ros_message = static_cast<const _Mode_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  // Field name: joint_no
  {
    cdr << ros_message->joint_no;
  }

  // Field name: zero_position
  {
    cdr << ros_message->zero_position;
  }

  // Field name: gripper_control
  {
    cdr << ros_message->gripper_control;
  }

  // Field name: gripper_mode
  {
    cdr << ros_message->gripper_mode;
  }

  // Field name: gripper_force
  {
    cdr << ros_message->gripper_force;
  }

  // Field name: restart
  {
    cdr << ros_message->restart;
  }

  // Field name: motor_state
  {
    cdr << ros_message->motor_state;
  }

  return true;
}

static bool _Mode_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Mode_Request__ros_msg_type * ros_message = static_cast<_Mode_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  // Field name: joint_no
  {
    cdr >> ros_message->joint_no;
  }

  // Field name: zero_position
  {
    cdr >> ros_message->zero_position;
  }

  // Field name: gripper_control
  {
    cdr >> ros_message->gripper_control;
  }

  // Field name: gripper_mode
  {
    cdr >> ros_message->gripper_mode;
  }

  // Field name: gripper_force
  {
    cdr >> ros_message->gripper_force;
  }

  // Field name: restart
  {
    cdr >> ros_message->restart;
  }

  // Field name: motor_state
  {
    cdr >> ros_message->motor_state;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amber_b1_interfaces
size_t get_serialized_size_amber_b1_interfaces__srv__Mode_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Mode_Request__ros_msg_type * ros_message = static_cast<const _Mode_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_no
  {
    size_t item_size = sizeof(ros_message->joint_no);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name zero_position
  {
    size_t item_size = sizeof(ros_message->zero_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gripper_control
  {
    size_t item_size = sizeof(ros_message->gripper_control);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gripper_mode
  {
    size_t item_size = sizeof(ros_message->gripper_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gripper_force
  {
    size_t item_size = sizeof(ros_message->gripper_force);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name restart
  {
    size_t item_size = sizeof(ros_message->restart);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_state
  {
    size_t item_size = sizeof(ros_message->motor_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Mode_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_amber_b1_interfaces__srv__Mode_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amber_b1_interfaces
size_t max_serialized_size_amber_b1_interfaces__srv__Mode_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint_no
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: zero_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gripper_control
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gripper_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gripper_force
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: restart
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motor_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Mode_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_amber_b1_interfaces__srv__Mode_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Mode_Request = {
  "amber_b1_interfaces::srv",
  "Mode_Request",
  _Mode_Request__cdr_serialize,
  _Mode_Request__cdr_deserialize,
  _Mode_Request__get_serialized_size,
  _Mode_Request__max_serialized_size
};

static rosidl_message_type_support_t _Mode_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Mode_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amber_b1_interfaces, srv, Mode_Request)() {
  return &_Mode_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "amber_b1_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "amber_b1_interfaces/srv/detail/mode__struct.h"
// already included above
// #include "amber_b1_interfaces/srv/detail/mode__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // motor_state
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // motor_state

// forward declare type support functions


using _Mode_Response__ros_msg_type = amber_b1_interfaces__srv__Mode_Response;

static bool _Mode_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Mode_Response__ros_msg_type * ros_message = static_cast<const _Mode_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ack
  {
    cdr << ros_message->ack;
  }

  // Field name: motor_state
  {
    size_t size = ros_message->motor_state.size;
    auto array_ptr = ros_message->motor_state.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Mode_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Mode_Response__ros_msg_type * ros_message = static_cast<_Mode_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ack
  {
    cdr >> ros_message->ack;
  }

  // Field name: motor_state
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->motor_state.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->motor_state);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->motor_state, size)) {
      return "failed to create array for field 'motor_state'";
    }
    auto array_ptr = ros_message->motor_state.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amber_b1_interfaces
size_t get_serialized_size_amber_b1_interfaces__srv__Mode_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Mode_Response__ros_msg_type * ros_message = static_cast<const _Mode_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ack
  {
    size_t item_size = sizeof(ros_message->ack);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_state
  {
    size_t array_size = ros_message->motor_state.size;
    auto array_ptr = ros_message->motor_state.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Mode_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_amber_b1_interfaces__srv__Mode_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amber_b1_interfaces
size_t max_serialized_size_amber_b1_interfaces__srv__Mode_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: ack
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: motor_state
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Mode_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_amber_b1_interfaces__srv__Mode_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Mode_Response = {
  "amber_b1_interfaces::srv",
  "Mode_Response",
  _Mode_Response__cdr_serialize,
  _Mode_Response__cdr_deserialize,
  _Mode_Response__get_serialized_size,
  _Mode_Response__max_serialized_size
};

static rosidl_message_type_support_t _Mode_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Mode_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amber_b1_interfaces, srv, Mode_Response)() {
  return &_Mode_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "amber_b1_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "amber_b1_interfaces/srv/mode.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Mode__callbacks = {
  "amber_b1_interfaces::srv",
  "Mode",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amber_b1_interfaces, srv, Mode_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amber_b1_interfaces, srv, Mode_Response)(),
};

static rosidl_service_type_support_t Mode__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Mode__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amber_b1_interfaces, srv, Mode)() {
  return &Mode__handle;
}

#if defined(__cplusplus)
}
#endif
