cmake_minimum_required(VERSION 3.26)
project(clionPrivate)

set(CMAKE_CXX_STANDARD 14)

add_executable(clionPrivate
        long_term_storage/test.cpp
        head.h)
