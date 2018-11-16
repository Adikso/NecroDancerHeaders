// Generated automatically. Do not edit!
#ifndef _Ghast_
#define _Ghast_
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class Ghast : public Enemy  {
public:
    bool seeking;
    bool teleporting;
    int hitDir;
    Entity * hitPlayer;
    bool skippedMove;
    bool hasRoared;
    bool beenHit;

    // Wrappers
    Ghast(int xVal, int yVal, int l) {
        ptr::CSTR_Ghast(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Ghast * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Ghast * _new2() { return ptr::_new2(); }
    inline void _Render() { ptr::_Render(); }
    inline virtual void BecomeCorporeal(bool force) { ptr::BecomeCorporeal(this, force); }
    inline virtual void CheckCorporeality() { ptr::_CheckCorporeality(); }
    inline void Update() { ptr::Update(this); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline bool _CanBeDamaged(bool arg1, bool arg2) { return ptr::_CanBeDamaged(this, arg1, arg2); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Ghast * (*New)(Ghast * self, int xVal, int yVal, int l);
        static Ghast * (*_new2)();
        static void (*_Render)();
        static void (*BecomeCorporeal)(Ghast * self, bool force);
        static void (*_CheckCorporeality)();
        static void (*Update)(Ghast * self);
        static bool (*Hit)(Ghast * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static bool (*_CanBeDamaged)(Ghast * self, bool arg1, bool arg2);
        static Point * (*GetMovementDirection)(Ghast * self);
        static void (*_mark)();
        static void (*CSTR_Ghast)(Ghast * self);
    };
};

#ifdef _WIN32

inline Ghast * (*Ghast::ptr::New)(Ghast * self, int xVal, int yVal, int l) = (Ghast * (*)(Ghast * self, int xVal, int yVal, int l)) 0x648040;
inline Ghast * (*Ghast::ptr::_new2)() = (Ghast * (*)()) 0x0;
inline void (*Ghast::ptr::_Render)() = (void (*)()) 0x0;
inline void (*Ghast::ptr::BecomeCorporeal)(Ghast * self, bool force) = (void (*)(Ghast * self, bool force)) 0x6482b0;
inline void (*Ghast::ptr::_CheckCorporeality)() = (void (*)()) 0x0;
inline void (*Ghast::ptr::Update)(Ghast * self) = (void (*)(Ghast * self)) 0x648580;
inline bool (*Ghast::ptr::Hit)(Ghast * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Ghast * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x648920;
inline bool (*Ghast::ptr::_CanBeDamaged)(Ghast * self, bool arg1, bool arg2) = (bool (*)(Ghast * self, bool arg1, bool arg2)) 0x0;
inline Point * (*Ghast::ptr::GetMovementDirection)(Ghast * self) = (Point * (*)(Ghast * self)) 0x648a90;
inline void (*Ghast::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Ghast::ptr::CSTR_Ghast)(Ghast * self) = (void (*)(Ghast * self)) 0x647fb0;
#endif

#ifdef __linux__

inline Ghast * (*Ghast::ptr::New)(Ghast * self, int xVal, int yVal, int l) = (Ghast * (*)(Ghast * self, int xVal, int yVal, int l)) 0x81c41d0;
inline Ghast * (*Ghast::ptr::_new2)() = (Ghast * (*)()) 0x81c43b0;
inline void (*Ghast::ptr::_Render)() = (void (*)()) 0x830bd50;
inline void (*Ghast::ptr::BecomeCorporeal)(Ghast * self, bool force) = (void (*)(Ghast * self, bool force)) 0x82648e0;
inline void (*Ghast::ptr::_CheckCorporeality)() = (void (*)()) 0x8260a30;
inline void (*Ghast::ptr::Update)(Ghast * self) = (void (*)(Ghast * self)) 0x8381300;
inline bool (*Ghast::ptr::Hit)(Ghast * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Ghast * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x83981f0;
inline bool (*Ghast::ptr::_CanBeDamaged)(Ghast * self, bool arg1, bool arg2) = (bool (*)(Ghast * self, bool arg1, bool arg2)) 0x8076330;
inline Point * (*Ghast::ptr::GetMovementDirection)(Ghast * self) = (Point * (*)(Ghast * self)) 0x80b4550;
inline void (*Ghast::ptr::_mark)() = (void (*)()) 0x80b0500;
inline void (*Ghast::ptr::CSTR_Ghast)(Ghast * self) = (void (*)(Ghast * self)) 0x81c4170;
#endif
#endif
