# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = "C:/Program Files/CMake/bin/cmake.exe"

# The command to remove a file.
RM = "C:/Program Files/CMake/bin/cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:/Users/SteveKameron/source/repos/GENA

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:/Users/SteveKameron/source/repos/GENA/sborka

# Include any dependencies generated for this target.
include CMakeFiles/GENA.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/GENA.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/GENA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GENA.dir/flags.make

CMakeFiles/GENA.dir/Source2.cpp.obj: CMakeFiles/GENA.dir/flags.make
CMakeFiles/GENA.dir/Source2.cpp.obj: C:/Users/SteveKameron/source/repos/GENA/Source2.cpp
CMakeFiles/GENA.dir/Source2.cpp.obj: CMakeFiles/GENA.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:/Users/SteveKameron/source/repos/GENA/sborka/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GENA.dir/Source2.cpp.obj"
	C:/Users/SteveKameron/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/GENA.dir/Source2.cpp.obj -MF CMakeFiles/GENA.dir/Source2.cpp.obj.d -o CMakeFiles/GENA.dir/Source2.cpp.obj -c C:/Users/SteveKameron/source/repos/GENA/Source2.cpp

CMakeFiles/GENA.dir/Source2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/GENA.dir/Source2.cpp.i"
	C:/Users/SteveKameron/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/SteveKameron/source/repos/GENA/Source2.cpp > CMakeFiles/GENA.dir/Source2.cpp.i

CMakeFiles/GENA.dir/Source2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/GENA.dir/Source2.cpp.s"
	C:/Users/SteveKameron/gcc/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/SteveKameron/source/repos/GENA/Source2.cpp -o CMakeFiles/GENA.dir/Source2.cpp.s

# Object files for target GENA
GENA_OBJECTS = \
"CMakeFiles/GENA.dir/Source2.cpp.obj"

# External object files for target GENA
GENA_EXTERNAL_OBJECTS =

GENA.exe: CMakeFiles/GENA.dir/Source2.cpp.obj
GENA.exe: CMakeFiles/GENA.dir/build.make
GENA.exe: CMakeFiles/GENA.dir/linkLibs.rsp
GENA.exe: CMakeFiles/GENA.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:/Users/SteveKameron/source/repos/GENA/sborka/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable GENA.exe"
	"C:/Program Files/CMake/bin/cmake.exe" -E rm -f CMakeFiles/GENA.dir/objects.a
	C:/Users/SteveKameron/gcc/bin/ar.exe qc CMakeFiles/GENA.dir/objects.a @CMakeFiles/GENA.dir/objects1.rsp
	C:/Users/SteveKameron/gcc/bin/c++.exe -Wl,--whole-archive CMakeFiles/GENA.dir/objects.a -Wl,--no-whole-archive -o GENA.exe -Wl,--out-implib,libGENA.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/GENA.dir/linkLibs.rsp

# Rule to build all files generated by this target.
CMakeFiles/GENA.dir/build: GENA.exe
.PHONY : CMakeFiles/GENA.dir/build

CMakeFiles/GENA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GENA.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GENA.dir/clean

CMakeFiles/GENA.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" C:/Users/SteveKameron/source/repos/GENA C:/Users/SteveKameron/source/repos/GENA C:/Users/SteveKameron/source/repos/GENA/sborka C:/Users/SteveKameron/source/repos/GENA/sborka C:/Users/SteveKameron/source/repos/GENA/sborka/CMakeFiles/GENA.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/GENA.dir/depend

