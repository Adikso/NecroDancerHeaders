// Generated automatically. Do not edit!
#ifndef _Transmogrifier_
#define _Transmogrifier_
class Entity;
class Point;
class String;
#include "NPC.hpp"

class Transmogrifier : public NPC  {
public:
    int actionCost;
    int speechX;
    int speechY;

    // Wrappers
    Transmogrifier(int xVal, int yVal, int l, bool captv) {
        ptr::CSTR_Transmogrifier(this);
        ptr::New(this, xVal, yVal, l, captv);
    }

    inline virtual int GetCost() { return ptr::GetCost(this); }
    inline virtual void DisplayCost() { ptr::DisplayCost(this); }
    inline virtual void IncreaseCost() { ptr::IncreaseCost(this); }
    inline Transmogrifier * New(int xVal, int yVal, int l, bool captv) { return ptr::New(this, xVal, yVal, l, captv); }
    inline Transmogrifier * _new2() { return ptr::_new2(); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline bool CanBeDamaged(bool phasing, bool piercing) { return ptr::CanBeDamaged(this, phasing, piercing); }
    inline void Die() { ptr::Die(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static int (*GetCost)(Transmogrifier * self);
        static void (*DisplayCost)(Transmogrifier * self);
        static void (*IncreaseCost)(Transmogrifier * self);
        static Transmogrifier * (*New)(Transmogrifier * self, int xVal, int yVal, int l, bool captv);
        static Transmogrifier * (*_new2)();
        static bool (*Hit)(Transmogrifier * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static Point * (*GetMovementDirection)(Transmogrifier * self);
        static bool (*CanBeDamaged)(Transmogrifier * self, bool phasing, bool piercing);
        static void (*Die)(Transmogrifier * self);
        static void (*_mark)();
        static void (*CSTR_Transmogrifier)(Transmogrifier * self);
    };
};

#ifdef _WIN32

int (*Transmogrifier::ptr::GetCost)(Transmogrifier * self) = (int (*)(Transmogrifier * self)) 0x5fc000;
void (*Transmogrifier::ptr::DisplayCost)(Transmogrifier * self) = (void (*)(Transmogrifier * self)) 0x5fc020;
void (*Transmogrifier::ptr::IncreaseCost)(Transmogrifier * self) = (void (*)(Transmogrifier * self)) 0x5fc220;
Transmogrifier * (*Transmogrifier::ptr::New)(Transmogrifier * self, int xVal, int yVal, int l, bool captv) = (Transmogrifier * (*)(Transmogrifier * self, int xVal, int yVal, int l, bool captv)) 0x5fc250;
Transmogrifier * (*Transmogrifier::ptr::_new2)() = (Transmogrifier * (*)()) 0x0;
bool (*Transmogrifier::ptr::Hit)(Transmogrifier * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Transmogrifier * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x5fc460;
Point * (*Transmogrifier::ptr::GetMovementDirection)(Transmogrifier * self) = (Point * (*)(Transmogrifier * self)) 0x5fc5c0;
bool (*Transmogrifier::ptr::CanBeDamaged)(Transmogrifier * self, bool phasing, bool piercing) = (bool (*)(Transmogrifier * self, bool phasing, bool piercing)) 0x5fc670;
void (*Transmogrifier::ptr::Die)(Transmogrifier * self) = (void (*)(Transmogrifier * self)) 0x5fc690;
void (*Transmogrifier::ptr::_mark)() = (void (*)()) 0x0;
void (*Transmogrifier::ptr::CSTR_Transmogrifier)(Transmogrifier * self) = (void (*)(Transmogrifier * self)) 0x5fbee0;
#endif

#ifdef __linux__

int (*Transmogrifier::ptr::GetCost)(Transmogrifier * self) = (int (*)(Transmogrifier * self)) 0x816be50;
void (*Transmogrifier::ptr::DisplayCost)(Transmogrifier * self) = (void (*)(Transmogrifier * self)) 0x812d4d0;
void (*Transmogrifier::ptr::IncreaseCost)(Transmogrifier * self) = (void (*)(Transmogrifier * self)) 0x8073a70;
Transmogrifier * (*Transmogrifier::ptr::New)(Transmogrifier * self, int xVal, int yVal, int l, bool captv) = (Transmogrifier * (*)(Transmogrifier * self, int xVal, int yVal, int l, bool captv)) 0x81a4c20;
Transmogrifier * (*Transmogrifier::ptr::_new2)() = (Transmogrifier * (*)()) 0x81a4e00;
bool (*Transmogrifier::ptr::Hit)(Transmogrifier * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Transmogrifier * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x839c6c0;
Point * (*Transmogrifier::ptr::GetMovementDirection)(Transmogrifier * self) = (Point * (*)(Transmogrifier * self)) 0x80b5000;
bool (*Transmogrifier::ptr::CanBeDamaged)(Transmogrifier * self, bool phasing, bool piercing) = (bool (*)(Transmogrifier * self, bool phasing, bool piercing)) 0x8073aa0;
void (*Transmogrifier::ptr::Die)(Transmogrifier * self) = (void (*)(Transmogrifier * self)) 0x83b7270;
void (*Transmogrifier::ptr::_mark)() = (void (*)()) 0x80b2fd0;
void (*Transmogrifier::ptr::CSTR_Transmogrifier)(Transmogrifier * self) = (void (*)(Transmogrifier * self)) 0x81a4b90;
#endif
#endif
