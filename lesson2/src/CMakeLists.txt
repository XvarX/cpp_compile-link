cmake_minimum_required(VERSION 3.10)
project(myapp)

add_executable(myapp
    main.cpp
)

find_package(mymath REQUIRED)
target_link_libraries(myapp PRIVATE mymath::arithmetic)