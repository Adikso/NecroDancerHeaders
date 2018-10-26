// Generated automatically. Do not edit!
#ifndef _SkeletonKnight_
#define _SkeletonKnight_
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class SkeletonKnight : public Enemy  {
public:
    bool hasHead;
    Point * cachedMoveDir;
    int directionHitFrom;
    bool gotBounced;
    bool hasHorse;
    bool shieldDestroyed;
    int shieldDir;
    bool hasRoared;
    bool justBounced;
    bool willHaveHead;

    // Wrappers
    SkeletonKnight(int xVal, int yVal, int l) {
        ptr::CSTR_SkeletonKnight(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline SkeletonKnight * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline SkeletonKnight * _new2() { return ptr::_new2(); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline int MoveImmediate(int xVal, int yVal, String * movementSource) { return ptr::MoveImmediate(this, xVal, yVal, movementSource); }
    inline void Update() { ptr::Update(this); }
    inline virtual void DestroyHorse(int dir) { ptr::DestroyHorse(this, dir); }
    inline void Knockback(int dir) { ptr::Knockback(this, dir); }
    inline virtual void DestroyShield(int dir) { ptr::DestroyShield(this, dir); }
    inline virtual bool Beheadable() { return ptr::_Beheadable(); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline virtual void AdjustShieldDir() { ptr::AdjustShieldDir(this); }
    inline void MoveFail() { ptr::MoveFail(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void Die() { ptr::Die(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static SkeletonKnight * (*New)(SkeletonKnight * self, int xVal, int yVal, int l);
        static SkeletonKnight * (*_new2)();
        static Point * (*GetMovementDirection)(SkeletonKnight * self);
        static int (*MoveImmediate)(SkeletonKnight * self, int xVal, int yVal, String * movementSource);
        static void (*Update)(SkeletonKnight * self);
        static void (*DestroyHorse)(SkeletonKnight * self, int dir);
        static void (*Knockback)(SkeletonKnight * self, int dir);
        static void (*DestroyShield)(SkeletonKnight * self, int dir);
        static bool (*_Beheadable)();
        static bool (*Hit)(SkeletonKnight * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*AdjustShieldDir)(SkeletonKnight * self);
        static void (*MoveFail)(SkeletonKnight * self);
        static void (*MoveSucceed)(SkeletonKnight * self, bool hitPlayer, bool moveDelayed);
        static void (*Die)(SkeletonKnight * self);
        static void (*mark)(SkeletonKnight * self);
        static void (*CSTR_SkeletonKnight)(SkeletonKnight * self);
    };
};

#ifdef _WIN32

SkeletonKnight * (*SkeletonKnight::ptr::New)(SkeletonKnight * self, int xVal, int yVal, int l) = (SkeletonKnight * (*)(SkeletonKnight * self, int xVal, int yVal, int l)) 0x643c40;
SkeletonKnight * (*SkeletonKnight::ptr::_new2)() = (SkeletonKnight * (*)()) 0x0;
Point * (*SkeletonKnight::ptr::GetMovementDirection)(SkeletonKnight * self) = (Point * (*)(SkeletonKnight * self)) 0x643ee0;
int (*SkeletonKnight::ptr::MoveImmediate)(SkeletonKnight * self, int xVal, int yVal, String * movementSource) = (int (*)(SkeletonKnight * self, int xVal, int yVal, String * movementSource)) 0x617840;
void (*SkeletonKnight::ptr::Update)(SkeletonKnight * self) = (void (*)(SkeletonKnight * self)) 0x643f10;
void (*SkeletonKnight::ptr::DestroyHorse)(SkeletonKnight * self, int dir) = (void (*)(SkeletonKnight * self, int dir)) 0x644140;
void (*SkeletonKnight::ptr::Knockback)(SkeletonKnight * self, int dir) = (void (*)(SkeletonKnight * self, int dir)) 0x6449e0;
void (*SkeletonKnight::ptr::DestroyShield)(SkeletonKnight * self, int dir) = (void (*)(SkeletonKnight * self, int dir)) 0x644a00;
bool (*SkeletonKnight::ptr::_Beheadable)() = (bool (*)()) 0x0;
bool (*SkeletonKnight::ptr::Hit)(SkeletonKnight * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(SkeletonKnight * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x644e80;
void (*SkeletonKnight::ptr::AdjustShieldDir)(SkeletonKnight * self) = (void (*)(SkeletonKnight * self)) 0x6183c0;
void (*SkeletonKnight::ptr::MoveFail)(SkeletonKnight * self) = (void (*)(SkeletonKnight * self)) 0x645340;
void (*SkeletonKnight::ptr::MoveSucceed)(SkeletonKnight * self, bool hitPlayer, bool moveDelayed) = (void (*)(SkeletonKnight * self, bool hitPlayer, bool moveDelayed)) 0x645360;
void (*SkeletonKnight::ptr::Die)(SkeletonKnight * self) = (void (*)(SkeletonKnight * self)) 0x618470;
void (*SkeletonKnight::ptr::mark)(SkeletonKnight * self) = (void (*)(SkeletonKnight * self)) 0x5c4da0;
void (*SkeletonKnight::ptr::CSTR_SkeletonKnight)(SkeletonKnight * self) = (void (*)(SkeletonKnight * self)) 0x643b50;
#endif

#ifdef __linux__

SkeletonKnight * (*SkeletonKnight::ptr::New)(SkeletonKnight * self, int xVal, int yVal, int l) = (SkeletonKnight * (*)(SkeletonKnight * self, int xVal, int yVal, int l)) 0x81c31c0;
SkeletonKnight * (*SkeletonKnight::ptr::_new2)() = (SkeletonKnight * (*)()) 0x81c3370;
Point * (*SkeletonKnight::ptr::GetMovementDirection)(SkeletonKnight * self) = (Point * (*)(SkeletonKnight * self)) 0x81032d0;
int (*SkeletonKnight::ptr::MoveImmediate)(SkeletonKnight * self, int xVal, int yVal, String * movementSource) = (int (*)(SkeletonKnight * self, int xVal, int yVal, String * movementSource)) 0x8393ab0;
void (*SkeletonKnight::ptr::Update)(SkeletonKnight * self) = (void (*)(SkeletonKnight * self)) 0x8381e10;
void (*SkeletonKnight::ptr::DestroyHorse)(SkeletonKnight * self, int dir) = (void (*)(SkeletonKnight * self, int dir)) 0x83a5210;
void (*SkeletonKnight::ptr::Knockback)(SkeletonKnight * self, int dir) = (void (*)(SkeletonKnight * self, int dir)) 0x81031c0;
void (*SkeletonKnight::ptr::DestroyShield)(SkeletonKnight * self, int dir) = (void (*)(SkeletonKnight * self, int dir)) 0x81a3c30;
bool (*SkeletonKnight::ptr::_Beheadable)() = (bool (*)()) 0x8076290;
bool (*SkeletonKnight::ptr::Hit)(SkeletonKnight * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(SkeletonKnight * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x8398510;
void (*SkeletonKnight::ptr::AdjustShieldDir)(SkeletonKnight * self) = (void (*)(SkeletonKnight * self)) 0x807f7e0;
void (*SkeletonKnight::ptr::MoveFail)(SkeletonKnight * self) = (void (*)(SkeletonKnight * self)) 0x8135200;
void (*SkeletonKnight::ptr::MoveSucceed)(SkeletonKnight * self, bool hitPlayer, bool moveDelayed) = (void (*)(SkeletonKnight * self, bool hitPlayer, bool moveDelayed)) 0x807f840;
void (*SkeletonKnight::ptr::Die)(SkeletonKnight * self) = (void (*)(SkeletonKnight * self)) 0x83b6260;
void (*SkeletonKnight::ptr::mark)(SkeletonKnight * self) = (void (*)(SkeletonKnight * self)) 0x80b0650;
void (*SkeletonKnight::ptr::CSTR_SkeletonKnight)(SkeletonKnight * self) = (void (*)(SkeletonKnight * self)) 0x81c3120;
#endif
#endif
