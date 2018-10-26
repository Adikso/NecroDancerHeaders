// Generated automatically. Do not edit!
#ifndef _Janitor_
#define _Janitor_
#include "NPC.hpp"

class Janitor : public NPC  {
public:

    // Wrappers
    inline Janitor * New(int xVal, int yVal, int l, bool captv) { return ptr::New(this, xVal, yVal, l, captv); }
    inline Janitor * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Janitor * (*New)(Janitor * self, int xVal, int yVal, int l, bool captv);
        static Janitor * (*_new2)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Janitor * (*Janitor::ptr::New)(Janitor * self, int xVal, int yVal, int l, bool captv) = (Janitor * (*)(Janitor * self, int xVal, int yVal, int l, bool captv)) 0x66cc20;
Janitor * (*Janitor::ptr::_new2)() = (Janitor * (*)()) 0x0;
void (*Janitor::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Janitor * (*Janitor::ptr::New)(Janitor * self, int xVal, int yVal, int l, bool captv) = (Janitor * (*)(Janitor * self, int xVal, int yVal, int l, bool captv)) 0x81dac50;
Janitor * (*Janitor::ptr::_new2)() = (Janitor * (*)()) 0x81dad20;
void (*Janitor::ptr::_mark)() = (void (*)()) 0x80b2a10;
#endif
#endif
