cmake_minimum_required(VERSION 3.10)

project(Rav)

set(CMAKE_CXX_STANDARD 17)

add_executable(rav
    src/main.cpp
    src/interpreter.cpp
)

target_include_directories(rav PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)