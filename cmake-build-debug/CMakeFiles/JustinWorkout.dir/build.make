# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Justin\CLionProjects\JustinWorkout

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Justin\CLionProjects\JustinWorkout\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/JustinWorkout.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/JustinWorkout.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/JustinWorkout.dir/flags.make

CMakeFiles/JustinWorkout.dir/main.cpp.obj: CMakeFiles/JustinWorkout.dir/flags.make
CMakeFiles/JustinWorkout.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Justin\CLionProjects\JustinWorkout\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/JustinWorkout.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\JustinWorkout.dir\main.cpp.obj -c C:\Users\Justin\CLionProjects\JustinWorkout\main.cpp

CMakeFiles/JustinWorkout.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/JustinWorkout.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Justin\CLionProjects\JustinWorkout\main.cpp > CMakeFiles\JustinWorkout.dir\main.cpp.i

CMakeFiles/JustinWorkout.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/JustinWorkout.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Justin\CLionProjects\JustinWorkout\main.cpp -o CMakeFiles\JustinWorkout.dir\main.cpp.s

CMakeFiles/JustinWorkout.dir/workout.cpp.obj: CMakeFiles/JustinWorkout.dir/flags.make
CMakeFiles/JustinWorkout.dir/workout.cpp.obj: ../workout.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Justin\CLionProjects\JustinWorkout\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/JustinWorkout.dir/workout.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\JustinWorkout.dir\workout.cpp.obj -c C:\Users\Justin\CLionProjects\JustinWorkout\workout.cpp

CMakeFiles/JustinWorkout.dir/workout.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/JustinWorkout.dir/workout.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Justin\CLionProjects\JustinWorkout\workout.cpp > CMakeFiles\JustinWorkout.dir\workout.cpp.i

CMakeFiles/JustinWorkout.dir/workout.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/JustinWorkout.dir/workout.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Justin\CLionProjects\JustinWorkout\workout.cpp -o CMakeFiles\JustinWorkout.dir\workout.cpp.s

CMakeFiles/JustinWorkout.dir/exercise.cpp.obj: CMakeFiles/JustinWorkout.dir/flags.make
CMakeFiles/JustinWorkout.dir/exercise.cpp.obj: ../exercise.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Justin\CLionProjects\JustinWorkout\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/JustinWorkout.dir/exercise.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\JustinWorkout.dir\exercise.cpp.obj -c C:\Users\Justin\CLionProjects\JustinWorkout\exercise.cpp

CMakeFiles/JustinWorkout.dir/exercise.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/JustinWorkout.dir/exercise.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Justin\CLionProjects\JustinWorkout\exercise.cpp > CMakeFiles\JustinWorkout.dir\exercise.cpp.i

CMakeFiles/JustinWorkout.dir/exercise.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/JustinWorkout.dir/exercise.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Justin\CLionProjects\JustinWorkout\exercise.cpp -o CMakeFiles\JustinWorkout.dir\exercise.cpp.s

# Object files for target JustinWorkout
JustinWorkout_OBJECTS = \
"CMakeFiles/JustinWorkout.dir/main.cpp.obj" \
"CMakeFiles/JustinWorkout.dir/workout.cpp.obj" \
"CMakeFiles/JustinWorkout.dir/exercise.cpp.obj"

# External object files for target JustinWorkout
JustinWorkout_EXTERNAL_OBJECTS =

JustinWorkout.exe: CMakeFiles/JustinWorkout.dir/main.cpp.obj
JustinWorkout.exe: CMakeFiles/JustinWorkout.dir/workout.cpp.obj
JustinWorkout.exe: CMakeFiles/JustinWorkout.dir/exercise.cpp.obj
JustinWorkout.exe: CMakeFiles/JustinWorkout.dir/build.make
JustinWorkout.exe: CMakeFiles/JustinWorkout.dir/linklibs.rsp
JustinWorkout.exe: CMakeFiles/JustinWorkout.dir/objects1.rsp
JustinWorkout.exe: CMakeFiles/JustinWorkout.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Justin\CLionProjects\JustinWorkout\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable JustinWorkout.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\JustinWorkout.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/JustinWorkout.dir/build: JustinWorkout.exe
.PHONY : CMakeFiles/JustinWorkout.dir/build

CMakeFiles/JustinWorkout.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\JustinWorkout.dir\cmake_clean.cmake
.PHONY : CMakeFiles/JustinWorkout.dir/clean

CMakeFiles/JustinWorkout.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Justin\CLionProjects\JustinWorkout C:\Users\Justin\CLionProjects\JustinWorkout C:\Users\Justin\CLionProjects\JustinWorkout\cmake-build-debug C:\Users\Justin\CLionProjects\JustinWorkout\cmake-build-debug C:\Users\Justin\CLionProjects\JustinWorkout\cmake-build-debug\CMakeFiles\JustinWorkout.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/JustinWorkout.dir/depend

