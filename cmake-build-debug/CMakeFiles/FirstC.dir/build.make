# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pietrolio/Clion/C++/Activity_Register

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pietrolio/Clion/C++/Activity_Register/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/FirstC.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/FirstC.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/FirstC.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FirstC.dir/flags.make

CMakeFiles/FirstC.dir/main.cpp.o: CMakeFiles/FirstC.dir/flags.make
CMakeFiles/FirstC.dir/main.cpp.o: ../main.cpp
CMakeFiles/FirstC.dir/main.cpp.o: CMakeFiles/FirstC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pietrolio/Clion/C++/Activity_Register/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FirstC.dir/main.cpp.o"
	/usr/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FirstC.dir/main.cpp.o -MF CMakeFiles/FirstC.dir/main.cpp.o.d -o CMakeFiles/FirstC.dir/main.cpp.o -c /home/pietrolio/Clion/C++/Activity_Register/main.cpp

CMakeFiles/FirstC.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FirstC.dir/main.cpp.i"
	/usr/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pietrolio/Clion/C++/Activity_Register/main.cpp > CMakeFiles/FirstC.dir/main.cpp.i

CMakeFiles/FirstC.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FirstC.dir/main.cpp.s"
	/usr/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pietrolio/Clion/C++/Activity_Register/main.cpp -o CMakeFiles/FirstC.dir/main.cpp.s

# Object files for target FirstC
FirstC_OBJECTS = \
"CMakeFiles/FirstC.dir/main.cpp.o"

# External object files for target FirstC
FirstC_EXTERNAL_OBJECTS =

FirstC: CMakeFiles/FirstC.dir/main.cpp.o
FirstC: CMakeFiles/FirstC.dir/build.make
FirstC: CMakeFiles/FirstC.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pietrolio/Clion/C++/Activity_Register/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable FirstC"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FirstC.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FirstC.dir/build: FirstC
.PHONY : CMakeFiles/FirstC.dir/build

CMakeFiles/FirstC.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FirstC.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FirstC.dir/clean

CMakeFiles/FirstC.dir/depend:
	cd /home/pietrolio/Clion/C++/Activity_Register/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pietrolio/Clion/C++/Activity_Register /home/pietrolio/Clion/C++/Activity_Register /home/pietrolio/Clion/C++/Activity_Register/cmake-build-debug /home/pietrolio/Clion/C++/Activity_Register/cmake-build-debug /home/pietrolio/Clion/C++/Activity_Register/cmake-build-debug/CMakeFiles/FirstC.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FirstC.dir/depend

