// Generated automatically. Do not edit!
#ifndef _Bat_
#define _Bat_
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class Bat : public Enemy  {
public:

    // Wrappers
    Bat(int xVal, int yVal, int l) {
        ptr::CSTR_Bat(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Bat * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Bat * _new2() { return ptr::_new2(); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void Update() { ptr::Update(this); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Bat * (*New)(Bat * self, int xVal, int yVal, int l);
        static Bat * (*_new2)();
        static Point * (*GetMovementDirection)(Bat * self);
        static void (*Update)(Bat * self);
        static bool (*Hit)(Bat * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*_mark)();
        static void (*CSTR_Bat)(Bat * self);
    };
};

#ifdef _WIN32

Bat * (*Bat::ptr::New)(Bat * self, int xVal, int yVal, int l) = (Bat * (*)(Bat * self, int xVal, int yVal, int l)) 0x616970;
Bat * (*Bat::ptr::_new2)() = (Bat * (*)()) 0x0;
Point * (*Bat::ptr::GetMovementDirection)(Bat * self) = (Point * (*)(Bat * self)) 0x616ca0;
void (*Bat::ptr::Update)(Bat * self) = (void (*)(Bat * self)) 0x6170a0;
bool (*Bat::ptr::Hit)(Bat * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Bat * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x6170e0;
void (*Bat::ptr::_mark)() = (void (*)()) 0x0;
void (*Bat::ptr::CSTR_Bat)(Bat * self) = (void (*)(Bat * self)) 0x616910;
#endif

#ifdef __linux__

Bat * (*Bat::ptr::New)(Bat * self, int xVal, int yVal, int l) = (Bat * (*)(Bat * self, int xVal, int yVal, int l)) 0x81b5d90;
Bat * (*Bat::ptr::_new2)() = (Bat * (*)()) 0x81b6020;
Point * (*Bat::ptr::GetMovementDirection)(Bat * self) = (Point * (*)(Bat * self)) 0x825ffe0;
void (*Bat::ptr::Update)(Bat * self) = (void (*)(Bat * self)) 0x8385080;
bool (*Bat::ptr::Hit)(Bat * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Bat * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x839bb10;
void (*Bat::ptr::_mark)() = (void (*)()) 0x80b0c50;
void (*Bat::ptr::CSTR_Bat)(Bat * self) = (void (*)(Bat * self)) 0x81b5d70;
#endif
#endif
