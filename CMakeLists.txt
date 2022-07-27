cmake_minimum_required(VERSION 3.10)
project(matrix VERSION 1.0)

include_directories(include)
file(GLOB SOURCES "src/*.h" "src/*.cpp")

add_executable(matrix ${SOURCES})

set_property(TARGET matrix PROPERTY CXX_STANDARD 17)
target_link_libraries(matrix)
target_compile_options(matrix PRIVATE -Wall -Wextra)

