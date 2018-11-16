// Generated automatically. Do not edit!
#ifndef _Mummy_
#define _Mummy_
class Point;
#include "Enemy.hpp"

class Mummy : public Enemy  {
public:
    int animNum;

    // Wrappers
    Mummy(int xVal, int yVal, int l) {
        ptr::CSTR_Mummy(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Mummy * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Mummy * _new2() { return ptr::_new2(); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void Update() { ptr::Update(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Mummy * (*New)(Mummy * self, int xVal, int yVal, int l);
        static Mummy * (*_new2)();
        static Point * (*GetMovementDirection)(Mummy * self);
        static void (*Update)(Mummy * self);
        static void (*MoveSucceed)(Mummy * self, bool hitPlayer, bool moveDelayed);
        static void (*_mark)();
        static void (*CSTR_Mummy)(Mummy * self);
    };
};

#ifdef _WIN32

inline Mummy * (*Mummy::ptr::New)(Mummy * self, int xVal, int yVal, int l) = (Mummy * (*)(Mummy * self, int xVal, int yVal, int l)) 0x64fe10;
inline Mummy * (*Mummy::ptr::_new2)() = (Mummy * (*)()) 0x0;
inline Point * (*Mummy::ptr::GetMovementDirection)(Mummy * self) = (Point * (*)(Mummy * self)) 0x650070;
inline void (*Mummy::ptr::Update)(Mummy * self) = (void (*)(Mummy * self)) 0x650120;
inline void (*Mummy::ptr::MoveSucceed)(Mummy * self, bool hitPlayer, bool moveDelayed) = (void (*)(Mummy * self, bool hitPlayer, bool moveDelayed)) 0x650150;
inline void (*Mummy::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Mummy::ptr::CSTR_Mummy)(Mummy * self) = (void (*)(Mummy * self)) 0x64fdb0;
#endif

#ifdef __linux__

inline Mummy * (*Mummy::ptr::New)(Mummy * self, int xVal, int yVal, int l) = (Mummy * (*)(Mummy * self, int xVal, int yVal, int l)) 0x81c6bc0;
inline Mummy * (*Mummy::ptr::_new2)() = (Mummy * (*)()) 0x81c6db0;
inline Point * (*Mummy::ptr::GetMovementDirection)(Mummy * self) = (Point * (*)(Mummy * self)) 0x80b43e0;
inline void (*Mummy::ptr::Update)(Mummy * self) = (void (*)(Mummy * self)) 0x837fef0;
inline void (*Mummy::ptr::MoveSucceed)(Mummy * self, bool hitPlayer, bool moveDelayed) = (void (*)(Mummy * self, bool hitPlayer, bool moveDelayed)) 0x80764c0;
inline void (*Mummy::ptr::_mark)() = (void (*)()) 0x80b0400;
inline void (*Mummy::ptr::CSTR_Mummy)(Mummy * self) = (void (*)(Mummy * self)) 0x81c6b90;
#endif
#endif
