// Generated automatically. Do not edit!
#ifndef _DeadRinger_
#define _DeadRinger_
template<class T> class Array;
class Bell;
class Entity;
class Point;
class Sprite;
class String;
#include "Enemy.hpp"

class DeadRinger : public Enemy  {
public:
    int seekingBell;
    Array<Bell *> * bells;
    Sprite * imageStandard;
    Sprite * imageSmash;
    Sprite * imageCharge;
    Sprite * imageChargeSwipe;
    bool smashing;
    int phase;
    bool justSmashed;
    int smashCounter;
    int chargingDir;
    int chargedDir;
    int chargeCounter;
    bool justGotHit;
    bool readyToCharge;
    int chargedOriginX;
    int chargedOriginY;
    int chargedLength;

    // Wrappers
    DeadRinger(int xVal, int yVal, int l, Bell * b1, Bell * b2, Bell * b3, Bell * b4) {
        ptr::CSTR_DeadRinger(this);
        ptr::New(this, xVal, yVal, l, b1, b2, b3, b4);
    }

    inline DeadRinger * New(int xVal, int yVal, int l, Bell * b1, Bell * b2, Bell * b3, Bell * b4) { return ptr::New(this, xVal, yVal, l, b1, b2, b3, b4); }
    inline DeadRinger * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline virtual void PossiblyStartCharge() { ptr::PossiblyStartCharge(this); }
    inline int Move() { return ptr::Move(this); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void Render() { ptr::Render(this); }
    inline void MoveFail() { ptr::MoveFail(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline bool _ImmuneToFear() { return ptr::_ImmuneToFear(); }
    inline void Die() { ptr::Die(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static DeadRinger * (*New)(DeadRinger * self, int xVal, int yVal, int l, Bell * b1, Bell * b2, Bell * b3, Bell * b4);
        static DeadRinger * (*_new2)();
        static void (*Update)(DeadRinger * self);
        static bool (*Hit)(DeadRinger * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*PossiblyStartCharge)(DeadRinger * self);
        static int (*Move)(DeadRinger * self);
        static Point * (*GetMovementDirection)(DeadRinger * self);
        static void (*Render)(DeadRinger * self);
        static void (*MoveFail)(DeadRinger * self);
        static void (*MoveSucceed)(DeadRinger * self, bool hitPlayer, bool moveDelayed);
        static bool (*_ImmuneToFear)();
        static void (*Die)(DeadRinger * self);
        static void (*mark)(DeadRinger * self);
        static void (*CSTR_DeadRinger)(DeadRinger * self);
    };
};

#ifdef _WIN32

DeadRinger * (*DeadRinger::ptr::New)(DeadRinger * self, int xVal, int yVal, int l, Bell * b1, Bell * b2, Bell * b3, Bell * b4) = (DeadRinger * (*)(DeadRinger * self, int xVal, int yVal, int l, Bell * b1, Bell * b2, Bell * b3, Bell * b4)) 0x60b150;
DeadRinger * (*DeadRinger::ptr::_new2)() = (DeadRinger * (*)()) 0x0;
void (*DeadRinger::ptr::Update)(DeadRinger * self) = (void (*)(DeadRinger * self)) 0x60b810;
bool (*DeadRinger::ptr::Hit)(DeadRinger * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(DeadRinger * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x60bb00;
void (*DeadRinger::ptr::PossiblyStartCharge)(DeadRinger * self) = (void (*)(DeadRinger * self)) 0x60bf70;
int (*DeadRinger::ptr::Move)(DeadRinger * self) = (int (*)(DeadRinger * self)) 0x60c700;
Point * (*DeadRinger::ptr::GetMovementDirection)(DeadRinger * self) = (Point * (*)(DeadRinger * self)) 0x60c760;
void (*DeadRinger::ptr::Render)(DeadRinger * self) = (void (*)(DeadRinger * self)) 0x60cd90;
void (*DeadRinger::ptr::MoveFail)(DeadRinger * self) = (void (*)(DeadRinger * self)) 0x60cea0;
void (*DeadRinger::ptr::MoveSucceed)(DeadRinger * self, bool hitPlayer, bool moveDelayed) = (void (*)(DeadRinger * self, bool hitPlayer, bool moveDelayed)) 0x60d050;
bool (*DeadRinger::ptr::_ImmuneToFear)() = (bool (*)()) 0x0;
void (*DeadRinger::ptr::Die)(DeadRinger * self) = (void (*)(DeadRinger * self)) 0x60d4f0;
void (*DeadRinger::ptr::mark)(DeadRinger * self) = (void (*)(DeadRinger * self)) 0x60d600;
void (*DeadRinger::ptr::CSTR_DeadRinger)(DeadRinger * self) = (void (*)(DeadRinger * self)) 0x60b030;
#endif

#ifdef __linux__

DeadRinger * (*DeadRinger::ptr::New)(DeadRinger * self, int xVal, int yVal, int l, Bell * b1, Bell * b2, Bell * b3, Bell * b4) = (DeadRinger * (*)(DeadRinger * self, int xVal, int yVal, int l, Bell * b1, Bell * b2, Bell * b3, Bell * b4)) 0x81b34d0;
DeadRinger * (*DeadRinger::ptr::_new2)() = (DeadRinger * (*)()) 0x81b3af0;
void (*DeadRinger::ptr::Update)(DeadRinger * self) = (void (*)(DeadRinger * self)) 0x8385860;
bool (*DeadRinger::ptr::Hit)(DeadRinger * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(DeadRinger * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x83b8c20;
void (*DeadRinger::ptr::PossiblyStartCharge)(DeadRinger * self) = (void (*)(DeadRinger * self)) 0x83a0d60;
int (*DeadRinger::ptr::Move)(DeadRinger * self) = (int (*)(DeadRinger * self)) 0x8087610;
Point * (*DeadRinger::ptr::GetMovementDirection)(DeadRinger * self) = (Point * (*)(DeadRinger * self)) 0x83a1440;
void (*DeadRinger::ptr::Render)(DeadRinger * self) = (void (*)(DeadRinger * self)) 0x830d5a0;
void (*DeadRinger::ptr::MoveFail)(DeadRinger * self) = (void (*)(DeadRinger * self)) 0x83a1bf0;
void (*DeadRinger::ptr::MoveSucceed)(DeadRinger * self, bool hitPlayer, bool moveDelayed) = (void (*)(DeadRinger * self, bool hitPlayer, bool moveDelayed)) 0x83bb150;
bool (*DeadRinger::ptr::_ImmuneToFear)() = (bool (*)()) 0x8074760;
void (*DeadRinger::ptr::Die)(DeadRinger * self) = (void (*)(DeadRinger * self)) 0x83b6b80;
void (*DeadRinger::ptr::mark)(DeadRinger * self) = (void (*)(DeadRinger * self)) 0x80b1e40;
void (*DeadRinger::ptr::CSTR_DeadRinger)(DeadRinger * self) = (void (*)(DeadRinger * self)) 0x81b32c0;
#endif
#endif
