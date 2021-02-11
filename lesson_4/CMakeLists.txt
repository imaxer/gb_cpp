cmake_minimum_required(VERSION 3.10.2)
project(lesson_4)

set(CMAKE_CXX_STANDARD 14)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(lib)

target_link_libraries(${PROJECT_NAME} lesson4Lib)