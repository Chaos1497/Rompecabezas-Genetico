# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/esteban/clion-2017.1.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/esteban/clion-2017.1.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/esteban/RompecabezasGenetico

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/esteban/RompecabezasGenetico/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/RompecabezasGenetico.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/RompecabezasGenetico.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RompecabezasGenetico.dir/flags.make

CMakeFiles/RompecabezasGenetico.dir/main.cpp.o: CMakeFiles/RompecabezasGenetico.dir/flags.make
CMakeFiles/RompecabezasGenetico.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/esteban/RompecabezasGenetico/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RompecabezasGenetico.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RompecabezasGenetico.dir/main.cpp.o -c /home/esteban/RompecabezasGenetico/main.cpp

CMakeFiles/RompecabezasGenetico.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RompecabezasGenetico.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/esteban/RompecabezasGenetico/main.cpp > CMakeFiles/RompecabezasGenetico.dir/main.cpp.i

CMakeFiles/RompecabezasGenetico.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RompecabezasGenetico.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/esteban/RompecabezasGenetico/main.cpp -o CMakeFiles/RompecabezasGenetico.dir/main.cpp.s

CMakeFiles/RompecabezasGenetico.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/RompecabezasGenetico.dir/main.cpp.o.requires

CMakeFiles/RompecabezasGenetico.dir/main.cpp.o.provides: CMakeFiles/RompecabezasGenetico.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/RompecabezasGenetico.dir/build.make CMakeFiles/RompecabezasGenetico.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/RompecabezasGenetico.dir/main.cpp.o.provides

CMakeFiles/RompecabezasGenetico.dir/main.cpp.o.provides.build: CMakeFiles/RompecabezasGenetico.dir/main.cpp.o


CMakeFiles/RompecabezasGenetico.dir/dosxdos.cpp.o: CMakeFiles/RompecabezasGenetico.dir/flags.make
CMakeFiles/RompecabezasGenetico.dir/dosxdos.cpp.o: ../dosxdos.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/esteban/RompecabezasGenetico/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/RompecabezasGenetico.dir/dosxdos.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RompecabezasGenetico.dir/dosxdos.cpp.o -c /home/esteban/RompecabezasGenetico/dosxdos.cpp

CMakeFiles/RompecabezasGenetico.dir/dosxdos.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RompecabezasGenetico.dir/dosxdos.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/esteban/RompecabezasGenetico/dosxdos.cpp > CMakeFiles/RompecabezasGenetico.dir/dosxdos.cpp.i

CMakeFiles/RompecabezasGenetico.dir/dosxdos.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RompecabezasGenetico.dir/dosxdos.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/esteban/RompecabezasGenetico/dosxdos.cpp -o CMakeFiles/RompecabezasGenetico.dir/dosxdos.cpp.s

CMakeFiles/RompecabezasGenetico.dir/dosxdos.cpp.o.requires:

.PHONY : CMakeFiles/RompecabezasGenetico.dir/dosxdos.cpp.o.requires

CMakeFiles/RompecabezasGenetico.dir/dosxdos.cpp.o.provides: CMakeFiles/RompecabezasGenetico.dir/dosxdos.cpp.o.requires
	$(MAKE) -f CMakeFiles/RompecabezasGenetico.dir/build.make CMakeFiles/RompecabezasGenetico.dir/dosxdos.cpp.o.provides.build
.PHONY : CMakeFiles/RompecabezasGenetico.dir/dosxdos.cpp.o.provides

CMakeFiles/RompecabezasGenetico.dir/dosxdos.cpp.o.provides.build: CMakeFiles/RompecabezasGenetico.dir/dosxdos.cpp.o


CMakeFiles/RompecabezasGenetico.dir/cincoxcinco.cpp.o: CMakeFiles/RompecabezasGenetico.dir/flags.make
CMakeFiles/RompecabezasGenetico.dir/cincoxcinco.cpp.o: ../cincoxcinco.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/esteban/RompecabezasGenetico/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/RompecabezasGenetico.dir/cincoxcinco.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RompecabezasGenetico.dir/cincoxcinco.cpp.o -c /home/esteban/RompecabezasGenetico/cincoxcinco.cpp

CMakeFiles/RompecabezasGenetico.dir/cincoxcinco.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RompecabezasGenetico.dir/cincoxcinco.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/esteban/RompecabezasGenetico/cincoxcinco.cpp > CMakeFiles/RompecabezasGenetico.dir/cincoxcinco.cpp.i

