cmake_minimum_required(VERSION 3.3)
project(Timer_lab)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Date.cpp Date.h Timer.cpp Timer.h)
add_executable(Timer_lab ${SOURCE_FILES})