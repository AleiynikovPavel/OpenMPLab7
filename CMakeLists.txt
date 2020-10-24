cmake_minimum_required(VERSION 3.18)
project(lab72)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab72 main.cpp)

find_package(OpenMP)
if(OpenMP_CXX_FOUND)
    target_link_libraries(lab72 PUBLIC OpenMP::OpenMP_CXX)
endif()