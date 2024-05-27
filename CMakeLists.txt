cmake_minimum_required(VERSION 3.28)
project(module_example CXX)

# Turning off extensions avoids an issue with the clang 16 compiler
# clang 17 and greater can avoid this setting
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_EXPERIMENTAL_CXX_MODULE_DYNDEP 1)

set(CMAKE_CXX_SCAN_FOR_MODULES ON)

# Create a library
add_library(arithmetic)
# Add the module file to the library
target_sources(arithmetic
  PUBLIC
    FILE_SET CXX_MODULES FILES
      arithmetic.cxx
)
# Create an executable
add_executable(module_test main.cxx)
# Link to the library arithmetic
target_link_libraries(module_test arithmetic)
