cmake_minimum_required(VERSION 3.5..4.0)
project(01J)

set(CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR}/installs CACHE STRING "Installations and releases" FORCE)

add_executable(hello main.cpp)
install(TARGETS hello
    RUNTIME DESTINATION bin
)