# keep global header filename once
set(GLOBAL_HEADER "${GLOBAL_HEADER_DIR}/fontawesome-qml.h")

# lib target
add_library(FontAweSomeQml
    SHARED
        # for moc & qtcreator to have it in-tree
        ${GLOBAL_HEADER}
        fontawesome_qml.cpp
        fontawesome_qml.qrc
)
add_library(FontAweSomeQml::FontAweSomeQml ALIAS FontAweSomeQml)
set_target_properties(FontAweSomeQml PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(FontAweSomeQml PROPERTIES SOVERSION ${FONTAWESOME_QML_VERSION_MAJOR})


# export header
include(GenerateExportHeader)
generate_export_header(FontAweSomeQml)

install(FILES
   "${CMAKE_CURRENT_BINARY_DIR}/FontAweSomeQmlConfig.cmake"
    ${CMAKE_CURRENT_BINARY_DIR}/fontawesomeqml_export.h
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/fontawesome-qml
)


# where to find headers
target_include_directories(FontAweSomeQml
    PUBLIC # consumer
        $<INSTALL_INTERFACE:include/fontawesome-qml>
    PRIVATE # build
        $<BUILD_INTERFACE:${GLOBAL_HEADER_DIR}>
        # generated export header
        $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
)

# additional compiler options
target_compile_options(FontAweSomeQml PRIVATE -Wall)

# some target magic added by qtcreator
target_compile_definitions(FontAweSomeQml PRIVATE $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)

target_compile_definitions(FontAweSomeQml PRIVATE $<$<CONFIG:Debug>:QML_DEBUG_SOURCE_DIR=${CMAKE_CURRENT_SOURCE_DIR}>)

target_link_libraries(FontAweSomeQml
    PRIVATE
        Qt5::Core
        Qt5::Gui
        Qt5::Qml
        # ask linker to help us finding unresolved symbols
        "-Wl,--no-undefined"
)

# install public header
install(
    FILES ${GLOBAL_HEADER}
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/fontawesome-qml
)

# install library
install(TARGETS FontAweSomeQml
    EXPORT FontAweSomeQmlExport
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

# configure FontAweSomeQmlConfigVersion.cmake
include(CMakePackageConfigHelpers)
write_basic_package_version_file(
    FontAweSomeQmlConfigVersion.cmake
    VERSION ${PACKAGE_VERSION}
    COMPATIBILITY SameMinorVersion
)

# configure FontAweSomeQmlConfig.cmake
configure_file(FontAweSomeQmlConfig.cmake.in FontAweSomeQmlConfig.cmake @ONLY)

# install FontAweSomeQmlConfig(Version).cmake
install(FILES "${CMAKE_CURRENT_BINARY_DIR}/FontAweSomeQmlConfig.cmake"
              "${CMAKE_CURRENT_BINARY_DIR}/FontAweSomeQmlConfigVersion.cmake"
        DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/FontAweSomeQml
)

# install targets cmake-files
install(EXPORT FontAweSomeQmlExport
    FILE FontAweSomeQmlTargets.cmake
    NAMESPACE FontAweSomeQml::
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/FontAweSomeQml
)

