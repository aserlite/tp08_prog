cmake_minimum_required(VERSION 3.10)

project(TD08)

file(GLOB CPP_FILES src/*.cpp)
file(GLOB HPP_FILES src/*.hpp)

add_executable(${PROJECT_NAME} ${CPP_FILES} ${HPP_FILES}) 