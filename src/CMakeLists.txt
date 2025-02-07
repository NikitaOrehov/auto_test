project(Vector)

set(name main)

add_library(Vector STATIC Vector.cpp)

add_executable(${name} main.cpp)

target_link_libraries(${name} Vector)
