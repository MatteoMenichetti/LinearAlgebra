cmake_minimum_required(VERSION 3.20)
project(LinearAlgebra C CXX)

set(CMAKE_C_STANDARD 11)

set(CMAKE_CXX_STANDARD 14)

add_executable(LinearAlgebraTests test/runAllTest.cpp ./test/test.cpp src/OperationBetweenMatrix/sum.c src/OperationBetweenMatrix/product.c src/createMatrix.c)

add_subdirectory(test/lib/googletest)
include_directories(lib/googletest/googletest/include)
include_directories(lib/googletest/googlemock/include)

target_link_libraries(LinearAlgebraTests gtest gtest_main)