cmake_minimum_required(VERSION 3.10)

project(mymath VERSION 1.0.0)

add_library(arithmetic STATIC
    src/arithmetic.cpp
)

target_include_directories(arithmetic PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

add_library(mymath::arithmetic ALIAS arithmetic)

install(TARGETS arithmetic
    EXPORT mymathTargets
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
)

install(DIRECTORY include/ DESTINATION include)

install(EXPORT mymathTargets
    FILE mymathTargets.cmake
    NAMESPACE mymath::
    DESTINATION lib/cmake/mymath
)

include(CMakePackageConfigHelpers)

write_basic_package_version_file(
    "${CMAKE_CURRENT_BINARY_DIR}/mymathConfigVersion.cmake"
    VERSION ${PROJECT_VERSION}
    COMPATIBILITY AnyNewerVersion
)

configure_package_config_file(
    "${CMAKE_CURRENT_LIST_DIR}/cmake/mymathConfig.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/mymathConfig.cmake"
    INSTALL_DESTINATION lib/cmake/mymath
)

install(FILES
    "${CMAKE_CURRENT_BINARY_DIR}/mymathConfig.cmake"
    "${CMAKE_CURRENT_BINARY_DIR}/mymathConfigVersion.cmake"
    DESTINATION lib/cmake/mymath
)