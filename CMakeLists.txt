cmake_minimum_required(VERSION 2.8.3)

project(doxy_exmpl)

set(PROJECT_VERSION 0.2.0)


add_library(hello_world
    doxy_exmpl/module_hello/helloworld.h
    doxy_exmpl/module_hello/helloworld.cc
)

target_include_directories(hello_world PUBLIC
    $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}>
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

add_executable(run
    doxy_exmpl/module_hello/helloworld_main.cc
)

target_link_libraries(run
    hello_world
)
