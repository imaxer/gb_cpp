cmake_minimum_required(VERSION 3.10.2)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(lesson_3 main.cpp)

include_directories(${CMAKE_SOURCE_DIR}/libs/lesson3Lib)

target_link_libraries(lesson_3 ${CMAKE_SOURCE_DIR}/libs/lesson3Lib/liblesson3Lib.so)