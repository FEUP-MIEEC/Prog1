cmake_minimum_required(VERSION 3.3)
project(Aula_Pratica_10)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c99")

set(SOURCE_FILES main.cpp)
add_executable(problema1 Problema_1.c)
add_executable(problema2 Problema_2.c)