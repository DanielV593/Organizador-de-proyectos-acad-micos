cmake_minimum_required(VERSION 3.16)

project(Proyecto_Programacion VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets LinguistTools)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets LinguistTools)

set(TS_FILES Proyecto_Programacion_es_EC.ts)

# Archivos fuente (.cpp)
set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    proyecto_global.cpp
    crearproyecto.cpp
)

# Archivos header (.h)
set(PROJECT_HEADERS
    mainwindow.h
    proyecto_global.h
    crearproyecto.h
)

# Archivos de interfaz (.ui)
set(PROJECT_FORMS
    mainwindow.ui
    crearproyecto.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Proyecto_Programacion
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        ${PROJECT_HEADERS}
        ${PROJECT_FORMS}
        ${TS_FILES}
        mostrarproyectos.ui
        mostrarproyectos.h
        mostrarproyectos.cpp
        actualizarproyecto.h actualizarproyecto.cpp actualizarproyecto.ui
        mostrarproyectos.ui
        mostrarproyectos.cpp
        mostrarproyectos.h
        eliminarproyecto.ui
        eliminarproyecto.h
        eliminarproyecto.cpp
    )

    qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})

else()
    if(ANDROID)
        add_library(Proyecto_Programacion SHARED
            ${PROJECT_SOURCES}
            ${PROJECT_HEADERS}
            ${PROJECT_FORMS}
        )
    else()
        add_executable(Proyecto_Programacion
            ${PROJECT_SOURCES}
            ${PROJECT_HEADERS}
            ${PROJECT_FORMS}
        )
    endif()

    qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
endif()

target_link_libraries(Proyecto_Programacion PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Propiedades para macOS, Windows, etc.
if(${QT_VERSION} VERSION_LESS 6.1.0)
    set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.Proyecto_Programacion)
endif()

set_target_properties(Proyecto_Programacion PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS Proyecto_Programacion
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Proyecto_Programacion)
endif()
