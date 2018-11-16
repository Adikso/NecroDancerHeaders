// Generated automatically. Do not edit!
#ifndef _Pawnbroker_
#define _Pawnbroker_
class Entity;
class Point;
class String;
#include "NPC.hpp"

class Pawnbroker : public NPC  {
public:

    // Wrappers
    inline Pawnbroker * New(int xVal, int yVal, int l, bool captv) { return ptr::New(this, xVal, yVal, l, captv); }
    inline Pawnbroker * _new2() { return ptr::_new2(); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline Point * _GetMovementDirection() { return ptr::_GetMovementDirection(); }
    inline bool _CanBeDamaged(bool arg1, bool arg2) { return ptr::_CanBeDamaged(this, arg1, arg2); }
    inline void Die() { ptr::Die(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Pawnbroker * (*New)(Pawnbroker * self, int xVal, int yVal, int l, bool captv);
        static Pawnbroker * (*_new2)();
        static bool (*Hit)(Pawnbroker * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static Point * (*_GetMovementDirection)();
        static bool (*_CanBeDamaged)(Pawnbroker * self, bool arg1, bool arg2);
        static void (*Die)(Pawnbroker * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Pawnbroker * (*Pawnbroker::ptr::New)(Pawnbroker * self, int xVal, int yVal, int l, bool captv) = (Pawnbroker * (*)(Pawnbroker * self, int xVal, int yVal, int l, bool captv)) 0x61ef60;
inline Pawnbroker * (*Pawnbroker::ptr::_new2)() = (Pawnbroker * (*)()) 0x0;
inline bool (*Pawnbroker::ptr::Hit)(Pawnbroker * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Pawnbroker * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x61f030;
inline Point * (*Pawnbroker::ptr::_GetMovementDirection)() = (Point * (*)()) 0x0;
inline bool (*Pawnbroker::ptr::_CanBeDamaged)(Pawnbroker * self, bool arg1, bool arg2) = (bool (*)(Pawnbroker * self, bool arg1, bool arg2)) 0x0;
inline void (*Pawnbroker::ptr::Die)(Pawnbroker * self) = (void (*)(Pawnbroker * self)) 0x61f9f0;
inline void (*Pawnbroker::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Pawnbroker * (*Pawnbroker::ptr::New)(Pawnbroker * self, int xVal, int yVal, int l, bool captv) = (Pawnbroker * (*)(Pawnbroker * self, int xVal, int yVal, int l, bool captv)) 0x81b8540;
inline Pawnbroker * (*Pawnbroker::ptr::_new2)() = (Pawnbroker * (*)()) 0x81b8600;
inline bool (*Pawnbroker::ptr::Hit)(Pawnbroker * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Pawnbroker * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x839a2e0;
inline Point * (*Pawnbroker::ptr::_GetMovementDirection)() = (Point * (*)()) 0x80b4c40;
inline bool (*Pawnbroker::ptr::_CanBeDamaged)(Pawnbroker * self, bool arg1, bool arg2) = (bool (*)(Pawnbroker * self, bool arg1, bool arg2)) 0x8074f00;
inline void (*Pawnbroker::ptr::Die)(Pawnbroker * self) = (void (*)(Pawnbroker * self)) 0x83b7810;
inline void (*Pawnbroker::ptr::_mark)() = (void (*)()) 0x80b3290;
#endif
#endif
