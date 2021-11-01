cmake_minimum_required(VERSION 3.20)
project(cl_flag)

set(CMAKE_CXX_STANDARD 20)

add_library(cl_flag cl_flag.cpp)

add_executable(test testfile.cpp)
target_link_libraries(test cl_flag)