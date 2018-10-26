// Generated automatically. Do not edit!
#ifndef _ZombieSnake_
#define _ZombieSnake_
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class ZombieSnake : public Enemy  {
public:
    ZombieSnake * zsChild;
    ZombieSnake * zsParent;
    Point * cachedMoveDir;
    int facing;

    // Wrappers
    ZombieSnake(int xVal, int yVal, int l) {
        ptr::CSTR_ZombieSnake(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline ZombieSnake * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline ZombieSnake * _new2() { return ptr::_new2(); }
    inline virtual void SetChild(ZombieSnake * zs) { ptr::SetChild(this, zs); }
    inline virtual void SetParent(ZombieSnake * zs) { ptr::SetParent(this, zs); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void Update() { ptr::Update(this); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline virtual void AdjustFacingDir() { ptr::AdjustFacingDir(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void MoveFail() { ptr::MoveFail(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static ZombieSnake * (*New)(ZombieSnake * self, int xVal, int yVal, int l);
        static ZombieSnake * (*_new2)();
        static void (*SetChild)(ZombieSnake * self, ZombieSnake * zs);
        static void (*SetParent)(ZombieSnake * self, ZombieSnake * zs);
        static Point * (*GetMovementDirection)(ZombieSnake * self);
        static void (*Update)(ZombieSnake * self);
        static bool (*Hit)(ZombieSnake * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*AdjustFacingDir)(ZombieSnake * self);
        static void (*MoveSucceed)(ZombieSnake * self, bool hitPlayer, bool moveDelayed);
        static void (*MoveFail)(ZombieSnake * self);
        static void (*mark)(ZombieSnake * self);
        static void (*CSTR_ZombieSnake)(ZombieSnake * self);
    };
};

#ifdef _WIN32

ZombieSnake * (*ZombieSnake::ptr::New)(ZombieSnake * self, int xVal, int yVal, int l) = (ZombieSnake * (*)(ZombieSnake * self, int xVal, int yVal, int l)) 0x6642f0;
ZombieSnake * (*ZombieSnake::ptr::_new2)() = (ZombieSnake * (*)()) 0x0;
void (*ZombieSnake::ptr::SetChild)(ZombieSnake * self, ZombieSnake * zs) = (void (*)(ZombieSnake * self, ZombieSnake * zs)) 0x6643e0;
void (*ZombieSnake::ptr::SetParent)(ZombieSnake * self, ZombieSnake * zs) = (void (*)(ZombieSnake * self, ZombieSnake * zs)) 0x664440;
Point * (*ZombieSnake::ptr::GetMovementDirection)(ZombieSnake * self) = (Point * (*)(ZombieSnake * self)) 0x6644b0;
void (*ZombieSnake::ptr::Update)(ZombieSnake * self) = (void (*)(ZombieSnake * self)) 0x664560;
bool (*ZombieSnake::ptr::Hit)(ZombieSnake * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(ZombieSnake * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x664c60;
void (*ZombieSnake::ptr::AdjustFacingDir)(ZombieSnake * self) = (void (*)(ZombieSnake * self)) 0x664d20;
void (*ZombieSnake::ptr::MoveSucceed)(ZombieSnake * self, bool hitPlayer, bool moveDelayed) = (void (*)(ZombieSnake * self, bool hitPlayer, bool moveDelayed)) 0x664d70;
void (*ZombieSnake::ptr::MoveFail)(ZombieSnake * self) = (void (*)(ZombieSnake * self)) 0x601650;
void (*ZombieSnake::ptr::mark)(ZombieSnake * self) = (void (*)(ZombieSnake * self)) 0x664da0;
void (*ZombieSnake::ptr::CSTR_ZombieSnake)(ZombieSnake * self) = (void (*)(ZombieSnake * self)) 0x664210;
#endif

#ifdef __linux__

ZombieSnake * (*ZombieSnake::ptr::New)(ZombieSnake * self, int xVal, int yVal, int l) = (ZombieSnake * (*)(ZombieSnake * self, int xVal, int yVal, int l)) 0x81d81d0;
ZombieSnake * (*ZombieSnake::ptr::_new2)() = (ZombieSnake * (*)()) 0x81d82d0;
void (*ZombieSnake::ptr::SetChild)(ZombieSnake * self, ZombieSnake * zs) = (void (*)(ZombieSnake * self, ZombieSnake * zs)) 0x8077920;
void (*ZombieSnake::ptr::SetParent)(ZombieSnake * self, ZombieSnake * zs) = (void (*)(ZombieSnake * self, ZombieSnake * zs)) 0x8077980;
Point * (*ZombieSnake::ptr::GetMovementDirection)(ZombieSnake * self) = (Point * (*)(ZombieSnake * self)) 0x80a18a0;
void (*ZombieSnake::ptr::Update)(ZombieSnake * self) = (void (*)(ZombieSnake * self)) 0x837e8c0;
bool (*ZombieSnake::ptr::Hit)(ZombieSnake * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(ZombieSnake * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x8396700;
void (*ZombieSnake::ptr::AdjustFacingDir)(ZombieSnake * self) = (void (*)(ZombieSnake * self)) 0x807f920;
void (*ZombieSnake::ptr::MoveSucceed)(ZombieSnake * self, bool hitPlayer, bool moveDelayed) = (void (*)(ZombieSnake * self, bool hitPlayer, bool moveDelayed)) 0x80779f0;
void (*ZombieSnake::ptr::MoveFail)(ZombieSnake * self) = (void (*)(ZombieSnake * self)) 0x81347a0;
void (*ZombieSnake::ptr::mark)(ZombieSnake * self) = (void (*)(ZombieSnake * self)) 0x80b0040;
void (*ZombieSnake::ptr::CSTR_ZombieSnake)(ZombieSnake * self) = (void (*)(ZombieSnake * self)) 0x81d8150;
#endif
#endif
