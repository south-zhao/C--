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
include CMakeFiles/lab7_1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/lab7_1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/lab7_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab7_1.dir/flags.make

CMakeFiles/lab7_1.dir/lab7/lab7_1.cpp.o: CMakeFiles/lab7_1.dir/flags.make
CMakeFiles/lab7_1.dir/lab7/lab7_1.cpp.o: ../lab7/lab7_1.cpp
CMakeFiles/lab7_1.dir/lab7/lab7_1.cpp.o: CMakeFiles/lab7_1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/south-zhao/Desktop/C++/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab7_1.dir/lab7/lab7_1.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab7_1.dir/lab7/lab7_1.cpp.o -MF CMakeFiles/lab7_1.dir/lab7/lab7_1.cpp.o.d -o CMakeFiles/lab7_1.dir/lab7/lab7_1.cpp.o -c /cygdrive/c/Users/south-zhao/Desktop/C++/lab7/lab7_1.cpp

CMakeFiles/lab7_1.dir/lab7/lab7_1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab7_1.dir/lab7/lab7_1.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/south-zhao/Desktop/C++/lab7/lab7_1.cpp > CMakeFiles/lab7_1.dir/lab7/lab7_1.cpp.i

CMakeFiles/lab7_1.dir/lab7/lab7_1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab7_1.dir/lab7/lab7_1.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/south-zhao/Desktop/C++/lab7/lab7_1.cpp -o CMakeFiles/lab7_1.dir/lab7/lab7_1.cpp.s

# Object files for target lab7_1
lab7_1_OBJECTS = \
"CMakeFiles/lab7_1.dir/lab7/lab7_1.cpp.o"

# External object files for target lab7_1
lab7_1_EXTERNAL_OBJECTS =

lab7_1.exe: CMakeFiles/lab7_1.dir/lab7/lab7_1.cpp.o
lab7_1.exe: CMakeFiles/lab7_1.dir/build.make
lab7_1.exe: CMakeFiles/lab7_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/south-zhao/Desktop/C++/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lab7_1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab7_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab7_1.dir/build: lab7_1.exe
.PHONY : CMakeFiles/lab7_1.dir/build

CMakeFiles/lab7_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab7_1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab7_1.dir/clean

CMakeFiles/lab7_1.dir/depend:
	cd /cygdrive/c/Users/south-zhao/Desktop/C++/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/south-zhao/Desktop/C++ /cygdrive/c/Users/south-zhao/Desktop/C++ /cygdrive/c/Users/south-zhao/Desktop/C++/cmake-build-debug /cygdrive/c/Users/south-zhao/Desktop/C++/cmake-build-debug /cygdrive/c/Users/south-zhao/Desktop/C++/cmake-build-debug/CMakeFiles/lab7_1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab7_1.dir/depend

