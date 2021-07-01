cmake_minimum_required(VERSION 3.10.2)
project(cpp_advanced_lesson_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} main.cpp)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/txttolstoy_voyna-i-mir.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})