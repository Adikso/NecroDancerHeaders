// Generated automatically. Do not edit!
#ifndef _Weaponmaster_
#define _Weaponmaster_
#include "NPC.hpp"

class Weaponmaster : public NPC  {
public:

    // Wrappers
    Weaponmaster(int xVal, int yVal, int l, bool captv) {
        ptr::CSTR_Weaponmaster(this);
        ptr::New(this, xVal, yVal, l, captv);
    }

    inline Weaponmaster * New(int xVal, int yVal, int l, bool captv) { return ptr::New(this, xVal, yVal, l, captv); }
    inline Weaponmaster * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static Weaponmaster * (*New)(Weaponmaster * self, int xVal, int yVal, int l, bool captv);
        static Weaponmaster * (*_new2)();
        static void (*Update)(Weaponmaster * self);
        static void (*mark)(Weaponmaster * self);
        static void (*CSTR_Weaponmaster)(Weaponmaster * self);
    };
};

#ifdef _WIN32

inline Weaponmaster * (*Weaponmaster::ptr::New)(Weaponmaster * self, int xVal, int yVal, int l, bool captv) = (Weaponmaster * (*)(Weaponmaster * self, int xVal, int yVal, int l, bool captv)) 0x6612b0;
inline Weaponmaster * (*Weaponmaster::ptr::_new2)() = (Weaponmaster * (*)()) 0x0;
inline void (*Weaponmaster::ptr::Update)(Weaponmaster * self) = (void (*)(Weaponmaster * self)) 0x661370;
inline void (*Weaponmaster::ptr::mark)(Weaponmaster * self) = (void (*)(Weaponmaster * self)) 0x5fc7a0;
inline void (*Weaponmaster::ptr::CSTR_Weaponmaster)(Weaponmaster * self) = (void (*)(Weaponmaster * self)) 0x661250;
#endif

#ifdef __linux__

inline Weaponmaster * (*Weaponmaster::ptr::New)(Weaponmaster * self, int xVal, int yVal, int l, bool captv) = (Weaponmaster * (*)(Weaponmaster * self, int xVal, int yVal, int l, bool captv)) 0x81d6ac0;
inline Weaponmaster * (*Weaponmaster::ptr::_new2)() = (Weaponmaster * (*)()) 0x81d6b80;
inline void (*Weaponmaster::ptr::Update)(Weaponmaster * self) = (void (*)(Weaponmaster * self)) 0x8387180;
inline void (*Weaponmaster::ptr::mark)(Weaponmaster * self) = (void (*)(Weaponmaster * self)) 0x80b3080;
inline void (*Weaponmaster::ptr::CSTR_Weaponmaster)(Weaponmaster * self) = (void (*)(Weaponmaster * self)) 0x81d6a50;
#endif
#endif
