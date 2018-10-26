// Generated automatically. Do not edit!
#ifndef _Mommy_
#define _Mommy_
class Mummy;
class Point;
#include "Enemy.hpp"

class Mommy : public Enemy  {
public:
    bool readyToSpawn;
    Mummy * theMummy;

    // Wrappers
    Mommy(int xVal, int yVal, int l) {
        ptr::CSTR_Mommy(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Mommy * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Mommy * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline Point * _GetMovementDirection() { return ptr::_GetMovementDirection(); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Mommy * (*New)(Mommy * self, int xVal, int yVal, int l);
        static Mommy * (*_new2)();
        static void (*Update)(Mommy * self);
        static Point * (*_GetMovementDirection)();
        static void (*MoveSucceed)(Mommy * self, bool hitPlayer, bool moveDelayed);
        static void (*_mark)();
        static void (*CSTR_Mommy)(Mommy * self);
    };
};

#ifdef _WIN32

Mommy * (*Mommy::ptr::New)(Mommy * self, int xVal, int yVal, int l) = (Mommy * (*)(Mommy * self, int xVal, int yVal, int l)) 0x650210;
Mommy * (*Mommy::ptr::_new2)() = (Mommy * (*)()) 0x0;
void (*Mommy::ptr::Update)(Mommy * self) = (void (*)(Mommy * self)) 0x650490;
Point * (*Mommy::ptr::_GetMovementDirection)() = (Point * (*)()) 0x0;
void (*Mommy::ptr::MoveSucceed)(Mommy * self, bool hitPlayer, bool moveDelayed) = (void (*)(Mommy * self, bool hitPlayer, bool moveDelayed)) 0x6504b0;
void (*Mommy::ptr::_mark)() = (void (*)()) 0x0;
void (*Mommy::ptr::CSTR_Mommy)(Mommy * self) = (void (*)(Mommy * self)) 0x6501a0;
#endif

#ifdef __linux__

Mommy * (*Mommy::ptr::New)(Mommy * self, int xVal, int yVal, int l) = (Mommy * (*)(Mommy * self, int xVal, int yVal, int l)) 0x81c6e00;
Mommy * (*Mommy::ptr::_new2)() = (Mommy * (*)()) 0x81c6f90;
void (*Mommy::ptr::Update)(Mommy * self) = (void (*)(Mommy * self)) 0x837fed0;
Point * (*Mommy::ptr::_GetMovementDirection)() = (Point * (*)()) 0x8076510;
void (*Mommy::ptr::MoveSucceed)(Mommy * self, bool hitPlayer, bool moveDelayed) = (void (*)(Mommy * self, bool hitPlayer, bool moveDelayed)) 0x83a76b0;
void (*Mommy::ptr::_mark)() = (void (*)()) 0x80b0390;
void (*Mommy::ptr::CSTR_Mommy)(Mommy * self) = (void (*)(Mommy * self)) 0x81c6dd0;
#endif
#endif
