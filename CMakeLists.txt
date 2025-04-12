cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD 20)
set(PROJECT_NAME ActivityTracker)
project(${PROJECT_NAME})

add_subdirectory(src)

#Tests
enable_testing()
add_subdirectory(tests)
add_subdirectory(lib/googletest)


