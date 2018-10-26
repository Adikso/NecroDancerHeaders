// Generated automatically. Do not edit!
#ifndef _LuteDragon_
#define _LuteDragon_
template<class T> class Array;
class Entity;
class FireTrap;
class LuteHead;
class Point;
class Sprite;
class String;
#include "Enemy.hpp"

class LuteDragon : public Enemy  {
public:
    LuteHead * head;
    int startX;
    int startY;
    int initialXOff;
    Sprite * normalImg;
    Sprite * magicImg;
    Array<Sprite *> * neckSegments;
    Array<Sprite *> * neckOutlines;
    Array<FireTrap *> * fireTrapsLeft;
    Array<FireTrap *> * fireTrapsRight;
    bool retreating;
    bool hasRoared;
    bool justMoved;
    int vibrateCounter;
    float vibrateOffset;
    int fireSpellUntil;
    int fireTrapIndex;

    // Wrappers
    LuteDragon(int xVal, int yVal, int l) {
        ptr::CSTR_LuteDragon(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline LuteDragon * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline LuteDragon * _new2() { return ptr::_new2(); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline virtual bool IsDoingFireSpell() { return ptr::IsDoingFireSpell(this); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline int PerformMovement(int xVal, int yVal) { return ptr::PerformMovement(this, xVal, yVal); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline bool _ImmuneToFear() { return ptr::_ImmuneToFear(); }
    inline void PerformTween(int xVal, int yVal, int oldX, int oldY, int tweenType, int shadowTweenType, bool bufferTween) { ptr::PerformTween(this, xVal, yVal, oldX, oldY, tweenType, shadowTweenType, bufferTween); }
    inline void _Knockback(int arg1) { ptr::_Knockback(this, arg1); }
    inline virtual void DoFireSpell() { ptr::DoFireSpell(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static LuteDragon * (*New)(LuteDragon * self, int xVal, int yVal, int l);
        static LuteDragon * (*_new2)();
        static Point * (*GetMovementDirection)(LuteDragon * self);
        static bool (*IsDoingFireSpell)(LuteDragon * self);
        static void (*Update)(LuteDragon * self);
        static void (*Render)(LuteDragon * self);
        static bool (*Hit)(LuteDragon * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static int (*PerformMovement)(LuteDragon * self, int xVal, int yVal);
        static void (*MoveSucceed)(LuteDragon * self, bool hitPlayer, bool moveDelayed);
        static bool (*_ImmuneToFear)();
        static void (*PerformTween)(LuteDragon * self, int xVal, int yVal, int oldX, int oldY, int tweenType, int shadowTweenType, bool bufferTween);
        static void (*_Knockback)(LuteDragon * self, int arg1);
        static void (*DoFireSpell)(LuteDragon * self);
        static void (*mark)(LuteDragon * self);
        static void (*CSTR_LuteDragon)(LuteDragon * self);
    };
};

#ifdef _WIN32

LuteDragon * (*LuteDragon::ptr::New)(LuteDragon * self, int xVal, int yVal, int l) = (LuteDragon * (*)(LuteDragon * self, int xVal, int yVal, int l)) 0x611a20;
LuteDragon * (*LuteDragon::ptr::_new2)() = (LuteDragon * (*)()) 0x0;
Point * (*LuteDragon::ptr::GetMovementDirection)(LuteDragon * self) = (Point * (*)(LuteDragon * self)) 0x612250;
bool (*LuteDragon::ptr::IsDoingFireSpell)(LuteDragon * self) = (bool (*)(LuteDragon * self)) 0x612530;
void (*LuteDragon::ptr::Update)(LuteDragon * self) = (void (*)(LuteDragon * self)) 0x612730;
void (*LuteDragon::ptr::Render)(LuteDragon * self) = (void (*)(LuteDragon * self)) 0x612900;
bool (*LuteDragon::ptr::Hit)(LuteDragon * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(LuteDragon * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x612ad0;
int (*LuteDragon::ptr::PerformMovement)(LuteDragon * self, int xVal, int yVal) = (int (*)(LuteDragon * self, int xVal, int yVal)) 0x612bb0;
void (*LuteDragon::ptr::MoveSucceed)(LuteDragon * self, bool hitPlayer, bool moveDelayed) = (void (*)(LuteDragon * self, bool hitPlayer, bool moveDelayed)) 0x612e90;
bool (*LuteDragon::ptr::_ImmuneToFear)() = (bool (*)()) 0x0;
void (*LuteDragon::ptr::PerformTween)(LuteDragon * self, int xVal, int yVal, int oldX, int oldY, int tweenType, int shadowTweenType, bool bufferTween) = (void (*)(LuteDragon * self, int xVal, int yVal, int oldX, int oldY, int tweenType, int shadowTweenType, bool bufferTween)) 0x6130f0;
void (*LuteDragon::ptr::_Knockback)(LuteDragon * self, int arg1) = (void (*)(LuteDragon * self, int arg1)) 0x0;
void (*LuteDragon::ptr::DoFireSpell)(LuteDragon * self) = (void (*)(LuteDragon * self)) 0x6131c0;
void (*LuteDragon::ptr::mark)(LuteDragon * self) = (void (*)(LuteDragon * self)) 0x613420;
void (*LuteDragon::ptr::CSTR_LuteDragon)(LuteDragon * self) = (void (*)(LuteDragon * self)) 0x611830;
#endif

#ifdef __linux__

LuteDragon * (*LuteDragon::ptr::New)(LuteDragon * self, int xVal, int yVal, int l) = (LuteDragon * (*)(LuteDragon * self, int xVal, int yVal, int l)) 0x81b4900;
LuteDragon * (*LuteDragon::ptr::_new2)() = (LuteDragon * (*)()) 0x81b46b0;
Point * (*LuteDragon::ptr::GetMovementDirection)(LuteDragon * self) = (Point * (*)(LuteDragon * self)) 0x8104060;
bool (*LuteDragon::ptr::IsDoingFireSpell)(LuteDragon * self) = (bool (*)(LuteDragon * self)) 0x825e8e0;
void (*LuteDragon::ptr::Update)(LuteDragon * self) = (void (*)(LuteDragon * self)) 0x8385470;
void (*LuteDragon::ptr::Render)(LuteDragon * self) = (void (*)(LuteDragon * self)) 0x830cbb0;
bool (*LuteDragon::ptr::Hit)(LuteDragon * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(LuteDragon * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x83a1e50;
int (*LuteDragon::ptr::PerformMovement)(LuteDragon * self, int xVal, int yVal) = (int (*)(LuteDragon * self, int xVal, int yVal)) 0x8102c80;
void (*LuteDragon::ptr::MoveSucceed)(LuteDragon * self, bool hitPlayer, bool moveDelayed) = (void (*)(LuteDragon * self, bool hitPlayer, bool moveDelayed)) 0x83a1ee0;
bool (*LuteDragon::ptr::_ImmuneToFear)() = (bool (*)()) 0x8074980;
void (*LuteDragon::ptr::PerformTween)(LuteDragon * self, int xVal, int yVal, int oldX, int oldY, int tweenType, int shadowTweenType, bool bufferTween) = (void (*)(LuteDragon * self, int xVal, int yVal, int oldX, int oldY, int tweenType, int shadowTweenType, bool bufferTween)) 0x8074990;
void (*LuteDragon::ptr::_Knockback)(LuteDragon * self, int arg1) = (void (*)(LuteDragon * self, int arg1)) 0x8074c20;
void (*LuteDragon::ptr::DoFireSpell)(LuteDragon * self) = (void (*)(LuteDragon * self)) 0x825e5b0;
void (*LuteDragon::ptr::mark)(LuteDragon * self) = (void (*)(LuteDragon * self)) 0x80b1fe0;
void (*LuteDragon::ptr::CSTR_LuteDragon)(LuteDragon * self) = (void (*)(LuteDragon * self)) 0x81b4120;
#endif
#endif
