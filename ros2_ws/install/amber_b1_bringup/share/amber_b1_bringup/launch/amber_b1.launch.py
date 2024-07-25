# Copyright 2021 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import os

from launch import LaunchDescription
from launch.substitutions import Command, FindExecutable, PathJoinSubstitution

from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():

    robot_description_path = os.path.join(
                            get_package_share_directory("amber_b1_description"),
                            'urdf/amber_b1.urdf')
    
    robot_description_content = open(robot_description_path).read()

    robot_description = {"robot_description": robot_description_content}

    robot_controllers = PathJoinSubstitution(
        [
            FindPackageShare("amber_b1_bringup"),
            "config",
            "amber_b1_controllers.yaml",
        ]
    )
    rviz_config_file = PathJoinSubstitution(
        [FindPackageShare("amber_b1_description"), "config", "rviz.rviz"]
    )

    control_node = Node(
        package="controller_manager",
        executable="ros2_control_node",
        parameters=[robot_description, robot_controllers],
        output={
            "stdout": "screen",
            "stderr": "screen",
        },
    )
    robot_state_pub_node = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        output="both",
        parameters=[robot_description],
    )
    #rviz_node = Node(
    #    package="rviz2",
    #    executable="rviz2",
    #    name="rviz2",
    #    output="log",
    #    arguments=["-d", rviz_config_file],
    #)

    joint_state_broadcaster_spawner = Node(
        package="controller_manager",
        executable="spawner.py",
        arguments=["joint_state_broadcaster", "--controller-manager", "/controller_manager"],
    )

    robot_controller_spawner = Node(
        package="controller_manager",
        executable="spawner.py",
        arguments=["position_trajectory_controller", "-c", "/controller_manager"],
    )

    nodes = [
        control_node,
        robot_state_pub_node,
        #rviz_node,
        joint_state_broadcaster_spawner,
        robot_controller_spawner,
    ]

    return LaunchDescription(nodes)
