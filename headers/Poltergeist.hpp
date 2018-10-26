// Generated automatically. Do not edit!
#ifndef _Poltergeist_
#define _Poltergeist_
class Entity;
class Point;
class Sprite;
class String;
#include "Enemy.hpp"

class Poltergeist : public Enemy  {
public:
    Sprite * alphaImage;
    bool multiImage;
    Entity * hitPlayer;
    bool seeking;
    bool teleporting;
    bool skippedMove;
    bool hasRoared;
    bool beenHit;
    static Poltergeist * * theGhoul;

    // Wrappers
    Poltergeist(int xVal, int yVal, int l) {
        ptr::CSTR_Poltergeist(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline void Die() { ptr::Die(this); }
    inline Poltergeist * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Poltergeist * _new2() { return ptr::_new2(); }
    inline void Render() { ptr::Render(this); }
    inline virtual void BecomeCorporeal(bool force) { ptr::BecomeCorporeal(this, force); }
    inline virtual void CheckCorporeality() { ptr::CheckCorporeality(this); }
    inline void Update() { ptr::Update(this); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline bool _CanBeDamaged(bool arg1, bool arg2) { return ptr::_CanBeDamaged(this, arg1, arg2); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static void (*Die)(Poltergeist * self);
        static Poltergeist * (*New)(Poltergeist * self, int xVal, int yVal, int l);
        static Poltergeist * (*_new2)();
        static void (*Render)(Poltergeist * self);
        static void (*BecomeCorporeal)(Poltergeist * self, bool force);
        static void (*CheckCorporeality)(Poltergeist * self);
        static void (*Update)(Poltergeist * self);
        static bool (*Hit)(Poltergeist * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static bool (*_CanBeDamaged)(Poltergeist * self, bool arg1, bool arg2);
        static Point * (*GetMovementDirection)(Poltergeist * self);
        static void (*MoveSucceed)(Poltergeist * self, bool hitPlayer, bool moveDelayed);
        static void (*mark)(Poltergeist * self);
        static void (*CSTR_Poltergeist)(Poltergeist * self);
    };
};

#ifdef _WIN32
Poltergeist * * Poltergeist::theGhoul = (Poltergeist* *) 0x83598c;

void (*Poltergeist::ptr::Die)(Poltergeist * self) = (void (*)(Poltergeist * self)) 0x64b0e0;
Poltergeist * (*Poltergeist::ptr::New)(Poltergeist * self, int xVal, int yVal, int l) = (Poltergeist * (*)(Poltergeist * self, int xVal, int yVal, int l)) 0x64b100;
Poltergeist * (*Poltergeist::ptr::_new2)() = (Poltergeist * (*)()) 0x0;
void (*Poltergeist::ptr::Render)(Poltergeist * self) = (void (*)(Poltergeist * self)) 0x64b8c0;
void (*Poltergeist::ptr::BecomeCorporeal)(Poltergeist * self, bool force) = (void (*)(Poltergeist * self, bool force)) 0x64b9c0;
void (*Poltergeist::ptr::CheckCorporeality)(Poltergeist * self) = (void (*)(Poltergeist * self)) 0x64bd10;
void (*Poltergeist::ptr::Update)(Poltergeist * self) = (void (*)(Poltergeist * self)) 0x64c0a0;
bool (*Poltergeist::ptr::Hit)(Poltergeist * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Poltergeist * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x64c470;
bool (*Poltergeist::ptr::_CanBeDamaged)(Poltergeist * self, bool arg1, bool arg2) = (bool (*)(Poltergeist * self, bool arg1, bool arg2)) 0x0;
Point * (*Poltergeist::ptr::GetMovementDirection)(Poltergeist * self) = (Point * (*)(Poltergeist * self)) 0x64c590;
void (*Poltergeist::ptr::MoveSucceed)(Poltergeist * self, bool hitPlayer, bool moveDelayed) = (void (*)(Poltergeist * self, bool hitPlayer, bool moveDelayed)) 0x64c680;
void (*Poltergeist::ptr::mark)(Poltergeist * self) = (void (*)(Poltergeist * self)) 0x64c6b0;
void (*Poltergeist::ptr::CSTR_Poltergeist)(Poltergeist * self) = (void (*)(Poltergeist * self)) 0x64b060;
#endif

#ifdef __linux__
Poltergeist * * Poltergeist::theGhoul = (Poltergeist* *) 0x856a358;

void (*Poltergeist::ptr::Die)(Poltergeist * self) = (void (*)(Poltergeist * self)) 0x83b5f80;
Poltergeist * (*Poltergeist::ptr::New)(Poltergeist * self, int xVal, int yVal, int l) = (Poltergeist * (*)(Poltergeist * self, int xVal, int yVal, int l)) 0x81c4ee0;
Poltergeist * (*Poltergeist::ptr::_new2)() = (Poltergeist * (*)()) 0x81c55d0;
void (*Poltergeist::ptr::Render)(Poltergeist * self) = (void (*)(Poltergeist * self)) 0x830b720;
void (*Poltergeist::ptr::BecomeCorporeal)(Poltergeist * self, bool force) = (void (*)(Poltergeist * self, bool force)) 0x8264460;
void (*Poltergeist::ptr::CheckCorporeality)(Poltergeist * self) = (void (*)(Poltergeist * self)) 0x8260680;
void (*Poltergeist::ptr::Update)(Poltergeist * self) = (void (*)(Poltergeist * self)) 0x8380440;
bool (*Poltergeist::ptr::Hit)(Poltergeist * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Poltergeist * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x8397840;
bool (*Poltergeist::ptr::_CanBeDamaged)(Poltergeist * self, bool arg1, bool arg2) = (bool (*)(Poltergeist * self, bool arg1, bool arg2)) 0x8076370;
Point * (*Poltergeist::ptr::GetMovementDirection)(Poltergeist * self) = (Point * (*)(Poltergeist * self)) 0x80b4460;
void (*Poltergeist::ptr::MoveSucceed)(Poltergeist * self, bool hitPlayer, bool moveDelayed) = (void (*)(Poltergeist * self, bool hitPlayer, bool moveDelayed)) 0x8076380;
void (*Poltergeist::ptr::mark)(Poltergeist * self) = (void (*)(Poltergeist * self)) 0x80b1340;
void (*Poltergeist::ptr::CSTR_Poltergeist)(Poltergeist * self) = (void (*)(Poltergeist * self)) 0x81c4e80;
#endif
#endif
