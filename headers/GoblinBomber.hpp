// Generated automatically. Do not edit!
#ifndef _GoblinBomber_
#define _GoblinBomber_
class Point;
#include "Enemy.hpp"

class GoblinBomber : public Enemy  {
public:
    bool dropBomb;

    // Wrappers
    GoblinBomber(int xVal, int yVal, int l) {
        ptr::CSTR_GoblinBomber(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline GoblinBomber * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline GoblinBomber * _new2() { return ptr::_new2(); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void Update() { ptr::Update(this); }
    inline void AfterHitHook2(int diffX, int diffY) { ptr::AfterHitHook2(this, diffX, diffY); }
    inline void Die() { ptr::Die(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static GoblinBomber * (*New)(GoblinBomber * self, int xVal, int yVal, int l);
        static GoblinBomber * (*_new2)();
        static Point * (*GetMovementDirection)(GoblinBomber * self);
        static void (*Update)(GoblinBomber * self);
        static void (*AfterHitHook2)(GoblinBomber * self, int diffX, int diffY);
        static void (*Die)(GoblinBomber * self);
        static void (*_mark)();
        static void (*CSTR_GoblinBomber)(GoblinBomber * self);
    };
};

#ifdef _WIN32

inline GoblinBomber * (*GoblinBomber::ptr::New)(GoblinBomber * self, int xVal, int yVal, int l) = (GoblinBomber * (*)(GoblinBomber * self, int xVal, int yVal, int l)) 0x6494b0;
inline GoblinBomber * (*GoblinBomber::ptr::_new2)() = (GoblinBomber * (*)()) 0x0;
inline Point * (*GoblinBomber::ptr::GetMovementDirection)(GoblinBomber * self) = (Point * (*)(GoblinBomber * self)) 0x6496a0;
inline void (*GoblinBomber::ptr::Update)(GoblinBomber * self) = (void (*)(GoblinBomber * self)) 0x6497a0;
inline void (*GoblinBomber::ptr::AfterHitHook2)(GoblinBomber * self, int diffX, int diffY) = (void (*)(GoblinBomber * self, int diffX, int diffY)) 0x6497e0;
inline void (*GoblinBomber::ptr::Die)(GoblinBomber * self) = (void (*)(GoblinBomber * self)) 0x649890;
inline void (*GoblinBomber::ptr::_mark)() = (void (*)()) 0x0;
inline void (*GoblinBomber::ptr::CSTR_GoblinBomber)(GoblinBomber * self) = (void (*)(GoblinBomber * self)) 0x649450;
#endif

#ifdef __linux__

inline GoblinBomber * (*GoblinBomber::ptr::New)(GoblinBomber * self, int xVal, int yVal, int l) = (GoblinBomber * (*)(GoblinBomber * self, int xVal, int yVal, int l)) 0x81c4920;
inline GoblinBomber * (*GoblinBomber::ptr::_new2)() = (GoblinBomber * (*)()) 0x81c4a70;
inline Point * (*GoblinBomber::ptr::GetMovementDirection)(GoblinBomber * self) = (Point * (*)(GoblinBomber * self)) 0x812fa90;
inline void (*GoblinBomber::ptr::Update)(GoblinBomber * self) = (void (*)(GoblinBomber * self)) 0x8381070;
inline void (*GoblinBomber::ptr::AfterHitHook2)(GoblinBomber * self, int diffX, int diffY) = (void (*)(GoblinBomber * self, int diffX, int diffY)) 0x83ad5e0;
inline void (*GoblinBomber::ptr::Die)(GoblinBomber * self) = (void (*)(GoblinBomber * self)) 0x83b5fb0;
inline void (*GoblinBomber::ptr::_mark)() = (void (*)()) 0x80b04d0;
inline void (*GoblinBomber::ptr::CSTR_GoblinBomber)(GoblinBomber * self) = (void (*)(GoblinBomber * self)) 0x81c48f0;
#endif
#endif
