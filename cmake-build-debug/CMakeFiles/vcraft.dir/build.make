# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /home/dawid/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/203.7148.70/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/dawid/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/203.7148.70/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dawid/dev/vcraft

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dawid/dev/vcraft/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/vcraft.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/vcraft.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/vcraft.dir/flags.make

CMakeFiles/vcraft.dir/src/graphics/Window.cpp.o: CMakeFiles/vcraft.dir/flags.make
CMakeFiles/vcraft.dir/src/graphics/Window.cpp.o: ../src/graphics/Window.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dawid/dev/vcraft/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/vcraft.dir/src/graphics/Window.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vcraft.dir/src/graphics/Window.cpp.o -c /home/dawid/dev/vcraft/src/graphics/Window.cpp

CMakeFiles/vcraft.dir/src/graphics/Window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vcraft.dir/src/graphics/Window.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dawid/dev/vcraft/src/graphics/Window.cpp > CMakeFiles/vcraft.dir/src/graphics/Window.cpp.i

CMakeFiles/vcraft.dir/src/graphics/Window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vcraft.dir/src/graphics/Window.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dawid/dev/vcraft/src/graphics/Window.cpp -o CMakeFiles/vcraft.dir/src/graphics/Window.cpp.s

CMakeFiles/vcraft.dir/lib/glad/src/glad.c.o: CMakeFiles/vcraft.dir/flags.make
CMakeFiles/vcraft.dir/lib/glad/src/glad.c.o: ../lib/glad/src/glad.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dawid/dev/vcraft/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/vcraft.dir/lib/glad/src/glad.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/vcraft.dir/lib/glad/src/glad.c.o   -c /home/dawid/dev/vcraft/lib/glad/src/glad.c

CMakeFiles/vcraft.dir/lib/glad/src/glad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/vcraft.dir/lib/glad/src/glad.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/dawid/dev/vcraft/lib/glad/src/glad.c > CMakeFiles/vcraft.dir/lib/glad/src/glad.c.i

CMakeFiles/vcraft.dir/lib/glad/src/glad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/vcraft.dir/lib/glad/src/glad.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/dawid/dev/vcraft/lib/glad/src/glad.c -o CMakeFiles/vcraft.dir/lib/glad/src/glad.c.s

CMakeFiles/vcraft.dir/src/Main.cpp.o: CMakeFiles/vcraft.dir/flags.make
CMakeFiles/vcraft.dir/src/Main.cpp.o: ../src/Main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dawid/dev/vcraft/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/vcraft.dir/src/Main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vcraft.dir/src/Main.cpp.o -c /home/dawid/dev/vcraft/src/Main.cpp

CMakeFiles/vcraft.dir/src/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vcraft.dir/src/Main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dawid/dev/vcraft/src/Main.cpp > CMakeFiles/vcraft.dir/src/Main.cpp.i

CMakeFiles/vcraft.dir/src/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vcraft.dir/src/Main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dawid/dev/vcraft/src/Main.cpp -o CMakeFiles/vcraft.dir/src/Main.cpp.s

CMakeFiles/vcraft.dir/src/Engine.cpp.o: CMakeFiles/vcraft.dir/flags.make
CMakeFiles/vcraft.dir/src/Engine.cpp.o: ../src/Engine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dawid/dev/vcraft/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/vcraft.dir/src/Engine.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vcraft.dir/src/Engine.cpp.o -c /home/dawid/dev/vcraft/src/Engine.cpp

CMakeFiles/vcraft.dir/src/Engine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vcraft.dir/src/Engine.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dawid/dev/vcraft/src/Engine.cpp > CMakeFiles/vcraft.dir/src/Engine.cpp.i

CMakeFiles/vcraft.dir/src/Engine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vcraft.dir/src/Engine.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dawid/dev/vcraft/src/Engine.cpp -o CMakeFiles/vcraft.dir/src/Engine.cpp.s

