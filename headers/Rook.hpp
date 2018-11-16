// Generated automatically. Do not edit!
#ifndef _Rook_
#define _Rook_
class Point;
#include "Enemy.hpp"

class Rook : public Enemy  {
public:
    bool castleNextMove;

    // Wrappers
    inline Rook * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Rook * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Rook * (*New)(Rook * self, int xVal, int yVal, int l);
        static Rook * (*_new2)();
        static void (*Update)(Rook * self);
        static void (*MoveSucceed)(Rook * self, bool hitPlayer, bool moveDelayed);
        static Point * (*GetMovementDirection)(Rook * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Rook * (*Rook::ptr::New)(Rook * self, int xVal, int yVal, int l) = (Rook * (*)(Rook * self, int xVal, int yVal, int l)) 0x656c80;
inline Rook * (*Rook::ptr::_new2)() = (Rook * (*)()) 0x0;
inline void (*Rook::ptr::Update)(Rook * self) = (void (*)(Rook * self)) 0x656ef0;
inline void (*Rook::ptr::MoveSucceed)(Rook * self, bool hitPlayer, bool moveDelayed) = (void (*)(Rook * self, bool hitPlayer, bool moveDelayed)) 0x656f00;
inline Point * (*Rook::ptr::GetMovementDirection)(Rook * self) = (Point * (*)(Rook * self)) 0x656f30;
inline void (*Rook::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Rook * (*Rook::ptr::New)(Rook * self, int xVal, int yVal, int l) = (Rook * (*)(Rook * self, int xVal, int yVal, int l)) 0x81c8e30;
inline Rook * (*Rook::ptr::_new2)() = (Rook * (*)()) 0x81c9010;
inline void (*Rook::ptr::Update)(Rook * self) = (void (*)(Rook * self)) 0x837f320;
inline void (*Rook::ptr::MoveSucceed)(Rook * self, bool hitPlayer, bool moveDelayed) = (void (*)(Rook * self, bool hitPlayer, bool moveDelayed)) 0x80765a0;
inline Point * (*Rook::ptr::GetMovementDirection)(Rook * self) = (Point * (*)(Rook * self)) 0x816e440;
inline void (*Rook::ptr::_mark)() = (void (*)()) 0x80b0240;
#endif
#endif
