// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from amber_b1_interfaces:srv/Mode.idl
// generated code does not contain a copyright notice
#include "amber_b1_interfaces/srv/detail/mode__rosidl_typesupport_fastrtps_cpp.hpp"
#include "amber_b1_interfaces/srv/detail/mode__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace amber_b1_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amber_b1_interfaces
cdr_serialize(
  const amber_b1_interfaces::srv::Mode_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: mode
  cdr << ros_message.mode;
  // Member: joint_no
  cdr << ros_message.joint_no;
  // Member: zero_position
  cdr << ros_message.zero_position;
  // Member: gripper_control
  cdr << ros_message.gripper_control;
  // Member: gripper_mode
  cdr << ros_message.gripper_mode;
  // Member: gripper_force
  cdr << ros_message.gripper_force;
  // Member: restart
  cdr << ros_message.restart;
  // Member: motor_state
  cdr << ros_message.motor_state;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amber_b1_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  amber_b1_interfaces::srv::Mode_Request & ros_message)
{
  // Member: mode
  cdr >> ros_message.mode;

  // Member: joint_no
  cdr >> ros_message.joint_no;

  // Member: zero_position
  cdr >> ros_message.zero_position;

  // Member: gripper_control
  cdr >> ros_message.gripper_control;

  // Member: gripper_mode
  cdr >> ros_message.gripper_mode;

  // Member: gripper_force
  cdr >> ros_message.gripper_force;

  // Member: restart
  cdr >> ros_message.restart;

  // Member: motor_state
  cdr >> ros_message.motor_state;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amber_b1_interfaces
get_serialized_size(
  const amber_b1_interfaces::srv::Mode_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: mode
  {
    size_t item_size = sizeof(ros_message.mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_no
  {
    size_t item_size = sizeof(ros_message.joint_no);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: zero_position
  {
    size_t item_size = sizeof(ros_message.zero_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gripper_control
  {
    size_t item_size = sizeof(ros_message.gripper_control);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gripper_mode
  {
    size_t item_size = sizeof(ros_message.gripper_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gripper_force
  {
    size_t item_size = sizeof(ros_message.gripper_force);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: restart
  {
    size_t item_size = sizeof(ros_message.restart);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_state
  {
    size_t item_size = sizeof(ros_message.motor_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amber_b1_interfaces
max_serialized_size_Mode_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: joint_no
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: zero_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gripper_control
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gripper_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gripper_force
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: restart
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: motor_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Mode_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const amber_b1_interfaces::srv::Mode_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Mode_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<amber_b1_interfaces::srv::Mode_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Mode_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const amber_b1_interfaces::srv::Mode_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Mode_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Mode_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _Mode_Request__callbacks = {
  "amber_b1_interfaces::srv",
  "Mode_Request",
  _Mode_Request__cdr_serialize,
  _Mode_Request__cdr_deserialize,
  _Mode_Request__get_serialized_size,
  _Mode_Request__max_serialized_size
};

static rosidl_message_type_support_t _Mode_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Mode_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace amber_b1_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_amber_b1_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<amber_b1_interfaces::srv::Mode_Request>()
{
  return &amber_b1_interfaces::srv::typesupport_fastrtps_cpp::_Mode_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, amber_b1_interfaces, srv, Mode_Request)() {
  return &amber_b1_interfaces::srv::typesupport_fastrtps_cpp::_Mode_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace amber_b1_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amber_b1_interfaces
cdr_serialize(
  const amber_b1_interfaces::srv::Mode_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: ack
  cdr << ros_message.ack;
  // Member: motor_state
  {
    cdr << ros_message.motor_state;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amber_b1_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  amber_b1_interfaces::srv::Mode_Response & ros_message)
{
  // Member: ack
  cdr >> ros_message.ack;

  // Member: motor_state
  {
    cdr >> ros_message.motor_state;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amber_b1_interfaces
get_serialized_size(
  const amber_b1_interfaces::srv::Mode_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: ack
  {
    size_t item_size = sizeof(ros_message.ack);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_state
  {
    size_t array_size = ros_message.motor_state.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.motor_state[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amber_b1_interfaces
max_serialized_size_Mode_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: ack
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: motor_state
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _Mode_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const amber_b1_interfaces::srv::Mode_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Mode_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<amber_b1_interfaces::srv::Mode_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Mode_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const amber_b1_interfaces::srv::Mode_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Mode_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Mode_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _Mode_Response__callbacks = {
  "amber_b1_interfaces::srv",
  "Mode_Response",
  _Mode_Response__cdr_serialize,
  _Mode_Response__cdr_deserialize,
  _Mode_Response__get_serialized_size,
  _Mode_Response__max_serialized_size
};

static rosidl_message_type_support_t _Mode_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Mode_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace amber_b1_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_amber_b1_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<amber_b1_interfaces::srv::Mode_Response>()
{
  return &amber_b1_interfaces::srv::typesupport_fastrtps_cpp::_Mode_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, amber_b1_interfaces, srv, Mode_Response)() {
  return &amber_b1_interfaces::srv::typesupport_fastrtps_cpp::_Mode_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace amber_b1_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _Mode__callbacks = {
  "amber_b1_interfaces::srv",
  "Mode",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, amber_b1_interfaces, srv, Mode_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, amber_b1_interfaces, srv, Mode_Response)(),
};

static rosidl_service_type_support_t _Mode__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Mode__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace amber_b1_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_amber_b1_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<amber_b1_interfaces::srv::Mode>()
{
  return &amber_b1_interfaces::srv::typesupport_fastrtps_cpp::_Mode__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, amber_b1_interfaces, srv, Mode)() {
  return &amber_b1_interfaces::srv::typesupport_fastrtps_cpp::_Mode__handle;
}

#ifdef __cplusplus
}
#endif
