cmake_minimum_required(VERSION 3.10.2)

project(oopLesson2Lib)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES source/Person.cpp source/Student.cpp source/Fruit.cpp)
set(HEADER_FILES include/Person.h include/Gender.h include/Student.h include/Color.h include/Fruit.h include/Apple.h include/Banana.h include/GrannySmith.h)

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})

