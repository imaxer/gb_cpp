cmake_minimum_required(VERSION 3.10.2)

project(oopLesson5Lib)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES source/Pair1.cpp source/Pair.cpp source/StringValuePair.cpp)
set(HEADER_FILES include/Pair1.h include/Pair.h include/StringValuePair.h)

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})

