// Generated automatically. Do not edit!
#ifndef _Spider_
#define _Spider_
class Point;
class String;
#include "Enemy.hpp"

class Spider : public Enemy  {
public:
    bool onWall;
    int deathCounter;
    int attemptedMoveX;
    int attemptedMoveY;

    // Wrappers
    Spider(int xVal, int yVal, int l) {
        ptr::CSTR_Spider(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Spider * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Spider * _new2() { return ptr::_new2(); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline int MoveImmediate(int xVal, int yVal, String * movementSource) { return ptr::MoveImmediate(this, xVal, yVal, movementSource); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void Update() { ptr::Update(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Spider * (*New)(Spider * self, int xVal, int yVal, int l);
        static Spider * (*_new2)();
        static Point * (*GetMovementDirection)(Spider * self);
        static int (*MoveImmediate)(Spider * self, int xVal, int yVal, String * movementSource);
        static void (*MoveSucceed)(Spider * self, bool hitPlayer, bool moveDelayed);
        static void (*Update)(Spider * self);
        static void (*_mark)();
        static void (*CSTR_Spider)(Spider * self);
    };
};

#ifdef _WIN32

Spider * (*Spider::ptr::New)(Spider * self, int xVal, int yVal, int l) = (Spider * (*)(Spider * self, int xVal, int yVal, int l)) 0x64f0e0;
Spider * (*Spider::ptr::_new2)() = (Spider * (*)()) 0x0;
Point * (*Spider::ptr::GetMovementDirection)(Spider * self) = (Point * (*)(Spider * self)) 0x64f300;
int (*Spider::ptr::MoveImmediate)(Spider * self, int xVal, int yVal, String * movementSource) = (int (*)(Spider * self, int xVal, int yVal, String * movementSource)) 0x64f590;
void (*Spider::ptr::MoveSucceed)(Spider * self, bool hitPlayer, bool moveDelayed) = (void (*)(Spider * self, bool hitPlayer, bool moveDelayed)) 0x64f630;
void (*Spider::ptr::Update)(Spider * self) = (void (*)(Spider * self)) 0x64f720;
void (*Spider::ptr::_mark)() = (void (*)()) 0x0;
void (*Spider::ptr::CSTR_Spider)(Spider * self) = (void (*)(Spider * self)) 0x64f060;
#endif

#ifdef __linux__

Spider * (*Spider::ptr::New)(Spider * self, int xVal, int yVal, int l) = (Spider * (*)(Spider * self, int xVal, int yVal, int l)) 0x81c67c0;
Spider * (*Spider::ptr::_new2)() = (Spider * (*)()) 0x81c6990;
Point * (*Spider::ptr::GetMovementDirection)(Spider * self) = (Point * (*)(Spider * self)) 0x81042f0;
int (*Spider::ptr::MoveImmediate)(Spider * self, int xVal, int yVal, String * movementSource) = (int (*)(Spider * self, int xVal, int yVal, String * movementSource)) 0x83933e0;
void (*Spider::ptr::MoveSucceed)(Spider * self, bool hitPlayer, bool moveDelayed) = (void (*)(Spider * self, bool hitPlayer, bool moveDelayed)) 0x81a8730;
void (*Spider::ptr::Update)(Spider * self) = (void (*)(Spider * self)) 0x837ff20;
void (*Spider::ptr::_mark)() = (void (*)()) 0x80b0420;
void (*Spider::ptr::CSTR_Spider)(Spider * self) = (void (*)(Spider * self)) 0x81c6780;
#endif
#endif
