cmake_minimum_required(VERSION 3.10.2)

project(lesson5Lib)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES source/lesson5lib.cpp)
set(HEADER_FILES include/lesson5lib.h)

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})

