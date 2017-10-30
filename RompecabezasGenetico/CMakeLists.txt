cmake_minimum_required(VERSION 3.8)
project(RompecabezasGenetico)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp cincoxcinco.cpp cuatroxcuatro.cpp tresxtres.cpp dosxdos.cpp)
add_executable(RompecabezasGenetico ${SOURCE_FILES})

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

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/Images" ${CMAKE_MODULE_PATH})
find_package(SFML 2.3.2 REQUIRED system graphics window network audio)
if(SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(${PROJECT_NAME} ${SFML_LIBRARIES})
endif()