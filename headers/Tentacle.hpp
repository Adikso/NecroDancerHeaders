// Generated automatically. Do not edit!
#ifndef _Tentacle_
#define _Tentacle_
class Entity;
class Octoboss;
class Point;
class Sprite;
class String;
#include "Enemy.hpp"

class Tentacle : public Enemy  {
public:
    int initX;
    int initY;
    int initialXOff;
    Sprite * image2;
    int nextX;
    int nextY;
    Octoboss * boss;
    int tentacleNum;
    bool activated;
    bool wasDead;
    int additionalXOff;
    int state;
    int showHeartsDelay;
    int vibrateCounter;
    float vibrateOffset;
    Point * nextPlayerOffset;
    int nextState;
    int stateChangeBeat;
    bool didPhase5;
    bool didPhase6;

    // Wrappers
    Tentacle(int xVal, int yVal, int l) {
        ptr::CSTR_Tentacle(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Tentacle * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Tentacle * _new2() { return ptr::_new2(); }
    inline void Render() { ptr::Render(this); }
    inline virtual int GetTentacleLevelNumber() { return ptr::GetTentacleLevelNumber(this); }
    inline void Update() { ptr::Update(this); }
    inline virtual void SubmergeTo(int xVal, int yVal) { ptr::SubmergeTo(this, xVal, yVal); }
    inline virtual void SubmergeTo2(Point * p) { ptr::SubmergeTo2(this, p); }
    inline virtual Point * GetPhase5Offset() { return ptr::GetPhase5Offset(this); }
    inline virtual Point * GetPhase6Offset() { return ptr::GetPhase6Offset(this); }
    inline virtual void GoHome() { ptr::GoHome(this); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void _Knockback(int arg1) { ptr::_Knockback(this, arg1); }
    inline bool CanBeDamaged(bool phasing, bool piercing) { return ptr::CanBeDamaged(this, phasing, piercing); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static Tentacle * (*New)(Tentacle * self, int xVal, int yVal, int l);
        static Tentacle * (*_new2)();
        static void (*Render)(Tentacle * self);
        static int (*GetTentacleLevelNumber)(Tentacle * self);
        static void (*Update)(Tentacle * self);
        static void (*SubmergeTo)(Tentacle * self, int xVal, int yVal);
        static void (*SubmergeTo2)(Tentacle * self, Point * p);
        static Point * (*GetPhase5Offset)(Tentacle * self);
        static Point * (*GetPhase6Offset)(Tentacle * self);
        static void (*GoHome)(Tentacle * self);
        static Point * (*GetMovementDirection)(Tentacle * self);
        static void (*_Knockback)(Tentacle * self, int arg1);
        static bool (*CanBeDamaged)(Tentacle * self, bool phasing, bool piercing);
        static bool (*Hit)(Tentacle * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*MoveSucceed)(Tentacle * self, bool hitPlayer, bool moveDelayed);
        static void (*mark)(Tentacle * self);
        static void (*CSTR_Tentacle)(Tentacle * self);
    };
};

#ifdef _WIN32

inline Tentacle * (*Tentacle::ptr::New)(Tentacle * self, int xVal, int yVal, int l) = (Tentacle * (*)(Tentacle * self, int xVal, int yVal, int l)) 0x6683d0;
inline Tentacle * (*Tentacle::ptr::_new2)() = (Tentacle * (*)()) 0x0;
inline void (*Tentacle::ptr::Render)(Tentacle * self) = (void (*)(Tentacle * self)) 0x6687a0;
inline int (*Tentacle::ptr::GetTentacleLevelNumber)(Tentacle * self) = (int (*)(Tentacle * self)) 0x668860;
inline void (*Tentacle::ptr::Update)(Tentacle * self) = (void (*)(Tentacle * self)) 0x668870;
inline void (*Tentacle::ptr::SubmergeTo)(Tentacle * self, int xVal, int yVal) = (void (*)(Tentacle * self, int xVal, int yVal)) 0x668b60;
inline void (*Tentacle::ptr::SubmergeTo2)(Tentacle * self, Point * p) = (void (*)(Tentacle * self, Point * p)) 0x668f10;
inline Point * (*Tentacle::ptr::GetPhase5Offset)(Tentacle * self) = (Point * (*)(Tentacle * self)) 0x668fa0;
inline Point * (*Tentacle::ptr::GetPhase6Offset)(Tentacle * self) = (Point * (*)(Tentacle * self)) 0x669160;
inline void (*Tentacle::ptr::GoHome)(Tentacle * self) = (void (*)(Tentacle * self)) 0x669310;
inline Point * (*Tentacle::ptr::GetMovementDirection)(Tentacle * self) = (Point * (*)(Tentacle * self)) 0x669810;
inline void (*Tentacle::ptr::_Knockback)(Tentacle * self, int arg1) = (void (*)(Tentacle * self, int arg1)) 0x0;
inline bool (*Tentacle::ptr::CanBeDamaged)(Tentacle * self, bool phasing, bool piercing) = (bool (*)(Tentacle * self, bool phasing, bool piercing)) 0x669e00;
inline bool (*Tentacle::ptr::Hit)(Tentacle * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Tentacle * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x669e10;
inline void (*Tentacle::ptr::MoveSucceed)(Tentacle * self, bool hitPlayer, bool moveDelayed) = (void (*)(Tentacle * self, bool hitPlayer, bool moveDelayed)) 0x669ec0;
inline void (*Tentacle::ptr::mark)(Tentacle * self) = (void (*)(Tentacle * self)) 0x66a520;
inline void (*Tentacle::ptr::CSTR_Tentacle)(Tentacle * self) = (void (*)(Tentacle * self)) 0x668270;
#endif

#ifdef __linux__

inline Tentacle * (*Tentacle::ptr::New)(Tentacle * self, int xVal, int yVal, int l) = (Tentacle * (*)(Tentacle * self, int xVal, int yVal, int l)) 0x81d8980;
inline Tentacle * (*Tentacle::ptr::_new2)() = (Tentacle * (*)()) 0x81d9930;
inline void (*Tentacle::ptr::Render)(Tentacle * self) = (void (*)(Tentacle * self)) 0x830b090;
inline int (*Tentacle::ptr::GetTentacleLevelNumber)(Tentacle * self) = (int (*)(Tentacle * self)) 0x8077a70;
inline void (*Tentacle::ptr::Update)(Tentacle * self) = (void (*)(Tentacle * self)) 0x837e150;
inline void (*Tentacle::ptr::SubmergeTo)(Tentacle * self, int xVal, int yVal) = (void (*)(Tentacle * self, int xVal, int yVal)) 0x83aa400;
inline void (*Tentacle::ptr::SubmergeTo2)(Tentacle * self, Point * p) = (void (*)(Tentacle * self, Point * p)) 0x81045c0;
inline Point * (*Tentacle::ptr::GetPhase5Offset)(Tentacle * self) = (Point * (*)(Tentacle * self)) 0x80b3d80;
inline Point * (*Tentacle::ptr::GetPhase6Offset)(Tentacle * self) = (Point * (*)(Tentacle * self)) 0x80b3cb0;
inline void (*Tentacle::ptr::GoHome)(Tentacle * self) = (void (*)(Tentacle * self)) 0x83aa610;
inline Point * (*Tentacle::ptr::GetMovementDirection)(Tentacle * self) = (Point * (*)(Tentacle * self)) 0x8269d20;
inline void (*Tentacle::ptr::_Knockback)(Tentacle * self, int arg1) = (void (*)(Tentacle * self, int arg1)) 0x8077a90;
inline bool (*Tentacle::ptr::CanBeDamaged)(Tentacle * self, bool phasing, bool piercing) = (bool (*)(Tentacle * self, bool phasing, bool piercing)) 0x8077aa0;
inline bool (*Tentacle::ptr::Hit)(Tentacle * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Tentacle * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x8396640;
inline void (*Tentacle::ptr::MoveSucceed)(Tentacle * self, bool hitPlayer, bool moveDelayed) = (void (*)(Tentacle * self, bool hitPlayer, bool moveDelayed)) 0x83aaaa0;
inline void (*Tentacle::ptr::mark)(Tentacle * self) = (void (*)(Tentacle * self)) 0x80b0f60;
inline void (*Tentacle::ptr::CSTR_Tentacle)(Tentacle * self) = (void (*)(Tentacle * self)) 0x81d8870;
#endif
#endif
