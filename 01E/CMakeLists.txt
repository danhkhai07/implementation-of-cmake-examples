cmake_minimum_required(VERSION 3.5..4.0)
project(hello_install)

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

# install executable
install(TARGETS hello
    DESTINATION bin)

# install libraries
install(TARGETS lib
    EXPORT HelloThinhLibrary
    LIBRARY DESTINATION lib)

# install headers
install(DIRECTORY ${PROJECT_SOURCE_DIR}/include
    DESTINATION include)

# install config or other extra files
install(FILES cmake-examples.conf
    DESTINATION etc) 