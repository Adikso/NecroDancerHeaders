// Generated automatically. Do not edit!
#ifndef _Warlock_
#define _Warlock_
class Entity;
class String;
#include "Enemy.hpp"

class Warlock : public Enemy  {
public:

    // Wrappers
    Warlock(int xVal, int yVal, int l) {
        ptr::CSTR_Warlock(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Warlock * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Warlock * _new2() { return ptr::_new2(); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void Render() { ptr::Render(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Warlock * (*New)(Warlock * self, int xVal, int yVal, int l);
        static Warlock * (*_new2)();
        static bool (*Hit)(Warlock * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*Render)(Warlock * self);
        static void (*_mark)();
        static void (*CSTR_Warlock)(Warlock * self);
    };
};

#ifdef _WIN32

inline Warlock * (*Warlock::ptr::New)(Warlock * self, int xVal, int yVal, int l) = (Warlock * (*)(Warlock * self, int xVal, int yVal, int l)) 0x64f8f0;
inline Warlock * (*Warlock::ptr::_new2)() = (Warlock * (*)()) 0x0;
inline bool (*Warlock::ptr::Hit)(Warlock * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Warlock * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x64fb80;
inline void (*Warlock::ptr::Render)(Warlock * self) = (void (*)(Warlock * self)) 0x64fd70;
inline void (*Warlock::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Warlock::ptr::CSTR_Warlock)(Warlock * self) = (void (*)(Warlock * self)) 0x64f890;
#endif

#ifdef __linux__

inline Warlock * (*Warlock::ptr::New)(Warlock * self, int xVal, int yVal, int l) = (Warlock * (*)(Warlock * self, int xVal, int yVal, int l)) 0x81c69d0;
inline Warlock * (*Warlock::ptr::_new2)() = (Warlock * (*)()) 0x81c6b70;
inline bool (*Warlock::ptr::Hit)(Warlock * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Warlock * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x83d1710;
inline void (*Warlock::ptr::Render)(Warlock * self) = (void (*)(Warlock * self)) 0x830b410;
inline void (*Warlock::ptr::_mark)() = (void (*)()) 0x80b0410;
inline void (*Warlock::ptr::CSTR_Warlock)(Warlock * self) = (void (*)(Warlock * self)) 0x81c69b0;
#endif
#endif
