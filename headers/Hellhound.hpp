// Generated automatically. Do not edit!
#ifndef _Hellhound_
#define _Hellhound_
class Point;
#include "Enemy.hpp"

class Hellhound : public Enemy  {
public:

    // Wrappers
    Hellhound(int xVal, int yVal, int l) {
        ptr::CSTR_Hellhound(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Hellhound * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Hellhound * _new2() { return ptr::_new2(); }
    inline Point * _GetMovementDirection() { return ptr::_GetMovementDirection(); }
    inline void _Update() { ptr::_Update(); }
    inline void Die() { ptr::Die(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Hellhound * (*New)(Hellhound * self, int xVal, int yVal, int l);
        static Hellhound * (*_new2)();
        static Point * (*_GetMovementDirection)();
        static void (*_Update)();
        static void (*Die)(Hellhound * self);
        static void (*_mark)();
        static void (*CSTR_Hellhound)(Hellhound * self);
    };
};

#ifdef _WIN32

Hellhound * (*Hellhound::ptr::New)(Hellhound * self, int xVal, int yVal, int l) = (Hellhound * (*)(Hellhound * self, int xVal, int yVal, int l)) 0x646fd0;
Hellhound * (*Hellhound::ptr::_new2)() = (Hellhound * (*)()) 0x0;
Point * (*Hellhound::ptr::_GetMovementDirection)() = (Point * (*)()) 0x0;
void (*Hellhound::ptr::_Update)() = (void (*)()) 0x0;
void (*Hellhound::ptr::Die)(Hellhound * self) = (void (*)(Hellhound * self)) 0x6471d0;
void (*Hellhound::ptr::_mark)() = (void (*)()) 0x0;
void (*Hellhound::ptr::CSTR_Hellhound)(Hellhound * self) = (void (*)(Hellhound * self)) 0x646f70;
#endif

#ifdef __linux__

Hellhound * (*Hellhound::ptr::New)(Hellhound * self, int xVal, int yVal, int l) = (Hellhound * (*)(Hellhound * self, int xVal, int yVal, int l)) 0x81c3ce0;
Hellhound * (*Hellhound::ptr::_new2)() = (Hellhound * (*)()) 0x81c3e30;
Point * (*Hellhound::ptr::_GetMovementDirection)() = (Point * (*)()) 0x8076310;
void (*Hellhound::ptr::_Update)() = (void (*)()) 0x8381c70;
void (*Hellhound::ptr::Die)(Hellhound * self) = (void (*)(Hellhound * self)) 0x83b6210;
void (*Hellhound::ptr::_mark)() = (void (*)()) 0x80b0590;
void (*Hellhound::ptr::CSTR_Hellhound)(Hellhound * self) = (void (*)(Hellhound * self)) 0x81c3cc0;
#endif
#endif
