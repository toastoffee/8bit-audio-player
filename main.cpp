#include <iostream>
#include <AudioToolbox/AudioToolbox.h>
#include "audio_player.h"

int main(int argc, char *argv[])
{

    auto audio = AudioPlayer::file("../test.wav");

    auto d = audio->duration();
    audio->play();


    return 0;
}