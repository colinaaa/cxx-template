cmake_minimum_required(VERSION 3.12)
project(luogu)

set( GSL_LITE_INCLUDE_DIR include )  # adapt as necessary
add_library( gsl INTERFACE )
target_include_directories( gsl INTERFACE ${GSL_LITE_INCLUDE_DIR} )

set(LLVM_ROOT /usr/lib/llvm-9)

set (CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_library(libc++ REQUIRED)

set(CMAKE_CXX_COMPILER "clang++")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -stdlib=libc++ -lc++abi -lc++")
include_directories(SYSTEM ${LLVM_ROOT}/include/c++/v1 /usr/include/c++/v1)

add_compile_options("-stdlib=libc++")

set(CMAKE_VERBOSE_MAKEFILE ON)

add_subdirectory (src) 

add_subdirectory (test)
