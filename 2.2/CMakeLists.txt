cmake_minimum_required(VERSION 2.6)

# set the project name and version
project(Tutorial)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Link runTests with what we want to test and the GTest and pthread library
add_executable(executeTests Lab2.2_test Complex)
target_link_libraries(executeTests ${GTEST_LIBRARIES} pthread)

file(GLOB_RECURSE REMOVE_CMAKE "cmake-build-debug/*")
