cmake_minimum_required(VERSION 3.14)
project(luogu)

set (CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_VERBOSE_MAKEFILE ON)

add_subdirectory (src) 

add_subdirectory (test)
