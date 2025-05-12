cmake_minimum_required(VERSION 3.5..4.0)
project(01H)

set(CMAKE_PREFIX_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake" CACHE STRING "Path to add 3rd libraries")
if( CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
    message(STATUS "Set install path to ${CMAKE_SOURCE_DIR}/installs")
    set(CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR}/installs CACHE STRING "Path to installations")
endif()

# add_subdirectory(cmake/fmt-master EXCLUDE_FROM_ALL)
find_package(fmt REQUIRED CONFIG)
include_directories(${CMAKE_SOURCE_DIR}/cmake/FMT/include)

add_executable(hello main.cpp)

target_link_libraries(hello PRIVATE fmt::fmt)