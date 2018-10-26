// Generated automatically. Do not edit!
#ifndef _gxtkAudio_
#define _gxtkAudio_
class String;
#include <gxtkSample>
#include "Object.hpp"

class gxtkAudio : public Object  {
public:

    // Wrappers
    inline virtual int Suspend() { return ptr::_Suspend(); }
    inline virtual int Resume() { return ptr::_Resume(); }
    inline virtual gxtkSample * LoadSampleUNSAFE(gxtkSample * sample, String * path) { return ptr::LoadSampleUNSAFE(this, sample, path); }
    inline virtual gxtkSample * LoadSample(String * path) { return ptr::LoadSample(this, path); }
    inline virtual int PlaySample(gxtkSample * sample, int channel, int flags) { return ptr::PlaySample(this, sample, channel, flags); }
    inline virtual int StopChannel(int channel) { return ptr::StopChannel(this, channel); }
    inline virtual int PauseChannel(int arg1) { return ptr::_PauseChannel(this, arg1); }
    inline virtual int ResumeChannel(int arg1) { return ptr::_ResumeChannel(this, arg1); }
    inline virtual int ChannelState(int arg1) { return ptr::_ChannelState(this, arg1); }
    inline virtual int SetVolume(int arg1, float arg2) { return ptr::_SetVolume(this, arg1, arg2); }
    inline virtual int SetPan(int arg1, float arg2) { return ptr::_SetPan(this, arg1, arg2); }
    inline virtual int SetRate(int arg1, float arg2) { return ptr::_SetRate(this, arg1, arg2); }
    inline virtual int PlayMusic(String * path, int flags) { return ptr::PlayMusic(this, path, flags); }
    inline virtual int StopMusic() { return ptr::_StopMusic(); }
    inline virtual int PauseMusic() { return ptr::_PauseMusic(); }
    inline virtual int ResumeMusic() { return ptr::_ResumeMusic(); }
    inline virtual int MusicState() { return ptr::_MusicState(); }
    inline virtual int SetMusicVolume(float arg1) { return ptr::_SetMusicVolume(this, arg1); }

    class ptr {
    public:
        static int (*_Suspend)();
        static int (*_Resume)();
        static gxtkSample * (*LoadSampleUNSAFE)(gxtkAudio * self, gxtkSample * sample, String * path);
        static gxtkSample * (*LoadSample)(gxtkAudio * self, String * path);
        static int (*PlaySample)(gxtkAudio * self, gxtkSample * sample, int channel, int flags);
        static int (*StopChannel)(gxtkAudio * self, int channel);
        static int (*_PauseChannel)(gxtkAudio * self, int arg1);
        static int (*_ResumeChannel)(gxtkAudio * self, int arg1);
        static int (*_ChannelState)(gxtkAudio * self, int arg1);
        static int (*_SetVolume)(gxtkAudio * self, int arg1, float arg2);
        static int (*_SetPan)(gxtkAudio * self, int arg1, float arg2);
        static int (*_SetRate)(gxtkAudio * self, int arg1, float arg2);
        static int (*PlayMusic)(gxtkAudio * self, String * path, int flags);
        static int (*_StopMusic)();
        static int (*_PauseMusic)();
        static int (*_ResumeMusic)();
        static int (*_MusicState)();
        static int (*_SetMusicVolume)(gxtkAudio * self, float arg1);
    };
};

#ifdef _WIN32

