// Generated automatically. Do not edit!
#ifndef _Monkey_
#define _Monkey_
class Entity;
class Player;
class String;
#include "EnemyClamper.hpp"

class Monkey : public EnemyClamper  {
public:
    int startingHealth;
    int startingCoinsToDrop;
    Player * clampedOnto;

    // Wrappers
    Monkey(int xVal, int yVal, int l) {
        ptr::CSTR_Monkey(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline void Die() { ptr::Die(this); }
    inline Monkey * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Monkey * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline virtual void AttemptClamp() { ptr::AttemptClamp(this); }
    inline int PerformMovement(int xVal, int yVal) { return ptr::PerformMovement(this, xVal, yVal); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline bool DislodgeAttempt() { return ptr::DislodgeAttempt(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static void (*Die)(Monkey * self);
        static Monkey * (*New)(Monkey * self, int xVal, int yVal, int l);
        static Monkey * (*_new2)();
        static void (*Update)(Monkey * self);
        static void (*AttemptClamp)(Monkey * self);
        static int (*PerformMovement)(Monkey * self, int xVal, int yVal);
        static bool (*Hit)(Monkey * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static bool (*DislodgeAttempt)(Monkey * self);
        static void (*mark)(Monkey * self);
        static void (*CSTR_Monkey)(Monkey * self);
    };
};

#ifdef _WIN32

void (*Monkey::ptr::Die)(Monkey * self) = (void (*)(Monkey * self)) 0x639e60;
Monkey * (*Monkey::ptr::New)(Monkey * self, int xVal, int yVal, int l) = (Monkey * (*)(Monkey * self, int xVal, int yVal, int l)) 0x639e90;
Monkey * (*Monkey::ptr::_new2)() = (Monkey * (*)()) 0x0;
void (*Monkey::ptr::Update)(Monkey * self) = (void (*)(Monkey * self)) 0x63a130;
void (*Monkey::ptr::AttemptClamp)(Monkey * self) = (void (*)(Monkey * self)) 0x63a2a0;
int (*Monkey::ptr::PerformMovement)(Monkey * self, int xVal, int yVal) = (int (*)(Monkey * self, int xVal, int yVal)) 0x63a6f0;
bool (*Monkey::ptr::Hit)(Monkey * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Monkey * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x63aa90;
bool (*Monkey::ptr::DislodgeAttempt)(Monkey * self) = (bool (*)(Monkey * self)) 0x63abf0;
void (*Monkey::ptr::mark)(Monkey * self) = (void (*)(Monkey * self)) 0x63ad60;
void (*Monkey::ptr::CSTR_Monkey)(Monkey * self) = (void (*)(Monkey * self)) 0x639de0;
#endif

#ifdef __linux__

void (*Monkey::ptr::Die)(Monkey * self) = (void (*)(Monkey * self)) 0x83b6410;
Monkey * (*Monkey::ptr::New)(Monkey * self, int xVal, int yVal, int l) = (Monkey * (*)(Monkey * self, int xVal, int yVal, int l)) 0x81c00a0;
Monkey * (*Monkey::ptr::_new2)() = (Monkey * (*)()) 0x81c0300;
void (*Monkey::ptr::Update)(Monkey * self) = (void (*)(Monkey * self)) 0x83831a0;
void (*Monkey::ptr::AttemptClamp)(Monkey * self) = (void (*)(Monkey * self)) 0x83a3d50;
int (*Monkey::ptr::PerformMovement)(Monkey * self, int xVal, int yVal) = (int (*)(Monkey * self, int xVal, int yVal)) 0x826af30;
bool (*Monkey::ptr::Hit)(Monkey * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Monkey * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x8399630;
bool (*Monkey::ptr::DislodgeAttempt)(Monkey * self) = (bool (*)(Monkey * self)) 0x83b8870;
void (*Monkey::ptr::mark)(Monkey * self) = (void (*)(Monkey * self)) 0x80b0df0;
void (*Monkey::ptr::CSTR_Monkey)(Monkey * self) = (void (*)(Monkey * self)) 0x81c0060;
#endif
#endif
