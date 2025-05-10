cmake_minimum_required(VERSION 3.5)

project(hello_static_lib)

add_library(hello_lib STATIC
        src/Hello.cpp
)

target_include_directories(hello_lib
        PUBLIC
                ${PROJECT_SOURCE_DIR}/include
)

add_executable(hello_exe src/main.cpp)

target_link_libraries(hello_exe
        PRIVATE
                hello_lib          
)