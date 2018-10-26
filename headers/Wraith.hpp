// Generated automatically. Do not edit!
#ifndef _Wraith_
#define _Wraith_
class Entity;
class Player;
class Point;
class String;
#include "Enemy.hpp"

class Wraith : public Enemy  {
public:
    String * crySound;
    bool seeking;
    bool hasRoared;
    static Wraith * * theCursedWraith;

    // Wrappers
    Wraith(int xVal, int yVal, int l) {
        ptr::CSTR_Wraith(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline void Die() { ptr::Die(this); }
    inline Wraith * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Wraith * _new2() { return ptr::_new2(); }
    inline void Render() { ptr::Render(this); }
    inline virtual void BecomeCorporeal(bool force) { ptr::BecomeCorporeal(this, force); }
    inline virtual void CheckCorporeality() { ptr::CheckCorporeality(this); }
    inline void Update() { ptr::Update(this); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void AfterHitPlayer(Player * p) { ptr::AfterHitPlayer(this, p); }
    inline bool CanBeDamaged(bool phasing, bool piercing) { return ptr::CanBeDamaged(this, phasing, piercing); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static void (*Die)(Wraith * self);
        static Wraith * (*New)(Wraith * self, int xVal, int yVal, int l);
        static Wraith * (*_new2)();
        static void (*Render)(Wraith * self);
        static void (*BecomeCorporeal)(Wraith * self, bool force);
        static void (*CheckCorporeality)(Wraith * self);
        static void (*Update)(Wraith * self);
        static bool (*Hit)(Wraith * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*AfterHitPlayer)(Wraith * self, Player * p);
        static bool (*CanBeDamaged)(Wraith * self, bool phasing, bool piercing);
        static Point * (*GetMovementDirection)(Wraith * self);
        static void (*_mark)();
        static void (*CSTR_Wraith)(Wraith * self);
    };
};

#ifdef _WIN32
Wraith * * Wraith::theCursedWraith = (Wraith* *) 0x835988;

void (*Wraith::ptr::Die)(Wraith * self) = (void (*)(Wraith * self)) 0x63bd40;
Wraith * (*Wraith::ptr::New)(Wraith * self, int xVal, int yVal, int l) = (Wraith * (*)(Wraith * self, int xVal, int yVal, int l)) 0x63bd60;
Wraith * (*Wraith::ptr::_new2)() = (Wraith * (*)()) 0x0;
void (*Wraith::ptr::Render)(Wraith * self) = (void (*)(Wraith * self)) 0x63c170;
void (*Wraith::ptr::BecomeCorporeal)(Wraith * self, bool force) = (void (*)(Wraith * self, bool force)) 0x63c1b0;
void (*Wraith::ptr::CheckCorporeality)(Wraith * self) = (void (*)(Wraith * self)) 0x63c520;
void (*Wraith::ptr::Update)(Wraith * self) = (void (*)(Wraith * self)) 0x63c8b0;
bool (*Wraith::ptr::Hit)(Wraith * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Wraith * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x63c9d0;
void (*Wraith::ptr::AfterHitPlayer)(Wraith * self, Player * p) = (void (*)(Wraith * self, Player * p)) 0x63ca70;
bool (*Wraith::ptr::CanBeDamaged)(Wraith * self, bool phasing, bool piercing) = (bool (*)(Wraith * self, bool phasing, bool piercing)) 0x63cda0;
Point * (*Wraith::ptr::GetMovementDirection)(Wraith * self) = (Point * (*)(Wraith * self)) 0x63cdb0;
void (*Wraith::ptr::_mark)() = (void (*)()) 0x0;
void (*Wraith::ptr::CSTR_Wraith)(Wraith * self) = (void (*)(Wraith * self)) 0x63bc70;
#endif

#ifdef __linux__
Wraith * * Wraith::theCursedWraith = (Wraith* *) 0x856a35c;

void (*Wraith::ptr::Die)(Wraith * self) = (void (*)(Wraith * self)) 0x83b63e0;
Wraith * (*Wraith::ptr::New)(Wraith * self, int xVal, int yVal, int l) = (Wraith * (*)(Wraith * self, int xVal, int yVal, int l)) 0x81c0880;
Wraith * (*Wraith::ptr::_new2)() = (Wraith * (*)()) 0x81c0bf0;
void (*Wraith::ptr::Render)(Wraith * self) = (void (*)(Wraith * self)) 0x830c140;
void (*Wraith::ptr::BecomeCorporeal)(Wraith * self, bool force) = (void (*)(Wraith * self, bool force)) 0x8264f10;
void (*Wraith::ptr::CheckCorporeality)(Wraith * self) = (void (*)(Wraith * self)) 0x8261190;
void (*Wraith::ptr::Update)(Wraith * self) = (void (*)(Wraith * self)) 0x8382d40;
bool (*Wraith::ptr::Hit)(Wraith * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Wraith * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x83994c0;
void (*Wraith::ptr::AfterHitPlayer)(Wraith * self, Player * p) = (void (*)(Wraith * self, Player * p)) 0x8318f40;
bool (*Wraith::ptr::CanBeDamaged)(Wraith * self, bool phasing, bool piercing) = (bool (*)(Wraith * self, bool phasing, bool piercing)) 0x80760a0;
Point * (*Wraith::ptr::GetMovementDirection)(Wraith * self) = (Point * (*)(Wraith * self)) 0x80b4680;
void (*Wraith::ptr::_mark)() = (void (*)()) 0x80b0780;
void (*Wraith::ptr::CSTR_Wraith)(Wraith * self) = (void (*)(Wraith * self)) 0x81c0810;
#endif
#endif
