/**
  ******************************************************************************
  * @file           : audio_player.h
  * @author         : toastoffee
  * @brief          : None
  * @attention      : None
  * @date           : 2024/8/26
  ******************************************************************************
  */



#ifndef INC_8BIT_AUDIO_PLAYER_AUDIO_PLAYER_H
#define INC_8BIT_AUDIO_PLAYER_AUDIO_PLAYER_H


class AudioPlayer {
public:

    static AudioPlayer* file(const char* fn);
//    static AudioPlayer* url(const char* url);
    virtual ~AudioPlayer() {}

    virtual bool isPlaying() const = 0;
    virtual double duration() const = 0;
    virtual double progress() const = 0;
    virtual void play() = 0;

    virtual void seek(double t) = 0 ;


protected:
};



#endif //INC_8BIT_AUDIO_PLAYER_AUDIO_PLAYER_H
