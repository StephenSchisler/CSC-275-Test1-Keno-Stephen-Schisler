cmake_minimum_required(VERSION 4.3)
project(CSC-275-Test1-Keno-Stephen-Schisler)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(
        main.cpp
        Game.cpp
        Game.h
        KenoNumbers.cpp
        KenoNumbers.h
        Player.cpp
        Player.h
        main.cpp)
