# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /snap/clion/139/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/139/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/longlt/CLionProjects/Max Sum(i*ar[i])"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/longlt/CLionProjects/Max Sum(i*ar[i])/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Max_Sum_i_ar_i__.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Max_Sum_i_ar_i__.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Max_Sum_i_ar_i__.dir/flags.make

CMakeFiles/Max_Sum_i_ar_i__.dir/main.cpp.o: CMakeFiles/Max_Sum_i_ar_i__.dir/flags.make
CMakeFiles/Max_Sum_i_ar_i__.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/longlt/CLionProjects/Max Sum(i*ar[i])/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Max_Sum_i_ar_i__.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Max_Sum_i_ar_i__.dir/main.cpp.o -c "/home/longlt/CLionProjects/Max Sum(i*ar[i])/main.cpp"

CMakeFiles/Max_Sum_i_ar_i__.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Max_Sum_i_ar_i__.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/longlt/CLionProjects/Max Sum(i*ar[i])/main.cpp" > CMakeFiles/Max_Sum_i_ar_i__.dir/main.cpp.i

CMakeFiles/Max_Sum_i_ar_i__.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Max_Sum_i_ar_i__.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/longlt/CLionProjects/Max Sum(i*ar[i])/main.cpp" -o CMakeFiles/Max_Sum_i_ar_i__.dir/main.cpp.s

# Object files for target Max_Sum_i_ar_i__
Max_Sum_i_ar_i___OBJECTS = \
"CMakeFiles/Max_Sum_i_ar_i__.dir/main.cpp.o"

# External object files for target Max_Sum_i_ar_i__
Max_Sum_i_ar_i___EXTERNAL_OBJECTS =

Max_Sum_i_ar_i__: CMakeFiles/Max_Sum_i_ar_i__.dir/main.cpp.o
Max_Sum_i_ar_i__: CMakeFiles/Max_Sum_i_ar_i__.dir/build.make
Max_Sum_i_ar_i__: CMakeFiles/Max_Sum_i_ar_i__.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/longlt/CLionProjects/Max Sum(i*ar[i])/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Max_Sum_i_ar_i__"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Max_Sum_i_ar_i__.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Max_Sum_i_ar_i__.dir/build: Max_Sum_i_ar_i__

.PHONY : CMakeFiles/Max_Sum_i_ar_i__.dir/build

CMakeFiles/Max_Sum_i_ar_i__.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Max_Sum_i_ar_i__.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Max_Sum_i_ar_i__.dir/clean

CMakeFiles/Max_Sum_i_ar_i__.dir/depend:
	cd "/home/longlt/CLionProjects/Max Sum(i*ar[i])/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/longlt/CLionProjects/Max Sum(i*ar[i])" "/home/longlt/CLionProjects/Max Sum(i*ar[i])" "/home/longlt/CLionProjects/Max Sum(i*ar[i])/cmake-build-debug" "/home/longlt/CLionProjects/Max Sum(i*ar[i])/cmake-build-debug" "/home/longlt/CLionProjects/Max Sum(i*ar[i])/cmake-build-debug/CMakeFiles/Max_Sum_i_ar_i__.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Max_Sum_i_ar_i__.dir/depend

