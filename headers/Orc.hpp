// Generated automatically. Do not edit!
#ifndef _Orc_
#define _Orc_
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class Orc : public Enemy  {
public:
    int facing;
    int nextFacing;

    // Wrappers
    Orc(int x_, int y_, int l) {
        ptr::CSTR_Orc(this);
        ptr::New(this, x_, y_, l);
    }

    inline Orc * New(int x_, int y_, int l) { return ptr::New(this, x_, y_, l); }
    inline Orc * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Orc * (*New)(Orc * self, int x_, int y_, int l);
        static Orc * (*_new2)();
        static void (*Update)(Orc * self);
        static Point * (*GetMovementDirection)(Orc * self);
        static void (*MoveSucceed)(Orc * self, bool hitPlayer, bool moveDelayed);
        static bool (*Hit)(Orc * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*_mark)();
        static void (*CSTR_Orc)(Orc * self);
    };
};

#ifdef _WIN32

inline Orc * (*Orc::ptr::New)(Orc * self, int x_, int y_, int l) = (Orc * (*)(Orc * self, int x_, int y_, int l)) 0x65a000;
inline Orc * (*Orc::ptr::_new2)() = (Orc * (*)()) 0x0;
inline void (*Orc::ptr::Update)(Orc * self) = (void (*)(Orc * self)) 0x65a310;
inline Point * (*Orc::ptr::GetMovementDirection)(Orc * self) = (Point * (*)(Orc * self)) 0x65a370;
inline void (*Orc::ptr::MoveSucceed)(Orc * self, bool hitPlayer, bool moveDelayed) = (void (*)(Orc * self, bool hitPlayer, bool moveDelayed)) 0x65a440;
inline bool (*Orc::ptr::Hit)(Orc * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Orc * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x65a490;
inline void (*Orc::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Orc::ptr::CSTR_Orc)(Orc * self) = (void (*)(Orc * self)) 0x659f90;
#endif

#ifdef __linux__

inline Orc * (*Orc::ptr::New)(Orc * self, int x_, int y_, int l) = (Orc * (*)(Orc * self, int x_, int y_, int l)) 0x81ca330;
inline Orc * (*Orc::ptr::_new2)() = (Orc * (*)()) 0x81cae00;
inline void (*Orc::ptr::Update)(Orc * self) = (void (*)(Orc * self)) 0x837ee50;
inline Point * (*Orc::ptr::GetMovementDirection)(Orc * self) = (Point * (*)(Orc * self)) 0x80b4290;
inline void (*Orc::ptr::MoveSucceed)(Orc * self, bool hitPlayer, bool moveDelayed) = (void (*)(Orc * self, bool hitPlayer, bool moveDelayed)) 0x80766a0;
inline bool (*Orc::ptr::Hit)(Orc * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Orc * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x8396a70;
inline void (*Orc::ptr::_mark)() = (void (*)()) 0x80b01d0;
inline void (*Orc::ptr::CSTR_Orc)(Orc * self) = (void (*)(Orc * self)) 0x81ca300;
#endif
#endif
