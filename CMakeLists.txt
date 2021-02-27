cmake_minimum_required(VERSION 3.17)
project(vcraft)

set(CMAKE_CXX_STANDARD 17)

set(EXECUTABLE_FILES lib/glad/include/glad/glad.h src/graphics/Window.cpp include/graphics/Window.h
        lib/glad/src/glad.c src/Main.cpp src/graphics/Window.cpp src/Engine.cpp include/Engine.h
        include/graphics/Renderer.h src/graphics/Renderer.cpp include/graphics/Camera.h src/graphics/Camera.cpp
        include/graphics/Shader.h src/graphics/Shader.cpp include/utilities/viewproj.h include/graphics/Vao.h include/graphics/Vbo.h src/graphics/Vao.cpp src/graphics/Vbo.cpp)

set(dir ${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${dir}/build)

include_directories(include)

# library files include
include_directories(lib/glad/include)
include_directories(lib/glm/include)

file(COPY resources DESTINATION ${dir}/build)
file(COPY shaders DESTINATION ${dir}/build)

add_subdirectory(lib)

add_executable(vcraft ${EXECUTABLE_FILES})
target_link_libraries(vcraft glfw)