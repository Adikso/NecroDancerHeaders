// Generated automatically. Do not edit!
#ifndef _SkeletonTank_
#define _SkeletonTank_
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class SkeletonTank : public Enemy  {
public:
    int moveCycle;
    int movingDir;

    // Wrappers
    SkeletonTank(int xVal, int yVal, int l) {
        ptr::CSTR_SkeletonTank(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline SkeletonTank * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline SkeletonTank * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void MoveFail() { ptr::MoveFail(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static SkeletonTank * (*New)(SkeletonTank * self, int xVal, int yVal, int l);
        static SkeletonTank * (*_new2)();
        static void (*Update)(SkeletonTank * self);
        static Point * (*GetMovementDirection)(SkeletonTank * self);
        static bool (*Hit)(SkeletonTank * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*MoveFail)(SkeletonTank * self);
        static void (*MoveSucceed)(SkeletonTank * self, bool hitPlayer, bool moveDelayed);
        static void (*_mark)();
        static void (*CSTR_SkeletonTank)(SkeletonTank * self);
    };
};

#ifdef _WIN32

SkeletonTank * (*SkeletonTank::ptr::New)(SkeletonTank * self, int xVal, int yVal, int l) = (SkeletonTank * (*)(SkeletonTank * self, int xVal, int yVal, int l)) 0x6893f0;
SkeletonTank * (*SkeletonTank::ptr::_new2)() = (SkeletonTank * (*)()) 0x0;
void (*SkeletonTank::ptr::Update)(SkeletonTank * self) = (void (*)(SkeletonTank * self)) 0x689670;
Point * (*SkeletonTank::ptr::GetMovementDirection)(SkeletonTank * self) = (Point * (*)(SkeletonTank * self)) 0x6896b0;
bool (*SkeletonTank::ptr::Hit)(SkeletonTank * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(SkeletonTank * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x689780;
void (*SkeletonTank::ptr::MoveFail)(SkeletonTank * self) = (void (*)(SkeletonTank * self)) 0x689920;
void (*SkeletonTank::ptr::MoveSucceed)(SkeletonTank * self, bool hitPlayer, bool moveDelayed) = (void (*)(SkeletonTank * self, bool hitPlayer, bool moveDelayed)) 0x689ab0;
void (*SkeletonTank::ptr::_mark)() = (void (*)()) 0x0;
void (*SkeletonTank::ptr::CSTR_SkeletonTank)(SkeletonTank * self) = (void (*)(SkeletonTank * self)) 0x689380;
#endif

#ifdef __linux__

SkeletonTank * (*SkeletonTank::ptr::New)(SkeletonTank * self, int xVal, int yVal, int l) = (SkeletonTank * (*)(SkeletonTank * self, int xVal, int yVal, int l)) 0x81e17f0;
SkeletonTank * (*SkeletonTank::ptr::_new2)() = (SkeletonTank * (*)()) 0x81e1980;
void (*SkeletonTank::ptr::Update)(SkeletonTank * self) = (void (*)(SkeletonTank * self)) 0x837d630;
Point * (*SkeletonTank::ptr::GetMovementDirection)(SkeletonTank * self) = (Point * (*)(SkeletonTank * self)) 0x81026d0;
bool (*SkeletonTank::ptr::Hit)(SkeletonTank * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(SkeletonTank * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x83957f0;
void (*SkeletonTank::ptr::MoveFail)(SkeletonTank * self) = (void (*)(SkeletonTank * self)) 0x83ab930;
void (*SkeletonTank::ptr::MoveSucceed)(SkeletonTank * self, bool hitPlayer, bool moveDelayed) = (void (*)(SkeletonTank * self, bool hitPlayer, bool moveDelayed)) 0x8078b60;
void (*SkeletonTank::ptr::_mark)() = (void (*)()) 0x80afdc0;
void (*SkeletonTank::ptr::CSTR_SkeletonTank)(SkeletonTank * self) = (void (*)(SkeletonTank * self)) 0x81e17c0;
#endif
#endif
