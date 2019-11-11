cmake_minimum_required(VERSION 3.12)
project(randomness)

# Library
add_library(randomness src/randomness.hpp src/randomness.cpp)
target_include_directories(randomness PUBLIC src)
target_compile_features(randomness PUBLIC cxx_std_17)

# Test executable
add_executable(randomness_test src/test.cpp)
target_link_libraries(randomness_test PRIVATE randomness)
