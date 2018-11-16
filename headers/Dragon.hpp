// Generated automatically. Do not edit!
#ifndef _Dragon_
#define _Dragon_
class Entity;
class Player;
class Point;
class Sprite;
class String;
#include "Enemy.hpp"

class Dragon : public Enemy  {
public:
    Sprite * iceBlast;
    int seekDistance;
    int lastFireballBeat;
    bool firstFrame;
    bool hasRoared;
    bool playerMoveOverride;
    int attackState;
    bool facingLeft;
    int iceBlastDuration;
    bool iceBlastFaceLeft;
    bool failedLastMove;
    bool hasEarthed;
    static bool * castingFireball;

    // Wrappers
    Dragon(int xVal, int yVal, int l) {
        ptr::CSTR_Dragon(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Dragon * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Dragon * _new2() { return ptr::_new2(); }
    inline virtual bool Shoots() { return ptr::Shoots(this); }
    inline virtual void IceBy(int dx, int dy) { ptr::IceBy(this, dx, dy); }
    inline virtual void IceBall() { ptr::IceBall(this); }
    inline virtual void DoShot() { ptr::DoShot(this); }
    inline void Update() { ptr::Update(this); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void Render() { ptr::Render(this); }
    inline virtual Player * ClearShot() { return ptr::ClearShot(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void MoveFail() { ptr::MoveFail(this); }
    inline virtual void RaiseWallAt(int xWall, int yWall) { ptr::RaiseWallAt(this, xWall, yWall); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Dragon * (*New)(Dragon * self, int xVal, int yVal, int l);
        static Dragon * (*_new2)();
        static bool (*Shoots)(Dragon * self);
        static void (*IceBy)(Dragon * self, int dx, int dy);
        static void (*IceBall)(Dragon * self);
        static void (*DoShot)(Dragon * self);
        static void (*Update)(Dragon * self);
        static Point * (*GetMovementDirection)(Dragon * self);
        static void (*Render)(Dragon * self);
        static Player * (*ClearShot)(Dragon * self);
        static void (*MoveSucceed)(Dragon * self, bool hitPlayer, bool moveDelayed);
        static void (*MoveFail)(Dragon * self);
        static void (*RaiseWallAt)(Dragon * self, int xWall, int yWall);
        static bool (*Hit)(Dragon * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*_mark)();
        static void (*CSTR_Dragon)(Dragon * self);
    };
};

#ifdef _WIN32
inline bool * Dragon::castingFireball = (bool*) 0x83562a;

inline Dragon * (*Dragon::ptr::New)(Dragon * self, int xVal, int yVal, int l) = (Dragon * (*)(Dragon * self, int xVal, int yVal, int l)) 0x609670;
inline Dragon * (*Dragon::ptr::_new2)() = (Dragon * (*)()) 0x0;
inline bool (*Dragon::ptr::Shoots)(Dragon * self) = (bool (*)(Dragon * self)) 0x609a30;
inline void (*Dragon::ptr::IceBy)(Dragon * self, int dx, int dy) = (void (*)(Dragon * self, int dx, int dy)) 0x609a50;
inline void (*Dragon::ptr::IceBall)(Dragon * self) = (void (*)(Dragon * self)) 0x609ae0;
inline void (*Dragon::ptr::DoShot)(Dragon * self) = (void (*)(Dragon * self)) 0x609b80;
inline void (*Dragon::ptr::Update)(Dragon * self) = (void (*)(Dragon * self)) 0x609eb0;
inline Point * (*Dragon::ptr::GetMovementDirection)(Dragon * self) = (Point * (*)(Dragon * self)) 0x60a0e0;
inline void (*Dragon::ptr::Render)(Dragon * self) = (void (*)(Dragon * self)) 0x60a1b0;
inline Player * (*Dragon::ptr::ClearShot)(Dragon * self) = (Player * (*)(Dragon * self)) 0x60a280;
inline void (*Dragon::ptr::MoveSucceed)(Dragon * self, bool hitPlayer, bool moveDelayed) = (void (*)(Dragon * self, bool hitPlayer, bool moveDelayed)) 0x60a6d0;
inline void (*Dragon::ptr::MoveFail)(Dragon * self) = (void (*)(Dragon * self)) 0x60a9a0;
inline void (*Dragon::ptr::RaiseWallAt)(Dragon * self, int xWall, int yWall) = (void (*)(Dragon * self, int xWall, int yWall)) 0x60ad70;
inline bool (*Dragon::ptr::Hit)(Dragon * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Dragon * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x60ade0;
inline void (*Dragon::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Dragon::ptr::CSTR_Dragon)(Dragon * self) = (void (*)(Dragon * self)) 0x6095c0;
#endif

#ifdef __linux__
inline bool * Dragon::castingFireball = (bool*) 0x856a3c0;

inline Dragon * (*Dragon::ptr::New)(Dragon * self, int xVal, int yVal, int l) = (Dragon * (*)(Dragon * self, int xVal, int yVal, int l)) 0x81b2f90;
inline Dragon * (*Dragon::ptr::_new2)() = (Dragon * (*)()) 0x81b32a0;
inline bool (*Dragon::ptr::Shoots)(Dragon * self) = (bool (*)(Dragon * self)) 0x8074580;
inline void (*Dragon::ptr::IceBy)(Dragon * self, int dx, int dy) = (void (*)(Dragon * self, int dx, int dy)) 0x80745a0;
inline void (*Dragon::ptr::IceBall)(Dragon * self) = (void (*)(Dragon * self)) 0x8074640;
inline void (*Dragon::ptr::DoShot)(Dragon * self) = (void (*)(Dragon * self)) 0x83bea20;
inline void (*Dragon::ptr::Update)(Dragon * self) = (void (*)(Dragon * self)) 0x8385d90;
inline Point * (*Dragon::ptr::GetMovementDirection)(Dragon * self) = (Point * (*)(Dragon * self)) 0x80b4db0;
inline void (*Dragon::ptr::Render)(Dragon * self) = (void (*)(Dragon * self)) 0x830d730;
inline Player * (*Dragon::ptr::ClearShot)(Dragon * self) = (Player * (*)(Dragon * self)) 0x812e560;
inline void (*Dragon::ptr::MoveSucceed)(Dragon * self, bool hitPlayer, bool moveDelayed) = (void (*)(Dragon * self, bool hitPlayer, bool moveDelayed)) 0x83a0980;
inline void (*Dragon::ptr::MoveFail)(Dragon * self) = (void (*)(Dragon * self)) 0x83bb700;
inline void (*Dragon::ptr::RaiseWallAt)(Dragon * self, int xWall, int yWall) = (void (*)(Dragon * self, int xWall, int yWall)) 0x818da10;
inline bool (*Dragon::ptr::Hit)(Dragon * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Dragon * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x839c250;
inline void (*Dragon::ptr::_mark)() = (void (*)()) 0x80b1950;
inline void (*Dragon::ptr::CSTR_Dragon)(Dragon * self) = (void (*)(Dragon * self)) 0x81b2f10;
#endif
#endif
