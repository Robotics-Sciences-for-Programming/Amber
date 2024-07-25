// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amber_b1_interfaces:srv/Mode.idl
// generated code does not contain a copyright notice

#ifndef AMBER_B1_INTERFACES__SRV__DETAIL__MODE__BUILDER_HPP_
#define AMBER_B1_INTERFACES__SRV__DETAIL__MODE__BUILDER_HPP_

#include "amber_b1_interfaces/srv/detail/mode__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace amber_b1_interfaces
{

namespace srv
{

namespace builder
{

class Init_Mode_Request_motor_state
{
public:
  explicit Init_Mode_Request_motor_state(::amber_b1_interfaces::srv::Mode_Request & msg)
  : msg_(msg)
  {}
  ::amber_b1_interfaces::srv::Mode_Request motor_state(::amber_b1_interfaces::srv::Mode_Request::_motor_state_type arg)
  {
    msg_.motor_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amber_b1_interfaces::srv::Mode_Request msg_;
};

class Init_Mode_Request_restart
{
public:
  explicit Init_Mode_Request_restart(::amber_b1_interfaces::srv::Mode_Request & msg)
  : msg_(msg)
  {}
  Init_Mode_Request_motor_state restart(::amber_b1_interfaces::srv::Mode_Request::_restart_type arg)
  {
    msg_.restart = std::move(arg);
    return Init_Mode_Request_motor_state(msg_);
  }

private:
  ::amber_b1_interfaces::srv::Mode_Request msg_;
};

class Init_Mode_Request_gripper_force
{
public:
  explicit Init_Mode_Request_gripper_force(::amber_b1_interfaces::srv::Mode_Request & msg)
  : msg_(msg)
  {}
  Init_Mode_Request_restart gripper_force(::amber_b1_interfaces::srv::Mode_Request::_gripper_force_type arg)
  {
    msg_.gripper_force = std::move(arg);
    return Init_Mode_Request_restart(msg_);
  }

private:
  ::amber_b1_interfaces::srv::Mode_Request msg_;
};

class Init_Mode_Request_gripper_mode
{
public:
  explicit Init_Mode_Request_gripper_mode(::amber_b1_interfaces::srv::Mode_Request & msg)
  : msg_(msg)
  {}
  Init_Mode_Request_gripper_force gripper_mode(::amber_b1_interfaces::srv::Mode_Request::_gripper_mode_type arg)
  {
    msg_.gripper_mode = std::move(arg);
    return Init_Mode_Request_gripper_force(msg_);
  }

private:
  ::amber_b1_interfaces::srv::Mode_Request msg_;
};

class Init_Mode_Request_gripper_control
{
public:
  explicit Init_Mode_Request_gripper_control(::amber_b1_interfaces::srv::Mode_Request & msg)
  : msg_(msg)
  {}
  Init_Mode_Request_gripper_mode gripper_control(::amber_b1_interfaces::srv::Mode_Request::_gripper_control_type arg)
  {
    msg_.gripper_control = std::move(arg);
    return Init_Mode_Request_gripper_mode(msg_);
  }

private:
  ::amber_b1_interfaces::srv::Mode_Request msg_;
};

class Init_Mode_Request_zero_position
{
public:
  explicit Init_Mode_Request_zero_position(::amber_b1_interfaces::srv::Mode_Request & msg)
  : msg_(msg)
  {}
  Init_Mode_Request_gripper_control zero_position(::amber_b1_interfaces::srv::Mode_Request::_zero_position_type arg)
  {
    msg_.zero_position = std::move(arg);
    return Init_Mode_Request_gripper_control(msg_);
  }

private:
  ::amber_b1_interfaces::srv::Mode_Request msg_;
};

class Init_Mode_Request_joint_no
{
public:
  explicit Init_Mode_Request_joint_no(::amber_b1_interfaces::srv::Mode_Request & msg)
  : msg_(msg)
  {}
  Init_Mode_Request_zero_position joint_no(::amber_b1_interfaces::srv::Mode_Request::_joint_no_type arg)
  {
    msg_.joint_no = std::move(arg);
    return Init_Mode_Request_zero_position(msg_);
  }

private:
  ::amber_b1_interfaces::srv::Mode_Request msg_;
};

class Init_Mode_Request_mode
{
public:
  Init_Mode_Request_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mode_Request_joint_no mode(::amber_b1_interfaces::srv::Mode_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_Mode_Request_joint_no(msg_);
  }

private:
  ::amber_b1_interfaces::srv::Mode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::amber_b1_interfaces::srv::Mode_Request>()
{
  return amber_b1_interfaces::srv::builder::Init_Mode_Request_mode();
}

}  // namespace amber_b1_interfaces


namespace amber_b1_interfaces
{

namespace srv
{

namespace builder
{

class Init_Mode_Response_motor_state
{
public:
  explicit Init_Mode_Response_motor_state(::amber_b1_interfaces::srv::Mode_Response & msg)
  : msg_(msg)
  {}
  ::amber_b1_interfaces::srv::Mode_Response motor_state(::amber_b1_interfaces::srv::Mode_Response::_motor_state_type arg)
  {
    msg_.motor_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amber_b1_interfaces::srv::Mode_Response msg_;
};

class Init_Mode_Response_ack
{
public:
  Init_Mode_Response_ack()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mode_Response_motor_state ack(::amber_b1_interfaces::srv::Mode_Response::_ack_type arg)
  {
    msg_.ack = std::move(arg);
    return Init_Mode_Response_motor_state(msg_);
  }

private:
  ::amber_b1_interfaces::srv::Mode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::amber_b1_interfaces::srv::Mode_Response>()
{
  return amber_b1_interfaces::srv::builder::Init_Mode_Response_ack();
}

}  // namespace amber_b1_interfaces

#endif  // AMBER_B1_INTERFACES__SRV__DETAIL__MODE__BUILDER_HPP_
