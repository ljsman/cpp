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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/2y2ssn/CLionProjects/cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/2y2ssn/CLionProjects/cpp/cmake-build-debug

# Include any dependencies generated for this target.
include src/leetcode/CMakeFiles/leetcode.dir/depend.make

# Include the progress variables for this target.
include src/leetcode/CMakeFiles/leetcode.dir/progress.make

# Include the compile flags for this target's objects.
include src/leetcode/CMakeFiles/leetcode.dir/flags.make

src/leetcode/CMakeFiles/leetcode.dir/source/dice_roll.cpp.o: src/leetcode/CMakeFiles/leetcode.dir/flags.make
src/leetcode/CMakeFiles/leetcode.dir/source/dice_roll.cpp.o: ../src/leetcode/source/dice_roll.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/2y2ssn/CLionProjects/cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/leetcode/CMakeFiles/leetcode.dir/source/dice_roll.cpp.o"
	cd /Users/2y2ssn/CLionProjects/cpp/cmake-build-debug/src/leetcode && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/leetcode.dir/source/dice_roll.cpp.o -c /Users/2y2ssn/CLionProjects/cpp/src/leetcode/source/dice_roll.cpp

src/leetcode/CMakeFiles/leetcode.dir/source/dice_roll.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/leetcode.dir/source/dice_roll.cpp.i"
	cd /Users/2y2ssn/CLionProjects/cpp/cmake-build-debug/src/leetcode && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/2y2ssn/CLionProjects/cpp/src/leetcode/source/dice_roll.cpp > CMakeFiles/leetcode.dir/source/dice_roll.cpp.i

src/leetcode/CMakeFiles/leetcode.dir/source/dice_roll.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/leetcode.dir/source/dice_roll.cpp.s"
	cd /Users/2y2ssn/CLionProjects/cpp/cmake-build-debug/src/leetcode && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/2y2ssn/CLionProjects/cpp/src/leetcode/source/dice_roll.cpp -o CMakeFiles/leetcode.dir/source/dice_roll.cpp.s

src/leetcode/CMakeFiles/leetcode.dir/source/solution.cpp.o: src/leetcode/CMakeFiles/leetcode.dir/flags.make
src/leetcode/CMakeFiles/leetcode.dir/source/solution.cpp.o: ../src/leetcode/source/solution.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/2y2ssn/CLionProjects/cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/leetcode/CMakeFiles/leetcode.dir/source/solution.cpp.o"
	cd /Users/2y2ssn/CLionProjects/cpp/cmake-build-debug/src/leetcode && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/leetcode.dir/source/solution.cpp.o -c /Users/2y2ssn/CLionProjects/cpp/src/leetcode/source/solution.cpp

src/leetcode/CMakeFiles/leetcode.dir/source/solution.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/leetcode.dir/source/solution.cpp.i"
	cd /Users/2y2ssn/CLionProjects/cpp/cmake-build-debug/src/leetcode && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/2y2ssn/CLionProjects/cpp/src/leetcode/source/solution.cpp > CMakeFiles/leetcode.dir/source/solution.cpp.i

src/leetcode/CMakeFiles/leetcode.dir/source/solution.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/leetcode.dir/source/solution.cpp.s"
	cd /Users/2y2ssn/CLionProjects/cpp/cmake-build-debug/src/leetcode && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/2y2ssn/CLionProjects/cpp/src/leetcode/source/solution.cpp -o CMakeFiles/leetcode.dir/source/solution.cpp.s

# Object files for target leetcode
leetcode_OBJECTS = \
"CMakeFiles/leetcode.dir/source/dice_roll.cpp.o" \
"CMakeFiles/leetcode.dir/source/solution.cpp.o"

# External object files for target leetcode
leetcode_EXTERNAL_OBJECTS =

src/leetcode/leetcode: src/leetcode/CMakeFiles/leetcode.dir/source/dice_roll.cpp.o
src/leetcode/leetcode: src/leetcode/CMakeFiles/leetcode.dir/source/solution.cpp.o
src/leetcode/leetcode: src/leetcode/CMakeFiles/leetcode.dir/build.make
src/leetcode/leetcode: src/leetcode/CMakeFiles/leetcode.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/2y2ssn/CLionProjects/cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable leetcode"
	cd /Users/2y2ssn/CLionProjects/cpp/cmake-build-debug/src/leetcode && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/leetcode.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/leetcode/CMakeFiles/leetcode.dir/build: src/leetcode/leetcode

.PHONY : src/leetcode/CMakeFiles/leetcode.dir/build

src/leetcode/CMakeFiles/leetcode.dir/clean:
	cd /Users/2y2ssn/CLionProjects/cpp/cmake-build-debug/src/leetcode && $(CMAKE_COMMAND) -P CMakeFiles/leetcode.dir/cmake_clean.cmake
.PHONY : src/leetcode/CMakeFiles/leetcode.dir/clean

src/leetcode/CMakeFiles/leetcode.dir/depend:
	cd /Users/2y2ssn/CLionProjects/cpp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/2y2ssn/CLionProjects/cpp /Users/2y2ssn/CLionProjects/cpp/src/leetcode /Users/2y2ssn/CLionProjects/cpp/cmake-build-debug /Users/2y2ssn/CLionProjects/cpp/cmake-build-debug/src/leetcode /Users/2y2ssn/CLionProjects/cpp/cmake-build-debug/src/leetcode/CMakeFiles/leetcode.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/leetcode/CMakeFiles/leetcode.dir/depend

