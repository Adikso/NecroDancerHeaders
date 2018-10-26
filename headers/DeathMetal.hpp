// Generated automatically. Do not edit!
#ifndef _DeathMetal_
#define _DeathMetal_
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class DeathMetal : public Enemy  {
public:
    int actionDelay;
    Point * cachedMoveDir;
    bool shieldDestroyed;
    bool preventKnockbackThisFrame;
    int shieldDir;
    int actionDelayTime;
    int lastActionTime;
    int lastAction;
    int summonCount;
    bool justBounced;
    int directionHitFrom;

    // Wrappers
    DeathMetal(int xVal, int yVal, int l) {
        ptr::CSTR_DeathMetal(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline DeathMetal * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline DeathMetal * _new2() { return ptr::_new2(); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline virtual void MakeEnemies(int enType, int numMin, int numMax) { ptr::MakeEnemies(this, enType, numMin, numMax); }
    inline virtual void TakeAction() { ptr::TakeAction(this); }
    inline void Update() { ptr::Update(this); }
    inline void Knockback(int dir) { ptr::Knockback(this, dir); }
    inline virtual void DestroyShield(int dir) { ptr::DestroyShield(this, dir); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void _Die() { ptr::_Die(); }
    inline virtual void AdjustShieldDir() { ptr::AdjustShieldDir(this); }
    inline void _MoveFail() { ptr::_MoveFail(); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static DeathMetal * (*New)(DeathMetal * self, int xVal, int yVal, int l);
        static DeathMetal * (*_new2)();
        static Point * (*GetMovementDirection)(DeathMetal * self);
        static void (*MakeEnemies)(DeathMetal * self, int enType, int numMin, int numMax);
        static void (*TakeAction)(DeathMetal * self);
        static void (*Update)(DeathMetal * self);
        static void (*Knockback)(DeathMetal * self, int dir);
        static void (*DestroyShield)(DeathMetal * self, int dir);
        static bool (*Hit)(DeathMetal * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*_Die)();
        static void (*AdjustShieldDir)(DeathMetal * self);
        static void (*_MoveFail)();
        static void (*MoveSucceed)(DeathMetal * self, bool hitPlayer, bool moveDelayed);
        static void (*_mark)();
        static void (*CSTR_DeathMetal)(DeathMetal * self);
    };
};

#ifdef _WIN32

DeathMetal * (*DeathMetal::ptr::New)(DeathMetal * self, int xVal, int yVal, int l) = (DeathMetal * (*)(DeathMetal * self, int xVal, int yVal, int l)) 0x664fb0;
DeathMetal * (*DeathMetal::ptr::_new2)() = (DeathMetal * (*)()) 0x0;
Point * (*DeathMetal::ptr::GetMovementDirection)(DeathMetal * self) = (Point * (*)(DeathMetal * self)) 0x665290;
void (*DeathMetal::ptr::MakeEnemies)(DeathMetal * self, int enType, int numMin, int numMax) = (void (*)(DeathMetal * self, int enType, int numMin, int numMax)) 0x665520;
void (*DeathMetal::ptr::TakeAction)(DeathMetal * self) = (void (*)(DeathMetal * self)) 0x665d60;
void (*DeathMetal::ptr::Update)(DeathMetal * self) = (void (*)(DeathMetal * self)) 0x6661e0;
void (*DeathMetal::ptr::Knockback)(DeathMetal * self, int dir) = (void (*)(DeathMetal * self, int dir)) 0x666c50;
void (*DeathMetal::ptr::DestroyShield)(DeathMetal * self, int dir) = (void (*)(DeathMetal * self, int dir)) 0x666c70;
bool (*DeathMetal::ptr::Hit)(DeathMetal * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(DeathMetal * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x667050;
void (*DeathMetal::ptr::_Die)() = (void (*)()) 0x0;
void (*DeathMetal::ptr::AdjustShieldDir)(DeathMetal * self) = (void (*)(DeathMetal * self)) 0x667610;
void (*DeathMetal::ptr::_MoveFail)() = (void (*)()) 0x0;
void (*DeathMetal::ptr::MoveSucceed)(DeathMetal * self, bool hitPlayer, bool moveDelayed) = (void (*)(DeathMetal * self, bool hitPlayer, bool moveDelayed)) 0x667660;
void (*DeathMetal::ptr::_mark)() = (void (*)()) 0x0;
void (*DeathMetal::ptr::CSTR_DeathMetal)(DeathMetal * self) = (void (*)(DeathMetal * self)) 0x664ea0;
#endif

#ifdef __linux__

DeathMetal * (*DeathMetal::ptr::New)(DeathMetal * self, int xVal, int yVal, int l) = (DeathMetal * (*)(DeathMetal * self, int xVal, int yVal, int l)) 0x81d83b0;
DeathMetal * (*DeathMetal::ptr::_new2)() = (DeathMetal * (*)()) 0x81d85b0;
Point * (*DeathMetal::ptr::GetMovementDirection)(DeathMetal * self) = (Point * (*)(DeathMetal * self)) 0x8130000;
void (*DeathMetal::ptr::MakeEnemies)(DeathMetal * self, int enType, int numMin, int numMax) = (void (*)(DeathMetal * self, int enType, int numMin, int numMax)) 0x81c9690;
void (*DeathMetal::ptr::TakeAction)(DeathMetal * self) = (void (*)(DeathMetal * self)) 0x83be5a0;
void (*DeathMetal::ptr::Update)(DeathMetal * self) = (void (*)(DeathMetal * self)) 0x837e400;
void (*DeathMetal::ptr::Knockback)(DeathMetal * self, int dir) = (void (*)(DeathMetal * self, int dir)) 0x81031a0;
void (*DeathMetal::ptr::DestroyShield)(DeathMetal * self, int dir) = (void (*)(DeathMetal * self, int dir)) 0x8318a70;
bool (*DeathMetal::ptr::Hit)(DeathMetal * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(DeathMetal * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x83b8040;
void (*DeathMetal::ptr::_Die)() = (void (*)()) 0x83b5b60;
void (*DeathMetal::ptr::AdjustShieldDir)(DeathMetal * self) = (void (*)(DeathMetal * self)) 0x807f980;
void (*DeathMetal::ptr::_MoveFail)() = (void (*)()) 0x8134770;
void (*DeathMetal::ptr::MoveSucceed)(DeathMetal * self, bool hitPlayer, bool moveDelayed) = (void (*)(DeathMetal * self, bool hitPlayer, bool moveDelayed)) 0x807f9e0;
void (*DeathMetal::ptr::_mark)() = (void (*)()) 0x80affd0;
void (*DeathMetal::ptr::CSTR_DeathMetal)(DeathMetal * self) = (void (*)(DeathMetal * self)) 0x81d82f0;
#endif
#endif
