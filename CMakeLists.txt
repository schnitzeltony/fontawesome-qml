cmake_minimum_required(VERSION 3.1)

# project definition / version
project(fontawesome-qml LANGUAGES CXX)
set(FONTAWESOME_QML_VERSION_MAJOR "0")
set(FONTAWESOME_QML_VERSION_MINOR "2")
set(FONTAWESOME_QML_VERSION_PATCH "0")
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

# temporary hack - hope to get patch building SortFilterProxyModel as shared
# lib upstream
add_subdirectory(SortFilterProxyModel)
include_directories(${PROJECT_SOURCE_DIR}/SortFilterProxyModel)

add_subdirectory(src)

# spawn out some info on configuration
feature_summary(WHAT ALL FATAL_ON_MISSING_REQUIRED_PACKAGES)

