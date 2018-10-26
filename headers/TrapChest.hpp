// Generated automatically. Do not edit!
#ifndef _TrapChest_
#define _TrapChest_
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class TrapChest : public Enemy  {
public:
    String * contents;
    bool hasMoved;
    bool itemDropped;

    // Wrappers
    TrapChest(int xVal, int yVal, int l) {
        ptr::CSTR_TrapChest(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline virtual void DetermineContents() { ptr::DetermineContents(this); }
    inline TrapChest * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline TrapChest * _new2() { return ptr::_new2(); }
    inline bool CanBeDamaged(bool phasing, bool piercing) { return ptr::CanBeDamaged(this, phasing, piercing); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void Update() { ptr::Update(this); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void DropItem2() { ptr::DropItem2(this); }
    inline void Die() { ptr::Die(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static void (*DetermineContents)(TrapChest * self);
        static TrapChest * (*New)(TrapChest * self, int xVal, int yVal, int l);
        static TrapChest * (*_new2)();
        static bool (*CanBeDamaged)(TrapChest * self, bool phasing, bool piercing);
        static bool (*Hit)(TrapChest * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*Update)(TrapChest * self);
        static Point * (*GetMovementDirection)(TrapChest * self);
        static void (*DropItem2)(TrapChest * self);
        static void (*Die)(TrapChest * self);
        static void (*_mark)();
        static void (*CSTR_TrapChest)(TrapChest * self);
    };
};

#ifdef _WIN32

void (*TrapChest::ptr::DetermineContents)(TrapChest * self) = (void (*)(TrapChest * self)) 0x61e1c0;
TrapChest * (*TrapChest::ptr::New)(TrapChest * self, int xVal, int yVal, int l) = (TrapChest * (*)(TrapChest * self, int xVal, int yVal, int l)) 0x61e5d0;
TrapChest * (*TrapChest::ptr::_new2)() = (TrapChest * (*)()) 0x0;
bool (*TrapChest::ptr::CanBeDamaged)(TrapChest * self, bool phasing, bool piercing) = (bool (*)(TrapChest * self, bool phasing, bool piercing)) 0x61e870;
bool (*TrapChest::ptr::Hit)(TrapChest * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(TrapChest * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x61daf0;
void (*TrapChest::ptr::Update)(TrapChest * self) = (void (*)(TrapChest * self)) 0x61e8a0;
Point * (*TrapChest::ptr::GetMovementDirection)(TrapChest * self) = (Point * (*)(TrapChest * self)) 0x61ea80;
void (*TrapChest::ptr::DropItem2)(TrapChest * self) = (void (*)(TrapChest * self)) 0x61eb60;
void (*TrapChest::ptr::Die)(TrapChest * self) = (void (*)(TrapChest * self)) 0x61ecc0;
void (*TrapChest::ptr::_mark)() = (void (*)()) 0x0;
void (*TrapChest::ptr::CSTR_TrapChest)(TrapChest * self) = (void (*)(TrapChest * self)) 0x61e000;
#endif

#ifdef __linux__

void (*TrapChest::ptr::DetermineContents)(TrapChest * self) = (void (*)(TrapChest * self)) 0x82ac660;
TrapChest * (*TrapChest::ptr::New)(TrapChest * self, int xVal, int yVal, int l) = (TrapChest * (*)(TrapChest * self, int xVal, int yVal, int l)) 0x81b7c20;
TrapChest * (*TrapChest::ptr::_new2)() = (TrapChest * (*)()) 0x81b7fb0;
bool (*TrapChest::ptr::CanBeDamaged)(TrapChest * self, bool phasing, bool piercing) = (bool (*)(TrapChest * self, bool phasing, bool piercing)) 0x807f5b0;
bool (*TrapChest::ptr::Hit)(TrapChest * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(TrapChest * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x839ac70;
void (*TrapChest::ptr::Update)(TrapChest * self) = (void (*)(TrapChest * self)) 0x8384600;
Point * (*TrapChest::ptr::GetMovementDirection)(TrapChest * self) = (Point * (*)(TrapChest * self)) 0x80b4c90;
void (*TrapChest::ptr::DropItem2)(TrapChest * self) = (void (*)(TrapChest * self)) 0x829a500;
void (*TrapChest::ptr::Die)(TrapChest * self) = (void (*)(TrapChest * self)) 0x83b6820;
void (*TrapChest::ptr::_mark)() = (void (*)()) 0x80b0b80;
void (*TrapChest::ptr::CSTR_TrapChest)(TrapChest * self) = (void (*)(TrapChest * self)) 0x81b7ba0;
#endif
#endif
