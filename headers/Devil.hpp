// Generated automatically. Do not edit!
#ifndef _Devil_
#define _Devil_
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class Devil : public Enemy  {
public:
    bool inEgg;

    // Wrappers
    Devil(int xVal, int yVal, int l) {
        ptr::CSTR_Devil(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Devil * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Devil * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline Point * _GetMovementDirection() { return ptr::_GetMovementDirection(); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Devil * (*New)(Devil * self, int xVal, int yVal, int l);
        static Devil * (*_new2)();
        static void (*Update)(Devil * self);
        static Point * (*_GetMovementDirection)();
        static bool (*Hit)(Devil * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*_mark)();
        static void (*CSTR_Devil)(Devil * self);
    };
};

#ifdef _WIN32

Devil * (*Devil::ptr::New)(Devil * self, int xVal, int yVal, int l) = (Devil * (*)(Devil * self, int xVal, int yVal, int l)) 0x65a7e0;
Devil * (*Devil::ptr::_new2)() = (Devil * (*)()) 0x0;
void (*Devil::ptr::Update)(Devil * self) = (void (*)(Devil * self)) 0x65aa80;
Point * (*Devil::ptr::_GetMovementDirection)() = (Point * (*)()) 0x0;
bool (*Devil::ptr::Hit)(Devil * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Devil * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x65aac0;
void (*Devil::ptr::_mark)() = (void (*)()) 0x0;
void (*Devil::ptr::CSTR_Devil)(Devil * self) = (void (*)(Devil * self)) 0x65a780;
#endif

#ifdef __linux__

Devil * (*Devil::ptr::New)(Devil * self, int xVal, int yVal, int l) = (Devil * (*)(Devil * self, int xVal, int yVal, int l)) 0x81cae50;
Devil * (*Devil::ptr::_new2)() = (Devil * (*)()) 0x81d0bc0;
void (*Devil::ptr::Update)(Devil * self) = (void (*)(Devil * self)) 0x837ee00;
Point * (*Devil::ptr::_GetMovementDirection)() = (Point * (*)()) 0x8076710;
bool (*Devil::ptr::Hit)(Devil * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Devil * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x8396880;
void (*Devil::ptr::_mark)() = (void (*)()) 0x80b01c0;
void (*Devil::ptr::CSTR_Devil)(Devil * self) = (void (*)(Devil * self)) 0x81cae20;
#endif
#endif
