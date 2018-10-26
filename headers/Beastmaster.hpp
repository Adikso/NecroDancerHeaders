// Generated automatically. Do not edit!
#ifndef _Beastmaster_
#define _Beastmaster_
#include "NPC.hpp"

class Beastmaster : public NPC  {
public:

    // Wrappers
    Beastmaster(int xVal, int yVal, int l, bool captv) {
        ptr::CSTR_Beastmaster(this);
        ptr::New(this, xVal, yVal, l, captv);
    }

    inline Beastmaster * New(int xVal, int yVal, int l, bool captv) { return ptr::New(this, xVal, yVal, l, captv); }
    inline Beastmaster * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Beastmaster * (*New)(Beastmaster * self, int xVal, int yVal, int l, bool captv);
        static Beastmaster * (*_new2)();
        static void (*_mark)();
        static void (*CSTR_Beastmaster)(Beastmaster * self);
    };
};

#ifdef _WIN32

Beastmaster * (*Beastmaster::ptr::New)(Beastmaster * self, int xVal, int yVal, int l, bool captv) = (Beastmaster * (*)(Beastmaster * self, int xVal, int yVal, int l, bool captv)) 0x661530;
Beastmaster * (*Beastmaster::ptr::_new2)() = (Beastmaster * (*)()) 0x0;
void (*Beastmaster::ptr::_mark)() = (void (*)()) 0x0;
void (*Beastmaster::ptr::CSTR_Beastmaster)(Beastmaster * self) = (void (*)(Beastmaster * self)) 0x6614d0;
#endif

#ifdef __linux__

Beastmaster * (*Beastmaster::ptr::New)(Beastmaster * self, int xVal, int yVal, int l, bool captv) = (Beastmaster * (*)(Beastmaster * self, int xVal, int yVal, int l, bool captv)) 0x81d6d60;
Beastmaster * (*Beastmaster::ptr::_new2)() = (Beastmaster * (*)()) 0x81d6e20;
void (*Beastmaster::ptr::_mark)() = (void (*)()) 0x80b2ac0;
void (*Beastmaster::ptr::CSTR_Beastmaster)(Beastmaster * self) = (void (*)(Beastmaster * self)) 0x81d6cf0;
#endif
#endif
