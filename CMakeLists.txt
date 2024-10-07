cmake_minimum_required(VERSION 3.20)
project(SolutionTest)

set(CMAKE_CXX_STANDART 17)
set(CMAKE_CXX_STANDART_RECUIRED ON)

set(tests_sources
        ./main.hpp
        ./main.cpp
        ./tests.cpp)
add_subdirectory(catch2)
add_executable(tests ${tests_sources})
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)