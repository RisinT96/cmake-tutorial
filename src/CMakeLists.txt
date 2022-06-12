cmake_minimum_required(VERSION 3.10)

# set the project name
project(Tutorial VERSION 0.1.0)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

# generate config file
configure_file(config.h.in config.h)

# add math library
add_subdirectory(MathFunctions)

# add the executable
add_executable(Tutorial tutorial.cxx)

target_link_libraries(Tutorial PUBLIC MathFunctions)

# Add config file to include path
target_include_directories(Tutorial PUBLIC
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_SOURCE_DIR}/MathFunctions"
)