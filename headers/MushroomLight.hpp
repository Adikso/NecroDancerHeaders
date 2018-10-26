// Generated automatically. Do not edit!
#ifndef _MushroomLight_
#define _MushroomLight_
class Entity;
class Point;
class Sprite;
class String;
#include "Enemy.hpp"

class MushroomLight : public Enemy  {
public:
    bool isExploding;
    Sprite * explosionImg;
    bool exploded;
    int beatsUntilExplosion;
    int vibrateCounter;
    float vibrateOffset;
    int explosionFrameCounter;
    int explosionFrame;

    // Wrappers
    MushroomLight(int xVal, int yVal, int l, bool forceNonExploding, bool forceExploding) {
        ptr::CSTR_MushroomLight(this);
        ptr::New(this, xVal, yVal, l, forceNonExploding, forceExploding);
    }

    inline virtual void InitMushroom(int xVal, int yVal, int l, bool forceNonExploding, bool forceExploding) { ptr::InitMushroom(this, xVal, yVal, l, forceNonExploding, forceExploding); }
    inline MushroomLight * New(int xVal, int yVal, int l, bool forceNonExploding, bool forceExploding) { return ptr::New(this, xVal, yVal, l, forceNonExploding, forceExploding); }
    inline MushroomLight * new2(int xVal, int yVal, int l, bool forceNonExploding) { return ptr::new2(this, xVal, yVal, l, forceNonExploding); }
    inline MushroomLight * new3(int xVal, int yVal, int l) { return ptr::new3(this, xVal, yVal, l); }
    inline MushroomLight * _new4() { return ptr::_new4(); }
    inline Point * _GetMovementDirection() { return ptr::_GetMovementDirection(); }
    inline virtual void Explode() { ptr::Explode(this); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline bool CanBeDamaged(bool phasing, bool piercing) { return ptr::CanBeDamaged(this, phasing, piercing); }
    inline int _PerformMovement(int arg1, int arg2) { return ptr::_PerformMovement(this, arg1, arg2); }
    inline void MoveFail() { ptr::MoveFail(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static void (*InitMushroom)(MushroomLight * self, int xVal, int yVal, int l, bool forceNonExploding, bool forceExploding);
        static MushroomLight * (*New)(MushroomLight * self, int xVal, int yVal, int l, bool forceNonExploding, bool forceExploding);
        static MushroomLight * (*new2)(MushroomLight * self, int xVal, int yVal, int l, bool forceNonExploding);
        static MushroomLight * (*new3)(MushroomLight * self, int xVal, int yVal, int l);
        static MushroomLight * (*_new4)();
        static Point * (*_GetMovementDirection)();
        static void (*Explode)(MushroomLight * self);
        static bool (*Hit)(MushroomLight * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*Update)(MushroomLight * self);
        static void (*Render)(MushroomLight * self);
        static bool (*CanBeDamaged)(MushroomLight * self, bool phasing, bool piercing);
        static int (*_PerformMovement)(MushroomLight * self, int arg1, int arg2);
        static void (*MoveFail)(MushroomLight * self);
        static void (*_mark)();
        static void (*CSTR_MushroomLight)(MushroomLight * self);
    };
};

#ifdef _WIN32

void (*MushroomLight::ptr::InitMushroom)(MushroomLight * self, int xVal, int yVal, int l, bool forceNonExploding, bool forceExploding) = (void (*)(MushroomLight * self, int xVal, int yVal, int l, bool forceNonExploding, bool forceExploding)) 0x643150;
MushroomLight * (*MushroomLight::ptr::New)(MushroomLight * self, int xVal, int yVal, int l, bool forceNonExploding, bool forceExploding) = (MushroomLight * (*)(MushroomLight * self, int xVal, int yVal, int l, bool forceNonExploding, bool forceExploding)) 0x6436f0;
MushroomLight * (*MushroomLight::ptr::new2)(MushroomLight * self, int xVal, int yVal, int l, bool forceNonExploding) = (MushroomLight * (*)(MushroomLight * self, int xVal, int yVal, int l, bool forceNonExploding)) 0x643720;
MushroomLight * (*MushroomLight::ptr::new3)(MushroomLight * self, int xVal, int yVal, int l) = (MushroomLight * (*)(MushroomLight * self, int xVal, int yVal, int l)) 0x643750;
MushroomLight * (*MushroomLight::ptr::_new4)() = (MushroomLight * (*)()) 0x0;
Point * (*MushroomLight::ptr::_GetMovementDirection)() = (Point * (*)()) 0x0;
void (*MushroomLight::ptr::Explode)(MushroomLight * self) = (void (*)(MushroomLight * self)) 0x643780;
bool (*MushroomLight::ptr::Hit)(MushroomLight * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(MushroomLight * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x643890;
void (*MushroomLight::ptr::Update)(MushroomLight * self) = (void (*)(MushroomLight * self)) 0x6439c0;
void (*MushroomLight::ptr::Render)(MushroomLight * self) = (void (*)(MushroomLight * self)) 0x643a70;
bool (*MushroomLight::ptr::CanBeDamaged)(MushroomLight * self, bool phasing, bool piercing) = (bool (*)(MushroomLight * self, bool phasing, bool piercing)) 0x643b10;
int (*MushroomLight::ptr::_PerformMovement)(MushroomLight * self, int arg1, int arg2) = (int (*)(MushroomLight * self, int arg1, int arg2)) 0x0;
void (*MushroomLight::ptr::MoveFail)(MushroomLight * self) = (void (*)(MushroomLight * self)) 0x643b20;
void (*MushroomLight::ptr::_mark)() = (void (*)()) 0x0;
void (*MushroomLight::ptr::CSTR_MushroomLight)(MushroomLight * self) = (void (*)(MushroomLight * self)) 0x6430b0;
#endif

#ifdef __linux__

void (*MushroomLight::ptr::InitMushroom)(MushroomLight * self, int xVal, int yVal, int l, bool forceNonExploding, bool forceExploding) = (void (*)(MushroomLight * self, int xVal, int yVal, int l, bool forceNonExploding, bool forceExploding)) 0x811d2f0;
MushroomLight * (*MushroomLight::ptr::New)(MushroomLight * self, int xVal, int yVal, int l, bool forceNonExploding, bool forceExploding) = (MushroomLight * (*)(MushroomLight * self, int xVal, int yVal, int l, bool forceNonExploding, bool forceExploding)) 0x81c2fe0;
MushroomLight * (*MushroomLight::ptr::new2)(MushroomLight * self, int xVal, int yVal, int l, bool forceNonExploding) = (MushroomLight * (*)(MushroomLight * self, int xVal, int yVal, int l, bool forceNonExploding)) 0x81c3050;
MushroomLight * (*MushroomLight::ptr::new3)(MushroomLight * self, int xVal, int yVal, int l) = (MushroomLight * (*)(MushroomLight * self, int xVal, int yVal, int l)) 0x81c30b0;
MushroomLight * (*MushroomLight::ptr::_new4)() = (MushroomLight * (*)()) 0x81c3100;
Point * (*MushroomLight::ptr::_GetMovementDirection)() = (Point * (*)()) 0x80b45c0;
void (*MushroomLight::ptr::Explode)(MushroomLight * self) = (void (*)(MushroomLight * self)) 0x83d10e0;
bool (*MushroomLight::ptr::Hit)(MushroomLight * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(MushroomLight * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x8398c90;
void (*MushroomLight::ptr::Update)(MushroomLight * self) = (void (*)(MushroomLight * self)) 0x8382090;
void (*MushroomLight::ptr::Render)(MushroomLight * self) = (void (*)(MushroomLight * self)) 0x830be70;
bool (*MushroomLight::ptr::CanBeDamaged)(MushroomLight * self, bool phasing, bool piercing) = (bool (*)(MushroomLight * self, bool phasing, bool piercing)) 0x8076220;
int (*MushroomLight::ptr::_PerformMovement)(MushroomLight * self, int arg1, int arg2) = (int (*)(MushroomLight * self, int arg1, int arg2)) 0x8076230;
void (*MushroomLight::ptr::MoveFail)(MushroomLight * self) = (void (*)(MushroomLight * self)) 0x8076240;
void (*MushroomLight::ptr::_mark)() = (void (*)()) 0x80b13f0;
void (*MushroomLight::ptr::CSTR_MushroomLight)(MushroomLight * self) = (void (*)(MushroomLight * self)) 0x81c2f70;
#endif
#endif
