cmake_minimum_required(VERSION 3.5..4.0)
project(EX01G)

# not used but should be default
if ( CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT )
    message(STATUS "The install location is set to ${CMAKE_BINARY_DIR}/install")
    set(${CMAKE_INSTALL_PREFIX} ${CMAKE_BINARY_DIR}/include CACHE STRING "Make install path" FORCE)
endif()

add_executable(hello main.cpp)

target_compile_definitions(hello PRIVATE EXAMPLE1)
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DEXAMPLE2" CACHE STRING "Flags to use when compile" FORCE)