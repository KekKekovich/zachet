cmake_minimum_required(VERSION 3.8)
project(zachet)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Gauss.cpp Gauss.h)
add_executable(zachet ${SOURCE_FILES})