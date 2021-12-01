cmake_minimum_required(VERSION 3.22.0-rc3)

set(my_project)
project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE POSITION INDEPENDENT CODE ON)

enable_testing()

add_subdirectory(googletest)

set(Headers
    LastTask.hpp
)

set(Sources
    LastTask.cpp
)

add_library(my_project STATIC ${Sources} ${Headers})

add_subdirectory(test)