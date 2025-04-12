cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD 20)
set(PROJECT_NAME ActivityTracker)
project(${PROJECT_NAME})

add_executable(run_tests Test_register.cpp)

target_include_directories(run_tests PUBLIC ${PROJECT_SOURCE_DIR}/include)

target_link_libraries(run_tests core gtest ${wxWidgets_LIBRARIES} gtest_main)

include(GoogleTest)
gtest_discover_tests(run_tests)
