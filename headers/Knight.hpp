// Generated automatically. Do not edit!
#ifndef _Knight_
#define _Knight_
class Point;
class Sprite;
#include "Enemy.hpp"

class Knight : public Enemy  {
public:
    Sprite * customAttackSwipe;

    // Wrappers
    inline Knight * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Knight * _new2() { return ptr::_new2(); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void Render() { ptr::Render(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Knight * (*New)(Knight * self, int xVal, int yVal, int l);
        static Knight * (*_new2)();
        static Point * (*GetMovementDirection)(Knight * self);
        static void (*Render)(Knight * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

Knight * (*Knight::ptr::New)(Knight * self, int xVal, int yVal, int l) = (Knight * (*)(Knight * self, int xVal, int yVal, int l)) 0x655bf0;
Knight * (*Knight::ptr::_new2)() = (Knight * (*)()) 0x0;
Point * (*Knight::ptr::GetMovementDirection)(Knight * self) = (Point * (*)(Knight * self)) 0x656030;
void (*Knight::ptr::Render)(Knight * self) = (void (*)(Knight * self)) 0x6565b0;
void (*Knight::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Knight * (*Knight::ptr::New)(Knight * self, int xVal, int yVal, int l) = (Knight * (*)(Knight * self, int xVal, int yVal, int l)) 0x81c8830;
Knight * (*Knight::ptr::_new2)() = (Knight * (*)()) 0x81c8bc0;
Point * (*Knight::ptr::GetMovementDirection)(Knight * self) = (Point * (*)(Knight * self)) 0x81b17f0;
void (*Knight::ptr::Render)(Knight * self) = (void (*)(Knight * self)) 0x830b1a0;
void (*Knight::ptr::_mark)() = (void (*)()) 0x80b1060;
#endif
#endif