CMakeFiles/vcraft.dir/src/graphics/Renderer.cpp.o: CMakeFiles/vcraft.dir/flags.make
CMakeFiles/vcraft.dir/src/graphics/Renderer.cpp.o: ../src/graphics/Renderer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dawid/dev/vcraft/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/vcraft.dir/src/graphics/Renderer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vcraft.dir/src/graphics/Renderer.cpp.o -c /home/dawid/dev/vcraft/src/graphics/Renderer.cpp

CMakeFiles/vcraft.dir/src/graphics/Renderer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vcraft.dir/src/graphics/Renderer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dawid/dev/vcraft/src/graphics/Renderer.cpp > CMakeFiles/vcraft.dir/src/graphics/Renderer.cpp.i

CMakeFiles/vcraft.dir/src/graphics/Renderer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vcraft.dir/src/graphics/Renderer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dawid/dev/vcraft/src/graphics/Renderer.cpp -o CMakeFiles/vcraft.dir/src/graphics/Renderer.cpp.s

CMakeFiles/vcraft.dir/src/graphics/Camera.cpp.o: CMakeFiles/vcraft.dir/flags.make
CMakeFiles/vcraft.dir/src/graphics/Camera.cpp.o: ../src/graphics/Camera.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dawid/dev/vcraft/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/vcraft.dir/src/graphics/Camera.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vcraft.dir/src/graphics/Camera.cpp.o -c /home/dawid/dev/vcraft/src/graphics/Camera.cpp

CMakeFiles/vcraft.dir/src/graphics/Camera.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vcraft.dir/src/graphics/Camera.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dawid/dev/vcraft/src/graphics/Camera.cpp > CMakeFiles/vcraft.dir/src/graphics/Camera.cpp.i

CMakeFiles/vcraft.dir/src/graphics/Camera.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vcraft.dir/src/graphics/Camera.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dawid/dev/vcraft/src/graphics/Camera.cpp -o CMakeFiles/vcraft.dir/src/graphics/Camera.cpp.s

CMakeFiles/vcraft.dir/src/graphics/Shader.cpp.o: CMakeFiles/vcraft.dir/flags.make
CMakeFiles/vcraft.dir/src/graphics/Shader.cpp.o: ../src/graphics/Shader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dawid/dev/vcraft/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/vcraft.dir/src/graphics/Shader.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vcraft.dir/src/graphics/Shader.cpp.o -c /home/dawid/dev/vcraft/src/graphics/Shader.cpp

CMakeFiles/vcraft.dir/src/graphics/Shader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vcraft.dir/src/graphics/Shader.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dawid/dev/vcraft/src/graphics/Shader.cpp > CMakeFiles/vcraft.dir/src/graphics/Shader.cpp.i

CMakeFiles/vcraft.dir/src/graphics/Shader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vcraft.dir/src/graphics/Shader.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dawid/dev/vcraft/src/graphics/Shader.cpp -o CMakeFiles/vcraft.dir/src/graphics/Shader.cpp.s

CMakeFiles/vcraft.dir/src/graphics/Vao.cpp.o: CMakeFiles/vcraft.dir/flags.make
CMakeFiles/vcraft.dir/src/graphics/Vao.cpp.o: ../src/graphics/Vao.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dawid/dev/vcraft/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/vcraft.dir/src/graphics/Vao.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vcraft.dir/src/graphics/Vao.cpp.o -c /home/dawid/dev/vcraft/src/graphics/Vao.cpp

CMakeFiles/vcraft.dir/src/graphics/Vao.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vcraft.dir/src/graphics/Vao.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dawid/dev/vcraft/src/graphics/Vao.cpp > CMakeFiles/vcraft.dir/src/graphics/Vao.cpp.i

CMakeFiles/vcraft.dir/src/graphics/Vao.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vcraft.dir/src/graphics/Vao.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dawid/dev/vcraft/src/graphics/Vao.cpp -o CMakeFiles/vcraft.dir/src/graphics/Vao.cpp.s

