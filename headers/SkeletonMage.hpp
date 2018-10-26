// Generated automatically. Do not edit!
#ifndef _SkeletonMage_
#define _SkeletonMage_
class Player;
class Point;
class Sprite;
class String;
#include "Enemy.hpp"

class SkeletonMage : public Enemy  {
public:
    Sprite * gustImage;
    Player * playerGusted;
    int animStartAt;

    // Wrappers
    SkeletonMage(int xVal, int yVal, int l) {
        ptr::CSTR_SkeletonMage(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline SkeletonMage * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline SkeletonMage * _new2() { return ptr::_new2(); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline int MoveImmediate(int xVal, int yVal, String * movementSource) { return ptr::MoveImmediate(this, xVal, yVal, movementSource); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static SkeletonMage * (*New)(SkeletonMage * self, int xVal, int yVal, int l);
        static SkeletonMage * (*_new2)();
        static Point * (*GetMovementDirection)(SkeletonMage * self);
        static int (*MoveImmediate)(SkeletonMage * self, int xVal, int yVal, String * movementSource);
        static void (*Update)(SkeletonMage * self);
        static void (*Render)(SkeletonMage * self);
        static void (*mark)(SkeletonMage * self);
        static void (*CSTR_SkeletonMage)(SkeletonMage * self);
    };
};

#ifdef _WIN32

SkeletonMage * (*SkeletonMage::ptr::New)(SkeletonMage * self, int xVal, int yVal, int l) = (SkeletonMage * (*)(SkeletonMage * self, int xVal, int yVal, int l)) 0x619e50;
SkeletonMage * (*SkeletonMage::ptr::_new2)() = (SkeletonMage * (*)()) 0x0;
Point * (*SkeletonMage::ptr::GetMovementDirection)(SkeletonMage * self) = (Point * (*)(SkeletonMage * self)) 0x61a1f0;
int (*SkeletonMage::ptr::MoveImmediate)(SkeletonMage * self, int xVal, int yVal, String * movementSource) = (int (*)(SkeletonMage * self, int xVal, int yVal, String * movementSource)) 0x61a200;
void (*SkeletonMage::ptr::Update)(SkeletonMage * self) = (void (*)(SkeletonMage * self)) 0x61a700;
void (*SkeletonMage::ptr::Render)(SkeletonMage * self) = (void (*)(SkeletonMage * self)) 0x61a790;
void (*SkeletonMage::ptr::mark)(SkeletonMage * self) = (void (*)(SkeletonMage * self)) 0x61a8a0;
void (*SkeletonMage::ptr::CSTR_SkeletonMage)(SkeletonMage * self) = (void (*)(SkeletonMage * self)) 0x619dd0;
#endif

#ifdef __linux__

SkeletonMage * (*SkeletonMage::ptr::New)(SkeletonMage * self, int xVal, int yVal, int l) = (SkeletonMage * (*)(SkeletonMage * self, int xVal, int yVal, int l)) 0x81b67e0;
SkeletonMage * (*SkeletonMage::ptr::_new2)() = (SkeletonMage * (*)()) 0x81b6a70;
Point * (*SkeletonMage::ptr::GetMovementDirection)(SkeletonMage * self) = (Point * (*)(SkeletonMage * self)) 0x8074ea0;
int (*SkeletonMage::ptr::MoveImmediate)(SkeletonMage * self, int xVal, int yVal, String * movementSource) = (int (*)(SkeletonMage * self, int xVal, int yVal, String * movementSource)) 0x8393df0;
void (*SkeletonMage::ptr::Update)(SkeletonMage * self) = (void (*)(SkeletonMage * self)) 0x8384b10;
void (*SkeletonMage::ptr::Render)(SkeletonMage * self) = (void (*)(SkeletonMage * self)) 0x830c9e0;
void (*SkeletonMage::ptr::mark)(SkeletonMage * self) = (void (*)(SkeletonMage * self)) 0x80b16b0;
void (*SkeletonMage::ptr::CSTR_SkeletonMage)(SkeletonMage * self) = (void (*)(SkeletonMage * self)) 0x81b67a0;
#endif
#endif
