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
include CMakeFiles/Bank.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Bank.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Bank.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Bank.dir/flags.make

CMakeFiles/Bank.dir/review/Bank.cpp.o: CMakeFiles/Bank.dir/flags.make
CMakeFiles/Bank.dir/review/Bank.cpp.o: ../review/Bank.cpp
CMakeFiles/Bank.dir/review/Bank.cpp.o: CMakeFiles/Bank.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/south-zhao/Desktop/C++/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Bank.dir/review/Bank.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Bank.dir/review/Bank.cpp.o -MF CMakeFiles/Bank.dir/review/Bank.cpp.o.d -o CMakeFiles/Bank.dir/review/Bank.cpp.o -c /cygdrive/c/Users/south-zhao/Desktop/C++/review/Bank.cpp

CMakeFiles/Bank.dir/review/Bank.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Bank.dir/review/Bank.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/south-zhao/Desktop/C++/review/Bank.cpp > CMakeFiles/Bank.dir/review/Bank.cpp.i

CMakeFiles/Bank.dir/review/Bank.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Bank.dir/review/Bank.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/south-zhao/Desktop/C++/review/Bank.cpp -o CMakeFiles/Bank.dir/review/Bank.cpp.s

# Object files for target Bank
Bank_OBJECTS = \
"CMakeFiles/Bank.dir/review/Bank.cpp.o"

# External object files for target Bank
Bank_EXTERNAL_OBJECTS =

Bank.exe: CMakeFiles/Bank.dir/review/Bank.cpp.o
Bank.exe: CMakeFiles/Bank.dir/build.make
Bank.exe: CMakeFiles/Bank.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/south-zhao/Desktop/C++/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Bank.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Bank.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Bank.dir/build: Bank.exe
.PHONY : CMakeFiles/Bank.dir/build

CMakeFiles/Bank.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Bank.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Bank.dir/clean

CMakeFiles/Bank.dir/depend:
	cd /cygdrive/c/Users/south-zhao/Desktop/C++/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/south-zhao/Desktop/C++ /cygdrive/c/Users/south-zhao/Desktop/C++ /cygdrive/c/Users/south-zhao/Desktop/C++/cmake-build-debug /cygdrive/c/Users/south-zhao/Desktop/C++/cmake-build-debug /cygdrive/c/Users/south-zhao/Desktop/C++/cmake-build-debug/CMakeFiles/Bank.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Bank.dir/depend
