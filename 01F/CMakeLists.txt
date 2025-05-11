cmake_minimum_required(VERSION 3.5..4.0)
project(hello01F)
set(CMAKE_CXX_STANDARD 17)

if( CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT )
  message(STATUS "Setting default CMAKE_INSTALL_PREFIX path to ${CMAKE_BINARY_DIR}/install")
  set(CMAKE_INSTALL_PREFIX "${CMAKE_BINARY_DIR}/install" CACHE STRING "The path to use for make install" FORCE)
endif()

add_executable(hello main.cpp)

install(TARGETS hello
    RUNTIME DESTINATION bin)