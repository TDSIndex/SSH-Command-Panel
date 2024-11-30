# Project Setup

cmake_minimum_required(VERSION 3.15)
project(IndexsCppTemplate VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Libraries

include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Executable & Linking

add_executable(
    ${PROJECT_NAME}
    Source/Main.cpp
)

target_include_directories(
    ${PROJECT_NAME}
    PRIVATE
    Include
)

# Testing

enable_testing()

add_executable(
    HelloTest
    Tests/HelloTest.cpp
)

target_link_libraries(
    HelloTest
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(HelloTest)