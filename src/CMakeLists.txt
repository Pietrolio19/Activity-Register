cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD 20)
set(PROJECT_NAME ActivityTracker)
project(${PROJECT_NAME})

find_package(wxWidgets REQUIRED)
include(${wxWidgets_USE_FILE})

set(SOURCE_FILES Activity.cpp Activity.h Date.h Date.cpp Time.h Time.cpp Register.cpp Register.h App.h App.cpp Frame.h Frame.cpp)
add_library(core ${SOURCE_FILES})
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} core ${wxWidgets_LIBRARIES})

target_include_directories(core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} ${wxWidgets_INCLUDE_DIRS})
target_link_libraries(core ${wxWidgets_LIBRARIES})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})