// Generated automatically. Do not edit!
#ifndef _Harpy_
#define _Harpy_
class Point;
#include "Enemy.hpp"

class Harpy : public Enemy  {
public:

    // Wrappers
    Harpy(int xVal, int yVal, int l) {
        ptr::CSTR_Harpy(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Harpy * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Harpy * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline bool _CanBeLord() { return ptr::_CanBeLord(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Harpy * (*New)(Harpy * self, int xVal, int yVal, int l);
        static Harpy * (*_new2)();
        static void (*Update)(Harpy * self);
        static Point * (*GetMovementDirection)(Harpy * self);
        static void (*MoveSucceed)(Harpy * self, bool hitPlayer, bool moveDelayed);
        static bool (*_CanBeLord)();
        static void (*_mark)();
        static void (*CSTR_Harpy)(Harpy * self);
    };
};

#ifdef _WIN32

inline Harpy * (*Harpy::ptr::New)(Harpy * self, int xVal, int yVal, int l) = (Harpy * (*)(Harpy * self, int xVal, int yVal, int l)) 0x64c7c0;
inline Harpy * (*Harpy::ptr::_new2)() = (Harpy * (*)()) 0x0;
inline void (*Harpy::ptr::Update)(Harpy * self) = (void (*)(Harpy * self)) 0x64ca40;
inline Point * (*Harpy::ptr::GetMovementDirection)(Harpy * self) = (Point * (*)(Harpy * self)) 0x64cb30;
inline void (*Harpy::ptr::MoveSucceed)(Harpy * self, bool hitPlayer, bool moveDelayed) = (void (*)(Harpy * self, bool hitPlayer, bool moveDelayed)) 0x64cf30;
inline bool (*Harpy::ptr::_CanBeLord)() = (bool (*)()) 0x0;
inline void (*Harpy::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Harpy::ptr::CSTR_Harpy)(Harpy * self) = (void (*)(Harpy * self)) 0x64c760;
#endif

#ifdef __linux__

inline Harpy * (*Harpy::ptr::New)(Harpy * self, int xVal, int yVal, int l) = (Harpy * (*)(Harpy * self, int xVal, int yVal, int l)) 0x81c5610;
inline Harpy * (*Harpy::ptr::_new2)() = (Harpy * (*)()) 0x81c57a0;
inline void (*Harpy::ptr::Update)(Harpy * self) = (void (*)(Harpy * self)) 0x83802d0;
inline Point * (*Harpy::ptr::GetMovementDirection)(Harpy * self) = (Point * (*)(Harpy * self)) 0x81b1b00;
inline void (*Harpy::ptr::MoveSucceed)(Harpy * self, bool hitPlayer, bool moveDelayed) = (void (*)(Harpy * self, bool hitPlayer, bool moveDelayed)) 0x83a7020;
inline bool (*Harpy::ptr::_CanBeLord)() = (bool (*)()) 0x80763d0;
inline void (*Harpy::ptr::_mark)() = (void (*)()) 0x80b04a0;
inline void (*Harpy::ptr::CSTR_Harpy)(Harpy * self) = (void (*)(Harpy * self)) 0x81c55f0;
#endif
#endif
