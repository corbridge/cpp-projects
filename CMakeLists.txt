cmake_minimum_required(VERSION 3.20.0)
project(hello VERSION "0.1")

configure_file(VersionConfig.h.in VersionConfig.h)

add_executable(hello main.cpp)

target_include_directories(hello PUBLIC
"${PROJECT_BINARY_DIR}"
)

add_subdirectory(MathFunctions)