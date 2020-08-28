if(FA_BUILD_EXAMPLES)
    add_subdirectory(examples)
endif(FA_BUILD_EXAMPLES)
add_subdirectory(viewer)
add_subdirectory(lib)

# for generated export header
add_dependencies(fontawesome-viewer FontAweSomeQml)
if(FA_BUILD_EXAMPLES)
    add_dependencies(fontawesome-hash-example FontAweSomeQml)
endif(FA_BUILD_EXAMPLES)
