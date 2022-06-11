cmake_minimum_required(VERSION 3.15.2)  # CMake version check
set(CMAKE_CXX_STANDARD 11)              # Enable c++11 standard
set(CMAKE_CXX_STANDARD_REQUIRED True)   # Must define 

# Create project "simple_example"
project(Main, VERSION 1.0)

# Configure a header file to pass the version number to the source code
configure_file(config_handler.h.in config_handler.h)

# Bring the headers, such as function.h into the project
include_directories(include)

# Can manually add the sources using the set command as follows:
set(SOURCE_FILES main.cpp function.cpp)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(Main ${SOURCE_FILES})

# Since the configured file will be written into the binary tree, we must add that directory to the list of paths to search for include files.
target_include_directories(Main PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )