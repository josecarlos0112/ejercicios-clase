cmake_minimum_required(VERSION 3.26)
project(ejercicios_clase)

set(CMAKE_CXX_STANDARD 17)

add_executable(main main.cpp)
add_executable(persona persona.h persona.cpp)
add_executable(estudiante estudiante.h estudiante.cpp)

