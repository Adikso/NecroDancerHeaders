// Generated automatically. Do not edit!
#ifndef _Cauldron_
#define _Cauldron_
class Point;
#include "Enemy.hpp"

class Cauldron : public Enemy  {
public:

    // Wrappers
    inline Cauldron * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Cauldron * _new2() { return ptr::_new2(); }
    inline Point * _GetMovementDirection() { return ptr::_GetMovementDirection(); }
    inline void Update() { ptr::Update(this); }
    inline int _PerformMovement(int arg1, int arg2) { return ptr::_PerformMovement(this, arg1, arg2); }
    inline void Die() { ptr::Die(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Cauldron * (*New)(Cauldron * self, int xVal, int yVal, int l);
        static Cauldron * (*_new2)();
        static Point * (*_GetMovementDirection)();
        static void (*Update)(Cauldron * self);
        static int (*_PerformMovement)(Cauldron * self, int arg1, int arg2);
        static void (*Die)(Cauldron * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Cauldron * (*Cauldron::ptr::New)(Cauldron * self, int xVal, int yVal, int l) = (Cauldron * (*)(Cauldron * self, int xVal, int yVal, int l)) 0x649130;
inline Cauldron * (*Cauldron::ptr::_new2)() = (Cauldron * (*)()) 0x0;
inline Point * (*Cauldron::ptr::_GetMovementDirection)() = (Point * (*)()) 0x0;
inline void (*Cauldron::ptr::Update)(Cauldron * self) = (void (*)(Cauldron * self)) 0x649390;
inline int (*Cauldron::ptr::_PerformMovement)(Cauldron * self, int arg1, int arg2) = (int (*)(Cauldron * self, int arg1, int arg2)) 0x0;
inline void (*Cauldron::ptr::Die)(Cauldron * self) = (void (*)(Cauldron * self)) 0x649420;
inline void (*Cauldron::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Cauldron * (*Cauldron::ptr::New)(Cauldron * self, int xVal, int yVal, int l) = (Cauldron * (*)(Cauldron * self, int xVal, int yVal, int l)) 0x81c45d0;
inline Cauldron * (*Cauldron::ptr::_new2)() = (Cauldron * (*)()) 0x81c48d0;
inline Point * (*Cauldron::ptr::_GetMovementDirection)() = (Point * (*)()) 0x80b44d0;
inline void (*Cauldron::ptr::Update)(Cauldron * self) = (void (*)(Cauldron * self)) 0x83810d0;
inline int (*Cauldron::ptr::_PerformMovement)(Cauldron * self, int arg1, int arg2) = (int (*)(Cauldron * self, int arg1, int arg2)) 0x8076350;
inline void (*Cauldron::ptr::Die)(Cauldron * self) = (void (*)(Cauldron * self)) 0x83b6130;
inline void (*Cauldron::ptr::_mark)() = (void (*)()) 0x80b04e0;
#endif
#endif
