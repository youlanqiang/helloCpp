cmake_minimum_required(VERSION 3.17)
project(helloCpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(helloCpp main/main.cpp)
add_executable(main1 main/01variable/char.cpp)
add_executable(main2 main/01variable/variable.cpp)
add_executable(main3 main/01variable/sizeof.cpp)
add_executable(main4 main/02function/function.cpp)
add_executable(main5 main/01variable/string.cpp)
add_executable(main6 main/01variable/bool.cpp)
add_executable(main7 main/02function/cin.cpp)
add_executable(main8 main/03flow/condition.cpp)