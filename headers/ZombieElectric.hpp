// Generated automatically. Do not edit!
#ifndef _ZombieElectric_
#define _ZombieElectric_
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class ZombieElectric : public Enemy  {
public:
    int facing;
    int turnToFace;
    bool rested;
    bool queueRest;

    // Wrappers
    inline virtual int GetNextMovementDir() { return ptr::GetNextMovementDir(this); }
    inline virtual int GetMovementDir() { return ptr::GetMovementDir(this); }
    inline ZombieElectric * New(int x_, int y_, int l) { return ptr::New(this, x_, y_, l); }
    inline ZombieElectric * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void MoveFail() { ptr::MoveFail(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static int (*GetNextMovementDir)(ZombieElectric * self);
        static int (*GetMovementDir)(ZombieElectric * self);
        static ZombieElectric * (*New)(ZombieElectric * self, int x_, int y_, int l);
        static ZombieElectric * (*_new2)();
        static void (*Update)(ZombieElectric * self);
        static Point * (*GetMovementDirection)(ZombieElectric * self);
        static void (*MoveFail)(ZombieElectric * self);
        static void (*MoveSucceed)(ZombieElectric * self, bool hitPlayer, bool moveDelayed);
        static bool (*Hit)(ZombieElectric * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*mark)(ZombieElectric * self);
    };
};

#ifdef _WIN32

inline int (*ZombieElectric::ptr::GetNextMovementDir)(ZombieElectric * self) = (int (*)(ZombieElectric * self)) 0x658930;
inline int (*ZombieElectric::ptr::GetMovementDir)(ZombieElectric * self) = (int (*)(ZombieElectric * self)) 0x658b10;
inline ZombieElectric * (*ZombieElectric::ptr::New)(ZombieElectric * self, int x_, int y_, int l) = (ZombieElectric * (*)(ZombieElectric * self, int x_, int y_, int l)) 0x658b90;
inline ZombieElectric * (*ZombieElectric::ptr::_new2)() = (ZombieElectric * (*)()) 0x0;
inline void (*ZombieElectric::ptr::Update)(ZombieElectric * self) = (void (*)(ZombieElectric * self)) 0x658e10;
inline Point * (*ZombieElectric::ptr::GetMovementDirection)(ZombieElectric * self) = (Point * (*)(ZombieElectric * self)) 0x658ec0;
inline void (*ZombieElectric::ptr::MoveFail)(ZombieElectric * self) = (void (*)(ZombieElectric * self)) 0x658fe0;
inline void (*ZombieElectric::ptr::MoveSucceed)(ZombieElectric * self, bool hitPlayer, bool moveDelayed) = (void (*)(ZombieElectric * self, bool hitPlayer, bool moveDelayed)) 0x659060;
inline bool (*ZombieElectric::ptr::Hit)(ZombieElectric * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(ZombieElectric * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x6590d0;
inline void (*ZombieElectric::ptr::mark)(ZombieElectric * self) = (void (*)(ZombieElectric * self)) 0x5f8210;
#endif

#ifdef __linux__

inline int (*ZombieElectric::ptr::GetNextMovementDir)(ZombieElectric * self) = (int (*)(ZombieElectric * self)) 0x82304c0;
inline int (*ZombieElectric::ptr::GetMovementDir)(ZombieElectric * self) = (int (*)(ZombieElectric * self)) 0x80966a0;
inline ZombieElectric * (*ZombieElectric::ptr::New)(ZombieElectric * self, int x_, int y_, int l) = (ZombieElectric * (*)(ZombieElectric * self, int x_, int y_, int l)) 0x81c9ea0;
inline ZombieElectric * (*ZombieElectric::ptr::_new2)() = (ZombieElectric * (*)()) 0x81ca030;
inline void (*ZombieElectric::ptr::Update)(ZombieElectric * self) = (void (*)(ZombieElectric * self)) 0x837f140;
inline Point * (*ZombieElectric::ptr::GetMovementDirection)(ZombieElectric * self) = (Point * (*)(ZombieElectric * self)) 0x81314a0;
inline void (*ZombieElectric::ptr::MoveFail)(ZombieElectric * self) = (void (*)(ZombieElectric * self)) 0x81347f0;
inline void (*ZombieElectric::ptr::MoveSucceed)(ZombieElectric * self, bool hitPlayer, bool moveDelayed) = (void (*)(ZombieElectric * self, bool hitPlayer, bool moveDelayed)) 0x8076610;
inline bool (*ZombieElectric::ptr::Hit)(ZombieElectric * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(ZombieElectric * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x8396d80;
inline void (*ZombieElectric::ptr::mark)(ZombieElectric * self) = (void (*)(ZombieElectric * self)) 0x80b01f0;
#endif
#endif
