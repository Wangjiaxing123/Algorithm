cmake_minimum_required(VERSION 3.9)
project(InsertionSort)

set(CMAKE_CXX_STANDARD 11)

add_executable(InsertionSort main.cpp SelectionSort.h BubbleSort.h ShellSort.h)