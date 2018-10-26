// Generated automatically. Do not edit!
#ifndef _ElectricMage_
#define _ElectricMage_
class Point;
class String;
#include "Enemy.hpp"

class ElectricMage : public Enemy  {
public:

    // Wrappers
    ElectricMage(int xVal, int yVal, int l) {
        ptr::CSTR_ElectricMage(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline ElectricMage * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline ElectricMage * _new2() { return ptr::_new2(); }
    inline Point * _GetMovementDirection() { return ptr::_GetMovementDirection(); }
    inline int MoveImmediate(int xVal, int yVal, String * movementSource) { return ptr::MoveImmediate(this, xVal, yVal, movementSource); }
    inline void _Update() { ptr::_Update(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static ElectricMage * (*New)(ElectricMage * self, int xVal, int yVal, int l);
        static ElectricMage * (*_new2)();
        static Point * (*_GetMovementDirection)();
        static int (*MoveImmediate)(ElectricMage * self, int xVal, int yVal, String * movementSource);
        static void (*_Update)();
        static void (*_mark)();
        static void (*CSTR_ElectricMage)(ElectricMage * self);
    };
};

#ifdef _WIN32

ElectricMage * (*ElectricMage::ptr::New)(ElectricMage * self, int xVal, int yVal, int l) = (ElectricMage * (*)(ElectricMage * self, int xVal, int yVal, int l)) 0x657a20;
ElectricMage * (*ElectricMage::ptr::_new2)() = (ElectricMage * (*)()) 0x0;
Point * (*ElectricMage::ptr::_GetMovementDirection)() = (Point * (*)()) 0x0;
int (*ElectricMage::ptr::MoveImmediate)(ElectricMage * self, int xVal, int yVal, String * movementSource) = (int (*)(ElectricMage * self, int xVal, int yVal, String * movementSource)) 0x657cb0;
void (*ElectricMage::ptr::_Update)() = (void (*)()) 0x0;
void (*ElectricMage::ptr::_mark)() = (void (*)()) 0x0;
void (*ElectricMage::ptr::CSTR_ElectricMage)(ElectricMage * self) = (void (*)(ElectricMage * self)) 0x6579c0;
#endif

#ifdef __linux__

ElectricMage * (*ElectricMage::ptr::New)(ElectricMage * self, int xVal, int yVal, int l) = (ElectricMage * (*)(ElectricMage * self, int xVal, int yVal, int l)) 0x81c94f0;
ElectricMage * (*ElectricMage::ptr::_new2)() = (ElectricMage * (*)()) 0x81c9c90;
Point * (*ElectricMage::ptr::_GetMovementDirection)() = (Point * (*)()) 0x8076600;
int (*ElectricMage::ptr::MoveImmediate)(ElectricMage * self, int xVal, int yVal, String * movementSource) = (int (*)(ElectricMage * self, int xVal, int yVal, String * movementSource)) 0x8393000;
void (*ElectricMage::ptr::_Update)() = (void (*)()) 0x837f280;
void (*ElectricMage::ptr::_mark)() = (void (*)()) 0x80b0210;
void (*ElectricMage::ptr::CSTR_ElectricMage)(ElectricMage * self) = (void (*)(ElectricMage * self)) 0x81c94d0;
#endif
#endif
