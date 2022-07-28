cmake_minimum_required(VERSION 3.21)
project(2048)

set(CMAKE_CXX_STANDARD 14)

add_executable(2048 main.cpp GameBoard.cpp GameBoard.h)
