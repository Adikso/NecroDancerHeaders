// Generated automatically. Do not edit!
#ifndef _WaterBall_
#define _WaterBall_
class Player;
class Point;
#include "Enemy.hpp"

class WaterBall : public Enemy  {
public:

    // Wrappers
    WaterBall(int x_, int y_, int l) {
        ptr::CSTR_WaterBall(this);
        ptr::New(this, x_, y_, l);
    }

    inline WaterBall * New(int x_, int y_, int l) { return ptr::New(this, x_, y_, l); }
    inline WaterBall * _new2() { return ptr::_new2(); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline virtual void PlaceTileAt(int tileX, int tileY) { ptr::PlaceTileAt(this, tileX, tileY); }
    inline void Die() { ptr::Die(this); }
    inline void AfterHitPlayer(Player * p) { ptr::AfterHitPlayer(this, p); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static WaterBall * (*New)(WaterBall * self, int x_, int y_, int l);
        static WaterBall * (*_new2)();
        static Point * (*GetMovementDirection)(WaterBall * self);
        static void (*PlaceTileAt)(WaterBall * self, int tileX, int tileY);
        static void (*Die)(WaterBall * self);
        static void (*AfterHitPlayer)(WaterBall * self, Player * p);
        static void (*_mark)();
        static void (*CSTR_WaterBall)(WaterBall * self);
    };
};

#ifdef _WIN32

inline WaterBall * (*WaterBall::ptr::New)(WaterBall * self, int x_, int y_, int l) = (WaterBall * (*)(WaterBall * self, int x_, int y_, int l)) 0x657350;
inline WaterBall * (*WaterBall::ptr::_new2)() = (WaterBall * (*)()) 0x0;
inline Point * (*WaterBall::ptr::GetMovementDirection)(WaterBall * self) = (Point * (*)(WaterBall * self)) 0x6471c0;
inline void (*WaterBall::ptr::PlaceTileAt)(WaterBall * self, int tileX, int tileY) = (void (*)(WaterBall * self, int tileX, int tileY)) 0x657670;
inline void (*WaterBall::ptr::Die)(WaterBall * self) = (void (*)(WaterBall * self)) 0x6576a0;
inline void (*WaterBall::ptr::AfterHitPlayer)(WaterBall * self, Player * p) = (void (*)(WaterBall * self, Player * p)) 0x6576d0;
inline void (*WaterBall::ptr::_mark)() = (void (*)()) 0x0;
inline void (*WaterBall::ptr::CSTR_WaterBall)(WaterBall * self) = (void (*)(WaterBall * self)) 0x6572f0;
#endif

#ifdef __linux__

inline WaterBall * (*WaterBall::ptr::New)(WaterBall * self, int x_, int y_, int l) = (WaterBall * (*)(WaterBall * self, int x_, int y_, int l)) 0x81c92a0;
inline WaterBall * (*WaterBall::ptr::_new2)() = (WaterBall * (*)()) 0x81c94b0;
inline Point * (*WaterBall::ptr::GetMovementDirection)(WaterBall * self) = (Point * (*)(WaterBall * self)) 0x80765f0;
inline void (*WaterBall::ptr::PlaceTileAt)(WaterBall * self, int tileX, int tileY) = (void (*)(WaterBall * self, int tileX, int tileY)) 0x81929b0;
inline void (*WaterBall::ptr::Die)(WaterBall * self) = (void (*)(WaterBall * self)) 0x83b5d80;
inline void (*WaterBall::ptr::AfterHitPlayer)(WaterBall * self, Player * p) = (void (*)(WaterBall * self, Player * p)) 0x8318e10;
inline void (*WaterBall::ptr::_mark)() = (void (*)()) 0x80b0220;
inline void (*WaterBall::ptr::CSTR_WaterBall)(WaterBall * self) = (void (*)(WaterBall * self)) 0x81c9280;
#endif
#endif
