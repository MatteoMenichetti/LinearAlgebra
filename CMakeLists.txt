cmake_minimum_required(VERSION 3.16.17)

project(LinearAlgebra LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)

add_executable(LinearAlgebraTest src/createMatrix.c test/runAllTest.cpp test/OperationBetweenMatrixTests.cpp test/CreationMatrix.cpp src/OperationBetweenMatrix/sum.c src/OperationBetweenMatrix/product.c lib/indexing.h)

add_executable(LinearAlgebra ./src/createMatrix.c  ./src/main.c lib/indexing.h)

add_subdirectory(lib/googletest)
include_directories(lib/googletest/googletest/include)
include_directories(lib/googletest/googlemock/include)
target_link_libraries(LinearAlgebraTest gtest gtest_main)