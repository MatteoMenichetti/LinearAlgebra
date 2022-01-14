add_subdirectory(lib/googletest/)

set(gtest_SOURCE_DIR, lib/googletest/)
include_directories(${gtest_SOURCE_DIR}/include &{gtest_SOURCE_DIR})
set(TEST_SOURCE_FILES runAllTest.cpp test.cpp)
add_executable(runOperationBetweenMatrixTests runAllTest.cpp test.cpp)
target_link_libraries(runOperationBetweenMatrixTests gtest gtest_main core)