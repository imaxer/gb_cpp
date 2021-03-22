cmake_minimum_required(VERSION 3.10.2)

project(mylib)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES source/mylib.cpp)
set(HEADER_FILES include/mylib.h)

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})

