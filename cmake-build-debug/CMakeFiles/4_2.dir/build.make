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
include CMakeFiles/4_2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/4_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/4_2.dir/flags.make

CMakeFiles/4_2.dir/4_2.cpp.o: CMakeFiles/4_2.dir/flags.make
CMakeFiles/4_2.dir/4_2.cpp.o: ../4_2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/daniilgagarinov/Documents/GitHub/seminars/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/4_2.dir/4_2.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/4_2.dir/4_2.cpp.o -c /Users/daniilgagarinov/Documents/GitHub/seminars/4_2.cpp

CMakeFiles/4_2.dir/4_2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/4_2.dir/4_2.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/daniilgagarinov/Documents/GitHub/seminars/4_2.cpp > CMakeFiles/4_2.dir/4_2.cpp.i

CMakeFiles/4_2.dir/4_2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/4_2.dir/4_2.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/daniilgagarinov/Documents/GitHub/seminars/4_2.cpp -o CMakeFiles/4_2.dir/4_2.cpp.s

# Object files for target 4_2
4_2_OBJECTS = \
"CMakeFiles/4_2.dir/4_2.cpp.o"

# External object files for target 4_2
4_2_EXTERNAL_OBJECTS =

4_2: CMakeFiles/4_2.dir/4_2.cpp.o
4_2: CMakeFiles/4_2.dir/build.make
4_2: CMakeFiles/4_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/daniilgagarinov/Documents/GitHub/seminars/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 4_2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/4_2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/4_2.dir/build: 4_2

.PHONY : CMakeFiles/4_2.dir/build

CMakeFiles/4_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/4_2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/4_2.dir/clean

CMakeFiles/4_2.dir/depend:
	cd /Users/daniilgagarinov/Documents/GitHub/seminars/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/daniilgagarinov/Documents/GitHub/seminars /Users/daniilgagarinov/Documents/GitHub/seminars /Users/daniilgagarinov/Documents/GitHub/seminars/cmake-build-debug /Users/daniilgagarinov/Documents/GitHub/seminars/cmake-build-debug /Users/daniilgagarinov/Documents/GitHub/seminars/cmake-build-debug/CMakeFiles/4_2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/4_2.dir/depend

