// Generated automatically. Do not edit!
#ifndef _BeatAnimationData_
#define _BeatAnimationData_
#include "Object.hpp"

class BeatAnimationData : public Object  {
public:
    int frame;
    float onFraction;
    float offFraction;
    bool singleFrame;

    // Wrappers
    BeatAnimationData() {
        ptr::CSTR_BeatAnimationData(this);
    }

    inline BeatAnimationData * _New(int arg1, float arg2, float arg3, bool arg4) { return ptr::_New(this, arg1, arg2, arg3, arg4); }
    inline BeatAnimationData * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static BeatAnimationData * (*_New)(BeatAnimationData * self, int arg1, float arg2, float arg3, bool arg4);
        static BeatAnimationData * (*_new2)();
        static void (*_mark)();
        static void (*CSTR_BeatAnimationData)(BeatAnimationData * self);
    };
};

#ifdef _WIN32

BeatAnimationData * (*BeatAnimationData::ptr::_New)(BeatAnimationData * self, int arg1, float arg2, float arg3, bool arg4) = (BeatAnimationData * (*)(BeatAnimationData * self, int arg1, float arg2, float arg3, bool arg4)) 0x0;
BeatAnimationData * (*BeatAnimationData::ptr::_new2)() = (BeatAnimationData * (*)()) 0x0;
void (*BeatAnimationData::ptr::_mark)() = (void (*)()) 0x0;
void (*BeatAnimationData::ptr::CSTR_BeatAnimationData)(BeatAnimationData * self) = (void (*)(BeatAnimationData * self)) 0x6160c0;
#endif

#ifdef __linux__

BeatAnimationData * (*BeatAnimationData::ptr::_New)(BeatAnimationData * self, int arg1, float arg2, float arg3, bool arg4) = (BeatAnimationData * (*)(BeatAnimationData * self, int arg1, float arg2, float arg3, bool arg4)) 0x81b59d0;
BeatAnimationData * (*BeatAnimationData::ptr::_new2)() = (BeatAnimationData * (*)()) 0x81b5a00;
void (*BeatAnimationData::ptr::_mark)() = (void (*)()) 0x8074c60;
void (*BeatAnimationData::ptr::CSTR_BeatAnimationData)(BeatAnimationData * self) = (void (*)(BeatAnimationData * self)) 0x81b59b0;
#endif
#endif
