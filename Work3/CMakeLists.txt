cmake_minimum_required(VERSION 3.22.0)
project(dll_cmake)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(Work2DLL SHARED Work2DLL/dinamic_lib.h Work2DLL/dllmain.cpp)
add_executable(Work2 Work2/Main.cpp)
target_link_libraries(Work2 Work2DLL)