# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/vitalityedge42/Documents/My Programs/ViaChess/Client"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/vitalityedge42/Documents/My Programs/ViaChess/Client/build"

# Include any dependencies generated for this target.
include CMakeFiles/Platformer2D.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Platformer2D.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Platformer2D.dir/flags.make

CMakeFiles/Platformer2D.dir/code/main.cpp.o: CMakeFiles/Platformer2D.dir/flags.make
CMakeFiles/Platformer2D.dir/code/main.cpp.o: ../code/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/vitalityedge42/Documents/My Programs/ViaChess/Client/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Platformer2D.dir/code/main.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Platformer2D.dir/code/main.cpp.o -c "/home/vitalityedge42/Documents/My Programs/ViaChess/Client/code/main.cpp"

CMakeFiles/Platformer2D.dir/code/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Platformer2D.dir/code/main.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/vitalityedge42/Documents/My Programs/ViaChess/Client/code/main.cpp" > CMakeFiles/Platformer2D.dir/code/main.cpp.i

CMakeFiles/Platformer2D.dir/code/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Platformer2D.dir/code/main.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/vitalityedge42/Documents/My Programs/ViaChess/Client/code/main.cpp" -o CMakeFiles/Platformer2D.dir/code/main.cpp.s

# Object files for target Platformer2D
Platformer2D_OBJECTS = \
"CMakeFiles/Platformer2D.dir/code/main.cpp.o"

# External object files for target Platformer2D
Platformer2D_EXTERNAL_OBJECTS =

Platformer2D: CMakeFiles/Platformer2D.dir/code/main.cpp.o
Platformer2D: CMakeFiles/Platformer2D.dir/build.make
Platformer2D: _deps/sfml-build/lib/libsfml-graphics-d.so.2.5.1
Platformer2D: _deps/sfml-build/lib/libsfml-window-d.so.2.5.1
Platformer2D: _deps/sfml-build/lib/libsfml-audio-d.so.2.5.1
Platformer2D: _deps/sfml-build/lib/libsfml-network-d.so.2.5.1
Platformer2D: _deps/sfml-build/lib/libsfml-system-d.so.2.5.1
Platformer2D: CMakeFiles/Platformer2D.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/vitalityedge42/Documents/My Programs/ViaChess/Client/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Platformer2D"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Platformer2D.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Platformer2D.dir/build: Platformer2D

.PHONY : CMakeFiles/Platformer2D.dir/build

CMakeFiles/Platformer2D.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Platformer2D.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Platformer2D.dir/clean

CMakeFiles/Platformer2D.dir/depend:
	cd "/home/vitalityedge42/Documents/My Programs/ViaChess/Client/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/vitalityedge42/Documents/My Programs/ViaChess/Client" "/home/vitalityedge42/Documents/My Programs/ViaChess/Client" "/home/vitalityedge42/Documents/My Programs/ViaChess/Client/build" "/home/vitalityedge42/Documents/My Programs/ViaChess/Client/build" "/home/vitalityedge42/Documents/My Programs/ViaChess/Client/build/CMakeFiles/Platformer2D.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Platformer2D.dir/depend