CMakeFiles/vcraft.dir/src/graphics/Vbo.cpp.o: CMakeFiles/vcraft.dir/flags.make
CMakeFiles/vcraft.dir/src/graphics/Vbo.cpp.o: ../src/graphics/Vbo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dawid/dev/vcraft/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/vcraft.dir/src/graphics/Vbo.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vcraft.dir/src/graphics/Vbo.cpp.o -c /home/dawid/dev/vcraft/src/graphics/Vbo.cpp

CMakeFiles/vcraft.dir/src/graphics/Vbo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vcraft.dir/src/graphics/Vbo.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dawid/dev/vcraft/src/graphics/Vbo.cpp > CMakeFiles/vcraft.dir/src/graphics/Vbo.cpp.i

CMakeFiles/vcraft.dir/src/graphics/Vbo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vcraft.dir/src/graphics/Vbo.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dawid/dev/vcraft/src/graphics/Vbo.cpp -o CMakeFiles/vcraft.dir/src/graphics/Vbo.cpp.s

CMakeFiles/vcraft.dir/src/graphics/Texture.cpp.o: CMakeFiles/vcraft.dir/flags.make
CMakeFiles/vcraft.dir/src/graphics/Texture.cpp.o: ../src/graphics/Texture.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dawid/dev/vcraft/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/vcraft.dir/src/graphics/Texture.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vcraft.dir/src/graphics/Texture.cpp.o -c /home/dawid/dev/vcraft/src/graphics/Texture.cpp

CMakeFiles/vcraft.dir/src/graphics/Texture.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vcraft.dir/src/graphics/Texture.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dawid/dev/vcraft/src/graphics/Texture.cpp > CMakeFiles/vcraft.dir/src/graphics/Texture.cpp.i

CMakeFiles/vcraft.dir/src/graphics/Texture.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vcraft.dir/src/graphics/Texture.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dawid/dev/vcraft/src/graphics/Texture.cpp -o CMakeFiles/vcraft.dir/src/graphics/Texture.cpp.s

CMakeFiles/vcraft.dir/src/graphics/ShadersBuffer.cpp.o: CMakeFiles/vcraft.dir/flags.make
CMakeFiles/vcraft.dir/src/graphics/ShadersBuffer.cpp.o: ../src/graphics/ShadersBuffer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dawid/dev/vcraft/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/vcraft.dir/src/graphics/ShadersBuffer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vcraft.dir/src/graphics/ShadersBuffer.cpp.o -c /home/dawid/dev/vcraft/src/graphics/ShadersBuffer.cpp

CMakeFiles/vcraft.dir/src/graphics/ShadersBuffer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vcraft.dir/src/graphics/ShadersBuffer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dawid/dev/vcraft/src/graphics/ShadersBuffer.cpp > CMakeFiles/vcraft.dir/src/graphics/ShadersBuffer.cpp.i

CMakeFiles/vcraft.dir/src/graphics/ShadersBuffer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vcraft.dir/src/graphics/ShadersBuffer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dawid/dev/vcraft/src/graphics/ShadersBuffer.cpp -o CMakeFiles/vcraft.dir/src/graphics/ShadersBuffer.cpp.s

CMakeFiles/vcraft.dir/src/graphics/TexturesBuffer.cpp.o: CMakeFiles/vcraft.dir/flags.make
CMakeFiles/vcraft.dir/src/graphics/TexturesBuffer.cpp.o: ../src/graphics/TexturesBuffer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dawid/dev/vcraft/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/vcraft.dir/src/graphics/TexturesBuffer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vcraft.dir/src/graphics/TexturesBuffer.cpp.o -c /home/dawid/dev/vcraft/src/graphics/TexturesBuffer.cpp

CMakeFiles/vcraft.dir/src/graphics/TexturesBuffer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vcraft.dir/src/graphics/TexturesBuffer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dawid/dev/vcraft/src/graphics/TexturesBuffer.cpp > CMakeFiles/vcraft.dir/src/graphics/TexturesBuffer.cpp.i

