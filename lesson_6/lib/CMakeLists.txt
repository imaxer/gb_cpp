cmake_minimum_required(VERSION 3.10.2)

project(lesson6Lib)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES source/lesson6lib.cpp)
set(HEADER_FILES include/lesson6lib.h include/utils.h)

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})

