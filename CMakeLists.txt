cmake_minimum_required(VERSION 3.10)

project(auto_test LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_subdirectory(src)
add_subdirectory(test)
