#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <GLUT/glut.h>
#include <OpenAL/alut.h>
#include <OpenAL/al.h>
#include <OpenAL/alc.h>

#include "AudioToolbox/AudioToolbox.h"




int main (int argc, char *argv[])
{
    ALCcontext *context;
    ALCdevice *device;

    device = alcOpenDevice(NULL);
    if (device == NULL)
    {
        // Handle Exception
    }

//Create a context
    context=alcCreateContext(device,NULL);

//Set active context
    alcMakeContextCurrent(context);

// Clear Error Code
    alGetError();
}