cmake_minimum_required(VERSION 3.10)
project(HelloWorldTests)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(main main.cpp)

find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(hello_test hello_world_test.cpp)
target_link_libraries(hello_test GTest::GTest GTest::Main)

gtest_add_tests(hello_test "" AUTO)
