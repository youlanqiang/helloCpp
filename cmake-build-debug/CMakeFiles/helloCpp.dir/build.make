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
CMAKE_COMMAND = "/Users/youlanqiang/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/202.7660.37/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/youlanqiang/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/202.7660.37/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/youlanqiang/CLionProjects/helloCpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/youlanqiang/CLionProjects/helloCpp/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/helloCpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/helloCpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/helloCpp.dir/flags.make

CMakeFiles/helloCpp.dir/main/main.cpp.o: CMakeFiles/helloCpp.dir/flags.make
CMakeFiles/helloCpp.dir/main/main.cpp.o: ../main/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/youlanqiang/CLionProjects/helloCpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/helloCpp.dir/main/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/helloCpp.dir/main/main.cpp.o -c /Users/youlanqiang/CLionProjects/helloCpp/main/main.cpp

CMakeFiles/helloCpp.dir/main/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/helloCpp.dir/main/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/youlanqiang/CLionProjects/helloCpp/main/main.cpp > CMakeFiles/helloCpp.dir/main/main.cpp.i

CMakeFiles/helloCpp.dir/main/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/helloCpp.dir/main/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/youlanqiang/CLionProjects/helloCpp/main/main.cpp -o CMakeFiles/helloCpp.dir/main/main.cpp.s

# Object files for target helloCpp
helloCpp_OBJECTS = \
"CMakeFiles/helloCpp.dir/main/main.cpp.o"

# External object files for target helloCpp
helloCpp_EXTERNAL_OBJECTS =

helloCpp: CMakeFiles/helloCpp.dir/main/main.cpp.o
helloCpp: CMakeFiles/helloCpp.dir/build.make
helloCpp: CMakeFiles/helloCpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/youlanqiang/CLionProjects/helloCpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable helloCpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/helloCpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/helloCpp.dir/build: helloCpp

.PHONY : CMakeFiles/helloCpp.dir/build

CMakeFiles/helloCpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/helloCpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/helloCpp.dir/clean

CMakeFiles/helloCpp.dir/depend:
	cd /Users/youlanqiang/CLionProjects/helloCpp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/youlanqiang/CLionProjects/helloCpp /Users/youlanqiang/CLionProjects/helloCpp /Users/youlanqiang/CLionProjects/helloCpp/cmake-build-debug /Users/youlanqiang/CLionProjects/helloCpp/cmake-build-debug /Users/youlanqiang/CLionProjects/helloCpp/cmake-build-debug/CMakeFiles/helloCpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/helloCpp.dir/depend

