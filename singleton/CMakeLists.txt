cmake_minimum_required(VERSION 3.0.0)
project(HELLOAPP)
add_executable(hellobinary main.cpp src/calc.cpp src/singlton_pattern.cpp)
target_include_directories(hellobinary PUBLIC include/)