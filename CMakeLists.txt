cmake_minimum_required(VERSION 3.10)

project(texux)

add_compile_options(-Wall -Wextra -Wpedantic -g)

file(GLOB_RECURSE SOURCES
    "src/main.c"
    "src/*.c"
)

add_executable(texux ${SOURCES})

target_include_directories(texux PRIVATE include)
target_link_libraries(texux PRIVATE raylib)
