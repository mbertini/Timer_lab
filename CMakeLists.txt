cmake_minimum_required(VERSION 3.3)
project(Timer_lab)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_package(Qt5Widgets REQUIRED)


set(SOURCE_FILES main.cpp Date.cpp Date.h Timer.cpp Timer.h ui_mainwindow.h mainwindow.cpp mainwindow.h)
add_executable(Timer_lab ${SOURCE_FILES})


target_link_libraries(Timer_lab Qt5::Widgets)

