// Generated automatically. Do not edit!
#ifndef _King_
#define _King_
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class King : public Enemy  {
public:
    int initialYOff;
    bool castled;
    bool lastMan;

    // Wrappers
    inline King * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline King * _new2() { return ptr::_new2(); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void Update() { ptr::Update(this); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void Die() { ptr::Die(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static King * (*New)(King * self, int xVal, int yVal, int l);
        static King * (*_new2)();
        static void (*MoveSucceed)(King * self, bool hitPlayer, bool moveDelayed);
        static void (*Update)(King * self);
        static bool (*Hit)(King * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static Point * (*GetMovementDirection)(King * self);
        static void (*Die)(King * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

King * (*King::ptr::New)(King * self, int xVal, int yVal, int l) = (King * (*)(King * self, int xVal, int yVal, int l)) 0x6676b0;
King * (*King::ptr::_new2)() = (King * (*)()) 0x0;
void (*King::ptr::MoveSucceed)(King * self, bool hitPlayer, bool moveDelayed) = (void (*)(King * self, bool hitPlayer, bool moveDelayed)) 0x6679c0;
void (*King::ptr::Update)(King * self) = (void (*)(King * self)) 0x6679f0;
bool (*King::ptr::Hit)(King * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(King * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x667b40;
Point * (*King::ptr::GetMovementDirection)(King * self) = (Point * (*)(King * self)) 0x667ee0;
void (*King::ptr::Die)(King * self) = (void (*)(King * self)) 0x6675f0;
void (*King::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

King * (*King::ptr::New)(King * self, int xVal, int yVal, int l) = (King * (*)(King * self, int xVal, int yVal, int l)) 0x81d8610;
King * (*King::ptr::_new2)() = (King * (*)()) 0x81d8850;
void (*King::ptr::MoveSucceed)(King * self, bool hitPlayer, bool moveDelayed) = (void (*)(King * self, bool hitPlayer, bool moveDelayed)) 0x8077a30;
void (*King::ptr::Update)(King * self) = (void (*)(King * self)) 0x837e2f0;
bool (*King::ptr::Hit)(King * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(King * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x83d11f0;
Point * (*King::ptr::GetMovementDirection)(King * self) = (Point * (*)(King * self)) 0x81b2ab0;
void (*King::ptr::Die)(King * self) = (void (*)(King * self)) 0x83b5ae0;
void (*King::ptr::_mark)() = (void (*)()) 0x80affc0;
#endif
#endif
