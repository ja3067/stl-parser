cmake_minimum_required(VERSION 3.10)
project(STL_PARSER)

set(CMAKE_CXX_STANDARD 11)

add_executable(stl-parser main.cpp stlParser.cpp stlParser.h vec/vec.cpp vec/vec.h)