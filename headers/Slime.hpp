// Generated automatically. Do not edit!
#ifndef _Slime_
#define _Slime_
class Point;
#include "Enemy.hpp"

class Slime : public Enemy  {
public:
    int moveCount;

    // Wrappers
    Slime(int xVal, int yVal, int l) {
        ptr::CSTR_Slime(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Slime * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Slime * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline int PerformMovement(int xVal, int yVal) { return ptr::PerformMovement(this, xVal, yVal); }
    inline bool CanBeLord() { return ptr::CanBeLord(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void MoveFail() { ptr::MoveFail(this); }
    inline void Die() { ptr::Die(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Slime * (*New)(Slime * self, int xVal, int yVal, int l);
        static Slime * (*_new2)();
        static void (*Update)(Slime * self);
        static Point * (*GetMovementDirection)(Slime * self);
        static int (*PerformMovement)(Slime * self, int xVal, int yVal);
        static bool (*CanBeLord)(Slime * self);
        static void (*MoveSucceed)(Slime * self, bool hitPlayer, bool moveDelayed);
        static void (*MoveFail)(Slime * self);
        static void (*Die)(Slime * self);
        static void (*_mark)();
        static void (*CSTR_Slime)(Slime * self);
    };
};

#ifdef _WIN32

Slime * (*Slime::ptr::New)(Slime * self, int xVal, int yVal, int l) = (Slime * (*)(Slime * self, int xVal, int yVal, int l)) 0x638e50;
Slime * (*Slime::ptr::_new2)() = (Slime * (*)()) 0x0;
void (*Slime::ptr::Update)(Slime * self) = (void (*)(Slime * self)) 0x639380;
Point * (*Slime::ptr::GetMovementDirection)(Slime * self) = (Point * (*)(Slime * self)) 0x6393e0;
int (*Slime::ptr::PerformMovement)(Slime * self, int xVal, int yVal) = (int (*)(Slime * self, int xVal, int yVal)) 0x620b70;
bool (*Slime::ptr::CanBeLord)(Slime * self) = (bool (*)(Slime * self)) 0x639840;
void (*Slime::ptr::MoveSucceed)(Slime * self, bool hitPlayer, bool moveDelayed) = (void (*)(Slime * self, bool hitPlayer, bool moveDelayed)) 0x639850;
void (*Slime::ptr::MoveFail)(Slime * self) = (void (*)(Slime * self)) 0x639920;
void (*Slime::ptr::Die)(Slime * self) = (void (*)(Slime * self)) 0x639b90;
void (*Slime::ptr::_mark)() = (void (*)()) 0x0;
void (*Slime::ptr::CSTR_Slime)(Slime * self) = (void (*)(Slime * self)) 0x638df0;
#endif

#ifdef __linux__

Slime * (*Slime::ptr::New)(Slime * self, int xVal, int yVal, int l) = (Slime * (*)(Slime * self, int xVal, int yVal, int l)) 0x81bf5d0;
Slime * (*Slime::ptr::_new2)() = (Slime * (*)()) 0x81bfcc0;
void (*Slime::ptr::Update)(Slime * self) = (void (*)(Slime * self)) 0x83832a0;
Point * (*Slime::ptr::GetMovementDirection)(Slime * self) = (Point * (*)(Slime * self)) 0x80b47f0;
int (*Slime::ptr::PerformMovement)(Slime * self, int xVal, int yVal) = (int (*)(Slime * self, int xVal, int yVal)) 0x81a8cf0;
bool (*Slime::ptr::CanBeLord)(Slime * self) = (bool (*)(Slime * self)) 0x8076050;
void (*Slime::ptr::MoveSucceed)(Slime * self, bool hitPlayer, bool moveDelayed) = (void (*)(Slime * self, bool hitPlayer, bool moveDelayed)) 0x80b4720;
void (*Slime::ptr::MoveFail)(Slime * self) = (void (*)(Slime * self)) 0x8135540;
void (*Slime::ptr::Die)(Slime * self) = (void (*)(Slime * self)) 0x83b6450;
void (*Slime::ptr::_mark)() = (void (*)()) 0x80b0810;
void (*Slime::ptr::CSTR_Slime)(Slime * self) = (void (*)(Slime * self)) 0x81bf5a0;
#endif
#endif
