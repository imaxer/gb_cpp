cmake_minimum_required(VERSION 3.10.2)

project(oopLesson4Lib)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES source/ArrayInt.cpp)
set(HEADER_FILES include/ArrayInt.h)

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})

