// Generated automatically. Do not edit!
#ifndef _Nightmare_
#define _Nightmare_
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class Nightmare : public Enemy  {
public:
    float NIGHTMARE_DARKNESS_RADIUS;
    int seekDistance;
    bool failedLastMove;
    static Nightmare * * nightmare;

    // Wrappers
    Nightmare(int xVal, int yVal, int l) {
        ptr::CSTR_Nightmare(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Nightmare * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Nightmare * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline bool IsVisible() { return ptr::IsVisible(this); }
    inline void Die() { ptr::Die(this); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void MoveFail() { ptr::MoveFail(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Nightmare * (*New)(Nightmare * self, int xVal, int yVal, int l);
        static Nightmare * (*_new2)();
        static void (*Update)(Nightmare * self);
        static bool (*Hit)(Nightmare * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static bool (*IsVisible)(Nightmare * self);
        static void (*Die)(Nightmare * self);
        static Point * (*GetMovementDirection)(Nightmare * self);
        static void (*MoveFail)(Nightmare * self);
        static void (*MoveSucceed)(Nightmare * self, bool hitPlayer, bool moveDelayed);
        static void (*_mark)();
        static void (*CSTR_Nightmare)(Nightmare * self);
    };
};

#ifdef _WIN32
inline Nightmare * * Nightmare::nightmare = (Nightmare* *) 0x8358c4;

inline Nightmare * (*Nightmare::ptr::New)(Nightmare * self, int xVal, int yVal, int l) = (Nightmare * (*)(Nightmare * self, int xVal, int yVal, int l)) 0x61af90;
inline Nightmare * (*Nightmare::ptr::_new2)() = (Nightmare * (*)()) 0x0;
inline void (*Nightmare::ptr::Update)(Nightmare * self) = (void (*)(Nightmare * self)) 0x61b330;
inline bool (*Nightmare::ptr::Hit)(Nightmare * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Nightmare * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x61b3b0;
inline bool (*Nightmare::ptr::IsVisible)(Nightmare * self) = (bool (*)(Nightmare * self)) 0x61b450;
inline void (*Nightmare::ptr::Die)(Nightmare * self) = (void (*)(Nightmare * self)) 0x61b4f0;
inline Point * (*Nightmare::ptr::GetMovementDirection)(Nightmare * self) = (Point * (*)(Nightmare * self)) 0x61b500;
inline void (*Nightmare::ptr::MoveFail)(Nightmare * self) = (void (*)(Nightmare * self)) 0x61b530;
inline void (*Nightmare::ptr::MoveSucceed)(Nightmare * self, bool hitPlayer, bool moveDelayed) = (void (*)(Nightmare * self, bool hitPlayer, bool moveDelayed)) 0x61b980;
inline void (*Nightmare::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Nightmare::ptr::CSTR_Nightmare)(Nightmare * self) = (void (*)(Nightmare * self)) 0x61af20;
#endif

#ifdef __linux__
inline Nightmare * * Nightmare::nightmare = (Nightmare* *) 0x856a3bc;

inline Nightmare * (*Nightmare::ptr::New)(Nightmare * self, int xVal, int yVal, int l) = (Nightmare * (*)(Nightmare * self, int xVal, int yVal, int l)) 0x81b6d00;
inline Nightmare * (*Nightmare::ptr::_new2)() = (Nightmare * (*)()) 0x81b6f80;
inline void (*Nightmare::ptr::Update)(Nightmare * self) = (void (*)(Nightmare * self)) 0x8384a00;
inline bool (*Nightmare::ptr::Hit)(Nightmare * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Nightmare * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x839afb0;
inline bool (*Nightmare::ptr::IsVisible)(Nightmare * self) = (bool (*)(Nightmare * self)) 0x812de20;
inline void (*Nightmare::ptr::Die)(Nightmare * self) = (void (*)(Nightmare * self)) 0x83b6870;
inline Point * (*Nightmare::ptr::GetMovementDirection)(Nightmare * self) = (Point * (*)(Nightmare * self)) 0x807f520;
inline void (*Nightmare::ptr::MoveFail)(Nightmare * self) = (void (*)(Nightmare * self)) 0x83ba770;
inline void (*Nightmare::ptr::MoveSucceed)(Nightmare * self, bool hitPlayer, bool moveDelayed) = (void (*)(Nightmare * self, bool hitPlayer, bool moveDelayed)) 0x83a2e80;
inline void (*Nightmare::ptr::_mark)() = (void (*)()) 0x80b0ba0;
inline void (*Nightmare::ptr::CSTR_Nightmare)(Nightmare * self) = (void (*)(Nightmare * self)) 0x81b6cc0;
#endif
#endif
