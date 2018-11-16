// Generated automatically. Do not edit!
#ifndef _TrapCauldron_
#define _TrapCauldron_
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class TrapCauldron : public Enemy  {
public:
    bool hasMoved;

    // Wrappers
    TrapCauldron(int xVal, int yVal, int l) {
        ptr::CSTR_TrapCauldron(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline TrapCauldron * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline TrapCauldron * _new2() { return ptr::_new2(); }
    inline bool CanBeDamaged(bool phasing, bool piercing) { return ptr::CanBeDamaged(this, phasing, piercing); }
    inline bool _HideHeartsWhenStealthed() { return ptr::_HideHeartsWhenStealthed(); }
    inline bool _Hit(String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) { return ptr::_Hit(this, arg1, arg2, arg3, arg4, arg5, arg6); }
    inline void Update() { ptr::Update(this); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void Die() { ptr::Die(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static TrapCauldron * (*New)(TrapCauldron * self, int xVal, int yVal, int l);
        static TrapCauldron * (*_new2)();
        static bool (*CanBeDamaged)(TrapCauldron * self, bool phasing, bool piercing);
        static bool (*_HideHeartsWhenStealthed)();
        static bool (*_Hit)(TrapCauldron * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6);
        static void (*Update)(TrapCauldron * self);
        static Point * (*GetMovementDirection)(TrapCauldron * self);
        static void (*Die)(TrapCauldron * self);
        static void (*_mark)();
        static void (*CSTR_TrapCauldron)(TrapCauldron * self);
    };
};

#ifdef _WIN32

inline TrapCauldron * (*TrapCauldron::ptr::New)(TrapCauldron * self, int xVal, int yVal, int l) = (TrapCauldron * (*)(TrapCauldron * self, int xVal, int yVal, int l)) 0x648be0;
inline TrapCauldron * (*TrapCauldron::ptr::_new2)() = (TrapCauldron * (*)()) 0x0;
inline bool (*TrapCauldron::ptr::CanBeDamaged)(TrapCauldron * self, bool phasing, bool piercing) = (bool (*)(TrapCauldron * self, bool phasing, bool piercing)) 0x61dac0;
inline bool (*TrapCauldron::ptr::_HideHeartsWhenStealthed)() = (bool (*)()) 0x0;
inline bool (*TrapCauldron::ptr::_Hit)(TrapCauldron * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(TrapCauldron * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x0;
inline void (*TrapCauldron::ptr::Update)(TrapCauldron * self) = (void (*)(TrapCauldron * self)) 0x648e60;
inline Point * (*TrapCauldron::ptr::GetMovementDirection)(TrapCauldron * self) = (Point * (*)(TrapCauldron * self)) 0x649030;
inline void (*TrapCauldron::ptr::Die)(TrapCauldron * self) = (void (*)(TrapCauldron * self)) 0x6490f0;
inline void (*TrapCauldron::ptr::_mark)() = (void (*)()) 0x0;
inline void (*TrapCauldron::ptr::CSTR_TrapCauldron)(TrapCauldron * self) = (void (*)(TrapCauldron * self)) 0x648b80;
#endif

#ifdef __linux__

inline TrapCauldron * (*TrapCauldron::ptr::New)(TrapCauldron * self, int xVal, int yVal, int l) = (TrapCauldron * (*)(TrapCauldron * self, int xVal, int yVal, int l)) 0x81c4400;
inline TrapCauldron * (*TrapCauldron::ptr::_new2)() = (TrapCauldron * (*)()) 0x81c4590;
inline bool (*TrapCauldron::ptr::CanBeDamaged)(TrapCauldron * self, bool phasing, bool piercing) = (bool (*)(TrapCauldron * self, bool phasing, bool piercing)) 0x807f8e0;
inline bool (*TrapCauldron::ptr::_HideHeartsWhenStealthed)() = (bool (*)()) 0x8076340;
inline bool (*TrapCauldron::ptr::_Hit)(TrapCauldron * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(TrapCauldron * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x83980b0;
inline void (*TrapCauldron::ptr::Update)(TrapCauldron * self) = (void (*)(TrapCauldron * self)) 0x8381120;
inline Point * (*TrapCauldron::ptr::GetMovementDirection)(TrapCauldron * self) = (Point * (*)(TrapCauldron * self)) 0x80b4500;
inline void (*TrapCauldron::ptr::Die)(TrapCauldron * self) = (void (*)(TrapCauldron * self)) 0x83b6180;
inline void (*TrapCauldron::ptr::_mark)() = (void (*)()) 0x80b04f0;
inline void (*TrapCauldron::ptr::CSTR_TrapCauldron)(TrapCauldron * self) = (void (*)(TrapCauldron * self)) 0x81c43d0;
#endif
#endif
