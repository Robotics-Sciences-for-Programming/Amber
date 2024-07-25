import os

from launch.actions import DeclareLaunchArgument
from launch import LaunchDescription
from launch.substitutions import Command, FindExecutable, PathJoinSubstitution, LaunchConfiguration

from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from ament_index_python.packages import get_package_share_directory


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

    robot_controllers = PathJoinSubstitution(
        [
            FindPackageShare("amber_b1_bringup"),
            "config",
            "amber_b1_controllers.yaml",
        ]
    )
    #rviz_config_file = PathJoinSubstitution(
    #    [FindPackageShare("amber_b1_description"), "config", "rviz.rviz"]
    #)

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

    amber_b1_gui_node = Node(
        package="amber_b1_gui_node",
        executable="gui_node",
        output="both",
        parameters=[robot_description],
    )


    nodes = [
        control_node,
        robot_state_pub_node,
        amber_b1_gui_node,
        joint_state_broadcaster_spawner,
        robot_controller_spawner,
    ]

    return LaunchDescription(declared_arguments + nodes)