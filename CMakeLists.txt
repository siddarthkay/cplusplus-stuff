cmake_minimum_required(VERSION 3.27)
project(cplusplus_stuff)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cplusplus_stuff
        hello.cpp
        sum.cpp
        sum.h)
