cmake_minimum_required(VERSION 3.5..4.0)
project(hello_install)

set(CMAKE_CXX_STANDARD 11)

# Change install prefix
if( CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT )
  message(STATUS "Setting default CMAKE_INSTALL_PREFIX path to ${CMAKE_BINARY_DIR}/install")
  set(CMAKE_INSTALL_PREFIX "${CMAKE_BINARY_DIR}/install" CACHE STRING "The path to use for make install" FORCE)
endif()

############################################################
# Create a library
############################################################

# setup libs
add_library(lib SHARED src/hello.cpp)
target_include_directories(lib PUBLIC ${PROJECT_SOURCE_DIR}/include)

############################################################
# Create an executable
############################################################

# add executable
add_executable(hello src/main.cpp)
target_link_libraries(hello PRIVATE lib)

############################################################
# Install
############################################################

# install libraries
install(TARGETS lib
    RUNTIME DESTINATION bin
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib)
    
# install executable
install(TARGETS hello
    RUNTIME DESTINATION bin)


# install headers
install(DIRECTORY ${PROJECT_SOURCE_DIR}/include
    DESTINATION include)

# install config or other extra files
install(FILES cmake-examples.conf
    DESTINATION etc) 