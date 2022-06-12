cmake_minimum_required(VERSION 3.10)

# set the project name
project(Tutorial VERSION 0.1.0)

# generate config file
configure_file(config.h.in config.h)

# add the executable
add_executable(Tutorial tutorial.cxx)

# Add config file to include path
target_include_directories(Tutorial PUBLIC
    "${PROJECT_BINARY_DIR}"
)