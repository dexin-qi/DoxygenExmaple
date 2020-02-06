add_library(hello_world
    helloworld.h
    helloworld.cc
)

target_include_directories(hello_world PUBLIC
    $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}>
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

add_executable(module_hello_run
    helloworld_main.cc
)

target_link_libraries(module_hello_run
    hello_world
)