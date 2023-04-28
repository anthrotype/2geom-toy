cmake_minimum_required(VERSION 3.0)

project(my_project)

set(CMAKE_CXX_STANDARD 17)

find_package(Boost 1.60 REQUIRED)
find_package(2Geom REQUIRED)

add_executable(reverse_path main.cpp)

target_link_libraries(reverse_path 2Geom::2geom)
target_include_directories(reverse_path PRIVATE ${2Geom_INCLUDE_DIRS})
