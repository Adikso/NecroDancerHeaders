// Generated automatically. Do not edit!
#ifndef _Beetle_
#define _Beetle_
class Entity;
class String;
#include "Enemy.hpp"

class Beetle : public Enemy  {
public:
    bool hasArmor;

    // Wrappers
    Beetle(int xVal, int yVal, int l) {
        ptr::CSTR_Beetle(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Beetle * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Beetle * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline int MoveImmediate(int xVal, int yVal, String * movementSource) { return ptr::MoveImmediate(this, xVal, yVal, movementSource); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Beetle * (*New)(Beetle * self, int xVal, int yVal, int l);
        static Beetle * (*_new2)();
        static void (*Update)(Beetle * self);
        static bool (*Hit)(Beetle * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static int (*MoveImmediate)(Beetle * self, int xVal, int yVal, String * movementSource);
        static void (*_mark)();
        static void (*CSTR_Beetle)(Beetle * self);
    };
};

#ifdef _WIN32

inline Beetle * (*Beetle::ptr::New)(Beetle * self, int xVal, int yVal, int l) = (Beetle * (*)(Beetle * self, int xVal, int yVal, int l)) 0x6467a0;
inline Beetle * (*Beetle::ptr::_new2)() = (Beetle * (*)()) 0x0;
inline void (*Beetle::ptr::Update)(Beetle * self) = (void (*)(Beetle * self)) 0x646a20;
inline bool (*Beetle::ptr::Hit)(Beetle * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Beetle * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x646b60;
inline int (*Beetle::ptr::MoveImmediate)(Beetle * self, int xVal, int yVal, String * movementSource) = (int (*)(Beetle * self, int xVal, int yVal, String * movementSource)) 0x646ea0;
inline void (*Beetle::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Beetle::ptr::CSTR_Beetle)(Beetle * self) = (void (*)(Beetle * self)) 0x646740;
#endif

#ifdef __linux__

inline Beetle * (*Beetle::ptr::New)(Beetle * self, int xVal, int yVal, int l) = (Beetle * (*)(Beetle * self, int xVal, int yVal, int l)) 0x81c3b10;
inline Beetle * (*Beetle::ptr::_new2)() = (Beetle * (*)()) 0x81c3ca0;
inline void (*Beetle::ptr::Update)(Beetle * self) = (void (*)(Beetle * self)) 0x8388c60;
inline bool (*Beetle::ptr::Hit)(Beetle * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Beetle * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x839cda0;
inline int (*Beetle::ptr::MoveImmediate)(Beetle * self, int xVal, int yVal, String * movementSource) = (int (*)(Beetle * self, int xVal, int yVal, String * movementSource)) 0x8393910;
inline void (*Beetle::ptr::_mark)() = (void (*)()) 0x80b05a0;
inline void (*Beetle::ptr::CSTR_Beetle)(Beetle * self) = (void (*)(Beetle * self)) 0x81c3ae0;
#endif
#endif
