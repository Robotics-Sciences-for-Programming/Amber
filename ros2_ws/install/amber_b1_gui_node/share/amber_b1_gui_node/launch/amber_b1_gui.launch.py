# Copyright 2021 Abrar Rahman Protyasha
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
from launch.actions import DeclareLaunchArgument
from launch.substitutions import Command, FindExecutable, PathJoinSubstitution, LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():

    declared_arguments = []
    declared_arguments.append(
        DeclareLaunchArgument(
            "prefix",
            default_value='""',
            description="Prefix of the joint names, useful for \
        multi-robot setup. If changed than also joint names in the controllers' configuration \
        have to be updated.",
        )
    )

    declared_arguments.append(
        DeclareLaunchArgument(
            "is_hw",
            default_value="0",
            description="Start robot with fake hardware mirroring command to its states.",
        )
    )

    # Get URDF via xacro
    robot_description_content = Command(
        [
            PathJoinSubstitution([FindExecutable(name="xacro")]),
            " ",
            PathJoinSubstitution(
                [
                    FindPackageShare("amber_b1_description"),
                    "urdf",
                    "amber_b1.urdf.xacro",
                ]
            ),
            " prefix:=",
            LaunchConfiguration("prefix"),
            " is_hw:=",
            LaunchConfiguration("is_hw"),

        ]
    )

    robot_description = {"robot_description": robot_description_content}

    amber_b1_gui_node = Node(
        package="amber_b1_gui_node",
        executable="gui_node",
        output="both",
        parameters=[robot_description],
    )

    nodes = [
        amber_b1_gui_node,
    ]

    return LaunchDescription(declared_arguments + nodes)