cmake_minimum_required(VERSION 3.8)
project(RompecabezasGenetico)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp dosxdos.cpp cincoxcinco.cpp cuatroxcuatro.cpp tresxtres.cpp Individuos_manejador.h Individuos_estructura.h Genetic.h Poblacion.h Mutacion.h)
add_executable(RompecabezasGenetico ${SOURCE_FILES} Individuos_manejador.h)


FIND_PACKAGE( OpenCV REQUIRED )
ADD_EXECUTABLE( main main )
include_directories(${OpenCV_INCLUDE_DIRS})
TARGET_LINK_LIBRARIES( main ${OpenCV_LIBS})

INCLUDE_DIRECTORIES(  /usr/local/Cellar/allegro/5.2.1.1_1/include )
LINK_DIRECTORIES(  /usr/local/Cellar/allegro/5.2.1.1_1/lib )
file(GLOB LIBRARIES "/usr/local/Cellar/allegro/5.2.1.1_1/lib/*.dylib")
message("LIBRARIES = ${LIBRARIES}")
TARGET_LINK_LIBRARIES(RompecabezasGenetico  ${LIBRARIES})
TARGET_LINK_LIBRARIES(RompecabezasGenetico  allegro_acodec
        allegro_audio
        allegro_color
        allegro_dialog
        allegro_image
        allegro_main
        allegro_memfile
        allegro_physfs
        allegro_primitives
        allegro_ttf
        allegro_font
        allegro)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)
include_directories(${GTK3_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS})
add_definitions(${GTK3_CFLAGS_OTHER})
target_link_libraries(RompecabezasGenetico ${GTK3_LIBRARIES})