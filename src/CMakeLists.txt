cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD 20)
set(PROJECT_NAME ActivityTracker)
project(${PROJECT_NAME})

find_package(wxWidgets REQUIRED)
include(${wxWidgets_USE_FILE})

set(SOURCE_FILES Activity.cpp Activity.h Date.h Date.cpp
        Time.h
        Time.cpp
        Register.cpp
        Register.h
        Observer.h
        Subject.h
        Subject.cpp
        App.h
        App.cpp
        Frame.h
        Frame.cpp)
add_executable(${PROJECT_NAME} main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} core ${wxWidgets_LIBRARIES})

#add_subdirectory(tests)
