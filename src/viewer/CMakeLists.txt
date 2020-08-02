# our font viewer application
add_executable(fontawesome-viewer
    main.cpp
    qml.qrc
)

# where to find headers
target_include_directories(fontawesome-viewer
    PRIVATE # build
        $<BUILD_INTERFACE:${GLOBAL_HEADER_DIR}>
        # lib generated export header
        $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}>
)

target_link_libraries(fontawesome-viewer
    PRIVATE
        Qt5::Core 
        Qt5::Quick
        FontAweSomeQml::FontAweSomeQml
)

# install application
install(TARGETS fontawesome-viewer
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

