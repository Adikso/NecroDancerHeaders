// Generated automatically. Do not edit!
#ifndef _Pawn_
#define _Pawn_
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class Pawn : public Enemy  {
public:
    int startY;
    bool hasMoved;
    bool isQueen;

    // Wrappers
    inline Pawn * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Pawn * _new2() { return ptr::_new2(); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Pawn * (*New)(Pawn * self, int xVal, int yVal, int l);
        static Pawn * (*_new2)();
        static void (*MoveSucceed)(Pawn * self, bool hitPlayer, bool moveDelayed);
        static bool (*Hit)(Pawn * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static Point * (*GetMovementDirection)(Pawn * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Pawn * (*Pawn::ptr::New)(Pawn * self, int xVal, int yVal, int l) = (Pawn * (*)(Pawn * self, int xVal, int yVal, int l)) 0x654d90;
inline Pawn * (*Pawn::ptr::_new2)() = (Pawn * (*)()) 0x0;
inline void (*Pawn::ptr::MoveSucceed)(Pawn * self, bool hitPlayer, bool moveDelayed) = (void (*)(Pawn * self, bool hitPlayer, bool moveDelayed)) 0x655000;
inline bool (*Pawn::ptr::Hit)(Pawn * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Pawn * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x655340;
inline Point * (*Pawn::ptr::GetMovementDirection)(Pawn * self) = (Point * (*)(Pawn * self)) 0x655400;
inline void (*Pawn::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Pawn * (*Pawn::ptr::New)(Pawn * self, int xVal, int yVal, int l) = (Pawn * (*)(Pawn * self, int xVal, int yVal, int l)) 0x81c8600;
inline Pawn * (*Pawn::ptr::_new2)() = (Pawn * (*)()) 0x81c87e0;
inline void (*Pawn::ptr::MoveSucceed)(Pawn * self, bool hitPlayer, bool moveDelayed) = (void (*)(Pawn * self, bool hitPlayer, bool moveDelayed)) 0x811cdd0;
inline bool (*Pawn::ptr::Hit)(Pawn * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Pawn * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x8397190;
inline Point * (*Pawn::ptr::GetMovementDirection)(Pawn * self) = (Point * (*)(Pawn * self)) 0x81b23c0;
inline void (*Pawn::ptr::_mark)() = (void (*)()) 0x80b0260;
#endif
#endif
