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
include CMakeFiles/StringInterviewQuestion12.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/StringInterviewQuestion12.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/StringInterviewQuestion12.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/StringInterviewQuestion12.dir/flags.make

CMakeFiles/StringInterviewQuestion12.dir/StringInterviewQuestion12.c.obj: CMakeFiles/StringInterviewQuestion12.dir/flags.make
CMakeFiles/StringInterviewQuestion12.dir/StringInterviewQuestion12.c.obj: C:/Users/Alex\ Nouansacksy/Desktop/AP-CSP/AP-CSP/StringInterviewQuestion12.c
CMakeFiles/StringInterviewQuestion12.dir/StringInterviewQuestion12.c.obj: CMakeFiles/StringInterviewQuestion12.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/StringInterviewQuestion12.dir/StringInterviewQuestion12.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/StringInterviewQuestion12.dir/StringInterviewQuestion12.c.obj -MF CMakeFiles\StringInterviewQuestion12.dir\StringInterviewQuestion12.c.obj.d -o CMakeFiles\StringInterviewQuestion12.dir\StringInterviewQuestion12.c.obj -c "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\StringInterviewQuestion12.c"

CMakeFiles/StringInterviewQuestion12.dir/StringInterviewQuestion12.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/StringInterviewQuestion12.dir/StringInterviewQuestion12.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\StringInterviewQuestion12.c" > CMakeFiles\StringInterviewQuestion12.dir\StringInterviewQuestion12.c.i

CMakeFiles/StringInterviewQuestion12.dir/StringInterviewQuestion12.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/StringInterviewQuestion12.dir/StringInterviewQuestion12.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\StringInterviewQuestion12.c" -o CMakeFiles\StringInterviewQuestion12.dir\StringInterviewQuestion12.c.s

# Object files for target StringInterviewQuestion12
StringInterviewQuestion12_OBJECTS = \
"CMakeFiles/StringInterviewQuestion12.dir/StringInterviewQuestion12.c.obj"

# External object files for target StringInterviewQuestion12
StringInterviewQuestion12_EXTERNAL_OBJECTS =

StringInterviewQuestion12.exe: CMakeFiles/StringInterviewQuestion12.dir/StringInterviewQuestion12.c.obj
StringInterviewQuestion12.exe: CMakeFiles/StringInterviewQuestion12.dir/build.make
StringInterviewQuestion12.exe: CMakeFiles/StringInterviewQuestion12.dir/linkLibs.rsp
StringInterviewQuestion12.exe: CMakeFiles/StringInterviewQuestion12.dir/objects1.rsp
StringInterviewQuestion12.exe: CMakeFiles/StringInterviewQuestion12.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable StringInterviewQuestion12.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\StringInterviewQuestion12.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/StringInterviewQuestion12.dir/build: StringInterviewQuestion12.exe
.PHONY : CMakeFiles/StringInterviewQuestion12.dir/build

CMakeFiles/StringInterviewQuestion12.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\StringInterviewQuestion12.dir\cmake_clean.cmake
.PHONY : CMakeFiles/StringInterviewQuestion12.dir/clean

CMakeFiles/StringInterviewQuestion12.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP" "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP" "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\build" "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\build" "C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP\build\CMakeFiles\StringInterviewQuestion12.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/StringInterviewQuestion12.dir/depend
