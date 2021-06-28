cmake_minimum_required(VERSION 3.10.2)

project(cpp_advanced_lesson_1_lib)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES source/Person.cpp source/PhoneNumber.cpp source/PhoneBook.cpp)
set(HEADER_FILES include/Person.h include/PhoneNumber.h include/PhoneBook.h)

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})

