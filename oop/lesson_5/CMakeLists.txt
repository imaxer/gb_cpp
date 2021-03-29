cmake_minimum_required(VERSION 3.10.2)
project(oop_lesson_5)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(lib)

include_directories(../black-jack/include)

target_link_libraries(${PROJECT_NAME} oopLesson5Lib black-jack)

include_directories(lib/include)