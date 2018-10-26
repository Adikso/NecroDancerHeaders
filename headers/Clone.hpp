// Generated automatically. Do not edit!
#ifndef _Clone_
#define _Clone_
class Point;
#include "Enemy.hpp"

class Clone : public Enemy  {
public:

    // Wrappers
    Clone(int xVal, int yVal, int l) {
        ptr::CSTR_Clone(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Clone * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Clone * _new2() { return ptr::_new2(); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline bool _CanBeLord() { return ptr::_CanBeLord(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Clone * (*New)(Clone * self, int xVal, int yVal, int l);
        static Clone * (*_new2)();
        static Point * (*GetMovementDirection)(Clone * self);
        static bool (*_CanBeLord)();
        static void (*_mark)();
        static void (*CSTR_Clone)(Clone * self);
    };
};

#ifdef _WIN32

Clone * (*Clone::ptr::New)(Clone * self, int xVal, int yVal, int l) = (Clone * (*)(Clone * self, int xVal, int yVal, int l)) 0x63f080;
Clone * (*Clone::ptr::_new2)() = (Clone * (*)()) 0x0;
Point * (*Clone::ptr::GetMovementDirection)(Clone * self) = (Point * (*)(Clone * self)) 0x63f690;
bool (*Clone::ptr::_CanBeLord)() = (bool (*)()) 0x0;
void (*Clone::ptr::_mark)() = (void (*)()) 0x0;
void (*Clone::ptr::CSTR_Clone)(Clone * self) = (void (*)(Clone * self)) 0x63f020;
#endif

#ifdef __linux__

Clone * (*Clone::ptr::New)(Clone * self, int xVal, int yVal, int l) = (Clone * (*)(Clone * self, int xVal, int yVal, int l)) 0x81c1220;
Clone * (*Clone::ptr::_new2)() = (Clone * (*)()) 0x81c1f00;
Point * (*Clone::ptr::GetMovementDirection)(Clone * self) = (Point * (*)(Clone * self)) 0x8103260;
bool (*Clone::ptr::_CanBeLord)() = (bool (*)()) 0x80760e0;
void (*Clone::ptr::_mark)() = (void (*)()) 0x80b0740;
void (*Clone::ptr::CSTR_Clone)(Clone * self) = (void (*)(Clone * self)) 0x81c1200;
#endif
#endif