CMakeFiles/RompecabezasGenetico.dir/cincoxcinco.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RompecabezasGenetico.dir/cincoxcinco.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/esteban/RompecabezasGenetico/cincoxcinco.cpp -o CMakeFiles/RompecabezasGenetico.dir/cincoxcinco.cpp.s

CMakeFiles/RompecabezasGenetico.dir/cincoxcinco.cpp.o.requires:

.PHONY : CMakeFiles/RompecabezasGenetico.dir/cincoxcinco.cpp.o.requires

CMakeFiles/RompecabezasGenetico.dir/cincoxcinco.cpp.o.provides: CMakeFiles/RompecabezasGenetico.dir/cincoxcinco.cpp.o.requires
	$(MAKE) -f CMakeFiles/RompecabezasGenetico.dir/build.make CMakeFiles/RompecabezasGenetico.dir/cincoxcinco.cpp.o.provides.build
.PHONY : CMakeFiles/RompecabezasGenetico.dir/cincoxcinco.cpp.o.provides

CMakeFiles/RompecabezasGenetico.dir/cincoxcinco.cpp.o.provides.build: CMakeFiles/RompecabezasGenetico.dir/cincoxcinco.cpp.o


CMakeFiles/RompecabezasGenetico.dir/cuatroxcuatro.cpp.o: CMakeFiles/RompecabezasGenetico.dir/flags.make
CMakeFiles/RompecabezasGenetico.dir/cuatroxcuatro.cpp.o: ../cuatroxcuatro.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/esteban/RompecabezasGenetico/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/RompecabezasGenetico.dir/cuatroxcuatro.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RompecabezasGenetico.dir/cuatroxcuatro.cpp.o -c /home/esteban/RompecabezasGenetico/cuatroxcuatro.cpp

CMakeFiles/RompecabezasGenetico.dir/cuatroxcuatro.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RompecabezasGenetico.dir/cuatroxcuatro.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/esteban/RompecabezasGenetico/cuatroxcuatro.cpp > CMakeFiles/RompecabezasGenetico.dir/cuatroxcuatro.cpp.i

CMakeFiles/RompecabezasGenetico.dir/cuatroxcuatro.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RompecabezasGenetico.dir/cuatroxcuatro.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/esteban/RompecabezasGenetico/cuatroxcuatro.cpp -o CMakeFiles/RompecabezasGenetico.dir/cuatroxcuatro.cpp.s

CMakeFiles/RompecabezasGenetico.dir/cuatroxcuatro.cpp.o.requires:

.PHONY : CMakeFiles/RompecabezasGenetico.dir/cuatroxcuatro.cpp.o.requires

CMakeFiles/RompecabezasGenetico.dir/cuatroxcuatro.cpp.o.provides: CMakeFiles/RompecabezasGenetico.dir/cuatroxcuatro.cpp.o.requires
	$(MAKE) -f CMakeFiles/RompecabezasGenetico.dir/build.make CMakeFiles/RompecabezasGenetico.dir/cuatroxcuatro.cpp.o.provides.build
.PHONY : CMakeFiles/RompecabezasGenetico.dir/cuatroxcuatro.cpp.o.provides

CMakeFiles/RompecabezasGenetico.dir/cuatroxcuatro.cpp.o.provides.build: CMakeFiles/RompecabezasGenetico.dir/cuatroxcuatro.cpp.o


CMakeFiles/RompecabezasGenetico.dir/tresxtres.cpp.o: CMakeFiles/RompecabezasGenetico.dir/flags.make
CMakeFiles/RompecabezasGenetico.dir/tresxtres.cpp.o: ../tresxtres.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/esteban/RompecabezasGenetico/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/RompecabezasGenetico.dir/tresxtres.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RompecabezasGenetico.dir/tresxtres.cpp.o -c /home/esteban/RompecabezasGenetico/tresxtres.cpp

CMakeFiles/RompecabezasGenetico.dir/tresxtres.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RompecabezasGenetico.dir/tresxtres.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/esteban/RompecabezasGenetico/tresxtres.cpp > CMakeFiles/RompecabezasGenetico.dir/tresxtres.cpp.i

CMakeFiles/RompecabezasGenetico.dir/tresxtres.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RompecabezasGenetico.dir/tresxtres.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/esteban/RompecabezasGenetico/tresxtres.cpp -o CMakeFiles/RompecabezasGenetico.dir/tresxtres.cpp.s

CMakeFiles/RompecabezasGenetico.dir/tresxtres.cpp.o.requires:

