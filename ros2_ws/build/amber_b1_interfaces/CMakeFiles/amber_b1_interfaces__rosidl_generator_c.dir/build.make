# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/amber/ros2_ws/src/amber_b1/amber_b1_interfaces

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/amber/ros2_ws/build/amber_b1_interfaces

# Include any dependencies generated for this target.
include CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/flags.make

rosidl_generator_c/amber_b1_interfaces/srv/mode.h: /opt/ros/foxy/lib/rosidl_generator_c/rosidl_generator_c
rosidl_generator_c/amber_b1_interfaces/srv/mode.h: /opt/ros/foxy/lib/python3.8/site-packages/rosidl_generator_c/__init__.py
rosidl_generator_c/amber_b1_interfaces/srv/mode.h: /opt/ros/foxy/share/rosidl_generator_c/resource/action__type_support.h.em
rosidl_generator_c/amber_b1_interfaces/srv/mode.h: /opt/ros/foxy/share/rosidl_generator_c/resource/idl.h.em
rosidl_generator_c/amber_b1_interfaces/srv/mode.h: /opt/ros/foxy/share/rosidl_generator_c/resource/idl__functions.c.em
rosidl_generator_c/amber_b1_interfaces/srv/mode.h: /opt/ros/foxy/share/rosidl_generator_c/resource/idl__functions.h.em
rosidl_generator_c/amber_b1_interfaces/srv/mode.h: /opt/ros/foxy/share/rosidl_generator_c/resource/idl__struct.h.em
rosidl_generator_c/amber_b1_interfaces/srv/mode.h: /opt/ros/foxy/share/rosidl_generator_c/resource/idl__type_support.h.em
rosidl_generator_c/amber_b1_interfaces/srv/mode.h: /opt/ros/foxy/share/rosidl_generator_c/resource/msg__functions.c.em
rosidl_generator_c/amber_b1_interfaces/srv/mode.h: /opt/ros/foxy/share/rosidl_generator_c/resource/msg__functions.h.em
rosidl_generator_c/amber_b1_interfaces/srv/mode.h: /opt/ros/foxy/share/rosidl_generator_c/resource/msg__struct.h.em
rosidl_generator_c/amber_b1_interfaces/srv/mode.h: /opt/ros/foxy/share/rosidl_generator_c/resource/msg__type_support.h.em
rosidl_generator_c/amber_b1_interfaces/srv/mode.h: /opt/ros/foxy/share/rosidl_generator_c/resource/srv__type_support.h.em
rosidl_generator_c/amber_b1_interfaces/srv/mode.h: rosidl_adapter/amber_b1_interfaces/srv/Mode.idl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/amber/ros2_ws/build/amber_b1_interfaces/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating C code for ROS interfaces"
	/usr/bin/python3 /opt/ros/foxy/share/rosidl_generator_c/cmake/../../../lib/rosidl_generator_c/rosidl_generator_c --generator-arguments-file /home/amber/ros2_ws/build/amber_b1_interfaces/rosidl_generator_c__arguments.json

rosidl_generator_c/amber_b1_interfaces/srv/detail/mode__functions.h: rosidl_generator_c/amber_b1_interfaces/srv/mode.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/amber_b1_interfaces/srv/detail/mode__functions.h

rosidl_generator_c/amber_b1_interfaces/srv/detail/mode__struct.h: rosidl_generator_c/amber_b1_interfaces/srv/mode.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/amber_b1_interfaces/srv/detail/mode__struct.h

rosidl_generator_c/amber_b1_interfaces/srv/detail/mode__type_support.h: rosidl_generator_c/amber_b1_interfaces/srv/mode.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/amber_b1_interfaces/srv/detail/mode__type_support.h

rosidl_generator_c/amber_b1_interfaces/srv/detail/mode__functions.c: rosidl_generator_c/amber_b1_interfaces/srv/mode.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/amber_b1_interfaces/srv/detail/mode__functions.c

CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/rosidl_generator_c/amber_b1_interfaces/srv/detail/mode__functions.c.o: CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/flags.make
CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/rosidl_generator_c/amber_b1_interfaces/srv/detail/mode__functions.c.o: rosidl_generator_c/amber_b1_interfaces/srv/detail/mode__functions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/amber/ros2_ws/build/amber_b1_interfaces/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/rosidl_generator_c/amber_b1_interfaces/srv/detail/mode__functions.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/rosidl_generator_c/amber_b1_interfaces/srv/detail/mode__functions.c.o   -c /home/amber/ros2_ws/build/amber_b1_interfaces/rosidl_generator_c/amber_b1_interfaces/srv/detail/mode__functions.c

CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/rosidl_generator_c/amber_b1_interfaces/srv/detail/mode__functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/rosidl_generator_c/amber_b1_interfaces/srv/detail/mode__functions.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/amber/ros2_ws/build/amber_b1_interfaces/rosidl_generator_c/amber_b1_interfaces/srv/detail/mode__functions.c > CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/rosidl_generator_c/amber_b1_interfaces/srv/detail/mode__functions.c.i

CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/rosidl_generator_c/amber_b1_interfaces/srv/detail/mode__functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/rosidl_generator_c/amber_b1_interfaces/srv/detail/mode__functions.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/amber/ros2_ws/build/amber_b1_interfaces/rosidl_generator_c/amber_b1_interfaces/srv/detail/mode__functions.c -o CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/rosidl_generator_c/amber_b1_interfaces/srv/detail/mode__functions.c.s

# Object files for target amber_b1_interfaces__rosidl_generator_c
amber_b1_interfaces__rosidl_generator_c_OBJECTS = \
"CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/rosidl_generator_c/amber_b1_interfaces/srv/detail/mode__functions.c.o"

# External object files for target amber_b1_interfaces__rosidl_generator_c
amber_b1_interfaces__rosidl_generator_c_EXTERNAL_OBJECTS =

libamber_b1_interfaces__rosidl_generator_c.so: CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/rosidl_generator_c/amber_b1_interfaces/srv/detail/mode__functions.c.o
libamber_b1_interfaces__rosidl_generator_c.so: CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/build.make
libamber_b1_interfaces__rosidl_generator_c.so: /opt/ros/foxy/lib/librosidl_runtime_c.so
libamber_b1_interfaces__rosidl_generator_c.so: /opt/ros/foxy/lib/librcutils.so
libamber_b1_interfaces__rosidl_generator_c.so: CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/amber/ros2_ws/build/amber_b1_interfaces/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C shared library libamber_b1_interfaces__rosidl_generator_c.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/build: libamber_b1_interfaces__rosidl_generator_c.so

.PHONY : CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/build

CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/clean

CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/depend: rosidl_generator_c/amber_b1_interfaces/srv/mode.h
CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/depend: rosidl_generator_c/amber_b1_interfaces/srv/detail/mode__functions.h
CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/depend: rosidl_generator_c/amber_b1_interfaces/srv/detail/mode__struct.h
CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/depend: rosidl_generator_c/amber_b1_interfaces/srv/detail/mode__type_support.h
CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/depend: rosidl_generator_c/amber_b1_interfaces/srv/detail/mode__functions.c
	cd /home/amber/ros2_ws/build/amber_b1_interfaces && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/amber/ros2_ws/src/amber_b1/amber_b1_interfaces /home/amber/ros2_ws/src/amber_b1/amber_b1_interfaces /home/amber/ros2_ws/build/amber_b1_interfaces /home/amber/ros2_ws/build/amber_b1_interfaces /home/amber/ros2_ws/build/amber_b1_interfaces/CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/amber_b1_interfaces__rosidl_generator_c.dir/depend

