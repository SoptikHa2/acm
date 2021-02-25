cmake_minimum_required(VERSION 3.17)
project(acm)

set(CMAKE_CXX_STANDARD 14)

include_directories(dataStructures)

add_executable(acm
        dataStructures/SegmentTree.cpp
        dataStructures/SegmentTree.h
        main.cpp)
