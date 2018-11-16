// Generated automatically. Do not edit!
#ifndef _Mushroom_
#define _Mushroom_
class Point;
#include "Enemy.hpp"

class Mushroom : public Enemy  {
public:
    int vibrateCounter;
    float vibrateOffset;

    // Wrappers
    Mushroom(int xVal, int yVal, int l) {
        ptr::CSTR_Mushroom(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Mushroom * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Mushroom * _new2() { return ptr::_new2(); }
    inline Point * _GetMovementDirection() { return ptr::_GetMovementDirection(); }
    inline int _PerformMovement(int arg1, int arg2) { return ptr::_PerformMovement(this, arg1, arg2); }
    inline void MoveFail() { ptr::MoveFail(this); }
    inline void Update() { ptr::Update(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Mushroom * (*New)(Mushroom * self, int xVal, int yVal, int l);
        static Mushroom * (*_new2)();
        static Point * (*_GetMovementDirection)();
        static int (*_PerformMovement)(Mushroom * self, int arg1, int arg2);
        static void (*MoveFail)(Mushroom * self);
        static void (*Update)(Mushroom * self);
        static void (*_mark)();
        static void (*CSTR_Mushroom)(Mushroom * self);
    };
};

#ifdef _WIN32

inline Mushroom * (*Mushroom::ptr::New)(Mushroom * self, int xVal, int yVal, int l) = (Mushroom * (*)(Mushroom * self, int xVal, int yVal, int l)) 0x63ced0;
inline Mushroom * (*Mushroom::ptr::_new2)() = (Mushroom * (*)()) 0x0;
inline Point * (*Mushroom::ptr::_GetMovementDirection)() = (Point * (*)()) 0x0;
inline int (*Mushroom::ptr::_PerformMovement)(Mushroom * self, int arg1, int arg2) = (int (*)(Mushroom * self, int arg1, int arg2)) 0x0;
inline void (*Mushroom::ptr::MoveFail)(Mushroom * self) = (void (*)(Mushroom * self)) 0x63d160;
inline void (*Mushroom::ptr::Update)(Mushroom * self) = (void (*)(Mushroom * self)) 0x63d470;
inline void (*Mushroom::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Mushroom::ptr::CSTR_Mushroom)(Mushroom * self) = (void (*)(Mushroom * self)) 0x63ce60;
#endif

#ifdef __linux__

inline Mushroom * (*Mushroom::ptr::New)(Mushroom * self, int xVal, int yVal, int l) = (Mushroom * (*)(Mushroom * self, int xVal, int yVal, int l)) 0x81c0c40;
inline Mushroom * (*Mushroom::ptr::_new2)() = (Mushroom * (*)()) 0x81c0da0;
inline Point * (*Mushroom::ptr::_GetMovementDirection)() = (Point * (*)()) 0x80b4650;
inline int (*Mushroom::ptr::_PerformMovement)(Mushroom * self, int arg1, int arg2) = (int (*)(Mushroom * self, int arg1, int arg2)) 0x80760b0;
inline void (*Mushroom::ptr::MoveFail)(Mushroom * self) = (void (*)(Mushroom * self)) 0x83a4090;
inline void (*Mushroom::ptr::Update)(Mushroom * self) = (void (*)(Mushroom * self)) 0x8382c60;
inline void (*Mushroom::ptr::_mark)() = (void (*)()) 0x80b0770;
inline void (*Mushroom::ptr::CSTR_Mushroom)(Mushroom * self) = (void (*)(Mushroom * self)) 0x81c0c10;
#endif
#endif
