cmake_minimum_required(VERSION 3.10.2)
project(oop_lesson_7)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} main.cpp)

include_directories(../black-jack/include)

target_link_libraries(${PROJECT_NAME} black-jack)
