######################################################

project(data_structures_in_c C)
cmake_minimum_required(VERSION 3.18 FATAL_ERROR)
set(CMAKE_C_STANDARD 99)
set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY  ${CMAKE_BINARY_DIR}/target/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/target/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/target/lib)

set(CMAKE_BUILD_TYPE Debug)

include(CheckCSourceCompiles)
include(CheckCSourceRuns)
include(CheckFunctionExists)
include(CheckIncludeFile)
include(CheckIncludeFiles)
include(CheckLibraryExists)
include(CheckSymbolExists)
include(CheckTypeSize)

set(INCLUDES "")

macro(ck_check_include_file header var)
    check_include_files("${INCLUDES};${header}" ${var})
    if (${var})
        set(INCLUDES ${INCLUDES} ${header})
    endif (${var})
endmacro(ck_check_include_file)

ck_check_include_file("stdlib.h" HAVE_STDLIB_H)

#####################################################
# Add Subdirectories
add_subdirectory(src)
add_subdirectory(tests)

#####################################################
# Unit tests
enable_testing()
