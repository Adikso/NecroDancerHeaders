// Generated automatically. Do not edit!
#ifndef _Skull_
#define _Skull_
class Entity;
class String;
#include "Enemy.hpp"

class Skull : public Enemy  {
public:

    // Wrappers
    Skull(int xVal, int yVal, int l) {
        ptr::CSTR_Skull(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Skull * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Skull * _new2() { return ptr::_new2(); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline bool _CanBeLord() { return ptr::_CanBeLord(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Skull * (*New)(Skull * self, int xVal, int yVal, int l);
        static Skull * (*_new2)();
        static bool (*Hit)(Skull * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static bool (*_CanBeLord)();
        static void (*_mark)();
        static void (*CSTR_Skull)(Skull * self);
    };
};

#ifdef _WIN32

inline Skull * (*Skull::ptr::New)(Skull * self, int xVal, int yVal, int l) = (Skull * (*)(Skull * self, int xVal, int yVal, int l)) 0x6528f0;
inline Skull * (*Skull::ptr::_new2)() = (Skull * (*)()) 0x0;
inline bool (*Skull::ptr::Hit)(Skull * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Skull * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x652b80;
inline bool (*Skull::ptr::_CanBeLord)() = (bool (*)()) 0x0;
inline void (*Skull::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Skull::ptr::CSTR_Skull)(Skull * self) = (void (*)(Skull * self)) 0x652890;
#endif

#ifdef __linux__

inline Skull * (*Skull::ptr::New)(Skull * self, int xVal, int yVal, int l) = (Skull * (*)(Skull * self, int xVal, int yVal, int l)) 0x81c7ef0;
inline Skull * (*Skull::ptr::_new2)() = (Skull * (*)()) 0x81c8090;
inline bool (*Skull::ptr::Hit)(Skull * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Skull * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x8397340;
inline bool (*Skull::ptr::_CanBeLord)() = (bool (*)()) 0x8076530;
inline void (*Skull::ptr::_mark)() = (void (*)()) 0x80b0370;
inline void (*Skull::ptr::CSTR_Skull)(Skull * self) = (void (*)(Skull * self)) 0x81c7ed0;
#endif
#endif
