// Generated automatically. Do not edit!
#ifndef _Skeleton_
#define _Skeleton_
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class Skeleton : public Enemy  {
public:
    bool hasHead;
    int directionHitFrom;
    bool gotBounced;

    // Wrappers
    Skeleton(int xVal, int yVal, int l) {
        ptr::CSTR_Skeleton(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Skeleton * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Skeleton * _new2() { return ptr::_new2(); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline int MoveImmediate(int xVal, int yVal, String * movementSource) { return ptr::MoveImmediate(this, xVal, yVal, movementSource); }
    inline void Update() { ptr::Update(this); }
    inline virtual bool Beheadable() { return ptr::_Beheadable(); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void Knockback(int dir) { ptr::Knockback(this, dir); }
    inline bool CanBeLord() { return ptr::CanBeLord(this); }
    inline void _Die() { ptr::_Die(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Skeleton * (*New)(Skeleton * self, int xVal, int yVal, int l);
        static Skeleton * (*_new2)();
        static Point * (*GetMovementDirection)(Skeleton * self);
        static int (*MoveImmediate)(Skeleton * self, int xVal, int yVal, String * movementSource);
        static void (*Update)(Skeleton * self);
        static bool (*_Beheadable)();
        static bool (*Hit)(Skeleton * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*Knockback)(Skeleton * self, int dir);
        static bool (*CanBeLord)(Skeleton * self);
        static void (*_Die)();
        static void (*_mark)();
        static void (*CSTR_Skeleton)(Skeleton * self);
    };
};

#ifdef _WIN32

Skeleton * (*Skeleton::ptr::New)(Skeleton * self, int xVal, int yVal, int l) = (Skeleton * (*)(Skeleton * self, int xVal, int yVal, int l)) 0x618580;
Skeleton * (*Skeleton::ptr::_new2)() = (Skeleton * (*)()) 0x0;
Point * (*Skeleton::ptr::GetMovementDirection)(Skeleton * self) = (Point * (*)(Skeleton * self)) 0x6188e0;
int (*Skeleton::ptr::MoveImmediate)(Skeleton * self, int xVal, int yVal, String * movementSource) = (int (*)(Skeleton * self, int xVal, int yVal, String * movementSource)) 0x618a40;
void (*Skeleton::ptr::Update)(Skeleton * self) = (void (*)(Skeleton * self)) 0x618b90;
bool (*Skeleton::ptr::_Beheadable)() = (bool (*)()) 0x0;
bool (*Skeleton::ptr::Hit)(Skeleton * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Skeleton * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x618c10;
void (*Skeleton::ptr::Knockback)(Skeleton * self, int dir) = (void (*)(Skeleton * self, int dir)) 0x618f00;
bool (*Skeleton::ptr::CanBeLord)(Skeleton * self) = (bool (*)(Skeleton * self)) 0x618f20;
void (*Skeleton::ptr::_Die)() = (void (*)()) 0x0;
void (*Skeleton::ptr::_mark)() = (void (*)()) 0x0;
void (*Skeleton::ptr::CSTR_Skeleton)(Skeleton * self) = (void (*)(Skeleton * self)) 0x618510;
#endif

#ifdef __linux__

Skeleton * (*Skeleton::ptr::New)(Skeleton * self, int xVal, int yVal, int l) = (Skeleton * (*)(Skeleton * self, int xVal, int yVal, int l)) 0x81b6350;
Skeleton * (*Skeleton::ptr::_new2)() = (Skeleton * (*)()) 0x81b6560;
Point * (*Skeleton::ptr::GetMovementDirection)(Skeleton * self) = (Point * (*)(Skeleton * self)) 0x81029e0;
int (*Skeleton::ptr::MoveImmediate)(Skeleton * self, int xVal, int yVal, String * movementSource) = (int (*)(Skeleton * self, int xVal, int yVal, String * movementSource)) 0x8394250;
void (*Skeleton::ptr::Update)(Skeleton * self) = (void (*)(Skeleton * self)) 0x8384e80;
bool (*Skeleton::ptr::_Beheadable)() = (bool (*)()) 0x8074e70;
bool (*Skeleton::ptr::Hit)(Skeleton * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Skeleton * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x839b030;
void (*Skeleton::ptr::Knockback)(Skeleton * self, int dir) = (void (*)(Skeleton * self, int dir)) 0x8103200;
bool (*Skeleton::ptr::CanBeLord)(Skeleton * self) = (bool (*)(Skeleton * self)) 0x8074e90;
void (*Skeleton::ptr::_Die)() = (void (*)()) 0x83b6990;
void (*Skeleton::ptr::_mark)() = (void (*)()) 0x80b0bd0;
void (*Skeleton::ptr::CSTR_Skeleton)(Skeleton * self) = (void (*)(Skeleton * self)) 0x81b6310;
#endif
#endif
