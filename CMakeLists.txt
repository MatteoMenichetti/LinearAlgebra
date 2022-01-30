cmake_minimum_required(VERSION 3.5)
project(LinearAlgebra)

set(CMAKE_C_STANDARD 11)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_subdirectory(test)

set(SOURCE_FILES ./lib/operation.h ./src/createMatrix.c ./src/OperationBetweenMatrix/product.c ./src/OperationBetweenMatrix/sum.c)
add_executable(LinearAlgebra ./src/main.c)
add_library(core ${SOURCE_FILES})
target_link_libraries(LinearAlgebra core)