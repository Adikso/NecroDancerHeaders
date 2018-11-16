// Generated automatically. Do not edit!
#ifndef _ArmoredSkeleton_
#define _ArmoredSkeleton_
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class ArmoredSkeleton : public Enemy  {
public:
    bool hasHead;
    Point * cachedMoveDir;
    int directionHitFrom;
    bool gotBounced;
    bool shieldDestroyed;
    int shieldDir;
    bool justBounced;
    bool willHaveHead;

    // Wrappers
    ArmoredSkeleton(int xVal, int yVal, int l) {
        ptr::CSTR_ArmoredSkeleton(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline ArmoredSkeleton * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline ArmoredSkeleton * _new2() { return ptr::_new2(); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline int _MoveImmediate(int arg1, int arg2, String * arg3) { return ptr::_MoveImmediate(this, arg1, arg2, arg3); }
    inline void Update() { ptr::Update(this); }
    inline virtual void DestroyShield(int dir) { ptr::DestroyShield(this, dir); }
    inline void Knockback(int dir) { ptr::Knockback(this, dir); }
    inline virtual bool Beheadable() { return ptr::_Beheadable(); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline virtual void AdjustShieldDir() { ptr::_AdjustShieldDir(); }
    inline void _MoveFail() { ptr::_MoveFail(); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline bool CanBeLord() { return ptr::CanBeLord(this); }
    inline void _Die() { ptr::_Die(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static ArmoredSkeleton * (*New)(ArmoredSkeleton * self, int xVal, int yVal, int l);
        static ArmoredSkeleton * (*_new2)();
        static Point * (*GetMovementDirection)(ArmoredSkeleton * self);
        static int (*_MoveImmediate)(ArmoredSkeleton * self, int arg1, int arg2, String * arg3);
        static void (*Update)(ArmoredSkeleton * self);
        static void (*DestroyShield)(ArmoredSkeleton * self, int dir);
        static void (*Knockback)(ArmoredSkeleton * self, int dir);
        static bool (*_Beheadable)();
        static bool (*Hit)(ArmoredSkeleton * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*_AdjustShieldDir)();
        static void (*_MoveFail)();
        static void (*MoveSucceed)(ArmoredSkeleton * self, bool hitPlayer, bool moveDelayed);
        static bool (*CanBeLord)(ArmoredSkeleton * self);
        static void (*_Die)();
        static void (*_mark)();
        static void (*CSTR_ArmoredSkeleton)(ArmoredSkeleton * self);
    };
};

#ifdef _WIN32

inline ArmoredSkeleton * (*ArmoredSkeleton::ptr::New)(ArmoredSkeleton * self, int xVal, int yVal, int l) = (ArmoredSkeleton * (*)(ArmoredSkeleton * self, int xVal, int yVal, int l)) 0x6173f0;
inline ArmoredSkeleton * (*ArmoredSkeleton::ptr::_new2)() = (ArmoredSkeleton * (*)()) 0x0;
inline Point * (*ArmoredSkeleton::ptr::GetMovementDirection)(ArmoredSkeleton * self) = (Point * (*)(ArmoredSkeleton * self)) 0x617750;
inline int (*ArmoredSkeleton::ptr::_MoveImmediate)(ArmoredSkeleton * self, int arg1, int arg2, String * arg3) = (int (*)(ArmoredSkeleton * self, int arg1, int arg2, String * arg3)) 0x0;
inline void (*ArmoredSkeleton::ptr::Update)(ArmoredSkeleton * self) = (void (*)(ArmoredSkeleton * self)) 0x617990;
inline void (*ArmoredSkeleton::ptr::DestroyShield)(ArmoredSkeleton * self, int dir) = (void (*)(ArmoredSkeleton * self, int dir)) 0x617af0;
inline void (*ArmoredSkeleton::ptr::Knockback)(ArmoredSkeleton * self, int dir) = (void (*)(ArmoredSkeleton * self, int dir)) 0x617f70;
inline bool (*ArmoredSkeleton::ptr::_Beheadable)() = (bool (*)()) 0x0;
inline bool (*ArmoredSkeleton::ptr::Hit)(ArmoredSkeleton * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(ArmoredSkeleton * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x617f90;
inline void (*ArmoredSkeleton::ptr::_AdjustShieldDir)() = (void (*)()) 0x0;
inline void (*ArmoredSkeleton::ptr::_MoveFail)() = (void (*)()) 0x0;
inline void (*ArmoredSkeleton::ptr::MoveSucceed)(ArmoredSkeleton * self, bool hitPlayer, bool moveDelayed) = (void (*)(ArmoredSkeleton * self, bool hitPlayer, bool moveDelayed)) 0x618410;
inline bool (*ArmoredSkeleton::ptr::CanBeLord)(ArmoredSkeleton * self) = (bool (*)(ArmoredSkeleton * self)) 0x618460;
inline void (*ArmoredSkeleton::ptr::_Die)() = (void (*)()) 0x0;
inline void (*ArmoredSkeleton::ptr::_mark)() = (void (*)()) 0x0;
inline void (*ArmoredSkeleton::ptr::CSTR_ArmoredSkeleton)(ArmoredSkeleton * self) = (void (*)(ArmoredSkeleton * self)) 0x617310;
#endif

#ifdef __linux__

inline ArmoredSkeleton * (*ArmoredSkeleton::ptr::New)(ArmoredSkeleton * self, int xVal, int yVal, int l) = (ArmoredSkeleton * (*)(ArmoredSkeleton * self, int xVal, int yVal, int l)) 0x81b60d0;
inline ArmoredSkeleton * (*ArmoredSkeleton::ptr::_new2)() = (ArmoredSkeleton * (*)()) 0x81b62f0;
inline Point * (*ArmoredSkeleton::ptr::GetMovementDirection)(ArmoredSkeleton * self) = (Point * (*)(ArmoredSkeleton * self)) 0x8103360;
inline int (*ArmoredSkeleton::ptr::_MoveImmediate)(ArmoredSkeleton * self, int arg1, int arg2, String * arg3) = (int (*)(ArmoredSkeleton * self, int arg1, int arg2, String * arg3)) 0x8394350;
inline void (*ArmoredSkeleton::ptr::Update)(ArmoredSkeleton * self) = (void (*)(ArmoredSkeleton * self)) 0x8384f20;
inline void (*ArmoredSkeleton::ptr::DestroyShield)(ArmoredSkeleton * self, int dir) = (void (*)(ArmoredSkeleton * self, int dir)) 0x81a4020;
inline void (*ArmoredSkeleton::ptr::Knockback)(ArmoredSkeleton * self, int dir) = (void (*)(ArmoredSkeleton * self, int dir)) 0x8103220;
inline bool (*ArmoredSkeleton::ptr::_Beheadable)() = (bool (*)()) 0x8074e40;
inline bool (*ArmoredSkeleton::ptr::Hit)(ArmoredSkeleton * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(ArmoredSkeleton * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x839b460;
inline void (*ArmoredSkeleton::ptr::_AdjustShieldDir)() = (void (*)()) 0x807f460;
inline void (*ArmoredSkeleton::ptr::_MoveFail)() = (void (*)()) 0x81359f0;
inline void (*ArmoredSkeleton::ptr::MoveSucceed)(ArmoredSkeleton * self, bool hitPlayer, bool moveDelayed) = (void (*)(ArmoredSkeleton * self, bool hitPlayer, bool moveDelayed)) 0x807f4c0;
inline bool (*ArmoredSkeleton::ptr::CanBeLord)(ArmoredSkeleton * self) = (bool (*)(ArmoredSkeleton * self)) 0x8074e60;
inline void (*ArmoredSkeleton::ptr::_Die)() = (void (*)()) 0x83b6a10;
inline void (*ArmoredSkeleton::ptr::_mark)() = (void (*)()) 0x80b0be0;
inline void (*ArmoredSkeleton::ptr::CSTR_ArmoredSkeleton)(ArmoredSkeleton * self) = (void (*)(ArmoredSkeleton * self)) 0x81b6040;
#endif
#endif
