# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Studia\Programowanie Obiektowe\Tetris"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Studia\Programowanie Obiektowe\Tetris\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Tetris.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Tetris.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Tetris.dir/flags.make

CMakeFiles/Tetris.dir/main.cpp.obj: CMakeFiles/Tetris.dir/flags.make
CMakeFiles/Tetris.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Studia\Programowanie Obiektowe\Tetris\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Tetris.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Tetris.dir\main.cpp.obj -c "D:\Studia\Programowanie Obiektowe\Tetris\main.cpp"

CMakeFiles/Tetris.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tetris.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Studia\Programowanie Obiektowe\Tetris\main.cpp" > CMakeFiles\Tetris.dir\main.cpp.i

CMakeFiles/Tetris.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tetris.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Studia\Programowanie Obiektowe\Tetris\main.cpp" -o CMakeFiles\Tetris.dir\main.cpp.s

# Object files for target Tetris
Tetris_OBJECTS = \
"CMakeFiles/Tetris.dir/main.cpp.obj"

# External object files for target Tetris
Tetris_EXTERNAL_OBJECTS =

Tetris.exe: CMakeFiles/Tetris.dir/main.cpp.obj
Tetris.exe: CMakeFiles/Tetris.dir/build.make
Tetris.exe: CMakeFiles/Tetris.dir/linklibs.rsp
Tetris.exe: CMakeFiles/Tetris.dir/objects1.rsp
Tetris.exe: CMakeFiles/Tetris.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Studia\Programowanie Obiektowe\Tetris\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Tetris.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Tetris.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Tetris.dir/build: Tetris.exe

.PHONY : CMakeFiles/Tetris.dir/build

CMakeFiles/Tetris.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Tetris.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Tetris.dir/clean

CMakeFiles/Tetris.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Studia\Programowanie Obiektowe\Tetris" "D:\Studia\Programowanie Obiektowe\Tetris" "D:\Studia\Programowanie Obiektowe\Tetris\cmake-build-debug" "D:\Studia\Programowanie Obiektowe\Tetris\cmake-build-debug" "D:\Studia\Programowanie Obiektowe\Tetris\cmake-build-debug\CMakeFiles\Tetris.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Tetris.dir/depend
