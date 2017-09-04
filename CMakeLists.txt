cmake_minimum_required(VERSION 3.8)
project(sb)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES library.c library.h)
add_library(sb SHARED ${SOURCE_FILES})