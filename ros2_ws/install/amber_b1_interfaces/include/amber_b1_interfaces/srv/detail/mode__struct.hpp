// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amber_b1_interfaces:srv/Mode.idl
// generated code does not contain a copyright notice

#ifndef AMBER_B1_INTERFACES__SRV__DETAIL__MODE__STRUCT_HPP_
#define AMBER_B1_INTERFACES__SRV__DETAIL__MODE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__amber_b1_interfaces__srv__Mode_Request __attribute__((deprecated))
#else
# define DEPRECATED__amber_b1_interfaces__srv__Mode_Request __declspec(deprecated)
#endif

namespace amber_b1_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Mode_Request_
{
  using Type = Mode_Request_<ContainerAllocator>;

  explicit Mode_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0ll;
      this->joint_no = 0ll;
      this->zero_position = 0ll;
      this->gripper_control = 0l;
      this->gripper_mode = 0l;
      this->gripper_force = 0l;
      this->restart = 0l;
      this->motor_state = 0l;
    }
  }

  explicit Mode_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0ll;
      this->joint_no = 0ll;
      this->zero_position = 0ll;
      this->gripper_control = 0l;
      this->gripper_mode = 0l;
      this->gripper_force = 0l;
      this->restart = 0l;
      this->motor_state = 0l;
    }
  }

  // field types and members
  using _mode_type =
    int64_t;
  _mode_type mode;
  using _joint_no_type =
    int64_t;
  _joint_no_type joint_no;
  using _zero_position_type =
    int64_t;
  _zero_position_type zero_position;
  using _gripper_control_type =
    int32_t;
  _gripper_control_type gripper_control;
  using _gripper_mode_type =
    int32_t;
  _gripper_mode_type gripper_mode;
  using _gripper_force_type =
    int32_t;
  _gripper_force_type gripper_force;
  using _restart_type =
    int32_t;
  _restart_type restart;
  using _motor_state_type =
    int32_t;
  _motor_state_type motor_state;

  // setters for named parameter idiom
  Type & set__mode(
    const int64_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__joint_no(
    const int64_t & _arg)
  {
    this->joint_no = _arg;
    return *this;
  }
  Type & set__zero_position(
    const int64_t & _arg)
  {
    this->zero_position = _arg;
    return *this;
  }
  Type & set__gripper_control(
    const int32_t & _arg)
  {
    this->gripper_control = _arg;
    return *this;
  }
  Type & set__gripper_mode(
    const int32_t & _arg)
  {
    this->gripper_mode = _arg;
    return *this;
  }
  Type & set__gripper_force(
    const int32_t & _arg)
  {
    this->gripper_force = _arg;
    return *this;
  }
  Type & set__restart(
    const int32_t & _arg)
  {
    this->restart = _arg;
    return *this;
  }
  Type & set__motor_state(
    const int32_t & _arg)
  {
    this->motor_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amber_b1_interfaces::srv::Mode_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const amber_b1_interfaces::srv::Mode_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amber_b1_interfaces::srv::Mode_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amber_b1_interfaces::srv::Mode_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amber_b1_interfaces::srv::Mode_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amber_b1_interfaces::srv::Mode_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amber_b1_interfaces::srv::Mode_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amber_b1_interfaces::srv::Mode_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amber_b1_interfaces::srv::Mode_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amber_b1_interfaces::srv::Mode_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amber_b1_interfaces__srv__Mode_Request
    std::shared_ptr<amber_b1_interfaces::srv::Mode_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amber_b1_interfaces__srv__Mode_Request
    std::shared_ptr<amber_b1_interfaces::srv::Mode_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mode_Request_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->joint_no != other.joint_no) {
      return false;
    }
    if (this->zero_position != other.zero_position) {
      return false;
    }
    if (this->gripper_control != other.gripper_control) {
      return false;
    }
    if (this->gripper_mode != other.gripper_mode) {
      return false;
    }
    if (this->gripper_force != other.gripper_force) {
      return false;
    }
    if (this->restart != other.restart) {
      return false;
    }
    if (this->motor_state != other.motor_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mode_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mode_Request_

// alias to use template instance with default allocator
using Mode_Request =
  amber_b1_interfaces::srv::Mode_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace amber_b1_interfaces


#ifndef _WIN32
# define DEPRECATED__amber_b1_interfaces__srv__Mode_Response __attribute__((deprecated))
#else
# define DEPRECATED__amber_b1_interfaces__srv__Mode_Response __declspec(deprecated)
#endif

namespace amber_b1_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Mode_Response_
{
  using Type = Mode_Response_<ContainerAllocator>;

  explicit Mode_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ack = 0ll;
    }
  }

  explicit Mode_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ack = 0ll;
    }
  }

  // field types and members
  using _ack_type =
    int64_t;
  _ack_type ack;
  using _motor_state_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _motor_state_type motor_state;

  // setters for named parameter idiom
  Type & set__ack(
    const int64_t & _arg)
  {
    this->ack = _arg;
    return *this;
  }
  Type & set__motor_state(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->motor_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amber_b1_interfaces::srv::Mode_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const amber_b1_interfaces::srv::Mode_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amber_b1_interfaces::srv::Mode_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amber_b1_interfaces::srv::Mode_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amber_b1_interfaces::srv::Mode_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amber_b1_interfaces::srv::Mode_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amber_b1_interfaces::srv::Mode_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amber_b1_interfaces::srv::Mode_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amber_b1_interfaces::srv::Mode_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amber_b1_interfaces::srv::Mode_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amber_b1_interfaces__srv__Mode_Response
    std::shared_ptr<amber_b1_interfaces::srv::Mode_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amber_b1_interfaces__srv__Mode_Response
    std::shared_ptr<amber_b1_interfaces::srv::Mode_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mode_Response_ & other) const
  {
    if (this->ack != other.ack) {
      return false;
    }
    if (this->motor_state != other.motor_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mode_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mode_Response_

// alias to use template instance with default allocator
using Mode_Response =
  amber_b1_interfaces::srv::Mode_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace amber_b1_interfaces

namespace amber_b1_interfaces
{

namespace srv
{

struct Mode
{
  using Request = amber_b1_interfaces::srv::Mode_Request;
  using Response = amber_b1_interfaces::srv::Mode_Response;
};

}  // namespace srv

}  // namespace amber_b1_interfaces

#endif  // AMBER_B1_INTERFACES__SRV__DETAIL__MODE__STRUCT_HPP_
