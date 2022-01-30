cmake_minimum_required(VERSION 3.5)
project(LinearAlgebra C CXX)

set(CMAKE_C_STANDARD 11)

set(CMAKE_CXX_FLAGS 20)

add_subdirectory(test)

set(SOURCE_FILES ./src/createMatrix.c ./src/OperationBetweenMatrix/product.c ./src/OperationBetweenMatrix/sum.c)
add_executable(LinearAlgebra ./src/main.c)
add_library(core ${SOURCE_FILES})
target_link_libraries(LinearAlgebra core)