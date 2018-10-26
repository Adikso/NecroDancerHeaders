// Generated automatically. Do not edit!
#ifndef _MotherSlime_
#define _MotherSlime_
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class MotherSlime : public Enemy  {
public:
    int moveCount;
    Point * rapierPoint;

    // Wrappers
    MotherSlime(int xVal, int yVal, int l) {
        ptr::CSTR_MotherSlime(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline MotherSlime * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline MotherSlime * _new2() { return ptr::_new2(); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline bool _CanBeLord() { return ptr::_CanBeLord(); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void MoveFail() { ptr::MoveFail(this); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void Die() { ptr::Die(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static MotherSlime * (*New)(MotherSlime * self, int xVal, int yVal, int l);
        static MotherSlime * (*_new2)();
        static Point * (*GetMovementDirection)(MotherSlime * self);
        static bool (*_CanBeLord)();
        static void (*MoveSucceed)(MotherSlime * self, bool hitPlayer, bool moveDelayed);
        static void (*MoveFail)(MotherSlime * self);
        static bool (*Hit)(MotherSlime * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*Die)(MotherSlime * self);
        static void (*_mark)();
        static void (*CSTR_MotherSlime)(MotherSlime * self);
    };
};

#ifdef _WIN32

MotherSlime * (*MotherSlime::ptr::New)(MotherSlime * self, int xVal, int yVal, int l) = (MotherSlime * (*)(MotherSlime * self, int xVal, int yVal, int l)) 0x686f50;
MotherSlime * (*MotherSlime::ptr::_new2)() = (MotherSlime * (*)()) 0x0;
Point * (*MotherSlime::ptr::GetMovementDirection)(MotherSlime * self) = (Point * (*)(MotherSlime * self)) 0x687330;
bool (*MotherSlime::ptr::_CanBeLord)() = (bool (*)()) 0x0;
void (*MotherSlime::ptr::MoveSucceed)(MotherSlime * self, bool hitPlayer, bool moveDelayed) = (void (*)(MotherSlime * self, bool hitPlayer, bool moveDelayed)) 0x687430;
void (*MotherSlime::ptr::MoveFail)(MotherSlime * self) = (void (*)(MotherSlime * self)) 0x687460;
bool (*MotherSlime::ptr::Hit)(MotherSlime * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(MotherSlime * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x687580;
void (*MotherSlime::ptr::Die)(MotherSlime * self) = (void (*)(MotherSlime * self)) 0x687850;
void (*MotherSlime::ptr::_mark)() = (void (*)()) 0x0;
void (*MotherSlime::ptr::CSTR_MotherSlime)(MotherSlime * self) = (void (*)(MotherSlime * self)) 0x686e80;
#endif

#ifdef __linux__

MotherSlime * (*MotherSlime::ptr::New)(MotherSlime * self, int xVal, int yVal, int l) = (MotherSlime * (*)(MotherSlime * self, int xVal, int yVal, int l)) 0x81e0d20;
MotherSlime * (*MotherSlime::ptr::_new2)() = (MotherSlime * (*)()) 0x81e1150;
Point * (*MotherSlime::ptr::GetMovementDirection)(MotherSlime * self) = (Point * (*)(MotherSlime * self)) 0x80b3a50;
bool (*MotherSlime::ptr::_CanBeLord)() = (bool (*)()) 0x8078aa0;
void (*MotherSlime::ptr::MoveSucceed)(MotherSlime * self, bool hitPlayer, bool moveDelayed) = (void (*)(MotherSlime * self, bool hitPlayer, bool moveDelayed)) 0x8078ab0;
void (*MotherSlime::ptr::MoveFail)(MotherSlime * self) = (void (*)(MotherSlime * self)) 0x8134320;
bool (*MotherSlime::ptr::Hit)(MotherSlime * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(MotherSlime * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x8395a00;
void (*MotherSlime::ptr::Die)(MotherSlime * self) = (void (*)(MotherSlime * self)) 0x83b5610;
void (*MotherSlime::ptr::_mark)() = (void (*)()) 0x80afdd0;
void (*MotherSlime::ptr::CSTR_MotherSlime)(MotherSlime * self) = (void (*)(MotherSlime * self)) 0x81e0cb0;
#endif
#endif
