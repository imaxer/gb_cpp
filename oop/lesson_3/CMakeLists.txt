cmake_minimum_required(VERSION 3.10.2)
project(oop_lesson_3)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(lib)

target_link_libraries(${PROJECT_NAME} oopLesson3Lib)

include_directories(lib/include)