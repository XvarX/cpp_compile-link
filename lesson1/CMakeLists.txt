cmake_minimum_required(VERSION 3.10)

project(lesson1)

add_subdirectory(libs/math)

add_library(mymath STATIC
    src/mymath/myadd.cpp
)

target_include_directories(mymath PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(main
    src/main.cpp
)

target_link_libraries(main PUBLIC
    mymath
)
target_link_libraries(main PUBLIC
    libmath
)