cmake_minimum_required(VERSION 3.1)

# project definition / version
project(fontawesome-qml LANGUAGES CXX)
set(FONTAWESOME_QML_VERSION_MAJOR "0")
set(FONTAWESOME_QML_VERSION_MINOR "0")
set(FONTAWESOME_QML_VERSION_PATCH "1")
set(PROJECT_VERSION "${FONTAWESOME_QML_VERSION_MAJOR}.${FONTAWESOME_QML_VERSION_MINOR}.${FONTAWESOME_QML_VERSION_PATCH}")

# cmake macros
include(FeatureSummary)
include(GNUInstallDirs)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# For Qt's sake
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# Qt5 libs
find_package(Qt5 "5.12.0" COMPONENTS Gui Qml Quick CONFIG REQUIRED)

# keep global include path for sub projects
set(GLOBAL_HEADER_DIR ${PROJECT_SOURCE_DIR}/include)


add_subdirectory(src)

# spawn out some info on configuration
feature_summary(WHAT ALL FATAL_ON_MISSING_REQUIRED_PACKAGES)

