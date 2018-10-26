// Generated automatically. Do not edit!
#ifndef _Shriner_
#define _Shriner_
class Entity;
class Point;
class Shrine;
class String;
#include "NPC.hpp"

class Shriner : public NPC  {
public:
    bool preventShrineDeath;
    int speechX;
    int speechY;
    Shrine * shrine1;
    Shrine * shrine2;
    Shrine * shrine3;
    bool hasSummoned;

    // Wrappers
    Shriner(int xVal, int yVal, int l, bool captv) {
        ptr::CSTR_Shriner(this);
        ptr::New(this, xVal, yVal, l, captv);
    }

    inline Shriner * New(int xVal, int yVal, int l, bool captv) { return ptr::New(this, xVal, yVal, l, captv); }
    inline Shriner * _new2() { return ptr::_new2(); }
    inline bool CanBeDamaged(bool phasing, bool piercing) { return ptr::CanBeDamaged(this, phasing, piercing); }
    inline virtual void SummonDragons() { ptr::SummonDragons(this); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline Point * _GetMovementDirection() { return ptr::_GetMovementDirection(); }
    inline void Update() { ptr::Update(this); }
    inline void Die() { ptr::Die(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static Shriner * (*New)(Shriner * self, int xVal, int yVal, int l, bool captv);
        static Shriner * (*_new2)();
        static bool (*CanBeDamaged)(Shriner * self, bool phasing, bool piercing);
        static void (*SummonDragons)(Shriner * self);
        static bool (*Hit)(Shriner * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static Point * (*_GetMovementDirection)();
        static void (*Update)(Shriner * self);
        static void (*Die)(Shriner * self);
        static void (*mark)(Shriner * self);
        static void (*CSTR_Shriner)(Shriner * self);
    };
};

#ifdef _WIN32

Shriner * (*Shriner::ptr::New)(Shriner * self, int xVal, int yVal, int l, bool captv) = (Shriner * (*)(Shriner * self, int xVal, int yVal, int l, bool captv)) 0x61c1d0;
Shriner * (*Shriner::ptr::_new2)() = (Shriner * (*)()) 0x0;
bool (*Shriner::ptr::CanBeDamaged)(Shriner * self, bool phasing, bool piercing) = (bool (*)(Shriner * self, bool phasing, bool piercing)) 0x5fcb50;
void (*Shriner::ptr::SummonDragons)(Shriner * self) = (void (*)(Shriner * self)) 0x61c370;
bool (*Shriner::ptr::Hit)(Shriner * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Shriner * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x61c7c0;
Point * (*Shriner::ptr::_GetMovementDirection)() = (Point * (*)()) 0x0;
void (*Shriner::ptr::Update)(Shriner * self) = (void (*)(Shriner * self)) 0x61c880;
void (*Shriner::ptr::Die)(Shriner * self) = (void (*)(Shriner * self)) 0x61c8d0;
void (*Shriner::ptr::mark)(Shriner * self) = (void (*)(Shriner * self)) 0x61c950;
void (*Shriner::ptr::CSTR_Shriner)(Shriner * self) = (void (*)(Shriner * self)) 0x61c130;
#endif

#ifdef __linux__

Shriner * (*Shriner::ptr::New)(Shriner * self, int xVal, int yVal, int l, bool captv) = (Shriner * (*)(Shriner * self, int xVal, int yVal, int l, bool captv)) 0x81b7210;
Shriner * (*Shriner::ptr::_new2)() = (Shriner * (*)()) 0x81b7370;
bool (*Shriner::ptr::CanBeDamaged)(Shriner * self, bool phasing, bool piercing) = (bool (*)(Shriner * self, bool phasing, bool piercing)) 0x8074ec0;
void (*Shriner::ptr::SummonDragons)(Shriner * self) = (void (*)(Shriner * self)) 0x83d36d0;
bool (*Shriner::ptr::Hit)(Shriner * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Shriner * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x839aef0;
Point * (*Shriner::ptr::_GetMovementDirection)() = (Point * (*)()) 0x80b4d80;
void (*Shriner::ptr::Update)(Shriner * self) = (void (*)(Shriner * self)) 0x8387620;
void (*Shriner::ptr::Die)(Shriner * self) = (void (*)(Shriner * self)) 0x83b71a0;
void (*Shriner::ptr::mark)(Shriner * self) = (void (*)(Shriner * self)) 0x80b2c20;
void (*Shriner::ptr::CSTR_Shriner)(Shriner * self) = (void (*)(Shriner * self)) 0x81b7160;
#endif
#endif
