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
CMAKE_COMMAND = /home/toy/app/clion-2020.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/toy/app/clion-2020.2/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/toy/CLionProjects/cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/toy/CLionProjects/cpp/linux_build

# Include any dependencies generated for this target.
include src/etc/CMakeFiles/etc_lib.dir/depend.make

# Include the progress variables for this target.
include src/etc/CMakeFiles/etc_lib.dir/progress.make

# Include the compile flags for this target's objects.
include src/etc/CMakeFiles/etc_lib.dir/flags.make

src/etc/CMakeFiles/etc_lib.dir/source/temp.cpp.o: src/etc/CMakeFiles/etc_lib.dir/flags.make
src/etc/CMakeFiles/etc_lib.dir/source/temp.cpp.o: ../src/etc/source/temp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/toy/CLionProjects/cpp/linux_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/etc/CMakeFiles/etc_lib.dir/source/temp.cpp.o"
	cd /home/toy/CLionProjects/cpp/linux_build/src/etc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/etc_lib.dir/source/temp.cpp.o -c /home/toy/CLionProjects/cpp/src/etc/source/temp.cpp

src/etc/CMakeFiles/etc_lib.dir/source/temp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/etc_lib.dir/source/temp.cpp.i"
	cd /home/toy/CLionProjects/cpp/linux_build/src/etc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/toy/CLionProjects/cpp/src/etc/source/temp.cpp > CMakeFiles/etc_lib.dir/source/temp.cpp.i

src/etc/CMakeFiles/etc_lib.dir/source/temp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/etc_lib.dir/source/temp.cpp.s"
	cd /home/toy/CLionProjects/cpp/linux_build/src/etc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/toy/CLionProjects/cpp/src/etc/source/temp.cpp -o CMakeFiles/etc_lib.dir/source/temp.cpp.s

# Object files for target etc_lib
etc_lib_OBJECTS = \
"CMakeFiles/etc_lib.dir/source/temp.cpp.o"

# External object files for target etc_lib
etc_lib_EXTERNAL_OBJECTS =

src/etc/libetc_lib.a: src/etc/CMakeFiles/etc_lib.dir/source/temp.cpp.o
src/etc/libetc_lib.a: src/etc/CMakeFiles/etc_lib.dir/build.make
src/etc/libetc_lib.a: src/etc/CMakeFiles/etc_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/toy/CLionProjects/cpp/linux_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libetc_lib.a"
	cd /home/toy/CLionProjects/cpp/linux_build/src/etc && $(CMAKE_COMMAND) -P CMakeFiles/etc_lib.dir/cmake_clean_target.cmake
	cd /home/toy/CLionProjects/cpp/linux_build/src/etc && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/etc_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/etc/CMakeFiles/etc_lib.dir/build: src/etc/libetc_lib.a

.PHONY : src/etc/CMakeFiles/etc_lib.dir/build

src/etc/CMakeFiles/etc_lib.dir/clean:
	cd /home/toy/CLionProjects/cpp/linux_build/src/etc && $(CMAKE_COMMAND) -P CMakeFiles/etc_lib.dir/cmake_clean.cmake
.PHONY : src/etc/CMakeFiles/etc_lib.dir/clean

src/etc/CMakeFiles/etc_lib.dir/depend:
	cd /home/toy/CLionProjects/cpp/linux_build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/toy/CLionProjects/cpp /home/toy/CLionProjects/cpp/src/etc /home/toy/CLionProjects/cpp/linux_build /home/toy/CLionProjects/cpp/linux_build/src/etc /home/toy/CLionProjects/cpp/linux_build/src/etc/CMakeFiles/etc_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/etc/CMakeFiles/etc_lib.dir/depend

