// Generated automatically. Do not edit!
#ifndef _Frankensteinway_
#define _Frankensteinway_
class Entity;
class FloorPulse;
class FrankensteinwayProp;
class IntMap11;
class List37;
class Point;
class Sprite;
class Stack10;
class Stack3;
class String;
#include "Enemy.hpp"

class Frankensteinway : public Enemy  {
public:
    Sprite * shieldImage;
    Stack10 * props;
    bool didCry;
    FrankensteinwayProp * activeProp;
    int moveDir;
    int dashDir;
    int phase;
    int shieldFrameCounter;
    Stack3 * currentPattern;
    int currentPatternIndex;
    IntMap11 * pulses;
    List37 * cascade;
    int lastHitBeat;

    // Wrappers
    Frankensteinway(int xVal, int yVal) {
        ptr::CSTR_Frankensteinway(this);
        ptr::New(this, xVal, yVal);
    }

    inline Frankensteinway * New(int xVal, int yVal) { return ptr::New(this, xVal, yVal); }
    inline Frankensteinway * _new2() { return ptr::_new2(); }
    inline virtual void SpawnSarcophagus(int atX, int atY) { ptr::SpawnSarcophagus(this, atX, atY); }
    inline virtual void SpawnSarcophagi() { ptr::SpawnSarcophagi(this); }
    inline virtual void AddProp(int propX, int propY, int switchDY) { ptr::AddProp(this, propX, propY, switchDY); }
    inline virtual bool IsShielded() { return ptr::IsShielded(this); }
    inline virtual int GetPatternTimer() { return ptr::GetPatternTimer(this); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline virtual void RerollMoveDir() { ptr::RerollMoveDir(this); }
    inline virtual void RerollPattern() { ptr::RerollPattern(this); }
    inline virtual void PickDashDir() { ptr::PickDashDir(this); }
    inline virtual FloorPulse * GetPulseAt(int pulseX, int pulseY) { return ptr::GetPulseAt(this, pulseX, pulseY); }
    inline virtual void ClearAllPulses() { ptr::ClearAllPulses(this); }
    inline virtual void MovementPreview(int dir, int maxDist) { ptr::MovementPreview(this, dir, maxDist); }
    inline virtual void ShowMovementPreviews() { ptr::ShowMovementPreviews(this); }
    inline virtual void HurtPlayerAt(int atX, int atY, int damage, bool hitFloating) { ptr::HurtPlayerAt(this, atX, atY, damage, hitFloating); }
    inline virtual void Phase0Pulse() { ptr::Phase0Pulse(this); }
    inline virtual void Phase1Pulse() { ptr::Phase1Pulse(this); }
    inline virtual void AfterMove() { ptr::AfterMove(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void MoveFail() { ptr::MoveFail(this); }
    inline virtual void SpawnEnemy(int enemyType, int enemyX, int enemyY) { ptr::SpawnEnemy(this, enemyType, enemyX, enemyY); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline int GetDisplayHealthMax() { return ptr::GetDisplayHealthMax(this); }
    inline int GetDisplayHealth() { return ptr::GetDisplayHealth(this); }
    inline int PerformMovement(int xVal, int yVal) { return ptr::PerformMovement(this, xVal, yVal); }
    inline void Die() { ptr::Die(this); }
    inline bool _ImmuneToFear() { return ptr::_ImmuneToFear(); }
    inline void _Knockback(int arg1) { ptr::_Knockback(this, arg1); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static Frankensteinway * (*New)(Frankensteinway * self, int xVal, int yVal);
        static Frankensteinway * (*_new2)();
        static void (*SpawnSarcophagus)(Frankensteinway * self, int atX, int atY);
        static void (*SpawnSarcophagi)(Frankensteinway * self);
        static void (*AddProp)(Frankensteinway * self, int propX, int propY, int switchDY);
        static bool (*IsShielded)(Frankensteinway * self);
        static int (*GetPatternTimer)(Frankensteinway * self);
        static void (*Update)(Frankensteinway * self);
        static void (*Render)(Frankensteinway * self);
        static Point * (*GetMovementDirection)(Frankensteinway * self);
        static void (*RerollMoveDir)(Frankensteinway * self);
        static void (*RerollPattern)(Frankensteinway * self);
        static void (*PickDashDir)(Frankensteinway * self);
        static FloorPulse * (*GetPulseAt)(Frankensteinway * self, int pulseX, int pulseY);
        static void (*ClearAllPulses)(Frankensteinway * self);
        static void (*MovementPreview)(Frankensteinway * self, int dir, int maxDist);
        static void (*ShowMovementPreviews)(Frankensteinway * self);
        static void (*HurtPlayerAt)(Frankensteinway * self, int atX, int atY, int damage, bool hitFloating);
        static void (*Phase0Pulse)(Frankensteinway * self);
        static void (*Phase1Pulse)(Frankensteinway * self);
        static void (*AfterMove)(Frankensteinway * self);
        static void (*MoveSucceed)(Frankensteinway * self, bool hitPlayer, bool moveDelayed);
        static void (*MoveFail)(Frankensteinway * self);
        static void (*SpawnEnemy)(Frankensteinway * self, int enemyType, int enemyX, int enemyY);
        static bool (*Hit)(Frankensteinway * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static int (*GetDisplayHealthMax)(Frankensteinway * self);
        static int (*GetDisplayHealth)(Frankensteinway * self);
        static int (*PerformMovement)(Frankensteinway * self, int xVal, int yVal);
        static void (*Die)(Frankensteinway * self);
        static bool (*_ImmuneToFear)();
        static void (*_Knockback)(Frankensteinway * self, int arg1);
        static void (*mark)(Frankensteinway * self);
        static void (*CSTR_Frankensteinway)(Frankensteinway * self);
    };
};

#ifdef _WIN32

inline Frankensteinway * (*Frankensteinway::ptr::New)(Frankensteinway * self, int xVal, int yVal) = (Frankensteinway * (*)(Frankensteinway * self, int xVal, int yVal)) 0x60d970;
inline Frankensteinway * (*Frankensteinway::ptr::_new2)() = (Frankensteinway * (*)()) 0x0;
inline void (*Frankensteinway::ptr::SpawnSarcophagus)(Frankensteinway * self, int atX, int atY) = (void (*)(Frankensteinway * self, int atX, int atY)) 0x60dd40;
inline void (*Frankensteinway::ptr::SpawnSarcophagi)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x60df30;
inline void (*Frankensteinway::ptr::AddProp)(Frankensteinway * self, int propX, int propY, int switchDY) = (void (*)(Frankensteinway * self, int propX, int propY, int switchDY)) 0x60df50;
inline bool (*Frankensteinway::ptr::IsShielded)(Frankensteinway * self) = (bool (*)(Frankensteinway * self)) 0x60e110;
inline int (*Frankensteinway::ptr::GetPatternTimer)(Frankensteinway * self) = (int (*)(Frankensteinway * self)) 0x60e130;
inline void (*Frankensteinway::ptr::Update)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x60e150;
inline void (*Frankensteinway::ptr::Render)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x60e330;
inline Point * (*Frankensteinway::ptr::GetMovementDirection)(Frankensteinway * self) = (Point * (*)(Frankensteinway * self)) 0x60e3e0;
inline void (*Frankensteinway::ptr::RerollMoveDir)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x60e4c0;
inline void (*Frankensteinway::ptr::RerollPattern)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x60e6c0;
inline void (*Frankensteinway::ptr::PickDashDir)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x60f020;
inline FloorPulse * (*Frankensteinway::ptr::GetPulseAt)(Frankensteinway * self, int pulseX, int pulseY) = (FloorPulse * (*)(Frankensteinway * self, int pulseX, int pulseY)) 0x60f0d0;
inline void (*Frankensteinway::ptr::ClearAllPulses)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x60f1d0;
inline void (*Frankensteinway::ptr::MovementPreview)(Frankensteinway * self, int dir, int maxDist) = (void (*)(Frankensteinway * self, int dir, int maxDist)) 0x60f2d0;
inline void (*Frankensteinway::ptr::ShowMovementPreviews)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x60f430;
inline void (*Frankensteinway::ptr::HurtPlayerAt)(Frankensteinway * self, int atX, int atY, int damage, bool hitFloating) = (void (*)(Frankensteinway * self, int atX, int atY, int damage, bool hitFloating)) 0x60f480;
inline void (*Frankensteinway::ptr::Phase0Pulse)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x60f550;
inline void (*Frankensteinway::ptr::Phase1Pulse)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x60f800;
inline void (*Frankensteinway::ptr::AfterMove)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x60fb00;
inline void (*Frankensteinway::ptr::MoveSucceed)(Frankensteinway * self, bool hitPlayer, bool moveDelayed) = (void (*)(Frankensteinway * self, bool hitPlayer, bool moveDelayed)) 0x60fbc0;
inline void (*Frankensteinway::ptr::MoveFail)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x610020;
inline void (*Frankensteinway::ptr::SpawnEnemy)(Frankensteinway * self, int enemyType, int enemyX, int enemyY) = (void (*)(Frankensteinway * self, int enemyType, int enemyX, int enemyY)) 0x610040;
inline bool (*Frankensteinway::ptr::Hit)(Frankensteinway * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Frankensteinway * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x610350;
inline int (*Frankensteinway::ptr::GetDisplayHealthMax)(Frankensteinway * self) = (int (*)(Frankensteinway * self)) 0x6113b0;
inline int (*Frankensteinway::ptr::GetDisplayHealth)(Frankensteinway * self) = (int (*)(Frankensteinway * self)) 0x6113c0;
inline int (*Frankensteinway::ptr::PerformMovement)(Frankensteinway * self, int xVal, int yVal) = (int (*)(Frankensteinway * self, int xVal, int yVal)) 0x6113e0;
inline void (*Frankensteinway::ptr::Die)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x611630;
inline bool (*Frankensteinway::ptr::_ImmuneToFear)() = (bool (*)()) 0x0;
inline void (*Frankensteinway::ptr::_Knockback)(Frankensteinway * self, int arg1) = (void (*)(Frankensteinway * self, int arg1)) 0x0;
inline void (*Frankensteinway::ptr::mark)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x611650;
inline void (*Frankensteinway::ptr::CSTR_Frankensteinway)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x60d790;
#endif

#ifdef __linux__

inline Frankensteinway * (*Frankensteinway::ptr::New)(Frankensteinway * self, int xVal, int yVal) = (Frankensteinway * (*)(Frankensteinway * self, int xVal, int yVal)) 0x81b3e30;
inline Frankensteinway * (*Frankensteinway::ptr::_new2)() = (Frankensteinway * (*)()) 0x81b4100;
inline void (*Frankensteinway::ptr::SpawnSarcophagus)(Frankensteinway * self, int atX, int atY) = (void (*)(Frankensteinway * self, int atX, int atY)) 0x81c6150;
inline void (*Frankensteinway::ptr::SpawnSarcophagi)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x8074770;
inline void (*Frankensteinway::ptr::AddProp)(Frankensteinway * self, int propX, int propY, int switchDY) = (void (*)(Frankensteinway * self, int propX, int propY, int switchDY)) 0x81da580;
inline bool (*Frankensteinway::ptr::IsShielded)(Frankensteinway * self) = (bool (*)(Frankensteinway * self)) 0x80747c0;
inline int (*Frankensteinway::ptr::GetPatternTimer)(Frankensteinway * self) = (int (*)(Frankensteinway * self)) 0x80747e0;
inline void (*Frankensteinway::ptr::Update)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x8385690;
inline void (*Frankensteinway::ptr::Render)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x830d4a0;
inline Point * (*Frankensteinway::ptr::GetMovementDirection)(Frankensteinway * self) = (Point * (*)(Frankensteinway * self)) 0x8102a90;
inline void (*Frankensteinway::ptr::RerollMoveDir)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x8103420;
inline void (*Frankensteinway::ptr::RerollPattern)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x8101270;
inline void (*Frankensteinway::ptr::PickDashDir)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x8104220;
inline FloorPulse * (*Frankensteinway::ptr::GetPulseAt)(Frankensteinway * self, int pulseX, int pulseY) = (FloorPulse * (*)(Frankensteinway * self, int pulseX, int pulseY)) 0x81e4bb0;
inline void (*Frankensteinway::ptr::ClearAllPulses)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x80c30f0;
inline void (*Frankensteinway::ptr::MovementPreview)(Frankensteinway * self, int dir, int maxDist) = (void (*)(Frankensteinway * self, int dir, int maxDist)) 0x812e0e0;
inline void (*Frankensteinway::ptr::ShowMovementPreviews)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x807f3f0;
inline void (*Frankensteinway::ptr::HurtPlayerAt)(Frankensteinway * self, int atX, int atY, int damage, bool hitFloating) = (void (*)(Frankensteinway * self, int atX, int atY, int damage, bool hitFloating)) 0x80ce250;
inline void (*Frankensteinway::ptr::Phase0Pulse)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x8319850;
inline void (*Frankensteinway::ptr::Phase1Pulse)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x8100aa0;
inline void (*Frankensteinway::ptr::AfterMove)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x8074800;
inline void (*Frankensteinway::ptr::MoveSucceed)(Frankensteinway * self, bool hitPlayer, bool moveDelayed) = (void (*)(Frankensteinway * self, bool hitPlayer, bool moveDelayed)) 0x83bacf0;
inline void (*Frankensteinway::ptr::MoveFail)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x8135a20;
inline void (*Frankensteinway::ptr::SpawnEnemy)(Frankensteinway * self, int enemyType, int enemyX, int enemyY) = (void (*)(Frankensteinway * self, int enemyType, int enemyX, int enemyY)) 0x81d07f0;
inline bool (*Frankensteinway::ptr::Hit)(Frankensteinway * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Frankensteinway * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x83d6860;
inline int (*Frankensteinway::ptr::GetDisplayHealthMax)(Frankensteinway * self) = (int (*)(Frankensteinway * self)) 0x8074920;
inline int (*Frankensteinway::ptr::GetDisplayHealth)(Frankensteinway * self) = (int (*)(Frankensteinway * self)) 0x8074930;
inline int (*Frankensteinway::ptr::PerformMovement)(Frankensteinway * self, int xVal, int yVal) = (int (*)(Frankensteinway * self, int xVal, int yVal)) 0x816e540;
inline void (*Frankensteinway::ptr::Die)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x83b6ae0;
inline bool (*Frankensteinway::ptr::_ImmuneToFear)() = (bool (*)()) 0x8074960;
inline void (*Frankensteinway::ptr::_Knockback)(Frankensteinway * self, int arg1) = (void (*)(Frankensteinway * self, int arg1)) 0x8074970;
inline void (*Frankensteinway::ptr::mark)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x80b1760;
inline void (*Frankensteinway::ptr::CSTR_Frankensteinway)(Frankensteinway * self) = (void (*)(Frankensteinway * self)) 0x81b3b10;
#endif
#endif
