// Generated automatically. Do not edit!
#ifndef _Queen_
#define _Queen_
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class Queen : public Enemy  {
public:
    int initialYOff;

    // Wrappers
    inline Queen * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Queen * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline Point * _GetMovementDirection() { return ptr::_GetMovementDirection(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Queen * (*New)(Queen * self, int xVal, int yVal, int l);
        static Queen * (*_new2)();
        static void (*Update)(Queen * self);
        static bool (*Hit)(Queen * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static Point * (*_GetMovementDirection)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Queen * (*Queen::ptr::New)(Queen * self, int xVal, int yVal, int l) = (Queen * (*)(Queen * self, int xVal, int yVal, int l)) 0x657030;
Queen * (*Queen::ptr::_new2)() = (Queen * (*)()) 0x0;
void (*Queen::ptr::Update)(Queen * self) = (void (*)(Queen * self)) 0x6572b0;
bool (*Queen::ptr::Hit)(Queen * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Queen * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x646670;
Point * (*Queen::ptr::_GetMovementDirection)() = (Point * (*)()) 0x0;
void (*Queen::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Queen * (*Queen::ptr::New)(Queen * self, int xVal, int yVal, int l) = (Queen * (*)(Queen * self, int xVal, int yVal, int l)) 0x81c9060;
Queen * (*Queen::ptr::_new2)() = (Queen * (*)()) 0x81c9260;
void (*Queen::ptr::Update)(Queen * self) = (void (*)(Queen * self)) 0x837f2e0;
bool (*Queen::ptr::Hit)(Queen * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Queen * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x83970d0;
Point * (*Queen::ptr::_GetMovementDirection)() = (Point * (*)()) 0x80765e0;
void (*Queen::ptr::_mark)() = (void (*)()) 0x80b0230;
#endif
#endif
