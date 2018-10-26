// Generated automatically. Do not edit!
#ifndef _Ghost_
#define _Ghost_
template<class T> class Array;
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class Ghost : public Enemy  {
public:
    Array<float> * lastDist;
    bool movingAway;

    // Wrappers
    Ghost(int xVal, int yVal, int l) {
        ptr::CSTR_Ghost(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Ghost * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Ghost * _new2() { return ptr::_new2(); }
    inline virtual void ProcessDistanceChanges() { ptr::ProcessDistanceChanges(this); }
    inline void Update() { ptr::Update(this); }
    inline int Move() { return ptr::Move(this); }
    inline int _MoveImmediate(int arg1, int arg2, String * arg3) { return ptr::_MoveImmediate(this, arg1, arg2, arg3); }
    inline bool CanBeDamaged(bool phasing, bool piercing) { return ptr::CanBeDamaged(this, phasing, piercing); }
    inline bool _Hit(String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) { return ptr::_Hit(this, arg1, arg2, arg3, arg4, arg5, arg6); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Ghost * (*New)(Ghost * self, int xVal, int yVal, int l);
        static Ghost * (*_new2)();
        static void (*ProcessDistanceChanges)(Ghost * self);
        static void (*Update)(Ghost * self);
        static int (*Move)(Ghost * self);
        static int (*_MoveImmediate)(Ghost * self, int arg1, int arg2, String * arg3);
        static bool (*CanBeDamaged)(Ghost * self, bool phasing, bool piercing);
        static bool (*_Hit)(Ghost * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6);
        static Point * (*GetMovementDirection)(Ghost * self);
        static void (*_mark)();
        static void (*CSTR_Ghost)(Ghost * self);
    };
};

#ifdef _WIN32

Ghost * (*Ghost::ptr::New)(Ghost * self, int xVal, int yVal, int l) = (Ghost * (*)(Ghost * self, int xVal, int yVal, int l)) 0x63ae90;
Ghost * (*Ghost::ptr::_new2)() = (Ghost * (*)()) 0x0;
void (*Ghost::ptr::ProcessDistanceChanges)(Ghost * self) = (void (*)(Ghost * self)) 0x63b0c0;
void (*Ghost::ptr::Update)(Ghost * self) = (void (*)(Ghost * self)) 0x63b470;
int (*Ghost::ptr::Move)(Ghost * self) = (int (*)(Ghost * self)) 0x63b570;
int (*Ghost::ptr::_MoveImmediate)(Ghost * self, int arg1, int arg2, String * arg3) = (int (*)(Ghost * self, int arg1, int arg2, String * arg3)) 0x0;
bool (*Ghost::ptr::CanBeDamaged)(Ghost * self, bool phasing, bool piercing) = (bool (*)(Ghost * self, bool phasing, bool piercing)) 0x63b6e0;
bool (*Ghost::ptr::_Hit)(Ghost * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(Ghost * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x0;
Point * (*Ghost::ptr::GetMovementDirection)(Ghost * self) = (Point * (*)(Ghost * self)) 0x63b7d0;
void (*Ghost::ptr::_mark)() = (void (*)()) 0x0;
void (*Ghost::ptr::CSTR_Ghost)(Ghost * self) = (void (*)(Ghost * self)) 0x63adc0;
#endif

#ifdef __linux__

Ghost * (*Ghost::ptr::New)(Ghost * self, int xVal, int yVal, int l) = (Ghost * (*)(Ghost * self, int xVal, int yVal, int l)) 0x81c0490;
Ghost * (*Ghost::ptr::_new2)() = (Ghost * (*)()) 0x81c0620;
void (*Ghost::ptr::ProcessDistanceChanges)(Ghost * self) = (void (*)(Ghost * self)) 0x80c0a80;
void (*Ghost::ptr::Update)(Ghost * self) = (void (*)(Ghost * self)) 0x8382ff0;
int (*Ghost::ptr::Move)(Ghost * self) = (int (*)(Ghost * self)) 0x80962e0;
int (*Ghost::ptr::_MoveImmediate)(Ghost * self, int arg1, int arg2, String * arg3) = (int (*)(Ghost * self, int arg1, int arg2, String * arg3)) 0x8393d10;
bool (*Ghost::ptr::CanBeDamaged)(Ghost * self, bool phasing, bool piercing) = (bool (*)(Ghost * self, bool phasing, bool piercing)) 0x8076060;
bool (*Ghost::ptr::_Hit)(Ghost * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(Ghost * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x8399560;
Point * (*Ghost::ptr::GetMovementDirection)(Ghost * self) = (Point * (*)(Ghost * self)) 0x80b46d0;
void (*Ghost::ptr::_mark)() = (void (*)()) 0x80b07a0;
void (*Ghost::ptr::CSTR_Ghost)(Ghost * self) = (void (*)(Ghost * self)) 0x81c0320;
#endif
#endif
