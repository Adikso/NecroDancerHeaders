// Generated automatically. Do not edit!
#ifndef _SleepingGoblin_
#define _SleepingGoblin_
class Point;
#include "Enemy.hpp"

class SleepingGoblin : public Enemy  {
public:
    bool sleeping;
    int stunnedTime;
    int wakeupTime;
    bool haveReslept;

    // Wrappers
    SleepingGoblin(int xVal, int yVal, int l) {
        ptr::CSTR_SleepingGoblin(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline SleepingGoblin * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline SleepingGoblin * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void MoveFail() { ptr::MoveFail(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static SleepingGoblin * (*New)(SleepingGoblin * self, int xVal, int yVal, int l);
        static SleepingGoblin * (*_new2)();
        static void (*Update)(SleepingGoblin * self);
        static Point * (*GetMovementDirection)(SleepingGoblin * self);
        static void (*MoveFail)(SleepingGoblin * self);
        static void (*_mark)();
        static void (*CSTR_SleepingGoblin)(SleepingGoblin * self);
    };
};

#ifdef _WIN32

SleepingGoblin * (*SleepingGoblin::ptr::New)(SleepingGoblin * self, int xVal, int yVal, int l) = (SleepingGoblin * (*)(SleepingGoblin * self, int xVal, int yVal, int l)) 0x649a10;
SleepingGoblin * (*SleepingGoblin::ptr::_new2)() = (SleepingGoblin * (*)()) 0x0;
void (*SleepingGoblin::ptr::Update)(SleepingGoblin * self) = (void (*)(SleepingGoblin * self)) 0x649ca0;
Point * (*SleepingGoblin::ptr::GetMovementDirection)(SleepingGoblin * self) = (Point * (*)(SleepingGoblin * self)) 0x649e00;
void (*SleepingGoblin::ptr::MoveFail)(SleepingGoblin * self) = (void (*)(SleepingGoblin * self)) 0x64a280;
void (*SleepingGoblin::ptr::_mark)() = (void (*)()) 0x0;
void (*SleepingGoblin::ptr::CSTR_SleepingGoblin)(SleepingGoblin * self) = (void (*)(SleepingGoblin * self)) 0x649990;
#endif

#ifdef __linux__

SleepingGoblin * (*SleepingGoblin::ptr::New)(SleepingGoblin * self, int xVal, int yVal, int l) = (SleepingGoblin * (*)(SleepingGoblin * self, int xVal, int yVal, int l)) 0x81c4ad0;
SleepingGoblin * (*SleepingGoblin::ptr::_new2)() = (SleepingGoblin * (*)()) 0x81c4c60;
void (*SleepingGoblin::ptr::Update)(SleepingGoblin * self) = (void (*)(SleepingGoblin * self)) 0x8380e10;
Point * (*SleepingGoblin::ptr::GetMovementDirection)(SleepingGoblin * self) = (Point * (*)(SleepingGoblin * self)) 0x83a6270;
void (*SleepingGoblin::ptr::MoveFail)(SleepingGoblin * self) = (void (*)(SleepingGoblin * self)) 0x83a6720;
void (*SleepingGoblin::ptr::_mark)() = (void (*)()) 0x80b04c0;
void (*SleepingGoblin::ptr::CSTR_SleepingGoblin)(SleepingGoblin * self) = (void (*)(SleepingGoblin * self)) 0x81c4a90;
#endif
#endif
