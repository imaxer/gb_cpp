cmake_minimum_required(VERSION 3.10.2)

project(black-jack)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES source/Card.cpp source/Hand.cpp source/GenericPlayer.cpp)
set(HEADER_FILES include/Card.h include/Suit.h include/Rank.h include/Hand.h include/GenericPlayer.h)

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})

