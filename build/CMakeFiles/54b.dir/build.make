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
include CMakeFiles/54b.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/54b.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/54b.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/54b.dir/flags.make

CMakeFiles/54b.dir/54b.c.obj: CMakeFiles/54b.dir/flags.make
CMakeFiles/54b.dir/54b.c.obj: C:/Users/Alex\ Nouansacksy/Desktop/AP-CSP/AP-CSP/54b.c
CMakeFiles/54b.dir/54b.c.obj: CMakeFiles/54b.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/54b.dir/54b.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/54b.dir/54b.c.obj -MF CMakeFiles\54b.dir\54b.c.obj.d -o CMakeFiles\54b.dir\54b.c.obj -c "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\54b.c"

CMakeFiles/54b.dir/54b.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/54b.dir/54b.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\54b.c" > CMakeFiles\54b.dir\54b.c.i

CMakeFiles/54b.dir/54b.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/54b.dir/54b.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\54b.c" -o CMakeFiles\54b.dir\54b.c.s

# Object files for target 54b
54b_OBJECTS = \
"CMakeFiles/54b.dir/54b.c.obj"

# External object files for target 54b
54b_EXTERNAL_OBJECTS =

54b.exe: CMakeFiles/54b.dir/54b.c.obj
54b.exe: CMakeFiles/54b.dir/build.make
54b.exe: CMakeFiles/54b.dir/linkLibs.rsp
54b.exe: CMakeFiles/54b.dir/objects1.rsp
54b.exe: CMakeFiles/54b.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 54b.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\54b.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/54b.dir/build: 54b.exe
.PHONY : CMakeFiles/54b.dir/build

CMakeFiles/54b.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\54b.dir\cmake_clean.cmake
.PHONY : CMakeFiles/54b.dir/clean

CMakeFiles/54b.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP" "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP" "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\build" "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\build" "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\build\CMakeFiles\54b.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/54b.dir/depend
