# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = "E:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\CLionProjects\webart

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\CLionProjects\webart\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/webart.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/webart.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/webart.dir/flags.make

CMakeFiles/webart.dir/main.cpp.obj: CMakeFiles/webart.dir/flags.make
CMakeFiles/webart.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\CLionProjects\webart\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/webart.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\webart.dir\main.cpp.obj -c E:\CLionProjects\webart\main.cpp

CMakeFiles/webart.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/webart.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\CLionProjects\webart\main.cpp > CMakeFiles\webart.dir\main.cpp.i

CMakeFiles/webart.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/webart.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\CLionProjects\webart\main.cpp -o CMakeFiles\webart.dir\main.cpp.s

# Object files for target webart
webart_OBJECTS = \
"CMakeFiles/webart.dir/main.cpp.obj"

# External object files for target webart
webart_EXTERNAL_OBJECTS =

webart.exe: CMakeFiles/webart.dir/main.cpp.obj
webart.exe: CMakeFiles/webart.dir/build.make
webart.exe: CMakeFiles/webart.dir/linklibs.rsp
webart.exe: CMakeFiles/webart.dir/objects1.rsp
webart.exe: CMakeFiles/webart.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\CLionProjects\webart\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable webart.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\webart.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/webart.dir/build: webart.exe

.PHONY : CMakeFiles/webart.dir/build

CMakeFiles/webart.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\webart.dir\cmake_clean.cmake
.PHONY : CMakeFiles/webart.dir/clean

CMakeFiles/webart.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\CLionProjects\webart E:\CLionProjects\webart E:\CLionProjects\webart\cmake-build-debug E:\CLionProjects\webart\cmake-build-debug E:\CLionProjects\webart\cmake-build-debug\CMakeFiles\webart.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/webart.dir/depend
