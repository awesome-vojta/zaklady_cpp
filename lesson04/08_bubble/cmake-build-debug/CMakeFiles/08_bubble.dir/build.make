# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /opt/Clion/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/Clion/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/vojta/Documents/development/cpp/zaklady_cpp/lesson04/08_bubble

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vojta/Documents/development/cpp/zaklady_cpp/lesson04/08_bubble/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/08_bubble.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/08_bubble.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/08_bubble.dir/flags.make

CMakeFiles/08_bubble.dir/main.cpp.o: CMakeFiles/08_bubble.dir/flags.make
CMakeFiles/08_bubble.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vojta/Documents/development/cpp/zaklady_cpp/lesson04/08_bubble/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/08_bubble.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/08_bubble.dir/main.cpp.o -c /home/vojta/Documents/development/cpp/zaklady_cpp/lesson04/08_bubble/main.cpp

CMakeFiles/08_bubble.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/08_bubble.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vojta/Documents/development/cpp/zaklady_cpp/lesson04/08_bubble/main.cpp > CMakeFiles/08_bubble.dir/main.cpp.i

CMakeFiles/08_bubble.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/08_bubble.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vojta/Documents/development/cpp/zaklady_cpp/lesson04/08_bubble/main.cpp -o CMakeFiles/08_bubble.dir/main.cpp.s

CMakeFiles/08_bubble.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/08_bubble.dir/main.cpp.o.requires

CMakeFiles/08_bubble.dir/main.cpp.o.provides: CMakeFiles/08_bubble.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/08_bubble.dir/build.make CMakeFiles/08_bubble.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/08_bubble.dir/main.cpp.o.provides

CMakeFiles/08_bubble.dir/main.cpp.o.provides.build: CMakeFiles/08_bubble.dir/main.cpp.o


# Object files for target 08_bubble
08_bubble_OBJECTS = \
"CMakeFiles/08_bubble.dir/main.cpp.o"

# External object files for target 08_bubble
08_bubble_EXTERNAL_OBJECTS =

08_bubble: CMakeFiles/08_bubble.dir/main.cpp.o
08_bubble: CMakeFiles/08_bubble.dir/build.make
08_bubble: CMakeFiles/08_bubble.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vojta/Documents/development/cpp/zaklady_cpp/lesson04/08_bubble/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 08_bubble"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/08_bubble.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/08_bubble.dir/build: 08_bubble

.PHONY : CMakeFiles/08_bubble.dir/build

CMakeFiles/08_bubble.dir/requires: CMakeFiles/08_bubble.dir/main.cpp.o.requires

.PHONY : CMakeFiles/08_bubble.dir/requires

CMakeFiles/08_bubble.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/08_bubble.dir/cmake_clean.cmake
.PHONY : CMakeFiles/08_bubble.dir/clean

CMakeFiles/08_bubble.dir/depend:
	cd /home/vojta/Documents/development/cpp/zaklady_cpp/lesson04/08_bubble/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vojta/Documents/development/cpp/zaklady_cpp/lesson04/08_bubble /home/vojta/Documents/development/cpp/zaklady_cpp/lesson04/08_bubble /home/vojta/Documents/development/cpp/zaklady_cpp/lesson04/08_bubble/cmake-build-debug /home/vojta/Documents/development/cpp/zaklady_cpp/lesson04/08_bubble/cmake-build-debug /home/vojta/Documents/development/cpp/zaklady_cpp/lesson04/08_bubble/cmake-build-debug/CMakeFiles/08_bubble.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/08_bubble.dir/depend

