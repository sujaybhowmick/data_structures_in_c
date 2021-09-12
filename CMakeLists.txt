cmake_minimum_required(VERSION 3.20)
project(data_structures_in_c C)

set(CMAKE_C_STANDARD 99)

add_executable(data_structures_in_c main.c list/linked_list.h list/linked_list.c)