CMakeFiles/vcraft.dir/src/graphics/TexturesBuffer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vcraft.dir/src/graphics/TexturesBuffer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dawid/dev/vcraft/src/graphics/TexturesBuffer.cpp -o CMakeFiles/vcraft.dir/src/graphics/TexturesBuffer.cpp.s

# Object files for target vcraft
vcraft_OBJECTS = \
"CMakeFiles/vcraft.dir/src/graphics/Window.cpp.o" \
"CMakeFiles/vcraft.dir/lib/glad/src/glad.c.o" \
"CMakeFiles/vcraft.dir/src/Main.cpp.o" \
"CMakeFiles/vcraft.dir/src/Engine.cpp.o" \
"CMakeFiles/vcraft.dir/src/graphics/Renderer.cpp.o" \
"CMakeFiles/vcraft.dir/src/graphics/Camera.cpp.o" \
"CMakeFiles/vcraft.dir/src/graphics/Shader.cpp.o" \
"CMakeFiles/vcraft.dir/src/graphics/Vao.cpp.o" \
"CMakeFiles/vcraft.dir/src/graphics/Vbo.cpp.o" \
"CMakeFiles/vcraft.dir/src/graphics/Texture.cpp.o" \
"CMakeFiles/vcraft.dir/src/graphics/ShadersBuffer.cpp.o" \
"CMakeFiles/vcraft.dir/src/graphics/TexturesBuffer.cpp.o"

# External object files for target vcraft
vcraft_EXTERNAL_OBJECTS =

../build/vcraft: CMakeFiles/vcraft.dir/src/graphics/Window.cpp.o
../build/vcraft: CMakeFiles/vcraft.dir/lib/glad/src/glad.c.o
../build/vcraft: CMakeFiles/vcraft.dir/src/Main.cpp.o
../build/vcraft: CMakeFiles/vcraft.dir/src/Engine.cpp.o
../build/vcraft: CMakeFiles/vcraft.dir/src/graphics/Renderer.cpp.o
../build/vcraft: CMakeFiles/vcraft.dir/src/graphics/Camera.cpp.o
../build/vcraft: CMakeFiles/vcraft.dir/src/graphics/Shader.cpp.o
../build/vcraft: CMakeFiles/vcraft.dir/src/graphics/Vao.cpp.o
../build/vcraft: CMakeFiles/vcraft.dir/src/graphics/Vbo.cpp.o
../build/vcraft: CMakeFiles/vcraft.dir/src/graphics/Texture.cpp.o
../build/vcraft: CMakeFiles/vcraft.dir/src/graphics/ShadersBuffer.cpp.o
../build/vcraft: CMakeFiles/vcraft.dir/src/graphics/TexturesBuffer.cpp.o
../build/vcraft: CMakeFiles/vcraft.dir/build.make
../build/vcraft: lib/glfw/src/libglfw3.a
../build/vcraft: /usr/lib/x86_64-linux-gnu/librt.so
../build/vcraft: /usr/lib/x86_64-linux-gnu/libm.so
../build/vcraft: CMakeFiles/vcraft.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dawid/dev/vcraft/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable ../build/vcraft"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vcraft.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/vcraft.dir/build: ../build/vcraft

.PHONY : CMakeFiles/vcraft.dir/build

CMakeFiles/vcraft.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/vcraft.dir/cmake_clean.cmake
.PHONY : CMakeFiles/vcraft.dir/clean

CMakeFiles/vcraft.dir/depend:
	cd /home/dawid/dev/vcraft/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dawid/dev/vcraft /home/dawid/dev/vcraft /home/dawid/dev/vcraft/cmake-build-debug /home/dawid/dev/vcraft/cmake-build-debug /home/dawid/dev/vcraft/cmake-build-debug/CMakeFiles/vcraft.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/vcraft.dir/depend

