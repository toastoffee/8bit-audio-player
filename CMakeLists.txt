cmake_minimum_required(VERSION 3.27)
project(8bit_audio_player)

set(CMAKE_CXX_STANDARD 11)

add_executable(8bit_audio_player
                main.cpp)

target_link_libraries(8bit_audio_player
        openal-soft)