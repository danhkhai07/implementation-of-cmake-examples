cmake_minimum_required(VERSION 3.5)

project(hello_shared_lib)

add_library(hello_dll
    SHARED
       src/Hello.cpp
)

target_include_directories(hello_dll
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

add_library(Hello::library ALIAS hello_dll)

add_executable(hello_exe src/main.cpp)

target_link_libraries(hello_exe
    PRIVATE
        Hello::library
)