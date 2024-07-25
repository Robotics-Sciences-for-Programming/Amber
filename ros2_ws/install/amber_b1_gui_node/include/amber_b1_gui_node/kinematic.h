#ifndef ROS2_WS_KINEMATIC_H
#define ROS2_WS_KINEMATIC_H

#include "Eigen/Core"
#include "Eigen/Geometry"

#include "tf2/LinearMath/Matrix3x3.h"


class LegTool
{
public:
    LegTool();

    void fk(double* position_array);

    double joint_lower[7];
    double joint_upper[7];

    double phase_joint[8][7];

    int ik_phase_valid[8];
    double total_error_abs[8];

    int ik(double* xyzrpya, double* current_joint);

    Eigen::Vector3d xyz_;
    Eigen::Vector3d rpy_;
    double arm_angle_;

    double ik_joint_[7];

    Eigen::Matrix4d A0_;
    Eigen::Matrix4d B0_;
    Eigen::Matrix4d C0_;
    Eigen::Matrix4d D0_;
    Eigen::Matrix4d E0_;
    Eigen::Matrix4d F0_;
    Eigen::Matrix4d G0_;
    Eigen::Matrix4d H0_;

    Eigen::Matrix4d A0T_;
    Eigen::Matrix4d B0T_;
    Eigen::Matrix4d C0T_;
    Eigen::Matrix4d D0T_;
    Eigen::Matrix4d E0T_;
    Eigen::Matrix4d F0T_;
    Eigen::Matrix4d G0T_;
    Eigen::Matrix4d H0T_;
};

#endif //ROS2_WS_KINEMATIC_H
