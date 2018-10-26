// Generated automatically. Do not edit!
#ifndef _SoundData_
#define _SoundData_
#include "Object.hpp"

class SoundData : public Object  {
public:
    int x;
    int y;
    bool inWorld;
    int sound;
    int delay;
    int channel;
    bool loop;
    float pan;
    float volume;
    float speed;
    int voiceoverNum;

    // Wrappers
    SoundData() {
        ptr::CSTR_SoundData(this);
    }

    inline SoundData * _New(int arg1, bool arg2, int arg3, int arg4, int arg5, int arg6, bool arg7, float arg8, float arg9, float arg10, int arg11) { return ptr::_New(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11); }
    inline SoundData * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static SoundData * (*_New)(SoundData * self, int arg1, bool arg2, int arg3, int arg4, int arg5, int arg6, bool arg7, float arg8, float arg9, float arg10, int arg11);
        static SoundData * (*_new2)();
        static void (*_mark)();
        static void (*CSTR_SoundData)(SoundData * self);
    };
};

#ifdef _WIN32

SoundData * (*SoundData::ptr::_New)(SoundData * self, int arg1, bool arg2, int arg3, int arg4, int arg5, int arg6, bool arg7, float arg8, float arg9, float arg10, int arg11) = (SoundData * (*)(SoundData * self, int arg1, bool arg2, int arg3, int arg4, int arg5, int arg6, bool arg7, float arg8, float arg9, float arg10, int arg11)) 0x0;
SoundData * (*SoundData::ptr::_new2)() = (SoundData * (*)()) 0x0;
void (*SoundData::ptr::_mark)() = (void (*)()) 0x0;
void (*SoundData::ptr::CSTR_SoundData)(SoundData * self) = (void (*)(SoundData * self)) 0x5f7f10;
#endif

#ifdef __linux__

SoundData * (*SoundData::ptr::_New)(SoundData * self, int arg1, bool arg2, int arg3, int arg4, int arg5, int arg6, bool arg7, float arg8, float arg9, float arg10, int arg11) = (SoundData * (*)(SoundData * self, int arg1, bool arg2, int arg3, int arg4, int arg5, int arg6, bool arg7, float arg8, float arg9, float arg10, int arg11)) 0x81a01b0;
SoundData * (*SoundData::ptr::_new2)() = (SoundData * (*)()) 0x81a0210;
void (*SoundData::ptr::_mark)() = (void (*)()) 0x8073740;
void (*SoundData::ptr::CSTR_SoundData)(SoundData * self) = (void (*)(SoundData * self)) 0x81a0160;
#endif
#endif
