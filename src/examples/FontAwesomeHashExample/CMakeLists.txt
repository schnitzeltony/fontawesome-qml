add_executable(fontawesome-hash-example
    main.cpp
    fontawesome-hash-example.qrc
)

# where to find headers
target_include_directories(fontawesome-hash-example
    PRIVATE
        $<BUILD_INTERFACE:${GLOBAL_HEADER_DIR}>
        # generated export header
        $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/../../lib>
)

target_link_libraries(fontawesome-hash-example
    PRIVATE
    Qt5::Core
    Qt5::Quick
    FontAweSomeQml::FontAweSomeQml
)
