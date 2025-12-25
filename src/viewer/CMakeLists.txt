# our font viewer application
add_executable(fontawesome-viewer
    main.cpp
    fontawesome-qml-viewer.qrc
)

# where to find headers
target_include_directories(fontawesome-viewer
    PRIVATE
        $<BUILD_INTERFACE:${GLOBAL_HEADER_DIR}>
        # generated export header
        $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/../lib>
)

target_link_libraries(fontawesome-viewer
    PRIVATE
        ${QTX}::Core
        ${QTX}::Quick
        FontAweSomeQml::FontAweSomeQml
        SortFilterProxyModel::SortFilterProxyModel
)

# install application
install(TARGETS fontawesome-viewer
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

