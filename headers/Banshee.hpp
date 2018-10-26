// Generated automatically. Do not edit!
#ifndef _Banshee_
#define _Banshee_
class Entity;
class String;
#include "Enemy.hpp"

class Banshee : public Enemy  {
public:
    bool hasShrieked;

    // Wrappers
    Banshee(int xVal, int yVal, int l) {
        ptr::CSTR_Banshee(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Banshee * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Banshee * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void Die() { ptr::Die(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Banshee * (*New)(Banshee * self, int xVal, int yVal, int l);
        static Banshee * (*_new2)();
        static void (*Update)(Banshee * self);
        static bool (*Hit)(Banshee * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*Die)(Banshee * self);
        static void (*_mark)();
        static void (*CSTR_Banshee)(Banshee * self);
    };
};

#ifdef _WIN32

Banshee * (*Banshee::ptr::New)(Banshee * self, int xVal, int yVal, int l) = (Banshee * (*)(Banshee * self, int xVal, int yVal, int l)) 0x61a9b0;
Banshee * (*Banshee::ptr::_new2)() = (Banshee * (*)()) 0x0;
void (*Banshee::ptr::Update)(Banshee * self) = (void (*)(Banshee * self)) 0x61acd0;
bool (*Banshee::ptr::Hit)(Banshee * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Banshee * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x61ad10;
void (*Banshee::ptr::Die)(Banshee * self) = (void (*)(Banshee * self)) 0x61af10;
void (*Banshee::ptr::_mark)() = (void (*)()) 0x0;
void (*Banshee::ptr::CSTR_Banshee)(Banshee * self) = (void (*)(Banshee * self)) 0x61a950;
#endif

#ifdef __linux__

Banshee * (*Banshee::ptr::New)(Banshee * self, int xVal, int yVal, int l) = (Banshee * (*)(Banshee * self, int xVal, int yVal, int l)) 0x81b6ac0;
Banshee * (*Banshee::ptr::_new2)() = (Banshee * (*)()) 0x81b6ca0;
void (*Banshee::ptr::Update)(Banshee * self) = (void (*)(Banshee * self)) 0x8384ac0;
bool (*Banshee::ptr::Hit)(Banshee * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Banshee * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x839ca60;
void (*Banshee::ptr::Die)(Banshee * self) = (void (*)(Banshee * self)) 0x83b6890;
void (*Banshee::ptr::_mark)() = (void (*)()) 0x80b0bb0;
void (*Banshee::ptr::CSTR_Banshee)(Banshee * self) = (void (*)(Banshee * self)) 0x81b6a90;
#endif
#endif
