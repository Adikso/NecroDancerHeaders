// Generated automatically. Do not edit!
#ifndef _DiamondDealer_
#define _DiamondDealer_
#include "NPC.hpp"

class DiamondDealer : public NPC  {
public:

    // Wrappers
    DiamondDealer(int xVal, int yVal, int l, bool captv) {
        ptr::CSTR_DiamondDealer(this);
        ptr::New(this, xVal, yVal, l, captv);
    }

    inline DiamondDealer * New(int xVal, int yVal, int l, bool captv) { return ptr::New(this, xVal, yVal, l, captv); }
    inline DiamondDealer * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static DiamondDealer * (*New)(DiamondDealer * self, int xVal, int yVal, int l, bool captv);
        static DiamondDealer * (*_new2)();
        static void (*_mark)();
        static void (*CSTR_DiamondDealer)(DiamondDealer * self);
    };
};

#ifdef _WIN32

DiamondDealer * (*DiamondDealer::ptr::New)(DiamondDealer * self, int xVal, int yVal, int l, bool captv) = (DiamondDealer * (*)(DiamondDealer * self, int xVal, int yVal, int l, bool captv)) 0x661410;
DiamondDealer * (*DiamondDealer::ptr::_new2)() = (DiamondDealer * (*)()) 0x0;
void (*DiamondDealer::ptr::_mark)() = (void (*)()) 0x0;
void (*DiamondDealer::ptr::CSTR_DiamondDealer)(DiamondDealer * self) = (void (*)(DiamondDealer * self)) 0x6613b0;
#endif

#ifdef __linux__

DiamondDealer * (*DiamondDealer::ptr::New)(DiamondDealer * self, int xVal, int yVal, int l, bool captv) = (DiamondDealer * (*)(DiamondDealer * self, int xVal, int yVal, int l, bool captv)) 0x81d6c10;
DiamondDealer * (*DiamondDealer::ptr::_new2)() = (DiamondDealer * (*)()) 0x81d6cd0;
void (*DiamondDealer::ptr::_mark)() = (void (*)()) 0x80b2dc0;
void (*DiamondDealer::ptr::CSTR_DiamondDealer)(DiamondDealer * self) = (void (*)(DiamondDealer * self)) 0x81d6ba0;
#endif
#endif
