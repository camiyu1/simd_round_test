cmake_minimum_required(VERSION 3.0)
project("SIMD Round Test")

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(TARGET_TEST simd_round_test)
add_executable(${TARGET_TEST}
  test.cpp
)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -msse4.1")

target_link_libraries(${TARGET_TEST} PRIVATE
  glog
  stdc++fs
)
