cmake_minimum_required(VERSION 3.5)
project(01K)

set(CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR}/installs CACHE STRING "Installations and releases" FORCE)

add_subdirectory(include)
add_executable(hello main.cpp)

target_link_libraries(hello PRIVATE Boost::filesystem)

install(TARGETS hello
    RUNTIME DESTINATION bin
)