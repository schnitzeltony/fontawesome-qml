cmake_minimum_required(VERSION 3.1)

option(FA_BUILD_EXAMPLES "Build exmple applications" OFF)
option(FA_LOAD_QML_FROM_SOURCE "Ensure loading QML files for proper debugging" OFF)

# project definition / version
project(fontawesome-qml LANGUAGES CXX)
set(FONTAWESOME_QML_VERSION_MAJOR "0")
set(FONTAWESOME_QML_VERSION_MINOR "3")
set(FONTAWESOME_QML_VERSION_PATCH "0")
set(PROJECT_VERSION "${FONTAWESOME_QML_VERSION_MAJOR}.${FONTAWESOME_QML_VERSION_MINOR}.${FONTAWESOME_QML_VERSION_PATCH}")

# cmake macros
include(FeatureSummary)
include(GNUInstallDirs)

# For Qt's sake
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(QT_MAJOR_VER "5" CACHE STRING "Qt major version")
set(QTX "Qt${QT_MAJOR_VER}")

find_package(${QTX} COMPONENTS Gui Qml Quick CONFIG REQUIRED)

# keep global include path for sub projects
set(GLOBAL_HEADER_DIR ${PROJECT_SOURCE_DIR}/include)

# SortFilterProxyModel: As long as https://github.com/oKcerG/SortFilterProxyModel/pull/80
# or similar is not applied we have to use https://github.com/schnitzeltony/SortFilterProxyModel
find_package(SortFilterProxyModel REQUIRED)

add_subdirectory(src)

# spawn out some info on configuration
feature_summary(WHAT ALL FATAL_ON_MISSING_REQUIRED_PACKAGES)

