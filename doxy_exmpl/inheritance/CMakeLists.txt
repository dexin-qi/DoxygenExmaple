add_library(geom_inheritance
    base.h 
    impl.h
    impl.cc
)

target_include_directories(geom_inheritance PUBLIC
    $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}>
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

add_executable(inheritance_run
    inheritance_main.cc
)

target_link_libraries(inheritance_run
    geom_inheritance
)