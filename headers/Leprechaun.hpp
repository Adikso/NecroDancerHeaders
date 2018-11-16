// Generated automatically. Do not edit!
#ifndef _Leprechaun_
#define _Leprechaun_
class Entity;
class Point;
class Sprite;
class String;
#include "Enemy.hpp"

class Leprechaun : public Enemy  {
public:
    int initialYOff;
    Sprite * rainbowImg;
    int bornOnBeat;
    bool aggro;
    bool disappearing;
    int rainbowFrame;
    int rainbowFrameCounter;
    int coinsLeft;
    static bool * seenLeprechaun;

    // Wrappers
    Leprechaun(int xVal, int yVal, int l) {
        ptr::CSTR_Leprechaun(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Leprechaun * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Leprechaun * _new2() { return ptr::_new2(); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline virtual void Disappear() { ptr::Disappear(this); }
    inline void Update() { ptr::Update(this); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void Render() { ptr::Render(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Leprechaun * (*New)(Leprechaun * self, int xVal, int yVal, int l);
        static Leprechaun * (*_new2)();
        static bool (*Hit)(Leprechaun * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*Disappear)(Leprechaun * self);
        static void (*Update)(Leprechaun * self);
        static Point * (*GetMovementDirection)(Leprechaun * self);
        static void (*MoveSucceed)(Leprechaun * self, bool hitPlayer, bool moveDelayed);
        static void (*Render)(Leprechaun * self);
        static void (*_mark)();
        static void (*CSTR_Leprechaun)(Leprechaun * self);
    };
};

#ifdef _WIN32
inline bool * Leprechaun::seenLeprechaun = (bool*) 0x835a8a;

inline Leprechaun * (*Leprechaun::ptr::New)(Leprechaun * self, int xVal, int yVal, int l) = (Leprechaun * (*)(Leprechaun * self, int xVal, int yVal, int l)) 0x5c3eb0;
inline Leprechaun * (*Leprechaun::ptr::_new2)() = (Leprechaun * (*)()) 0x0;
inline bool (*Leprechaun::ptr::Hit)(Leprechaun * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Leprechaun * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x5c4520;
inline void (*Leprechaun::ptr::Disappear)(Leprechaun * self) = (void (*)(Leprechaun * self)) 0x5c4700;
inline void (*Leprechaun::ptr::Update)(Leprechaun * self) = (void (*)(Leprechaun * self)) 0x5c47f0;
inline Point * (*Leprechaun::ptr::GetMovementDirection)(Leprechaun * self) = (Point * (*)(Leprechaun * self)) 0x5c4b20;
inline void (*Leprechaun::ptr::MoveSucceed)(Leprechaun * self, bool hitPlayer, bool moveDelayed) = (void (*)(Leprechaun * self, bool hitPlayer, bool moveDelayed)) 0x5c4bf0;
inline void (*Leprechaun::ptr::Render)(Leprechaun * self) = (void (*)(Leprechaun * self)) 0x5c4ce0;
inline void (*Leprechaun::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Leprechaun::ptr::CSTR_Leprechaun)(Leprechaun * self) = (void (*)(Leprechaun * self)) 0x5c3d70;
#endif

#ifdef __linux__
inline bool * Leprechaun::seenLeprechaun = (bool*) 0x856a568;

inline Leprechaun * (*Leprechaun::ptr::New)(Leprechaun * self, int xVal, int yVal, int l) = (Leprechaun * (*)(Leprechaun * self, int xVal, int yVal, int l)) 0x839ea80;
inline Leprechaun * (*Leprechaun::ptr::_new2)() = (Leprechaun * (*)()) 0x8186a60;
inline bool (*Leprechaun::ptr::Hit)(Leprechaun * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Leprechaun * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x839c800;
inline void (*Leprechaun::ptr::Disappear)(Leprechaun * self) = (void (*)(Leprechaun * self)) 0x839ee60;
inline void (*Leprechaun::ptr::Update)(Leprechaun * self) = (void (*)(Leprechaun * self)) 0x8387690;
inline Point * (*Leprechaun::ptr::GetMovementDirection)(Leprechaun * self) = (Point * (*)(Leprechaun * self)) 0x80b5150;
inline void (*Leprechaun::ptr::MoveSucceed)(Leprechaun * self, bool hitPlayer, bool moveDelayed) = (void (*)(Leprechaun * self, bool hitPlayer, bool moveDelayed)) 0x829a720;
inline void (*Leprechaun::ptr::Render)(Leprechaun * self) = (void (*)(Leprechaun * self)) 0x830db10;
inline void (*Leprechaun::ptr::_mark)() = (void (*)()) 0x80b1bd0;
inline void (*Leprechaun::ptr::CSTR_Leprechaun)(Leprechaun * self) = (void (*)(Leprechaun * self)) 0x81869f0;
#endif
#endif
