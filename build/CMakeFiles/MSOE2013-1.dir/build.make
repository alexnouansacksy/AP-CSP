# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\mingw64\bin\cmake.exe

# The command to remove a file.
RM = C:\mingw64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\build"

# Include any dependencies generated for this target.
include CMakeFiles/MSOE2013-1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MSOE2013-1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MSOE2013-1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MSOE2013-1.dir/flags.make

CMakeFiles/MSOE2013-1.dir/MSOE2013-1.c.obj: CMakeFiles/MSOE2013-1.dir/flags.make
CMakeFiles/MSOE2013-1.dir/MSOE2013-1.c.obj: C:/Users/Alex\ Nouansacksy/Desktop/AP-CSP/AP-CSP/MSOE2013-1.c
CMakeFiles/MSOE2013-1.dir/MSOE2013-1.c.obj: CMakeFiles/MSOE2013-1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/MSOE2013-1.dir/MSOE2013-1.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MSOE2013-1.dir/MSOE2013-1.c.obj -MF CMakeFiles\MSOE2013-1.dir\MSOE2013-1.c.obj.d -o CMakeFiles\MSOE2013-1.dir\MSOE2013-1.c.obj -c "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\MSOE2013-1.c"

CMakeFiles/MSOE2013-1.dir/MSOE2013-1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/MSOE2013-1.dir/MSOE2013-1.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\MSOE2013-1.c" > CMakeFiles\MSOE2013-1.dir\MSOE2013-1.c.i

CMakeFiles/MSOE2013-1.dir/MSOE2013-1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/MSOE2013-1.dir/MSOE2013-1.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\MSOE2013-1.c" -o CMakeFiles\MSOE2013-1.dir\MSOE2013-1.c.s

# Object files for target MSOE2013-1
MSOE2013__1_OBJECTS = \
"CMakeFiles/MSOE2013-1.dir/MSOE2013-1.c.obj"

# External object files for target MSOE2013-1
MSOE2013__1_EXTERNAL_OBJECTS =

MSOE2013-1.exe: CMakeFiles/MSOE2013-1.dir/MSOE2013-1.c.obj
MSOE2013-1.exe: CMakeFiles/MSOE2013-1.dir/build.make
MSOE2013-1.exe: CMakeFiles/MSOE2013-1.dir/linkLibs.rsp
MSOE2013-1.exe: CMakeFiles/MSOE2013-1.dir/objects1.rsp
MSOE2013-1.exe: CMakeFiles/MSOE2013-1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable MSOE2013-1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MSOE2013-1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MSOE2013-1.dir/build: MSOE2013-1.exe
.PHONY : CMakeFiles/MSOE2013-1.dir/build

CMakeFiles/MSOE2013-1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MSOE2013-1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MSOE2013-1.dir/clean

CMakeFiles/MSOE2013-1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP" "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP" "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\build" "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\build" "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\build\CMakeFiles\MSOE2013-1.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/MSOE2013-1.dir/depend