.PHONY : CMakeFiles/RompecabezasGenetico.dir/tresxtres.cpp.o.requires

CMakeFiles/RompecabezasGenetico.dir/tresxtres.cpp.o.provides: CMakeFiles/RompecabezasGenetico.dir/tresxtres.cpp.o.requires
	$(MAKE) -f CMakeFiles/RompecabezasGenetico.dir/build.make CMakeFiles/RompecabezasGenetico.dir/tresxtres.cpp.o.provides.build
.PHONY : CMakeFiles/RompecabezasGenetico.dir/tresxtres.cpp.o.provides

CMakeFiles/RompecabezasGenetico.dir/tresxtres.cpp.o.provides.build: CMakeFiles/RompecabezasGenetico.dir/tresxtres.cpp.o


# Object files for target RompecabezasGenetico
RompecabezasGenetico_OBJECTS = \
"CMakeFiles/RompecabezasGenetico.dir/main.cpp.o" \
"CMakeFiles/RompecabezasGenetico.dir/dosxdos.cpp.o" \
"CMakeFiles/RompecabezasGenetico.dir/cincoxcinco.cpp.o" \
"CMakeFiles/RompecabezasGenetico.dir/cuatroxcuatro.cpp.o" \
"CMakeFiles/RompecabezasGenetico.dir/tresxtres.cpp.o"

# External object files for target RompecabezasGenetico
RompecabezasGenetico_EXTERNAL_OBJECTS =

RompecabezasGenetico: CMakeFiles/RompecabezasGenetico.dir/main.cpp.o
RompecabezasGenetico: CMakeFiles/RompecabezasGenetico.dir/dosxdos.cpp.o
RompecabezasGenetico: CMakeFiles/RompecabezasGenetico.dir/cincoxcinco.cpp.o
RompecabezasGenetico: CMakeFiles/RompecabezasGenetico.dir/cuatroxcuatro.cpp.o
RompecabezasGenetico: CMakeFiles/RompecabezasGenetico.dir/tresxtres.cpp.o
RompecabezasGenetico: CMakeFiles/RompecabezasGenetico.dir/build.make
RompecabezasGenetico: /usr/lib/x86_64-linux-gnu/libsfml-system.so
RompecabezasGenetico: /usr/lib/x86_64-linux-gnu/libsfml-graphics.so
RompecabezasGenetico: /usr/lib/x86_64-linux-gnu/libsfml-window.so
RompecabezasGenetico: /usr/lib/x86_64-linux-gnu/libsfml-network.so
RompecabezasGenetico: /usr/lib/x86_64-linux-gnu/libsfml-audio.so
RompecabezasGenetico: CMakeFiles/RompecabezasGenetico.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/esteban/RompecabezasGenetico/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable RompecabezasGenetico"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RompecabezasGenetico.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RompecabezasGenetico.dir/build: RompecabezasGenetico

.PHONY : CMakeFiles/RompecabezasGenetico.dir/build

CMakeFiles/RompecabezasGenetico.dir/requires: CMakeFiles/RompecabezasGenetico.dir/main.cpp.o.requires
CMakeFiles/RompecabezasGenetico.dir/requires: CMakeFiles/RompecabezasGenetico.dir/dosxdos.cpp.o.requires
CMakeFiles/RompecabezasGenetico.dir/requires: CMakeFiles/RompecabezasGenetico.dir/cincoxcinco.cpp.o.requires
CMakeFiles/RompecabezasGenetico.dir/requires: CMakeFiles/RompecabezasGenetico.dir/cuatroxcuatro.cpp.o.requires
CMakeFiles/RompecabezasGenetico.dir/requires: CMakeFiles/RompecabezasGenetico.dir/tresxtres.cpp.o.requires

.PHONY : CMakeFiles/RompecabezasGenetico.dir/requires

CMakeFiles/RompecabezasGenetico.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/RompecabezasGenetico.dir/cmake_clean.cmake
.PHONY : CMakeFiles/RompecabezasGenetico.dir/clean

CMakeFiles/RompecabezasGenetico.dir/depend:
	cd /home/esteban/RompecabezasGenetico/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/esteban/RompecabezasGenetico /home/esteban/RompecabezasGenetico /home/esteban/RompecabezasGenetico/cmake-build-debug /home/esteban/RompecabezasGenetico/cmake-build-debug /home/esteban/RompecabezasGenetico/cmake-build-debug/CMakeFiles/RompecabezasGenetico.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RompecabezasGenetico.dir/depend

