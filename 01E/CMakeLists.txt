cmake_minimum_required(VERSION 3.5..4.0)
project(hello_install)

# setup libs
add_library(lib SHARED src/hello.cpp)
target_include_directories(lib PUBLIC ${PROJECT_SOURCE_DIR}/include)

# add executable
add_executable(hello src/main.cpp)
target_link_libraries(hello PRIVATE lib)