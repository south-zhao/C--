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
CMAKE_COMMAND = /cygdrive/c/Users/south-zhao/AppData/Local/JetBrains/CLion2022.1/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/south-zhao/AppData/Local/JetBrains/CLion2022.1/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/south-zhao/Desktop/C++

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/south-zhao/Desktop/C++/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/line.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/line.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/line.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/line.dir/flags.make

CMakeFiles/line.dir/five/line.cpp.o: CMakeFiles/line.dir/flags.make
CMakeFiles/line.dir/five/line.cpp.o: ../five/line.cpp
CMakeFiles/line.dir/five/line.cpp.o: CMakeFiles/line.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/south-zhao/Desktop/C++/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/line.dir/five/line.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/line.dir/five/line.cpp.o -MF CMakeFiles/line.dir/five/line.cpp.o.d -o CMakeFiles/line.dir/five/line.cpp.o -c /cygdrive/c/Users/south-zhao/Desktop/C++/five/line.cpp

CMakeFiles/line.dir/five/line.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/line.dir/five/line.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/south-zhao/Desktop/C++/five/line.cpp > CMakeFiles/line.dir/five/line.cpp.i

CMakeFiles/line.dir/five/line.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/line.dir/five/line.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/south-zhao/Desktop/C++/five/line.cpp -o CMakeFiles/line.dir/five/line.cpp.s

# Object files for target line
line_OBJECTS = \
"CMakeFiles/line.dir/five/line.cpp.o"

# External object files for target line
line_EXTERNAL_OBJECTS =

line.exe: CMakeFiles/line.dir/five/line.cpp.o
line.exe: CMakeFiles/line.dir/build.make
line.exe: CMakeFiles/line.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/south-zhao/Desktop/C++/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable line.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/line.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/line.dir/build: line.exe
.PHONY : CMakeFiles/line.dir/build

CMakeFiles/line.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/line.dir/cmake_clean.cmake
.PHONY : CMakeFiles/line.dir/clean

CMakeFiles/line.dir/depend:
	cd /cygdrive/c/Users/south-zhao/Desktop/C++/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/south-zhao/Desktop/C++ /cygdrive/c/Users/south-zhao/Desktop/C++ /cygdrive/c/Users/south-zhao/Desktop/C++/cmake-build-debug /cygdrive/c/Users/south-zhao/Desktop/C++/cmake-build-debug /cygdrive/c/Users/south-zhao/Desktop/C++/cmake-build-debug/CMakeFiles/line.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/line.dir/depend

