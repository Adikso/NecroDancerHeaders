// Generated automatically. Do not edit!
#ifndef _DecorativeFireTrap_
#define _DecorativeFireTrap_
#include "Trap.hpp"

class DecorativeFireTrap : public Trap  {
public:

    // Wrappers
    inline DecorativeFireTrap * New(int xVal, int yVal) { return ptr::New(this, xVal, yVal); }
    inline DecorativeFireTrap * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static DecorativeFireTrap * (*New)(DecorativeFireTrap * self, int xVal, int yVal);
        static DecorativeFireTrap * (*_new2)();
        static void (*Update)(DecorativeFireTrap * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

DecorativeFireTrap * (*DecorativeFireTrap::ptr::New)(DecorativeFireTrap * self, int xVal, int yVal) = (DecorativeFireTrap * (*)(DecorativeFireTrap * self, int xVal, int yVal)) 0x65acb0;
DecorativeFireTrap * (*DecorativeFireTrap::ptr::_new2)() = (DecorativeFireTrap * (*)()) 0x0;
void (*DecorativeFireTrap::ptr::Update)(DecorativeFireTrap * self) = (void (*)(DecorativeFireTrap * self)) 0x65ae30;
void (*DecorativeFireTrap::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

DecorativeFireTrap * (*DecorativeFireTrap::ptr::New)(DecorativeFireTrap * self, int xVal, int yVal) = (DecorativeFireTrap * (*)(DecorativeFireTrap * self, int xVal, int yVal)) 0x81d0c50;
DecorativeFireTrap * (*DecorativeFireTrap::ptr::_new2)() = (DecorativeFireTrap * (*)()) 0x81d0e00;
void (*DecorativeFireTrap::ptr::Update)(DecorativeFireTrap * self) = (void (*)(DecorativeFireTrap * self)) 0x82573a0;
void (*DecorativeFireTrap::ptr::_mark)() = (void (*)()) 0x80a5c40;
#endif
#endif
