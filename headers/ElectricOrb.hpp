// Generated automatically. Do not edit!
#ifndef _ElectricOrb_
#define _ElectricOrb_
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class ElectricOrb : public Enemy  {
public:
    int dir;

    // Wrappers
    inline Point * _GetMovementDirection() { return ptr::_GetMovementDirection(); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline bool CanBeDamaged(bool phasing, bool piercing) { return ptr::CanBeDamaged(this, phasing, piercing); }
    inline void MoveFail() { ptr::MoveFail(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline ElectricOrb * New(int xVal, int yVal, int l, int dir_) { return ptr::New(this, xVal, yVal, l, dir_); }
    inline ElectricOrb * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Point * (*_GetMovementDirection)();
        static bool (*Hit)(ElectricOrb * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static bool (*CanBeDamaged)(ElectricOrb * self, bool phasing, bool piercing);
        static void (*MoveFail)(ElectricOrb * self);
        static void (*MoveSucceed)(ElectricOrb * self, bool hitPlayer, bool moveDelayed);
        static ElectricOrb * (*New)(ElectricOrb * self, int xVal, int yVal, int l, int dir_);
        static ElectricOrb * (*_new2)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Point * (*ElectricOrb::ptr::_GetMovementDirection)() = (Point * (*)()) 0x0;
bool (*ElectricOrb::ptr::Hit)(ElectricOrb * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(ElectricOrb * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x637e90;
bool (*ElectricOrb::ptr::CanBeDamaged)(ElectricOrb * self, bool phasing, bool piercing) = (bool (*)(ElectricOrb * self, bool phasing, bool piercing)) 0x637f30;
void (*ElectricOrb::ptr::MoveFail)(ElectricOrb * self) = (void (*)(ElectricOrb * self)) 0x637f40;
void (*ElectricOrb::ptr::MoveSucceed)(ElectricOrb * self, bool hitPlayer, bool moveDelayed) = (void (*)(ElectricOrb * self, bool hitPlayer, bool moveDelayed)) 0x6380e0;
ElectricOrb * (*ElectricOrb::ptr::New)(ElectricOrb * self, int xVal, int yVal, int l, int dir_) = (ElectricOrb * (*)(ElectricOrb * self, int xVal, int yVal, int l, int dir_)) 0x638110;
ElectricOrb * (*ElectricOrb::ptr::_new2)() = (ElectricOrb * (*)()) 0x0;
void (*ElectricOrb::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Point * (*ElectricOrb::ptr::_GetMovementDirection)() = (Point * (*)()) 0x81029c0;
bool (*ElectricOrb::ptr::Hit)(ElectricOrb * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(ElectricOrb * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x83997e0;
bool (*ElectricOrb::ptr::CanBeDamaged)(ElectricOrb * self, bool phasing, bool piercing) = (bool (*)(ElectricOrb * self, bool phasing, bool piercing)) 0x8075de0;
void (*ElectricOrb::ptr::MoveFail)(ElectricOrb * self) = (void (*)(ElectricOrb * self)) 0x83a3bc0;
void (*ElectricOrb::ptr::MoveSucceed)(ElectricOrb * self, bool hitPlayer, bool moveDelayed) = (void (*)(ElectricOrb * self, bool hitPlayer, bool moveDelayed)) 0x807f670;
ElectricOrb * (*ElectricOrb::ptr::New)(ElectricOrb * self, int xVal, int yVal, int l, int dir_) = (ElectricOrb * (*)(ElectricOrb * self, int xVal, int yVal, int l, int dir_)) 0x81be750;
ElectricOrb * (*ElectricOrb::ptr::_new2)() = (ElectricOrb * (*)()) 0x81be880;
void (*ElectricOrb::ptr::_mark)() = (void (*)()) 0x80b0820;
#endif
#endif
