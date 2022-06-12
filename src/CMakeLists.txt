cmake_minimum_required(VERSION 3.10)

# set the project name
project(Tutorial VERSION 0.1.0)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

option(USE_MYMATH "Use tutorial provided math implementation" ON)

# generate config file
configure_file(config.h.in config.h)

# add math library
if(USE_MYMATH)
    add_subdirectory(MathFunctions)
    list(APPEND EXTRA_LIBS MathFunctions)
endif()

# add the executable
add_executable(Tutorial tutorial.cxx)

target_link_libraries(Tutorial PUBLIC ${EXTRA_LIBS})

# Add config file to include path
target_include_directories(Tutorial PUBLIC
    "${PROJECT_BINARY_DIR}"
)

install(TARGETS Tutorial DESTINATION bin)
install(FILES "${PROJECT_BINARY_DIR}/config.h"
    DESTINATION include
)