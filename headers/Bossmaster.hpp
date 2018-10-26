// Generated automatically. Do not edit!
#ifndef _Bossmaster_
#define _Bossmaster_
#include "NPC.hpp"

class Bossmaster : public NPC  {
public:

    // Wrappers
    Bossmaster(int xVal, int yVal, int l, bool captv) {
        ptr::CSTR_Bossmaster(this);
        ptr::New(this, xVal, yVal, l, captv);
    }

    inline Bossmaster * New(int xVal, int yVal, int l, bool captv) { return ptr::New(this, xVal, yVal, l, captv); }
    inline Bossmaster * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Bossmaster * (*New)(Bossmaster * self, int xVal, int yVal, int l, bool captv);
        static Bossmaster * (*_new2)();
        static void (*_mark)();
        static void (*CSTR_Bossmaster)(Bossmaster * self);
    };
};

#ifdef _WIN32

Bossmaster * (*Bossmaster::ptr::New)(Bossmaster * self, int xVal, int yVal, int l, bool captv) = (Bossmaster * (*)(Bossmaster * self, int xVal, int yVal, int l, bool captv)) 0x661770;
Bossmaster * (*Bossmaster::ptr::_new2)() = (Bossmaster * (*)()) 0x0;
void (*Bossmaster::ptr::_mark)() = (void (*)()) 0x0;
void (*Bossmaster::ptr::CSTR_Bossmaster)(Bossmaster * self) = (void (*)(Bossmaster * self)) 0x661710;
#endif

#ifdef __linux__

Bossmaster * (*Bossmaster::ptr::New)(Bossmaster * self, int xVal, int yVal, int l, bool captv) = (Bossmaster * (*)(Bossmaster * self, int xVal, int yVal, int l, bool captv)) 0x81d7000;
Bossmaster * (*Bossmaster::ptr::_new2)() = (Bossmaster * (*)()) 0x81d70c0;
void (*Bossmaster::ptr::_mark)() = (void (*)()) 0x80b2e70;
void (*Bossmaster::ptr::CSTR_Bossmaster)(Bossmaster * self) = (void (*)(Bossmaster * self)) 0x81d6f90;
#endif
#endif
