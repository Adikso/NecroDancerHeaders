// Generated automatically. Do not edit!
#ifndef _Zombie_
#define _Zombie_
class Point;
#include "Enemy.hpp"

class Zombie : public Enemy  {
public:
    int facing;

    // Wrappers
    Zombie(int xVal, int yVal, int l) {
        ptr::CSTR_Zombie(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Zombie * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Zombie * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void MoveFail() { ptr::MoveFail(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Zombie * (*New)(Zombie * self, int xVal, int yVal, int l);
        static Zombie * (*_new2)();
        static void (*Update)(Zombie * self);
        static Point * (*GetMovementDirection)(Zombie * self);
        static void (*MoveFail)(Zombie * self);
        static void (*_mark)();
        static void (*CSTR_Zombie)(Zombie * self);
    };
};

#ifdef _WIN32

inline Zombie * (*Zombie::ptr::New)(Zombie * self, int xVal, int yVal, int l) = (Zombie * (*)(Zombie * self, int xVal, int yVal, int l)) 0x63b8e0;
inline Zombie * (*Zombie::ptr::_new2)() = (Zombie * (*)()) 0x0;
inline void (*Zombie::ptr::Update)(Zombie * self) = (void (*)(Zombie * self)) 0x63bb50;
inline Point * (*Zombie::ptr::GetMovementDirection)(Zombie * self) = (Point * (*)(Zombie * self)) 0x637e80;
inline void (*Zombie::ptr::MoveFail)(Zombie * self) = (void (*)(Zombie * self)) 0x63bbc0;
inline void (*Zombie::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Zombie::ptr::CSTR_Zombie)(Zombie * self) = (void (*)(Zombie * self)) 0x63b880;
#endif

#ifdef __linux__

inline Zombie * (*Zombie::ptr::New)(Zombie * self, int xVal, int yVal, int l) = (Zombie * (*)(Zombie * self, int xVal, int yVal, int l)) 0x81c0670;
inline Zombie * (*Zombie::ptr::_new2)() = (Zombie * (*)()) 0x81c07f0;
inline void (*Zombie::ptr::Update)(Zombie * self) = (void (*)(Zombie * self)) 0x8382f40;
inline Point * (*Zombie::ptr::GetMovementDirection)(Zombie * self) = (Point * (*)(Zombie * self)) 0x81029a0;
inline void (*Zombie::ptr::MoveFail)(Zombie * self) = (void (*)(Zombie * self)) 0x81354c0;
inline void (*Zombie::ptr::_mark)() = (void (*)()) 0x80b0790;
inline void (*Zombie::ptr::CSTR_Zombie)(Zombie * self) = (void (*)(Zombie * self)) 0x81c0640;
#endif
#endif
