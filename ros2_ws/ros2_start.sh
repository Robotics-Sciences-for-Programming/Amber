#!/bin/bash
source /home/amber/ros2_ws/install/setup.bash
nohup ros2 launch amber_b1_bringup amber_b1_hw_gui.launch.py >/home/amber/ros2_ws/ros.out 2>&1 &
