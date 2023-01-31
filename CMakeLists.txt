cmake_minimum_required(VERSION 3.23)
project(polymorphism)

set(CMAKE_CXX_STANDARD 20)

add_executable(polymorphism main.cpp Character.cpp Character.h test_character.cpp test_character.h)
