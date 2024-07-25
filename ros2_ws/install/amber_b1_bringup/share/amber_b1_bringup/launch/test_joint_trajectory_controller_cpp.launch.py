# Copyright 2021 Stogl Robotics Consulting UG (haftungsbeschränkt)
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

from launch import LaunchDescription
from launch.substitutions import PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():

    position_goals = PathJoinSubstitution(
        [
            FindPackageShare("amber_b1_bringup"),
            "config",
            "amber_b1_trajectory_publisher_cpp.yaml",
        ]
    )

    return LaunchDescription(
        [
            Node(
                package="amber_b1_joint_control_demo",
                executable="joint_control_demo",
                name="joint_control_demo",
                parameters=[position_goals],
                output={
                    "stdout": "screen",
                    "stderr": "screen",
                },
            )
        ]
    )
