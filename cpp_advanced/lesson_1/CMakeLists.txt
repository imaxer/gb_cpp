cmake_minimum_required(VERSION 3.10.2)
project(cpp_advanced_lesson_1)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(lib)

target_link_libraries(${PROJECT_NAME} cpp_advanced_lesson_1_lib)

include_directories(lib/include)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/db.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})