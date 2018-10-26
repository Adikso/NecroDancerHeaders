// Generated automatically. Do not edit!
#ifndef _Minotaur_
#define _Minotaur_
class Point;
#include "Enemy.hpp"

class Minotaur : public Enemy  {
public:
    int initalYOff;
    bool hasRoared;
    int chargingDir;
    int stunnedTime;

    // Wrappers
    Minotaur(int xVal, int yVal, int l) {
        ptr::CSTR_Minotaur(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Minotaur * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Minotaur * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline virtual int TryChargeAt(int targetX, int targetY) { return ptr::TryChargeAt(this, targetX, targetY); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void MoveFail() { ptr::MoveFail(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Minotaur * (*New)(Minotaur * self, int xVal, int yVal, int l);
        static Minotaur * (*_new2)();
        static void (*Update)(Minotaur * self);
        static int (*TryChargeAt)(Minotaur * self, int targetX, int targetY);
        static Point * (*GetMovementDirection)(Minotaur * self);
        static void (*MoveFail)(Minotaur * self);
        static void (*MoveSucceed)(Minotaur * self, bool hitPlayer, bool moveDelayed);
        static void (*_mark)();
        static void (*CSTR_Minotaur)(Minotaur * self);
    };
};

#ifdef _WIN32

Minotaur * (*Minotaur::ptr::New)(Minotaur * self, int xVal, int yVal, int l) = (Minotaur * (*)(Minotaur * self, int xVal, int yVal, int l)) 0x618fc0;
Minotaur * (*Minotaur::ptr::_new2)() = (Minotaur * (*)()) 0x0;
void (*Minotaur::ptr::Update)(Minotaur * self) = (void (*)(Minotaur * self)) 0x619260;
int (*Minotaur::ptr::TryChargeAt)(Minotaur * self, int targetX, int targetY) = (int (*)(Minotaur * self, int targetX, int targetY)) 0x619430;
Point * (*Minotaur::ptr::GetMovementDirection)(Minotaur * self) = (Point * (*)(Minotaur * self)) 0x619580;
void (*Minotaur::ptr::MoveFail)(Minotaur * self) = (void (*)(Minotaur * self)) 0x619a00;
void (*Minotaur::ptr::MoveSucceed)(Minotaur * self, bool hitPlayer, bool moveDelayed) = (void (*)(Minotaur * self, bool hitPlayer, bool moveDelayed)) 0x619d30;
void (*Minotaur::ptr::_mark)() = (void (*)()) 0x0;
void (*Minotaur::ptr::CSTR_Minotaur)(Minotaur * self) = (void (*)(Minotaur * self)) 0x618f30;
#endif

#ifdef __linux__

Minotaur * (*Minotaur::ptr::New)(Minotaur * self, int xVal, int yVal, int l) = (Minotaur * (*)(Minotaur * self, int xVal, int yVal, int l)) 0x81b65c0;
Minotaur * (*Minotaur::ptr::_new2)() = (Minotaur * (*)()) 0x81b6780;
void (*Minotaur::ptr::Update)(Minotaur * self) = (void (*)(Minotaur * self)) 0x8384c00;
int (*Minotaur::ptr::TryChargeAt)(Minotaur * self, int targetX, int targetY) = (int (*)(Minotaur * self, int targetX, int targetY)) 0x81321f0;
Point * (*Minotaur::ptr::GetMovementDirection)(Minotaur * self) = (Point * (*)(Minotaur * self)) 0x83a2680;
void (*Minotaur::ptr::MoveFail)(Minotaur * self) = (void (*)(Minotaur * self)) 0x83a29a0;
void (*Minotaur::ptr::MoveSucceed)(Minotaur * self, bool hitPlayer, bool moveDelayed) = (void (*)(Minotaur * self, bool hitPlayer, bool moveDelayed)) 0x8257430;
void (*Minotaur::ptr::_mark)() = (void (*)()) 0x80b0bc0;
void (*Minotaur::ptr::CSTR_Minotaur)(Minotaur * self) = (void (*)(Minotaur * self)) 0x81b6580;
#endif
#endif
