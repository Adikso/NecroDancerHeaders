// Generated automatically. Do not edit!
#ifndef _Golem_
#define _Golem_
class Entity;
class String;
#include "Enemy.hpp"

class Golem : public Enemy  {
public:
    bool droppedOoze;
    int prevFrame;

    // Wrappers
    Golem(int xVal, int yVal, int l) {
        ptr::CSTR_Golem(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Golem * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Golem * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline void _MoveFail() { ptr::_MoveFail(); }
    inline bool _CanBeLord() { return ptr::_CanBeLord(); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Golem * (*New)(Golem * self, int xVal, int yVal, int l);
        static Golem * (*_new2)();
        static void (*Update)(Golem * self);
        static void (*_MoveFail)();
        static bool (*_CanBeLord)();
        static bool (*Hit)(Golem * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*_mark)();
        static void (*CSTR_Golem)(Golem * self);
    };
};

#ifdef _WIN32

Golem * (*Golem::ptr::New)(Golem * self, int xVal, int yVal, int l) = (Golem * (*)(Golem * self, int xVal, int yVal, int l)) 0x63d5a0;
Golem * (*Golem::ptr::_new2)() = (Golem * (*)()) 0x0;
void (*Golem::ptr::Update)(Golem * self) = (void (*)(Golem * self)) 0x63d8d0;
void (*Golem::ptr::_MoveFail)() = (void (*)()) 0x0;
bool (*Golem::ptr::_CanBeLord)() = (bool (*)()) 0x0;
bool (*Golem::ptr::Hit)(Golem * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Golem * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x63daf0;
void (*Golem::ptr::_mark)() = (void (*)()) 0x0;
void (*Golem::ptr::CSTR_Golem)(Golem * self) = (void (*)(Golem * self)) 0x63d530;
#endif

#ifdef __linux__

Golem * (*Golem::ptr::New)(Golem * self, int xVal, int yVal, int l) = (Golem * (*)(Golem * self, int xVal, int yVal, int l)) 0x81c0df0;
Golem * (*Golem::ptr::_new2)() = (Golem * (*)()) 0x81c0fe0;
void (*Golem::ptr::Update)(Golem * self) = (void (*)(Golem * self)) 0x8382be0;
void (*Golem::ptr::_MoveFail)() = (void (*)()) 0x8135240;
bool (*Golem::ptr::_CanBeLord)() = (bool (*)()) 0x80760c0;
bool (*Golem::ptr::Hit)(Golem * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Golem * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x83992f0;
void (*Golem::ptr::_mark)() = (void (*)()) 0x80b0760;
void (*Golem::ptr::CSTR_Golem)(Golem * self) = (void (*)(Golem * self)) 0x81c0dc0;
#endif
#endif
