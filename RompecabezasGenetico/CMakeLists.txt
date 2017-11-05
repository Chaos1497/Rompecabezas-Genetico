cmake_minimum_required(VERSION 3.8)
project(RompecabezasGenetico)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp dosxdos.cpp cincoxcinco.cpp cuatroxcuatro.cpp tresxtres.cpp Individuos_manejador.h Individuos_estructura.h Genetic.h Poblacion.h)
add_executable(RompecabezasGenetico ${SOURCE_FILES} main.cpp)

FIND_PACKAGE( OpenCV REQUIRED )
ADD_EXECUTABLE( main main )
include_directories(${OpenCV_INCLUDE_DIRS})
TARGET_LINK_LIBRARIES( main ${OpenCV_LIBS})
message("LIBRARIES = ${LIBRARIES}")
TARGET_LINK_LIBRARIES(RompecabezasGenetico  ${LIBRARIES})

set(CMAKE_MODULE_PATH "/home/esteban/RompecabezasGenetico/Images" ${CMAKE_MODULE_PATH})
find_package(SFML 2.3.2 REQUIRED system graphics window network audio)
if(SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(RompecabezasGenetico ${SFML_LIBRARIES})
endif()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/Images" ${CMAKE_MODULE_PATH})
