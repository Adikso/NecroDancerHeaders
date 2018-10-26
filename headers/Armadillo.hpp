// Generated automatically. Do not edit!
#ifndef _Armadillo_
#define _Armadillo_
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class Armadillo : public Enemy  {
public:
    int chargeNext;
    int chargingDir;
    int stunnedTime;

    // Wrappers
    Armadillo(int xVal, int yVal, int l) {
        ptr::CSTR_Armadillo(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Armadillo * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Armadillo * _new2() { return ptr::_new2(); }
    inline virtual void AttemptCharge(Entity * target, bool immediate) { ptr::AttemptCharge(this, target, immediate); }
    inline virtual void AttemptCharge2(bool immediate) { ptr::AttemptCharge2(this, immediate); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void Update() { ptr::Update(this); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void MoveFail() { ptr::MoveFail(this); }
    inline int MoveImmediate(int xVal, int yVal, String * movementSource) { return ptr::MoveImmediate(this, xVal, yVal, movementSource); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void Knockback(int dir) { ptr::Knockback(this, dir); }
    inline bool _CanBeLord() { return ptr::_CanBeLord(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Armadillo * (*New)(Armadillo * self, int xVal, int yVal, int l);
        static Armadillo * (*_new2)();
        static void (*AttemptCharge)(Armadillo * self, Entity * target, bool immediate);
        static void (*AttemptCharge2)(Armadillo * self, bool immediate);
        static Point * (*GetMovementDirection)(Armadillo * self);
        static void (*Update)(Armadillo * self);
        static bool (*Hit)(Armadillo * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*MoveFail)(Armadillo * self);
        static int (*MoveImmediate)(Armadillo * self, int xVal, int yVal, String * movementSource);
        static void (*MoveSucceed)(Armadillo * self, bool hitPlayer, bool moveDelayed);
        static void (*Knockback)(Armadillo * self, int dir);
        static bool (*_CanBeLord)();
        static void (*_mark)();
        static void (*CSTR_Armadillo)(Armadillo * self);
    };
};

#ifdef _WIN32

Armadillo * (*Armadillo::ptr::New)(Armadillo * self, int xVal, int yVal, int l) = (Armadillo * (*)(Armadillo * self, int xVal, int yVal, int l)) 0x63dcc0;
Armadillo * (*Armadillo::ptr::_new2)() = (Armadillo * (*)()) 0x0;
void (*Armadillo::ptr::AttemptCharge)(Armadillo * self, Entity * target, bool immediate) = (void (*)(Armadillo * self, Entity * target, bool immediate)) 0x63df50;
void (*Armadillo::ptr::AttemptCharge2)(Armadillo * self, bool immediate) = (void (*)(Armadillo * self, bool immediate)) 0x63e520;
Point * (*Armadillo::ptr::GetMovementDirection)(Armadillo * self) = (Point * (*)(Armadillo * self)) 0x63e5b0;
void (*Armadillo::ptr::Update)(Armadillo * self) = (void (*)(Armadillo * self)) 0x63e790;
bool (*Armadillo::ptr::Hit)(Armadillo * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Armadillo * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x63e9d0;
void (*Armadillo::ptr::MoveFail)(Armadillo * self) = (void (*)(Armadillo * self)) 0x63ec10;
int (*Armadillo::ptr::MoveImmediate)(Armadillo * self, int xVal, int yVal, String * movementSource) = (int (*)(Armadillo * self, int xVal, int yVal, String * movementSource)) 0x63ee20;
void (*Armadillo::ptr::MoveSucceed)(Armadillo * self, bool hitPlayer, bool moveDelayed) = (void (*)(Armadillo * self, bool hitPlayer, bool moveDelayed)) 0x63ef60;
void (*Armadillo::ptr::Knockback)(Armadillo * self, int dir) = (void (*)(Armadillo * self, int dir)) 0x63f000;
bool (*Armadillo::ptr::_CanBeLord)() = (bool (*)()) 0x0;
void (*Armadillo::ptr::_mark)() = (void (*)()) 0x0;
void (*Armadillo::ptr::CSTR_Armadillo)(Armadillo * self) = (void (*)(Armadillo * self)) 0x63dc40;
#endif

#ifdef __linux__

Armadillo * (*Armadillo::ptr::New)(Armadillo * self, int xVal, int yVal, int l) = (Armadillo * (*)(Armadillo * self, int xVal, int yVal, int l)) 0x81c1040;
Armadillo * (*Armadillo::ptr::_new2)() = (Armadillo * (*)()) 0x81c11e0;
void (*Armadillo::ptr::AttemptCharge)(Armadillo * self, Entity * target, bool immediate) = (void (*)(Armadillo * self, Entity * target, bool immediate)) 0x83a4380;
void (*Armadillo::ptr::AttemptCharge2)(Armadillo * self, bool immediate) = (void (*)(Armadillo * self, bool immediate)) 0x8103f80;
Point * (*Armadillo::ptr::GetMovementDirection)(Armadillo * self) = (Point * (*)(Armadillo * self)) 0x83a4820;
void (*Armadillo::ptr::Update)(Armadillo * self) = (void (*)(Armadillo * self)) 0x8382830;
bool (*Armadillo::ptr::Hit)(Armadillo * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Armadillo * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x8399120;
void (*Armadillo::ptr::MoveFail)(Armadillo * self) = (void (*)(Armadillo * self)) 0x83a49a0;
int (*Armadillo::ptr::MoveImmediate)(Armadillo * self, int xVal, int yVal, String * movementSource) = (int (*)(Armadillo * self, int xVal, int yVal, String * movementSource)) 0x8393bb0;
void (*Armadillo::ptr::MoveSucceed)(Armadillo * self, bool hitPlayer, bool moveDelayed) = (void (*)(Armadillo * self, bool hitPlayer, bool moveDelayed)) 0x8103e90;
void (*Armadillo::ptr::Knockback)(Armadillo * self, int dir) = (void (*)(Armadillo * self, int dir)) 0x81031e0;
bool (*Armadillo::ptr::_CanBeLord)() = (bool (*)()) 0x80760d0;
void (*Armadillo::ptr::_mark)() = (void (*)()) 0x80b0750;
void (*Armadillo::ptr::CSTR_Armadillo)(Armadillo * self) = (void (*)(Armadillo * self)) 0x81c1000;
#endif
#endif
