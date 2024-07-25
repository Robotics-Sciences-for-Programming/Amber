#ifndef AMBER_B1_INTERFACE_HPP_
#define AMBER_B1_INTERFACE_HPP_

#include <memory>
#include <string>
#include <vector>
#include <atomic>
#include <thread>

#include "hardware_interface/base_interface.hpp"
#include "hardware_interface/system_interface.hpp"
#include "rclcpp/macros.hpp"
#include "hardware_interface/types/hardware_interface_return_values.hpp"
#include "hardware_interface/types/hardware_interface_status_values.hpp"

#include "visibility_control.h"
#include "rt_spi.h"

#include "amber_b1_interfaces/srv/mode.hpp"

class AmberB1Hardware: public hardware_interface::BaseInterface<hardware_interface::SystemInterface>
{
public:
    RCLCPP_SHARED_PTR_DEFINITIONS(AmberB1Hardware)

    AMBER_B1_HARDWARE_PUBLIC
            hardware_interface::return_type configure(const hardware_interface::HardwareInfo & info) override;

    AMBER_B1_HARDWARE_PUBLIC
            std::vector<hardware_interface::StateInterface> export_state_interfaces() override;

    AMBER_B1_HARDWARE_PUBLIC
            std::vector<hardware_interface::CommandInterface> export_command_interfaces() override;

    AMBER_B1_HARDWARE_PUBLIC
            hardware_interface::return_type start() override;

    AMBER_B1_HARDWARE_PUBLIC
            hardware_interface::return_type stop() override;

    AMBER_B1_HARDWARE_PUBLIC
            hardware_interface::return_type read() override;

    AMBER_B1_HARDWARE_PUBLIC
            hardware_interface::return_type write() override;

    // provisional
    AMBER_B1_HARDWARE_PUBLIC
        void run_service();

    AMBER_B1_HARDWARE_PUBLIC
        void mode(std::shared_ptr<amber_b1_interfaces::srv::Mode::Request> request,
                  std::shared_ptr<amber_b1_interfaces::srv::Mode::Response>  response);

    AMBER_B1_HARDWARE_PUBLIC virtual ~AmberB1Hardware();
    int current_state_ = 0;
    std::atomic<bool> receive_available_;
    std::thread service_thread_;

private:

    // Parameters
    double hw_start_sec_;
    double hw_stop_sec_;
    //double hw_slowdown_;
    double is_hw_;

    // for spi
    spine_cmd_t spine_cmd;
    spine_data_t spine_data;

    // Store the command for the simulated robot
    std::vector<double> q_des_;
    std::vector<double> qdot_des_;

    std::vector<double> q_act_;
    std::vector<double> qdot_act_;
    std::vector<double> i_act_;

    // should implement in transmission
    std::vector<double> dir_;
    uint64_t test_counter_ = 0;
    int work_mode_;

    bool zero_position_;
    int joint_no_;
    bool rec_zero_position_;
    int rec_joint_no_;

    bool gripper_c_;
    int gripper_mode_;
    int gripper_force_;

    bool rec_gripper_c_;
    int rec_gripper_mode_;
    int rec_gripper_force_;

    bool restart_;
    int restart_counter_;

    bool rec_restart_;

    uint16_t motor_status[7];
    uint16_t copy_motor_status[7];


    bool is_debug_;
    int debug_counter_;


};

#endif