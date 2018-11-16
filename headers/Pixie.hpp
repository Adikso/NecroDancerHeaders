// Generated automatically. Do not edit!
#ifndef _Pixie_
#define _Pixie_
class Entity;
class Point;
class Sprite;
class String;
#include "Enemy.hpp"

class Pixie : public Enemy  {
public:
    Sprite * explosionImg;
    bool exploded;
    int dieCounter;
    int explosionFrameCounter;
    int explosionFrame;

    // Wrappers
    Pixie(int xVal, int yVal, int l) {
        ptr::CSTR_Pixie(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Pixie * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Pixie * _new2() { return ptr::_new2(); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void Die() { ptr::Die(this); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline int MoveImmediate(int xVal, int yVal, String * movementSource) { return ptr::MoveImmediate(this, xVal, yVal, movementSource); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline bool _CanBeLord() { return ptr::_CanBeLord(); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static Pixie * (*New)(Pixie * self, int xVal, int yVal, int l);
        static Pixie * (*_new2)();
        static bool (*Hit)(Pixie * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*Die)(Pixie * self);
        static void (*Update)(Pixie * self);
        static void (*Render)(Pixie * self);
        static int (*MoveImmediate)(Pixie * self, int xVal, int yVal, String * movementSource);
        static void (*MoveSucceed)(Pixie * self, bool hitPlayer, bool moveDelayed);
        static Point * (*GetMovementDirection)(Pixie * self);
        static bool (*_CanBeLord)();
        static void (*mark)(Pixie * self);
        static void (*CSTR_Pixie)(Pixie * self);
    };
};

#ifdef _WIN32

inline Pixie * (*Pixie::ptr::New)(Pixie * self, int xVal, int yVal, int l) = (Pixie * (*)(Pixie * self, int xVal, int yVal, int l)) 0x64db00;
inline Pixie * (*Pixie::ptr::_new2)() = (Pixie * (*)()) 0x0;
inline bool (*Pixie::ptr::Hit)(Pixie * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Pixie * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x64dda0;
inline void (*Pixie::ptr::Die)(Pixie * self) = (void (*)(Pixie * self)) 0x64e040;
inline void (*Pixie::ptr::Update)(Pixie * self) = (void (*)(Pixie * self)) 0x64e0c0;
inline void (*Pixie::ptr::Render)(Pixie * self) = (void (*)(Pixie * self)) 0x64e1e0;
inline int (*Pixie::ptr::MoveImmediate)(Pixie * self, int xVal, int yVal, String * movementSource) = (int (*)(Pixie * self, int xVal, int yVal, String * movementSource)) 0x64e280;
inline void (*Pixie::ptr::MoveSucceed)(Pixie * self, bool hitPlayer, bool moveDelayed) = (void (*)(Pixie * self, bool hitPlayer, bool moveDelayed)) 0x64e310;
inline Point * (*Pixie::ptr::GetMovementDirection)(Pixie * self) = (Point * (*)(Pixie * self)) 0x64e370;
inline bool (*Pixie::ptr::_CanBeLord)() = (bool (*)()) 0x0;
inline void (*Pixie::ptr::mark)(Pixie * self) = (void (*)(Pixie * self)) 0x60afd0;
inline void (*Pixie::ptr::CSTR_Pixie)(Pixie * self) = (void (*)(Pixie * self)) 0x64da70;
#endif

#ifdef __linux__

inline Pixie * (*Pixie::ptr::New)(Pixie * self, int xVal, int yVal, int l) = (Pixie * (*)(Pixie * self, int xVal, int yVal, int l)) 0x81c5b00;
inline Pixie * (*Pixie::ptr::_new2)() = (Pixie * (*)()) 0x81c5d40;
inline bool (*Pixie::ptr::Hit)(Pixie * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Pixie * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x83ba430;
inline void (*Pixie::ptr::Die)(Pixie * self) = (void (*)(Pixie * self)) 0x83b5f00;
inline void (*Pixie::ptr::Update)(Pixie * self) = (void (*)(Pixie * self)) 0x83800e0;
inline void (*Pixie::ptr::Render)(Pixie * self) = (void (*)(Pixie * self)) 0x830b480;
inline int (*Pixie::ptr::MoveImmediate)(Pixie * self, int xVal, int yVal, String * movementSource) = (int (*)(Pixie * self, int xVal, int yVal, String * movementSource)) 0x8393460;
inline void (*Pixie::ptr::MoveSucceed)(Pixie * self, bool hitPlayer, bool moveDelayed) = (void (*)(Pixie * self, bool hitPlayer, bool moveDelayed)) 0x80a19b0;
inline Point * (*Pixie::ptr::GetMovementDirection)(Pixie * self) = (Point * (*)(Pixie * self)) 0x80b5390;
inline bool (*Pixie::ptr::_CanBeLord)() = (bool (*)()) 0x80763f0;
inline void (*Pixie::ptr::mark)(Pixie * self) = (void (*)(Pixie * self)) 0x80b1220;
inline void (*Pixie::ptr::CSTR_Pixie)(Pixie * self) = (void (*)(Pixie * self)) 0x81c5ab0;
#endif
#endif
