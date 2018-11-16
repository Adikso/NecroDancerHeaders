// Generated automatically. Do not edit!
#ifndef _WeaponPoint_
#define _WeaponPoint_
class List24;
class Point;
class Weapon;
#include "Object.hpp"

class WeaponPoint : public Object  {
public:
    Point * p;
    Weapon * weapon;
    int numStrikes;
    int strikesThisHit;
    WeaponPoint * parent;
    int hitDir;
    bool stopOnObstruction;
    int swipeImageNum;
    int damageMultiplier;
    List24 * children;
    bool hitThisFrame;

    // Wrappers
    WeaponPoint(int x, int y, Weapon * wep, int strikes, WeaponPoint * par, int dir, bool sObs, int swpImgNum, int dmgMult) {
        ptr::CSTR_WeaponPoint(this);
        ptr::New(this, x, y, wep, strikes, par, dir, sObs, swpImgNum, dmgMult);
    }

    inline WeaponPoint * New(int x, int y, Weapon * wep, int strikes, WeaponPoint * par, int dir, bool sObs, int swpImgNum, int dmgMult) { return ptr::New(this, x, y, wep, strikes, par, dir, sObs, swpImgNum, dmgMult); }
    inline WeaponPoint * _new2() { return ptr::_new2(); }
    inline virtual bool DoesHit() { return ptr::DoesHit(this); }
    inline virtual int GetDamage() { return ptr::GetDamage(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static WeaponPoint * (*New)(WeaponPoint * self, int x, int y, Weapon * wep, int strikes, WeaponPoint * par, int dir, bool sObs, int swpImgNum, int dmgMult);
        static WeaponPoint * (*_new2)();
        static bool (*DoesHit)(WeaponPoint * self);
        static int (*GetDamage)(WeaponPoint * self);
        static void (*mark)(WeaponPoint * self);
        static void (*CSTR_WeaponPoint)(WeaponPoint * self);
    };
};

#ifdef _WIN32

inline WeaponPoint * (*WeaponPoint::ptr::New)(WeaponPoint * self, int x, int y, Weapon * wep, int strikes, WeaponPoint * par, int dir, bool sObs, int swpImgNum, int dmgMult) = (WeaponPoint * (*)(WeaponPoint * self, int x, int y, Weapon * wep, int strikes, WeaponPoint * par, int dir, bool sObs, int swpImgNum, int dmgMult)) 0x5ec920;
inline WeaponPoint * (*WeaponPoint::ptr::_new2)() = (WeaponPoint * (*)()) 0x0;
inline bool (*WeaponPoint::ptr::DoesHit)(WeaponPoint * self) = (bool (*)(WeaponPoint * self)) 0x5eca00;
inline int (*WeaponPoint::ptr::GetDamage)(WeaponPoint * self) = (int (*)(WeaponPoint * self)) 0x5eca10;
inline void (*WeaponPoint::ptr::mark)(WeaponPoint * self) = (void (*)(WeaponPoint * self)) 0x5eca30;
inline void (*WeaponPoint::ptr::CSTR_WeaponPoint)(WeaponPoint * self) = (void (*)(WeaponPoint * self)) 0x5ec800;
#endif

#ifdef __linux__

inline WeaponPoint * (*WeaponPoint::ptr::New)(WeaponPoint * self, int x, int y, Weapon * wep, int strikes, WeaponPoint * par, int dir, bool sObs, int swpImgNum, int dmgMult) = (WeaponPoint * (*)(WeaponPoint * self, int x, int y, Weapon * wep, int strikes, WeaponPoint * par, int dir, bool sObs, int swpImgNum, int dmgMult)) 0x819aa90;
inline WeaponPoint * (*WeaponPoint::ptr::_new2)() = (WeaponPoint * (*)()) 0x819aba0;
inline bool (*WeaponPoint::ptr::DoesHit)(WeaponPoint * self) = (bool (*)(WeaponPoint * self)) 0x80728f0;
inline int (*WeaponPoint::ptr::GetDamage)(WeaponPoint * self) = (int (*)(WeaponPoint * self)) 0x8072900;
inline void (*WeaponPoint::ptr::mark)(WeaponPoint * self) = (void (*)(WeaponPoint * self)) 0x809aa20;
inline void (*WeaponPoint::ptr::CSTR_WeaponPoint)(WeaponPoint * self) = (void (*)(WeaponPoint * self)) 0x819b210;
#endif
#endif
