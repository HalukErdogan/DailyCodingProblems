# cmake version
cmake_minimum_required(VERSION 3.14)

# project name
project(daily_coding_problems)

# fetch and include googletest
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# create solutions library
add_library(solutions INTERFACE)
target_include_directories(solutions INTERFACE .)

# add tests
add_subdirectory(tests)