int (*gxtkAudio::ptr::_Suspend)() = (int (*)()) 0x0;
int (*gxtkAudio::ptr::_Resume)() = (int (*)()) 0x0;
gxtkSample * (*gxtkAudio::ptr::LoadSampleUNSAFE)(gxtkAudio * self, gxtkSample * sample, String * path) = (gxtkSample * (*)(gxtkAudio * self, gxtkSample * sample, String * path)) 0x4069d0;
gxtkSample * (*gxtkAudio::ptr::LoadSample)(gxtkAudio * self, String * path) = (gxtkSample * (*)(gxtkAudio * self, String * path)) 0x406a30;
int (*gxtkAudio::ptr::PlaySample)(gxtkAudio * self, gxtkSample * sample, int channel, int flags) = (int (*)(gxtkAudio * self, gxtkSample * sample, int channel, int flags)) 0x406a90;
int (*gxtkAudio::ptr::StopChannel)(gxtkAudio * self, int channel) = (int (*)(gxtkAudio * self, int channel)) 0x4068a0;
int (*gxtkAudio::ptr::_PauseChannel)(gxtkAudio * self, int arg1) = (int (*)(gxtkAudio * self, int arg1)) 0x0;
int (*gxtkAudio::ptr::_ResumeChannel)(gxtkAudio * self, int arg1) = (int (*)(gxtkAudio * self, int arg1)) 0x0;
int (*gxtkAudio::ptr::_ChannelState)(gxtkAudio * self, int arg1) = (int (*)(gxtkAudio * self, int arg1)) 0x0;
int (*gxtkAudio::ptr::_SetVolume)(gxtkAudio * self, int arg1, float arg2) = (int (*)(gxtkAudio * self, int arg1, float arg2)) 0x0;
int (*gxtkAudio::ptr::_SetPan)(gxtkAudio * self, int arg1, float arg2) = (int (*)(gxtkAudio * self, int arg1, float arg2)) 0x0;
int (*gxtkAudio::ptr::_SetRate)(gxtkAudio * self, int arg1, float arg2) = (int (*)(gxtkAudio * self, int arg1, float arg2)) 0x0;
int (*gxtkAudio::ptr::PlayMusic)(gxtkAudio * self, String * path, int flags) = (int (*)(gxtkAudio * self, String * path, int flags)) 0x406ab0;
int (*gxtkAudio::ptr::_StopMusic)() = (int (*)()) 0x0;
int (*gxtkAudio::ptr::_PauseMusic)() = (int (*)()) 0x0;
int (*gxtkAudio::ptr::_ResumeMusic)() = (int (*)()) 0x0;
int (*gxtkAudio::ptr::_MusicState)() = (int (*)()) 0x0;
int (*gxtkAudio::ptr::_SetMusicVolume)(gxtkAudio * self, float arg1) = (int (*)(gxtkAudio * self, float arg1)) 0x0;
#endif

#ifdef __linux__

int (*gxtkAudio::ptr::_Suspend)() = (int (*)()) 0x0;
int (*gxtkAudio::ptr::_Resume)() = (int (*)()) 0x0;
gxtkSample * (*gxtkAudio::ptr::LoadSampleUNSAFE)(gxtkAudio * self, gxtkSample * sample, String * path) = (gxtkSample * (*)(gxtkAudio * self, gxtkSample * sample, String * path)) 0x80e2250;
gxtkSample * (*gxtkAudio::ptr::LoadSample)(gxtkAudio * self, String * path) = (gxtkSample * (*)(gxtkAudio * self, String * path)) 0x8302510;
int (*gxtkAudio::ptr::PlaySample)(gxtkAudio * self, gxtkSample * sample, int channel, int flags) = (int (*)(gxtkAudio * self, gxtkSample * sample, int channel, int flags)) 0x8302430;
int (*gxtkAudio::ptr::StopChannel)(gxtkAudio * self, int channel) = (int (*)(gxtkAudio * self, int channel)) 0x807d660;
int (*gxtkAudio::ptr::_PauseChannel)(gxtkAudio * self, int arg1) = (int (*)(gxtkAudio * self, int arg1)) 0x807d5e0;
int (*gxtkAudio::ptr::_ResumeChannel)(gxtkAudio * self, int arg1) = (int (*)(gxtkAudio * self, int arg1)) 0x807d5a0;
int (*gxtkAudio::ptr::_ChannelState)(gxtkAudio * self, int arg1) = (int (*)(gxtkAudio * self, int arg1)) 0x807d450;
int (*gxtkAudio::ptr::_SetVolume)(gxtkAudio * self, int arg1, float arg2) = (int (*)(gxtkAudio * self, int arg1, float arg2)) 0x8084d80;
int (*gxtkAudio::ptr::_SetPan)(gxtkAudio * self, int arg1, float arg2) = (int (*)(gxtkAudio * self, int arg1, float arg2)) 0x8084d20;
int (*gxtkAudio::ptr::_SetRate)(gxtkAudio * self, int arg1, float arg2) = (int (*)(gxtkAudio * self, int arg1, float arg2)) 0x8084cd0;
int (*gxtkAudio::ptr::PlayMusic)(gxtkAudio * self, String * path, int flags) = (int (*)(gxtkAudio * self, String * path, int flags)) 0x80c4e40;
int (*gxtkAudio::ptr::_StopMusic)() = (int (*)()) 0x806d140;
int (*gxtkAudio::ptr::_PauseMusic)() = (int (*)()) 0x806d160;
int (*gxtkAudio::ptr::_ResumeMusic)() = (int (*)()) 0x806d180;
int (*gxtkAudio::ptr::_MusicState)() = (int (*)()) 0x806d1a0;
int (*gxtkAudio::ptr::_SetMusicVolume)(gxtkAudio * self, float arg1) = (int (*)(gxtkAudio * self, float arg1)) 0x806d1c0;
#endif
#endif
