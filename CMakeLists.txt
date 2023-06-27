cmake_minimum_required(VERSION 3.7)
project(Activity_Register)

set(CMAKE_CXX_STANDARD 11)

set(wxWidgets_ROOT_DIR <\\wsl.localhost/Ubuntu/usr/include/wx-3.0/wx>)
set(wxWidgets_CONFIGURATION mswu)
find_package(wxWidgets COMPONENTS core base REQUIRED)
include(${wxWidgets_USE_FILE})

set(SOURCE_FILES main.cpp)
add_executable(FirstC ${SOURCE_FILES})

target_link_libraries(FirstC ${wxWidgets_LIBRARIES})
