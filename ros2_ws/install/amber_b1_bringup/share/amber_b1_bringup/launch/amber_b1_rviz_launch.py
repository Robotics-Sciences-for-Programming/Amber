from launch.substitutions import PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare
from launch import LaunchDescription

from launch_ros.actions import Node

def generate_launch_description():

    rviz_config_file = PathJoinSubstitution(
        [FindPackageShare("amber_b1_description"), "config", "rviz.rviz"]
    )

    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="log",
        arguments=["-d", rviz_config_file],
    )

    nodes = [
        rviz_node
    ]

    return LaunchDescription(nodes)