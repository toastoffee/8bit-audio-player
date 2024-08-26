cmake_minimum_required(VERSION 3.27)
project(8bit_audio_player)

set(CMAKE_CXX_STANDARD 11)

if(APPLE)
    find_library(CORE_AUDIO_LIBRARY CoreAudio)
    find_library(AUDIO_TOOLBOX_LIBRARY AudioToolbox)
    find_library(AUDIO_UNIT_LIBRARY AudioUnit)
    find_library(CARBON_LIBRARY Carbon)
    SET(NATIVE_AUDIO_LIBS ${CORE_AUDIO_LIBRARY} ${AUDIO_TOOLBOX_LIBRARY} ${AUDIO_UNIT_LIBRARY} ${CARBON_LIBRARY})
endif ()

add_executable(8bit_audio_player
                main.cpp
        audio_player.cpp
        audio_player.h)

target_link_libraries(8bit_audio_player
                        ${NATIVE_AUDIO_LIBS})