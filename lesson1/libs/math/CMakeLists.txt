add_library(libmath STATIC
    src/add.cpp
)

target_include_directories(libmath PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)