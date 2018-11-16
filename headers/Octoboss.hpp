// Generated automatically. Do not edit!
#ifndef _Octoboss_
#define _Octoboss_
class Entity;
class List26;
class Point;
class String;
class Tentacle;
#include "Enemy.hpp"

class Octoboss : public Enemy  {
public:
    int initXOff;
    Tentacle * tentacle3;
    Tentacle * tentacle7;
    Tentacle * tentacle5;
    Tentacle * tentacle1;
    Tentacle * tentacle2;
    Tentacle * tentacle6;
    Tentacle * tentacle8;
    Tentacle * tentacle4;
    List26 * phaseOrder;
    int phase;
    int showHeartsDelay;
    int phaseChangeBeat;
    int vibrateCounter;
    float vibrateOffset;
    int runNum;

    // Wrappers
    Octoboss(int xVal, int yVal, int l) {
        ptr::CSTR_Octoboss(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Octoboss * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Octoboss * _new2() { return ptr::_new2(); }
    inline virtual void DoAttackSplash() { ptr::DoAttackSplash(this); }
    inline void MoveFail() { ptr::MoveFail(this); }
    inline virtual void BeginFinalPhase(bool overrideSound) { ptr::BeginFinalPhase(this, overrideSound); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void Die() { ptr::Die(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static Octoboss * (*New)(Octoboss * self, int xVal, int yVal, int l);
        static Octoboss * (*_new2)();
        static void (*DoAttackSplash)(Octoboss * self);
        static void (*MoveFail)(Octoboss * self);
        static void (*BeginFinalPhase)(Octoboss * self, bool overrideSound);
        static void (*Update)(Octoboss * self);
        static void (*Render)(Octoboss * self);
        static void (*MoveSucceed)(Octoboss * self, bool hitPlayer, bool moveDelayed);
        static Point * (*GetMovementDirection)(Octoboss * self);
        static bool (*Hit)(Octoboss * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*Die)(Octoboss * self);
        static void (*mark)(Octoboss * self);
        static void (*CSTR_Octoboss)(Octoboss * self);
    };
};

#ifdef _WIN32

inline Octoboss * (*Octoboss::ptr::New)(Octoboss * self, int xVal, int yVal, int l) = (Octoboss * (*)(Octoboss * self, int xVal, int yVal, int l)) 0x6337d0;
inline Octoboss * (*Octoboss::ptr::_new2)() = (Octoboss * (*)()) 0x0;
inline void (*Octoboss::ptr::DoAttackSplash)(Octoboss * self) = (void (*)(Octoboss * self)) 0x634610;
inline void (*Octoboss::ptr::MoveFail)(Octoboss * self) = (void (*)(Octoboss * self)) 0x634b80;
inline void (*Octoboss::ptr::BeginFinalPhase)(Octoboss * self, bool overrideSound) = (void (*)(Octoboss * self, bool overrideSound)) 0x634ba0;
inline void (*Octoboss::ptr::Update)(Octoboss * self) = (void (*)(Octoboss * self)) 0x634cd0;
inline void (*Octoboss::ptr::Render)(Octoboss * self) = (void (*)(Octoboss * self)) 0x635490;
inline void (*Octoboss::ptr::MoveSucceed)(Octoboss * self, bool hitPlayer, bool moveDelayed) = (void (*)(Octoboss * self, bool hitPlayer, bool moveDelayed)) 0x6357f0;
inline Point * (*Octoboss::ptr::GetMovementDirection)(Octoboss * self) = (Point * (*)(Octoboss * self)) 0x635820;
inline bool (*Octoboss::ptr::Hit)(Octoboss * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Octoboss * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x635a20;
inline void (*Octoboss::ptr::Die)(Octoboss * self) = (void (*)(Octoboss * self)) 0x635bc0;
inline void (*Octoboss::ptr::mark)(Octoboss * self) = (void (*)(Octoboss * self)) 0x635be0;
inline void (*Octoboss::ptr::CSTR_Octoboss)(Octoboss * self) = (void (*)(Octoboss * self)) 0x6336b0;
#endif

#ifdef __linux__

inline Octoboss * (*Octoboss::ptr::New)(Octoboss * self, int xVal, int yVal, int l) = (Octoboss * (*)(Octoboss * self, int xVal, int yVal, int l)) 0x81d8c60;
inline Octoboss * (*Octoboss::ptr::_new2)() = (Octoboss * (*)()) 0x81bcf90;
inline void (*Octoboss::ptr::DoAttackSplash)(Octoboss * self) = (void (*)(Octoboss * self)) 0x83a3560;
inline void (*Octoboss::ptr::MoveFail)(Octoboss * self) = (void (*)(Octoboss * self)) 0x81359d0;
inline void (*Octoboss::ptr::BeginFinalPhase)(Octoboss * self, bool overrideSound) = (void (*)(Octoboss * self, bool overrideSound)) 0x83a3a80;
inline void (*Octoboss::ptr::Update)(Octoboss * self) = (void (*)(Octoboss * self)) 0x8383580;
inline void (*Octoboss::ptr::Render)(Octoboss * self) = (void (*)(Octoboss * self)) 0x830c480;
inline void (*Octoboss::ptr::MoveSucceed)(Octoboss * self, bool hitPlayer, bool moveDelayed) = (void (*)(Octoboss * self, bool hitPlayer, bool moveDelayed)) 0x8075ca0;
inline Point * (*Octoboss::ptr::GetMovementDirection)(Octoboss * self) = (Point * (*)(Octoboss * self)) 0x826a220;
inline bool (*Octoboss::ptr::Hit)(Octoboss * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Octoboss * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x83b89e0;
inline void (*Octoboss::ptr::Die)(Octoboss * self) = (void (*)(Octoboss * self)) 0x83b6580;
inline void (*Octoboss::ptr::mark)(Octoboss * self) = (void (*)(Octoboss * self)) 0x80b0840;
inline void (*Octoboss::ptr::CSTR_Octoboss)(Octoboss * self) = (void (*)(Octoboss * self)) 0x81bce60;
#endif
#endif
