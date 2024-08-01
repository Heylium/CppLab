cmake_minimum_required(VERSION 3.28)
project(MergeSort)

set(CMAKE_CXX_STANDARD 17)

add_executable(MergeSort main.cpp
        SortTestHelper.h
        InsertionSort.h
        MergeSort.h)
