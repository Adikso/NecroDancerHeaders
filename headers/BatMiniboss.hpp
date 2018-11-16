// Generated automatically. Do not edit!
#ifndef _BatMiniboss_
#define _BatMiniboss_
class Point;
#include "Enemy.hpp"

class BatMiniboss : public Enemy  {
public:
    bool hasRoared;

    // Wrappers
    BatMiniboss(int xVal, int yVal, int l) {
        ptr::CSTR_BatMiniboss(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline BatMiniboss * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline BatMiniboss * _new2() { return ptr::_new2(); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void Update() { ptr::Update(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static BatMiniboss * (*New)(BatMiniboss * self, int xVal, int yVal, int l);
        static BatMiniboss * (*_new2)();
        static Point * (*GetMovementDirection)(BatMiniboss * self);
        static void (*Update)(BatMiniboss * self);
        static void (*_mark)();
        static void (*CSTR_BatMiniboss)(BatMiniboss * self);
    };
};

#ifdef _WIN32

inline BatMiniboss * (*BatMiniboss::ptr::New)(BatMiniboss * self, int xVal, int yVal, int l) = (BatMiniboss * (*)(BatMiniboss * self, int xVal, int yVal, int l)) 0x616390;
inline BatMiniboss * (*BatMiniboss::ptr::_new2)() = (BatMiniboss * (*)()) 0x0;
inline Point * (*BatMiniboss::ptr::GetMovementDirection)(BatMiniboss * self) = (Point * (*)(BatMiniboss * self)) 0x616620;
inline void (*BatMiniboss::ptr::Update)(BatMiniboss * self) = (void (*)(BatMiniboss * self)) 0x616830;
inline void (*BatMiniboss::ptr::_mark)() = (void (*)()) 0x0;
inline void (*BatMiniboss::ptr::CSTR_BatMiniboss)(BatMiniboss * self) = (void (*)(BatMiniboss * self)) 0x616330;
#endif

#ifdef __linux__

inline BatMiniboss * (*BatMiniboss::ptr::New)(BatMiniboss * self, int xVal, int yVal, int l) = (BatMiniboss * (*)(BatMiniboss * self, int xVal, int yVal, int l)) 0x81b5bb0;
inline BatMiniboss * (*BatMiniboss::ptr::_new2)() = (BatMiniboss * (*)()) 0x81b5d50;
inline Point * (*BatMiniboss::ptr::GetMovementDirection)(BatMiniboss * self) = (Point * (*)(BatMiniboss * self)) 0x825e460;
inline void (*BatMiniboss::ptr::Update)(BatMiniboss * self) = (void (*)(BatMiniboss * self)) 0x83850f0;
inline void (*BatMiniboss::ptr::_mark)() = (void (*)()) 0x80b0c60;
inline void (*BatMiniboss::ptr::CSTR_BatMiniboss)(BatMiniboss * self) = (void (*)(BatMiniboss * self)) 0x81b5b80;
#endif
#endif
