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
include CMakeFiles/xyz.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/xyz.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/xyz.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/xyz.dir/flags.make

CMakeFiles/xyz.dir/xyz.cpp.o: CMakeFiles/xyz.dir/flags.make
CMakeFiles/xyz.dir/xyz.cpp.o: ../xyz.cpp
CMakeFiles/xyz.dir/xyz.cpp.o: CMakeFiles/xyz.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/south-zhao/Desktop/C++/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/xyz.dir/xyz.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/xyz.dir/xyz.cpp.o -MF CMakeFiles/xyz.dir/xyz.cpp.o.d -o CMakeFiles/xyz.dir/xyz.cpp.o -c /cygdrive/c/Users/south-zhao/Desktop/C++/xyz.cpp

CMakeFiles/xyz.dir/xyz.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/xyz.dir/xyz.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/south-zhao/Desktop/C++/xyz.cpp > CMakeFiles/xyz.dir/xyz.cpp.i

CMakeFiles/xyz.dir/xyz.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/xyz.dir/xyz.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/south-zhao/Desktop/C++/xyz.cpp -o CMakeFiles/xyz.dir/xyz.cpp.s

CMakeFiles/xyz.dir/unxyz.cpp.o: CMakeFiles/xyz.dir/flags.make
CMakeFiles/xyz.dir/unxyz.cpp.o: ../unxyz.cpp
CMakeFiles/xyz.dir/unxyz.cpp.o: CMakeFiles/xyz.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/south-zhao/Desktop/C++/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/xyz.dir/unxyz.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/xyz.dir/unxyz.cpp.o -MF CMakeFiles/xyz.dir/unxyz.cpp.o.d -o CMakeFiles/xyz.dir/unxyz.cpp.o -c /cygdrive/c/Users/south-zhao/Desktop/C++/unxyz.cpp

CMakeFiles/xyz.dir/unxyz.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/xyz.dir/unxyz.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/south-zhao/Desktop/C++/unxyz.cpp > CMakeFiles/xyz.dir/unxyz.cpp.i

CMakeFiles/xyz.dir/unxyz.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/xyz.dir/unxyz.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/south-zhao/Desktop/C++/unxyz.cpp -o CMakeFiles/xyz.dir/unxyz.cpp.s

# Object files for target xyz
xyz_OBJECTS = \
"CMakeFiles/xyz.dir/xyz.cpp.o" \
"CMakeFiles/xyz.dir/unxyz.cpp.o"

# External object files for target xyz
xyz_EXTERNAL_OBJECTS =

xyz.exe: CMakeFiles/xyz.dir/xyz.cpp.o
xyz.exe: CMakeFiles/xyz.dir/unxyz.cpp.o
xyz.exe: CMakeFiles/xyz.dir/build.make
xyz.exe: CMakeFiles/xyz.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/south-zhao/Desktop/C++/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable xyz.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/xyz.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/xyz.dir/build: xyz.exe
.PHONY : CMakeFiles/xyz.dir/build

CMakeFiles/xyz.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/xyz.dir/cmake_clean.cmake
.PHONY : CMakeFiles/xyz.dir/clean

CMakeFiles/xyz.dir/depend:
	cd /cygdrive/c/Users/south-zhao/Desktop/C++/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/south-zhao/Desktop/C++ /cygdrive/c/Users/south-zhao/Desktop/C++ /cygdrive/c/Users/south-zhao/Desktop/C++/cmake-build-debug /cygdrive/c/Users/south-zhao/Desktop/C++/cmake-build-debug /cygdrive/c/Users/south-zhao/Desktop/C++/cmake-build-debug/CMakeFiles/xyz.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/xyz.dir/depend
