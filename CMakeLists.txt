cmake_minimum_required(VERSION 3.20)
project(LinearAlgebra C)

set(CMAKE_C_STANDARD 11)

add_executable(LinearAlgebra src/OperationBetweenMatrix/product.c src/main.c)
