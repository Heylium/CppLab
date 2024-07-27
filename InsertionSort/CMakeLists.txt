cmake_minimum_required(VERSION 3.28)
project(InsertionSort)

set(CMAKE_CXX_STANDARD 17)

add_executable(InsertionSort main.cpp
        SelectionSort.h
        SortTestHelper.h)
