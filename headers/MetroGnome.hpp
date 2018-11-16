// Generated automatically. Do not edit!
#ifndef _MetroGnome_
#define _MetroGnome_
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class MetroGnome : public Enemy  {
public:
    bool hasOrigin;
    int originX;
    int originY;
    int attackCounter;
    bool soundParity;

    // Wrappers
    MetroGnome(int x_, int y_, int l) {
        ptr::CSTR_MetroGnome(this);
        ptr::New(this, x_, y_, l);
    }

    inline MetroGnome * New(int x_, int y_, int l) { return ptr::New(this, x_, y_, l); }
    inline MetroGnome * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline virtual void Tick() { ptr::Tick(this); }
    inline void MoveFail() { ptr::MoveFail(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static MetroGnome * (*New)(MetroGnome * self, int x_, int y_, int l);
        static MetroGnome * (*_new2)();
        static void (*Update)(MetroGnome * self);
        static Point * (*GetMovementDirection)(MetroGnome * self);
        static void (*Tick)(MetroGnome * self);
        static void (*MoveFail)(MetroGnome * self);
        static void (*MoveSucceed)(MetroGnome * self, bool hitPlayer, bool moveDelayed);
        static bool (*Hit)(MetroGnome * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*_mark)();
        static void (*CSTR_MetroGnome)(MetroGnome * self);
    };
};

#ifdef _WIN32

inline MetroGnome * (*MetroGnome::ptr::New)(MetroGnome * self, int x_, int y_, int l) = (MetroGnome * (*)(MetroGnome * self, int x_, int y_, int l)) 0x651b30;
inline MetroGnome * (*MetroGnome::ptr::_new2)() = (MetroGnome * (*)()) 0x0;
inline void (*MetroGnome::ptr::Update)(MetroGnome * self) = (void (*)(MetroGnome * self)) 0x651f00;
inline Point * (*MetroGnome::ptr::GetMovementDirection)(MetroGnome * self) = (Point * (*)(MetroGnome * self)) 0x651f20;
inline void (*MetroGnome::ptr::Tick)(MetroGnome * self) = (void (*)(MetroGnome * self)) 0x651fd0;
inline void (*MetroGnome::ptr::MoveFail)(MetroGnome * self) = (void (*)(MetroGnome * self)) 0x652340;
inline void (*MetroGnome::ptr::MoveSucceed)(MetroGnome * self, bool hitPlayer, bool moveDelayed) = (void (*)(MetroGnome * self, bool hitPlayer, bool moveDelayed)) 0x652440;
inline bool (*MetroGnome::ptr::Hit)(MetroGnome * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(MetroGnome * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x6525c0;
inline void (*MetroGnome::ptr::_mark)() = (void (*)()) 0x0;
inline void (*MetroGnome::ptr::CSTR_MetroGnome)(MetroGnome * self) = (void (*)(MetroGnome * self)) 0x651ab0;
#endif

#ifdef __linux__

inline MetroGnome * (*MetroGnome::ptr::New)(MetroGnome * self, int x_, int y_, int l) = (MetroGnome * (*)(MetroGnome * self, int x_, int y_, int l)) 0x81c7550;
inline MetroGnome * (*MetroGnome::ptr::_new2)() = (MetroGnome * (*)()) 0x81c7eb0;
inline void (*MetroGnome::ptr::Update)(MetroGnome * self) = (void (*)(MetroGnome * self)) 0x837f650;
inline Point * (*MetroGnome::ptr::GetMovementDirection)(MetroGnome * self) = (Point * (*)(MetroGnome * self)) 0x80b4390;
inline void (*MetroGnome::ptr::Tick)(MetroGnome * self) = (void (*)(MetroGnome * self)) 0x83a7cb0;
inline void (*MetroGnome::ptr::MoveFail)(MetroGnome * self) = (void (*)(MetroGnome * self)) 0x81348a0;
inline void (*MetroGnome::ptr::MoveSucceed)(MetroGnome * self, bool hitPlayer, bool moveDelayed) = (void (*)(MetroGnome * self, bool hitPlayer, bool moveDelayed)) 0x83a7fe0;
inline bool (*MetroGnome::ptr::Hit)(MetroGnome * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(MetroGnome * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x83d6490;
inline void (*MetroGnome::ptr::_mark)() = (void (*)()) 0x80b0380;
inline void (*MetroGnome::ptr::CSTR_MetroGnome)(MetroGnome * self) = (void (*)(MetroGnome * self)) 0x81c7500;
#endif
#endif
