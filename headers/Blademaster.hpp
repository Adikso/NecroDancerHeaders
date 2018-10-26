// Generated automatically. Do not edit!
#ifndef _Blademaster_
#define _Blademaster_
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class Blademaster : public Enemy  {
public:
    bool charging;
    int hitDir;
    bool vulnerable;

    // Wrappers
    Blademaster(int xVal, int yVal, int l) {
        ptr::CSTR_Blademaster(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Blademaster * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Blademaster * _new2() { return ptr::_new2(); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void Update() { ptr::Update(this); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void MoveFail() { ptr::MoveFail(this); }
    inline bool _CanBeLord() { return ptr::_CanBeLord(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Blademaster * (*New)(Blademaster * self, int xVal, int yVal, int l);
        static Blademaster * (*_new2)();
        static Point * (*GetMovementDirection)(Blademaster * self);
        static void (*Update)(Blademaster * self);
        static bool (*Hit)(Blademaster * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*MoveSucceed)(Blademaster * self, bool hitPlayer, bool moveDelayed);
        static void (*MoveFail)(Blademaster * self);
        static bool (*_CanBeLord)();
        static void (*_mark)();
        static void (*CSTR_Blademaster)(Blademaster * self);
    };
};

#ifdef _WIN32

Blademaster * (*Blademaster::ptr::New)(Blademaster * self, int xVal, int yVal, int l) = (Blademaster * (*)(Blademaster * self, int xVal, int yVal, int l)) 0x64a4e0;
Blademaster * (*Blademaster::ptr::_new2)() = (Blademaster * (*)()) 0x0;
Point * (*Blademaster::ptr::GetMovementDirection)(Blademaster * self) = (Point * (*)(Blademaster * self)) 0x64a770;
void (*Blademaster::ptr::Update)(Blademaster * self) = (void (*)(Blademaster * self)) 0x64a8a0;
bool (*Blademaster::ptr::Hit)(Blademaster * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Blademaster * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x64a980;
void (*Blademaster::ptr::MoveSucceed)(Blademaster * self, bool hitPlayer, bool moveDelayed) = (void (*)(Blademaster * self, bool hitPlayer, bool moveDelayed)) 0x64ace0;
void (*Blademaster::ptr::MoveFail)(Blademaster * self) = (void (*)(Blademaster * self)) 0x64b040;
bool (*Blademaster::ptr::_CanBeLord)() = (bool (*)()) 0x0;
void (*Blademaster::ptr::_mark)() = (void (*)()) 0x0;
void (*Blademaster::ptr::CSTR_Blademaster)(Blademaster * self) = (void (*)(Blademaster * self)) 0x64a470;
#endif

#ifdef __linux__

Blademaster * (*Blademaster::ptr::New)(Blademaster * self, int xVal, int yVal, int l) = (Blademaster * (*)(Blademaster * self, int xVal, int yVal, int l)) 0x81c4cc0;
Blademaster * (*Blademaster::ptr::_new2)() = (Blademaster * (*)()) 0x81c4e60;
Point * (*Blademaster::ptr::GetMovementDirection)(Blademaster * self) = (Point * (*)(Blademaster * self)) 0x8132740;
void (*Blademaster::ptr::Update)(Blademaster * self) = (void (*)(Blademaster * self)) 0x8380d20;
bool (*Blademaster::ptr::Hit)(Blademaster * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Blademaster * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x8397a50;
void (*Blademaster::ptr::MoveSucceed)(Blademaster * self, bool hitPlayer, bool moveDelayed) = (void (*)(Blademaster * self, bool hitPlayer, bool moveDelayed)) 0x83a6950;
void (*Blademaster::ptr::MoveFail)(Blademaster * self) = (void (*)(Blademaster * self)) 0x8134cc0;
bool (*Blademaster::ptr::_CanBeLord)() = (bool (*)()) 0x8076360;
void (*Blademaster::ptr::_mark)() = (void (*)()) 0x80b04b0;
void (*Blademaster::ptr::CSTR_Blademaster)(Blademaster * self) = (void (*)(Blademaster * self)) 0x81c4c80;
#endif
#endif
