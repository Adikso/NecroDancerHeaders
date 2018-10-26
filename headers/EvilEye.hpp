// Generated automatically. Do not edit!
#ifndef _EvilEye_
#define _EvilEye_
class Point;
#include "Enemy.hpp"

class EvilEye : public Enemy  {
public:
    int dashDir;

    // Wrappers
    EvilEye(int x_, int y_, int l) {
        ptr::CSTR_EvilEye(this);
        ptr::New(this, x_, y_, l);
    }

    inline EvilEye * New(int x_, int y_, int l) { return ptr::New(this, x_, y_, l); }
    inline EvilEye * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline virtual void CheckDash() { ptr::CheckDash(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void _MoveFail() { ptr::_MoveFail(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static EvilEye * (*New)(EvilEye * self, int x_, int y_, int l);
        static EvilEye * (*_new2)();
        static void (*Update)(EvilEye * self);
        static Point * (*GetMovementDirection)(EvilEye * self);
        static void (*CheckDash)(EvilEye * self);
        static void (*MoveSucceed)(EvilEye * self, bool hitPlayer, bool moveDelayed);
        static void (*_MoveFail)();
        static void (*_mark)();
        static void (*CSTR_EvilEye)(EvilEye * self);
    };
};

#ifdef _WIN32

EvilEye * (*EvilEye::ptr::New)(EvilEye * self, int x_, int y_, int l) = (EvilEye * (*)(EvilEye * self, int x_, int y_, int l)) 0x659450;
EvilEye * (*EvilEye::ptr::_new2)() = (EvilEye * (*)()) 0x0;
void (*EvilEye::ptr::Update)(EvilEye * self) = (void (*)(EvilEye * self)) 0x659770;
Point * (*EvilEye::ptr::GetMovementDirection)(EvilEye * self) = (Point * (*)(EvilEye * self)) 0x659980;
void (*EvilEye::ptr::CheckDash)(EvilEye * self) = (void (*)(EvilEye * self)) 0x659a30;
void (*EvilEye::ptr::MoveSucceed)(EvilEye * self, bool hitPlayer, bool moveDelayed) = (void (*)(EvilEye * self, bool hitPlayer, bool moveDelayed)) 0x659c60;
void (*EvilEye::ptr::_MoveFail)() = (void (*)()) 0x0;
void (*EvilEye::ptr::_mark)() = (void (*)()) 0x0;
void (*EvilEye::ptr::CSTR_EvilEye)(EvilEye * self) = (void (*)(EvilEye * self)) 0x6593f0;
#endif

#ifdef __linux__

EvilEye * (*EvilEye::ptr::New)(EvilEye * self, int x_, int y_, int l) = (EvilEye * (*)(EvilEye * self, int x_, int y_, int l)) 0x81ca080;
EvilEye * (*EvilEye::ptr::_new2)() = (EvilEye * (*)()) 0x81ca2e0;
void (*EvilEye::ptr::Update)(EvilEye * self) = (void (*)(EvilEye * self)) 0x837ef00;
Point * (*EvilEye::ptr::GetMovementDirection)(EvilEye * self) = (Point * (*)(EvilEye * self)) 0x8102950;
void (*EvilEye::ptr::CheckDash)(EvilEye * self) = (void (*)(EvilEye * self)) 0x83a8860;
void (*EvilEye::ptr::MoveSucceed)(EvilEye * self, bool hitPlayer, bool moveDelayed) = (void (*)(EvilEye * self, bool hitPlayer, bool moveDelayed)) 0x83a8a10;
void (*EvilEye::ptr::_MoveFail)() = (void (*)()) 0x81347d0;
void (*EvilEye::ptr::_mark)() = (void (*)()) 0x80b01e0;
void (*EvilEye::ptr::CSTR_EvilEye)(EvilEye * self) = (void (*)(EvilEye * self)) 0x81ca050;
#endif
#endif
