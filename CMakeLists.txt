cmake_minimum_required(VERSION 3.17)
project(helloCpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(helloCpp main/main.cpp)
add_executable(main1 main/01variable/string.cpp)
add_executable(main2 main/01variable/variable.cpp)
add_executable(main3 main/01variable/sizeof.cpp)
add_executable(main4 main/02function/function.cpp)

