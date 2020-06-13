cmake_minimum_required(VERSION 3.10)
project(TSGui, VERSION 0.1 DESCRIPTION "A simple TGUI wrapper")
include(GNUInstallDirs)

find_package(SFML COMPONENTS graphics audio system window REQUIRED)
find_package(TGUI COMPONENTS tgui REQUIRED)

add_library(TSGui SHARED
    CanvasUpdater/CanvasUpdater.cpp
    Handlers/Handlers.cpp)

set_target_properties(TSGui PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(TSGui PROPERTIES PUBLIC_HEADERS 
    TSGui/TSGui.hpp
    Handlers/Handlers.hpp
    Getters/Getters.hpp
    Getters/Getters.tpp
    Creators/Creators.hpp
    Creators/Creators.tpp
    CanvasUpdater/CanvasUpdater.hpp
    Widgets/Widgets.hpp)

configure_file(TSGui.pc.in TSGui.pc @ONLY)
#target_include_directories(TSGui PRIVATE .)

install(TARGETS TSGui
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
install(FILES ${CMAKE_BINARY_DIR}/TSGui.pc
    DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/pkgconfig)