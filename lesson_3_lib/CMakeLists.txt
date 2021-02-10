cmake_minimum_required(VERSION 3.10.2)

project(lesson3Lib)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES src/lesson3lib.cpp)
set(HEADER_FILES include/lesson3lib.h)

add_library(${PROJECT_NAME} SHARED ${SOURCE_FILES})

set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER ${HEADER_FILES})

install(TARGETS ${PROJECT_NAME} DESTINATION ${CMAKE_SOURCE_DIR}/libs/${PROJECT_NAME})
