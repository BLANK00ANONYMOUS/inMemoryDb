cmake_minimum_required(VERSION 3.30)
project(mini_in_memory_db)

set(CMAKE_CXX_STANDARD 20)

add_executable(mini_in_memory_db
        include/Table.h
        sources/Table.cpp
        include/Database.h
        sources/Database.cpp
        sources/main.cpp)

