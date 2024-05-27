cmake_minimum_required(VERSION 3.28)
project(module_example CXX)

# Turning off extensions avoids an issue with the clang 16 compiler
# clang 17 and greater can avoid this setting
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_STANDARD 20)

# Create a library
add_library(arithmetic)
# Add the module file to the library
target_sources(arithmetic
  PUBLIC
    FILE_SET CXX_MODULES FILES
      arithmetic.cpp
)
# Create an executable
add_executable(module_test main.cpp)
# Link to the library arithmetic
target_link_libraries(module_test arithmetic)
