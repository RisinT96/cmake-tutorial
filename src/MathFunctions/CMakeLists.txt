add_executable(MakeTable MakeTable.cxx)

add_custom_command(
    OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/table.h
    COMMAND MakeTable ${CMAKE_CURRENT_BINARY_DIR}/table.h
    DEPENDS MakeTable
)

add_library(MathFunctions
    mysqrt.cxx
    ${CMAKE_CURRENT_BINARY_DIR}/table.h
)

target_include_directories(MathFunctions
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
    PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
)

# Install as library
install(TARGETS MathFunctions DESTINATION lib)
install(FILES MathFunctions.h DESTINATION include)
