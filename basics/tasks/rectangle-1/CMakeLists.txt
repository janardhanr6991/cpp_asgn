cmake_minimum_required(VERSION 3.10)
project(NumberGuessingGame)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(main main.cpp)

find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(solution_test solution_test.cpp)
target_link_libraries(solution_test GTest::GTest GTest::Main)

gtest_add_tests(solution_test "" AUTO)
