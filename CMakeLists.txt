cmake_minimum_required(VERSION 3.17)
project(vcraft)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(vcraft src/Main.cpp src/Test.cpp src/sub/Foo.cpp)