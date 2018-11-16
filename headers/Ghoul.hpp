// Generated automatically. Do not edit!
#ifndef _Ghoul_
#define _Ghoul_
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class Ghoul : public Enemy  {
public:
    bool teleporting;
    int hitDir;
    Entity * hitPlayer;
    bool skippedMove;
    bool hasRoared;
    bool beenHit;
    bool seeking;

    // Wrappers
    Ghoul(int xVal, int yVal, int l) {
        ptr::CSTR_Ghoul(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Ghoul * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Ghoul * _new2() { return ptr::_new2(); }
    inline void _Render() { ptr::_Render(); }
    inline void Update() { ptr::Update(this); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline bool _CanBeDamaged(bool arg1, bool arg2) { return ptr::_CanBeDamaged(this, arg1, arg2); }
    inline virtual void BecomeCorporeal2() { ptr::BecomeCorporeal2(this); }
    inline virtual void CheckCorporeality() { ptr::CheckCorporeality(this); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Ghoul * (*New)(Ghoul * self, int xVal, int yVal, int l);
        static Ghoul * (*_new2)();
        static void (*_Render)();
        static void (*Update)(Ghoul * self);
        static bool (*Hit)(Ghoul * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static bool (*_CanBeDamaged)(Ghoul * self, bool arg1, bool arg2);
        static void (*BecomeCorporeal2)(Ghoul * self);
        static void (*CheckCorporeality)(Ghoul * self);
        static Point * (*GetMovementDirection)(Ghoul * self);
        static void (*_mark)();
        static void (*CSTR_Ghoul)(Ghoul * self);
    };
};

#ifdef _WIN32

inline Ghoul * (*Ghoul::ptr::New)(Ghoul * self, int xVal, int yVal, int l) = (Ghoul * (*)(Ghoul * self, int xVal, int yVal, int l)) 0x6855d0;
inline Ghoul * (*Ghoul::ptr::_new2)() = (Ghoul * (*)()) 0x0;
inline void (*Ghoul::ptr::_Render)() = (void (*)()) 0x0;
inline void (*Ghoul::ptr::Update)(Ghoul * self) = (void (*)(Ghoul * self)) 0x685840;
inline bool (*Ghoul::ptr::Hit)(Ghoul * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Ghoul * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x685c60;
inline bool (*Ghoul::ptr::_CanBeDamaged)(Ghoul * self, bool arg1, bool arg2) = (bool (*)(Ghoul * self, bool arg1, bool arg2)) 0x0;
inline void (*Ghoul::ptr::BecomeCorporeal2)(Ghoul * self) = (void (*)(Ghoul * self)) 0x685da0;
inline void (*Ghoul::ptr::CheckCorporeality)(Ghoul * self) = (void (*)(Ghoul * self)) 0x686240;
inline Point * (*Ghoul::ptr::GetMovementDirection)(Ghoul * self) = (Point * (*)(Ghoul * self)) 0x6865d0;
inline void (*Ghoul::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Ghoul::ptr::CSTR_Ghoul)(Ghoul * self) = (void (*)(Ghoul * self)) 0x685550;
#endif

#ifdef __linux__

inline Ghoul * (*Ghoul::ptr::New)(Ghoul * self, int xVal, int yVal, int l) = (Ghoul * (*)(Ghoul * self, int xVal, int yVal, int l)) 0x81e0980;
inline Ghoul * (*Ghoul::ptr::_new2)() = (Ghoul * (*)()) 0x81e0b60;
inline void (*Ghoul::ptr::_Render)() = (void (*)()) 0x830af70;
inline void (*Ghoul::ptr::Update)(Ghoul * self) = (void (*)(Ghoul * self)) 0x837d860;
inline bool (*Ghoul::ptr::Hit)(Ghoul * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Ghoul * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x8395d90;
inline bool (*Ghoul::ptr::_CanBeDamaged)(Ghoul * self, bool arg1, bool arg2) = (bool (*)(Ghoul * self, bool arg1, bool arg2)) 0x8078a80;
inline void (*Ghoul::ptr::BecomeCorporeal2)(Ghoul * self) = (void (*)(Ghoul * self)) 0x8264170;
inline void (*Ghoul::ptr::CheckCorporeality)(Ghoul * self) = (void (*)(Ghoul * self)) 0x82602e0;
inline Point * (*Ghoul::ptr::GetMovementDirection)(Ghoul * self) = (Point * (*)(Ghoul * self)) 0x80b3b30;
inline void (*Ghoul::ptr::_mark)() = (void (*)()) 0x80afe50;
inline void (*Ghoul::ptr::CSTR_Ghoul)(Ghoul * self) = (void (*)(Ghoul * self)) 0x81e0920;
#endif
#endif
