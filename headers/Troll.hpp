// Generated automatically. Do not edit!
#ifndef _Troll_
#define _Troll_
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class Troll : public Enemy  {
public:
    int lastHitBeat;
    int runningDir;

    // Wrappers
    Troll(int xVal, int yVal, int l) {
        ptr::CSTR_Troll(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Troll * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Troll * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline void _MoveFail() { ptr::_MoveFail(); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline bool _CanBeLord() { return ptr::_CanBeLord(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Troll * (*New)(Troll * self, int xVal, int yVal, int l);
        static Troll * (*_new2)();
        static void (*Update)(Troll * self);
        static void (*_MoveFail)();
        static bool (*Hit)(Troll * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static Point * (*GetMovementDirection)(Troll * self);
        static bool (*_CanBeLord)();
        static void (*_mark)();
        static void (*CSTR_Troll)(Troll * self);
    };
};

#ifdef _WIN32

Troll * (*Troll::ptr::New)(Troll * self, int xVal, int yVal, int l) = (Troll * (*)(Troll * self, int xVal, int yVal, int l)) 0x686730;
Troll * (*Troll::ptr::_new2)() = (Troll * (*)()) 0x0;
void (*Troll::ptr::Update)(Troll * self) = (void (*)(Troll * self)) 0x686800;
void (*Troll::ptr::_MoveFail)() = (void (*)()) 0x0;
bool (*Troll::ptr::Hit)(Troll * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Troll * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x686b60;
Point * (*Troll::ptr::GetMovementDirection)(Troll * self) = (Point * (*)(Troll * self)) 0x686e20;
bool (*Troll::ptr::_CanBeLord)() = (bool (*)()) 0x0;
void (*Troll::ptr::_mark)() = (void (*)()) 0x0;
void (*Troll::ptr::CSTR_Troll)(Troll * self) = (void (*)(Troll * self)) 0x6866c0;
#endif

#ifdef __linux__

Troll * (*Troll::ptr::New)(Troll * self, int xVal, int yVal, int l) = (Troll * (*)(Troll * self, int xVal, int yVal, int l)) 0x81e0bb0;
Troll * (*Troll::ptr::_new2)() = (Troll * (*)()) 0x81e0c90;
void (*Troll::ptr::Update)(Troll * self) = (void (*)(Troll * self)) 0x837d670;
void (*Troll::ptr::_MoveFail)() = (void (*)()) 0x81344f0;
bool (*Troll::ptr::Hit)(Troll * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Troll * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x8395c70;
Point * (*Troll::ptr::GetMovementDirection)(Troll * self) = (Point * (*)(Troll * self)) 0x81027f0;
bool (*Troll::ptr::_CanBeLord)() = (bool (*)()) 0x8078a90;
void (*Troll::ptr::_mark)() = (void (*)()) 0x80afe40;
void (*Troll::ptr::CSTR_Troll)(Troll * self) = (void (*)(Troll * self)) 0x81e0b80;
#endif
#endif
