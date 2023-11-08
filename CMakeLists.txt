cmake_minimum_required(VERSION 3.5)

project(gtest_practice)

set(CMAKE_CXX_STANDARD 14)

add_library(myMathLib ./src/myMathLib.cpp)

# Move into the directory `submodules` to build gtest
add_subdirectory(./submodules)

enable_testing()

# Move into the directory `tests` to build unit tests
add_subdirectory(./tests)
