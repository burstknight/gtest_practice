enable_testing()

# Import the include path for gtest
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Build the test file `test_add.cpp` as an executable file
add_executable(test_add ./test_add.cpp)

# Link the libraries. Note, we need add `gtest` and `gtest_main` for gtest.
target_link_libraries(test_add myMathLib  gtest gtest_main)

# Add an unit test for `test_add`.
add_test(test_add test_add)
