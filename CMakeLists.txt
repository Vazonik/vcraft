cmake_minimum_required(VERSION 3.17)
project(vcraft)

set(CMAKE_CXX_STANDARD 17)

set(EXECUTABLE_FILES lib/glad/include/glad/glad.h src/graphics/Window.cpp include/graphics/Window.h lib/glad/src/glad.c src/Main.cpp src/graphics/Window.cpp)

set(dir ${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${dir}/build)

include_directories(lib/glad/include)
include_directories(lib/glm/include)
include_directories(include)

file(COPY resources DESTINATION ${dir}/build)
file(COPY shaders DESTINATION ${dir}/build)

add_subdirectory(lib)

add_executable(vcraft ${EXECUTABLE_FILES})
target_link_libraries(vcraft glfw)