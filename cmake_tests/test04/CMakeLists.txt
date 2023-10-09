cmake_minimum_required(VERSION 3.0.0)

project(Mech_Test_v1)

include_directories(${PROJECT_SOURCE_DIR})

add_executable(${PROJECT_NAME} main.cpp MechRover.cpp)