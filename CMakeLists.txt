cmake_minimum_required(VERSION 3.28)

project(compiler VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(source)

file(COPY resource DESTINATION .)
