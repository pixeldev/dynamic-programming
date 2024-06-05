cmake_minimum_required(VERSION 3.28)
project(dynamic_programming C)

set(CMAKE_C_STANDARD 23)

add_executable(dynamic_programming main.c
        subsequences.c
        subsequences.h
        stairs.c
        stairs.h
        coins.c
        coins.h)
