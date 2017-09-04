cmake_minimum_required(VERSION 3.8)
project(ax)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES library.c library.h)
add_library(ax SHARED ${SOURCE_FILES})