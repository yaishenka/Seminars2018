# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = "/Users/daniilgagarinov/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/182.3911.40/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/daniilgagarinov/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/182.3911.40/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/daniilgagarinov/Documents/GitHub/seminars

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/daniilgagarinov/Documents/GitHub/seminars/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/3_1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/3_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/3_1.dir/flags.make

CMakeFiles/3_1.dir/3_1.cpp.o: CMakeFiles/3_1.dir/flags.make
CMakeFiles/3_1.dir/3_1.cpp.o: ../3_1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/daniilgagarinov/Documents/GitHub/seminars/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/3_1.dir/3_1.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/3_1.dir/3_1.cpp.o -c /Users/daniilgagarinov/Documents/GitHub/seminars/3_1.cpp

CMakeFiles/3_1.dir/3_1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/3_1.dir/3_1.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/daniilgagarinov/Documents/GitHub/seminars/3_1.cpp > CMakeFiles/3_1.dir/3_1.cpp.i

CMakeFiles/3_1.dir/3_1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/3_1.dir/3_1.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/daniilgagarinov/Documents/GitHub/seminars/3_1.cpp -o CMakeFiles/3_1.dir/3_1.cpp.s

# Object files for target 3_1
3_1_OBJECTS = \
"CMakeFiles/3_1.dir/3_1.cpp.o"

# External object files for target 3_1
3_1_EXTERNAL_OBJECTS =

3_1: CMakeFiles/3_1.dir/3_1.cpp.o
3_1: CMakeFiles/3_1.dir/build.make
3_1: CMakeFiles/3_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/daniilgagarinov/Documents/GitHub/seminars/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 3_1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/3_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/3_1.dir/build: 3_1

.PHONY : CMakeFiles/3_1.dir/build

CMakeFiles/3_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/3_1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/3_1.dir/clean

CMakeFiles/3_1.dir/depend:
	cd /Users/daniilgagarinov/Documents/GitHub/seminars/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/daniilgagarinov/Documents/GitHub/seminars /Users/daniilgagarinov/Documents/GitHub/seminars /Users/daniilgagarinov/Documents/GitHub/seminars/cmake-build-debug /Users/daniilgagarinov/Documents/GitHub/seminars/cmake-build-debug /Users/daniilgagarinov/Documents/GitHub/seminars/cmake-build-debug/CMakeFiles/3_1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/3_1.dir/depend

