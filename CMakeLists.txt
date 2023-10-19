cmake_minimum_required(VERSION 3.26)
project(ejercicios_clase)

set(CMAKE_CXX_STANDARD 17)

add_library(persona STATIC persona.cpp)
add_library(estudiante STATIC estudiante.cpp)

add_executable(main main.cpp)

target_link_libraries(main PRIVATE persona estudiante)
