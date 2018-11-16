// Generated automatically. Do not edit!
#ifndef _Gargoyle_
#define _Gargoyle_
class Bouncer;
class Entity;
class Player;
class Point;
class Sprite;
class String;
#include "Enemy.hpp"

class Gargoyle : public Enemy  {
public:
    Sprite * gustImage;
    bool determinedContents;
    String * contents;
    bool hasMoved;
    bool active;
    Player * playerGusted;
    int animStartAt;
    Sprite * image2;
    Bouncer * bounce2;

    // Wrappers
    Gargoyle(int xVal, int yVal, int l) {
        ptr::CSTR_Gargoyle(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline virtual void DetermineContents() { ptr::DetermineContents(this); }
    inline Gargoyle * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Gargoyle * _new2() { return ptr::_new2(); }
    inline void Die() { ptr::Die(this); }
    inline virtual void OpenAsCrate(bool enemyOK) { ptr::OpenAsCrate(this, enemyOK); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static void (*DetermineContents)(Gargoyle * self);
        static Gargoyle * (*New)(Gargoyle * self, int xVal, int yVal, int l);
        static Gargoyle * (*_new2)();
        static void (*Die)(Gargoyle * self);
        static void (*OpenAsCrate)(Gargoyle * self, bool enemyOK);
        static bool (*Hit)(Gargoyle * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static Point * (*GetMovementDirection)(Gargoyle * self);
        static void (*MoveSucceed)(Gargoyle * self, bool hitPlayer, bool moveDelayed);
        static void (*Update)(Gargoyle * self);
        static void (*Render)(Gargoyle * self);
        static void (*mark)(Gargoyle * self);
        static void (*CSTR_Gargoyle)(Gargoyle * self);
    };
};

#ifdef _WIN32

inline void (*Gargoyle::ptr::DetermineContents)(Gargoyle * self) = (void (*)(Gargoyle * self)) 0x5c1950;
inline Gargoyle * (*Gargoyle::ptr::New)(Gargoyle * self, int xVal, int yVal, int l) = (Gargoyle * (*)(Gargoyle * self, int xVal, int yVal, int l)) 0x5c1a00;
inline Gargoyle * (*Gargoyle::ptr::_new2)() = (Gargoyle * (*)()) 0x0;
inline void (*Gargoyle::ptr::Die)(Gargoyle * self) = (void (*)(Gargoyle * self)) 0x5c1cf0;
inline void (*Gargoyle::ptr::OpenAsCrate)(Gargoyle * self, bool enemyOK) = (void (*)(Gargoyle * self, bool enemyOK)) 0x5c1d30;
inline bool (*Gargoyle::ptr::Hit)(Gargoyle * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Gargoyle * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x5c1e80;
inline Point * (*Gargoyle::ptr::GetMovementDirection)(Gargoyle * self) = (Point * (*)(Gargoyle * self)) 0x5c2130;
inline void (*Gargoyle::ptr::MoveSucceed)(Gargoyle * self, bool hitPlayer, bool moveDelayed) = (void (*)(Gargoyle * self, bool hitPlayer, bool moveDelayed)) 0x5c2200;
inline void (*Gargoyle::ptr::Update)(Gargoyle * self) = (void (*)(Gargoyle * self)) 0x5c25f0;
inline void (*Gargoyle::ptr::Render)(Gargoyle * self) = (void (*)(Gargoyle * self)) 0x5c2a30;
inline void (*Gargoyle::ptr::mark)(Gargoyle * self) = (void (*)(Gargoyle * self)) 0x5c2c10;
inline void (*Gargoyle::ptr::CSTR_Gargoyle)(Gargoyle * self) = (void (*)(Gargoyle * self)) 0x5c1790;
#endif

#ifdef __linux__

inline void (*Gargoyle::ptr::DetermineContents)(Gargoyle * self) = (void (*)(Gargoyle * self)) 0x82ad240;
inline Gargoyle * (*Gargoyle::ptr::New)(Gargoyle * self, int xVal, int yVal, int l) = (Gargoyle * (*)(Gargoyle * self, int xVal, int yVal, int l)) 0x817ea20;
inline Gargoyle * (*Gargoyle::ptr::_new2)() = (Gargoyle * (*)()) 0x817eec0;
inline void (*Gargoyle::ptr::Die)(Gargoyle * self) = (void (*)(Gargoyle * self)) 0x83b70f0;
inline void (*Gargoyle::ptr::OpenAsCrate)(Gargoyle * self, bool enemyOK) = (void (*)(Gargoyle * self, bool enemyOK)) 0x839e950;
inline bool (*Gargoyle::ptr::Hit)(Gargoyle * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Gargoyle * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x83abdc0;
inline Point * (*Gargoyle::ptr::GetMovementDirection)(Gargoyle * self) = (Point * (*)(Gargoyle * self)) 0x80b51c0;
inline void (*Gargoyle::ptr::MoveSucceed)(Gargoyle * self, bool hitPlayer, bool moveDelayed) = (void (*)(Gargoyle * self, bool hitPlayer, bool moveDelayed)) 0x83ac430;
inline void (*Gargoyle::ptr::Update)(Gargoyle * self) = (void (*)(Gargoyle * self)) 0x8387830;
inline void (*Gargoyle::ptr::Render)(Gargoyle * self) = (void (*)(Gargoyle * self)) 0x830dc10;
inline void (*Gargoyle::ptr::mark)(Gargoyle * self) = (void (*)(Gargoyle * self)) 0x80b1c40;
inline void (*Gargoyle::ptr::CSTR_Gargoyle)(Gargoyle * self) = (void (*)(Gargoyle * self)) 0x817e970;
#endif
#endif
