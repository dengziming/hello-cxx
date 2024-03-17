cmake_minimum_required(VERSION 3.26)
project(hello_cxx)

set(CMAKE_CXX_STANDARD 17)

add_executable(hello_cxx main.cpp)

## Add gtest
add_subdirectory("third_party/google-test")

enable_testing()

## Leetcode
add_library(leetcode
        leetcode/leetcode.h
        leetcode/leetcode_0001_two_sum.cpp
        leetcode/leetcode_2641_cousins_in_binary_tree_2.cpp
        leetcode/leetcode_0009_palindrome_number.cpp
)

add_executable(leetcode_tests ""
        leetcode/hello_stl_test.cpp)
target_sources(leetcode_tests
        PRIVATE
        "leetcode/leetcode_0001_two_sum_test.cpp"
        "leetcode/leetcode_2641_cousins_in_binary_tree_2_test.cpp"
        leetcode/leetcode_0009_palindrome_number_test.cpp
)

target_link_libraries(leetcode_tests leetcode gmock gtest gtest_main)

