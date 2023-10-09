cmake_minimum_required(VERSION 3.0.0)

project(test02 VERSION 0.1.0 LANGUAGES C CXX)

include_directories(${PROJECT_SOURCE_DIR})

add_executable(${PROJECT_NAME} main.cpp Account.cpp)



