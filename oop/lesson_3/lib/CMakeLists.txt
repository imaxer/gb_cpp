cmake_minimum_required(VERSION 3.10.2)

project(oopLesson3Lib)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES source/Circle.cpp source/Parallelogram.cpp source/Fraction.cpp source/Card.cpp)
set(HEADER_FILES include/Figure.h include/Circle.h include/Parallelogram.h include/Rectangle.h include/Rhombus.h include/Square.h include/Fraction.h include/Card.h include/Suit.h include/CardValue.h include/Car.h include/PassengerCar.h include/Bus.h include/Minivan.h)

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})

