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
include CMakeFiles/54c.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/54c.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/54c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/54c.dir/flags.make

CMakeFiles/54c.dir/54c.c.obj: CMakeFiles/54c.dir/flags.make
CMakeFiles/54c.dir/54c.c.obj: C:/Users/Alex\ Nouansacksy/Desktop/AP-CSP/AP-CSP/54c.c
CMakeFiles/54c.dir/54c.c.obj: CMakeFiles/54c.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/54c.dir/54c.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/54c.dir/54c.c.obj -MF CMakeFiles\54c.dir\54c.c.obj.d -o CMakeFiles\54c.dir\54c.c.obj -c "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\54c.c"

CMakeFiles/54c.dir/54c.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/54c.dir/54c.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\54c.c" > CMakeFiles\54c.dir\54c.c.i

CMakeFiles/54c.dir/54c.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/54c.dir/54c.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\54c.c" -o CMakeFiles\54c.dir\54c.c.s

# Object files for target 54c
54c_OBJECTS = \
"CMakeFiles/54c.dir/54c.c.obj"

# External object files for target 54c
54c_EXTERNAL_OBJECTS =

54c.exe: CMakeFiles/54c.dir/54c.c.obj
54c.exe: CMakeFiles/54c.dir/build.make
54c.exe: CMakeFiles/54c.dir/linkLibs.rsp
54c.exe: CMakeFiles/54c.dir/objects1.rsp
54c.exe: CMakeFiles/54c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 54c.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\54c.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/54c.dir/build: 54c.exe
.PHONY : CMakeFiles/54c.dir/build

CMakeFiles/54c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\54c.dir\cmake_clean.cmake
.PHONY : CMakeFiles/54c.dir/clean

CMakeFiles/54c.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP" "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP" "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\build" "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\build" "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\build\CMakeFiles\54c.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/54c.dir/depend

