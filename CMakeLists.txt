cmake_minimum_required(VERSION 3.20)
project(LinearAlgebra C)

set(CMAKE_C_STANDARD 11)

add_executable(LinearAlgebra src/OperationBetweenMatrix/sum.c src/OperationBetweenMatrix/product.c src/main.c)
add_subdirectory(test)

set(SOURCE_FILES ../lib/operation.h ../src/OperationBetweenMatrix/sum.c ../src/OperationBetweenMatrix/product.c)
add_executable(test ./test/runAllTest.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(test core)