cmake_minimum_required(VERSION 4.3)
project(AlgorithmesSurTableaux C)

set(CMAKE_C_STANDARD 11)

add_executable(AlgorithmesSurTableaux main.c
        fouille.c
        fouille.h
        tri.c
        tri.h)
