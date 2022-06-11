# cmake version to be used
cmake_minimum_required(VERSION 3.15.2)  # CMake version check
set(CMAKE_CXX_STANDARD 11)              # Enable c++11 standard
set(CMAKE_CXX_STANDARD_REQUIRED True)   # Must define 

# project name
project(sample_cmake)

# flags

# files

# include
include_directories(./include ./src ./libs)

# target
add_executable(binary ./src/main.cpp ./src/shape.cpp )