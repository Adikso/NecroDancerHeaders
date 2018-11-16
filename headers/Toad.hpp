// Generated automatically. Do not edit!
#ifndef _Toad_
#define _Toad_
class Point;
class String;
#include "Enemy.hpp"

class Toad : public Enemy  {
public:
    int attemptedMoveX;
    int attemptedMoveY;
    int deathCounter;

    // Wrappers
    Toad(int xVal, int yVal, int l) {
        ptr::CSTR_Toad(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Toad * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Toad * _new2() { return ptr::_new2(); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline int MoveImmediate(int xVal, int yVal, String * movementSource) { return ptr::MoveImmediate(this, xVal, yVal, movementSource); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void Update() { ptr::Update(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Toad * (*New)(Toad * self, int xVal, int yVal, int l);
        static Toad * (*_new2)();
        static Point * (*GetMovementDirection)(Toad * self);
        static int (*MoveImmediate)(Toad * self, int xVal, int yVal, String * movementSource);
        static void (*MoveSucceed)(Toad * self, bool hitPlayer, bool moveDelayed);
        static void (*Update)(Toad * self);
        static void (*_mark)();
        static void (*CSTR_Toad)(Toad * self);
    };
};

#ifdef _WIN32

inline Toad * (*Toad::ptr::New)(Toad * self, int xVal, int yVal, int l) = (Toad * (*)(Toad * self, int xVal, int yVal, int l)) 0x684c70;
inline Toad * (*Toad::ptr::_new2)() = (Toad * (*)()) 0x0;
inline Point * (*Toad::ptr::GetMovementDirection)(Toad * self) = (Point * (*)(Toad * self)) 0x684d40;
inline int (*Toad::ptr::MoveImmediate)(Toad * self, int xVal, int yVal, String * movementSource) = (int (*)(Toad * self, int xVal, int yVal, String * movementSource)) 0x6853a0;
inline void (*Toad::ptr::MoveSucceed)(Toad * self, bool hitPlayer, bool moveDelayed) = (void (*)(Toad * self, bool hitPlayer, bool moveDelayed)) 0x685440;
inline void (*Toad::ptr::Update)(Toad * self) = (void (*)(Toad * self)) 0x685520;
inline void (*Toad::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Toad::ptr::CSTR_Toad)(Toad * self) = (void (*)(Toad * self)) 0x684bf0;
#endif

#ifdef __linux__

inline Toad * (*Toad::ptr::New)(Toad * self, int xVal, int yVal, int l) = (Toad * (*)(Toad * self, int xVal, int yVal, int l)) 0x81e0820;
inline Toad * (*Toad::ptr::_new2)() = (Toad * (*)()) 0x81e0900;
inline Point * (*Toad::ptr::GetMovementDirection)(Toad * self) = (Point * (*)(Toad * self)) 0x81b02b0;
inline int (*Toad::ptr::MoveImmediate)(Toad * self, int xVal, int yVal, String * movementSource) = (int (*)(Toad * self, int xVal, int yVal, String * movementSource)) 0x8392870;
inline void (*Toad::ptr::MoveSucceed)(Toad * self, bool hitPlayer, bool moveDelayed) = (void (*)(Toad * self, bool hitPlayer, bool moveDelayed)) 0x81a8610;
inline void (*Toad::ptr::Update)(Toad * self) = (void (*)(Toad * self)) 0x837de40;
inline void (*Toad::ptr::_mark)() = (void (*)()) 0x80afec0;
inline void (*Toad::ptr::CSTR_Toad)(Toad * self) = (void (*)(Toad * self)) 0x81e07e0;
#endif
#endif
