// Generated automatically. Do not edit!
#ifndef _SpriteInitData_
#define _SpriteInitData_
#include "Object.hpp"

class SpriteInitData : public Object  {
public:
    int frameWidth;
    int frameHeight;
    int frameCount;
    int flags;

    // Wrappers
    inline SpriteInitData * _New(int arg1, int arg2, int arg3, int arg4) { return ptr::_New(this, arg1, arg2, arg3, arg4); }
    inline SpriteInitData * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static SpriteInitData * (*_New)(SpriteInitData * self, int arg1, int arg2, int arg3, int arg4);
        static SpriteInitData * (*_new2)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

SpriteInitData * (*SpriteInitData::ptr::_New)(SpriteInitData * self, int arg1, int arg2, int arg3, int arg4) = (SpriteInitData * (*)(SpriteInitData * self, int arg1, int arg2, int arg3, int arg4)) 0x0;
SpriteInitData * (*SpriteInitData::ptr::_new2)() = (SpriteInitData * (*)()) 0x0;
void (*SpriteInitData::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

SpriteInitData * (*SpriteInitData::ptr::_New)(SpriteInitData * self, int arg1, int arg2, int arg3, int arg4) = (SpriteInitData * (*)(SpriteInitData * self, int arg1, int arg2, int arg3, int arg4)) 0x8145b40;
SpriteInitData * (*SpriteInitData::ptr::_new2)() = (SpriteInitData * (*)()) 0x8145b70;
void (*SpriteInitData::ptr::_mark)() = (void (*)()) 0x806f2b0;
#endif
#endif
