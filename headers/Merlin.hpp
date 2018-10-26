// Generated automatically. Do not edit!
#ifndef _Merlin_
#define _Merlin_
#include "NPC.hpp"

class Merlin : public NPC  {
public:

    // Wrappers
    Merlin(int xVal, int yVal, int l, bool captv) {
        ptr::CSTR_Merlin(this);
        ptr::New(this, xVal, yVal, l, captv);
    }

    inline Merlin * New(int xVal, int yVal, int l, bool captv) { return ptr::New(this, xVal, yVal, l, captv); }
    inline Merlin * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Merlin * (*New)(Merlin * self, int xVal, int yVal, int l, bool captv);
        static Merlin * (*_new2)();
        static void (*_mark)();
        static void (*CSTR_Merlin)(Merlin * self);
    };
};

#ifdef _WIN32

Merlin * (*Merlin::ptr::New)(Merlin * self, int xVal, int yVal, int l, bool captv) = (Merlin * (*)(Merlin * self, int xVal, int yVal, int l, bool captv)) 0x661650;
Merlin * (*Merlin::ptr::_new2)() = (Merlin * (*)()) 0x0;
void (*Merlin::ptr::_mark)() = (void (*)()) 0x0;
void (*Merlin::ptr::CSTR_Merlin)(Merlin * self) = (void (*)(Merlin * self)) 0x6615f0;
#endif

#ifdef __linux__

Merlin * (*Merlin::ptr::New)(Merlin * self, int xVal, int yVal, int l, bool captv) = (Merlin * (*)(Merlin * self, int xVal, int yVal, int l, bool captv)) 0x81d6eb0;
Merlin * (*Merlin::ptr::_new2)() = (Merlin * (*)()) 0x81d6f70;
void (*Merlin::ptr::_mark)() = (void (*)()) 0x80b2f20;
void (*Merlin::ptr::CSTR_Merlin)(Merlin * self) = (void (*)(Merlin * self)) 0x81d6e40;
#endif
#endif
