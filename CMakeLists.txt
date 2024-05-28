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
    FILE_SET  all_my_modules TYPE CXX_MODULES FILES
      src/arithmetic.cppm
)
# Create an executable
add_executable(module_example src/main.cpp)
# Link to the library arithmetic
target_link_libraries(module_example arithmetic)

#get the catch2 from git
Include(FetchContent)
FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.4.0 # or a later release
)
FetchContent_MakeAvailable(Catch2)

#build unit_tests.exe from  test/arithmetic_test.cpp linked to arithmetic library
add_executable(unit_tests test/arithmetic_test.cpp)
target_link_libraries(unit_tests PRIVATE Catch2::Catch2WithMain PUBLIC arithmetic)


