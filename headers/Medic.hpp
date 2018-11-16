// Generated automatically. Do not edit!
#ifndef _Medic_
#define _Medic_
#include "NPC.hpp"

class Medic : public NPC  {
public:

    // Wrappers
    inline Medic * New(int xVal, int yVal, int l, bool captv) { return ptr::New(this, xVal, yVal, l, captv); }
    inline Medic * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Medic * (*New)(Medic * self, int xVal, int yVal, int l, bool captv);
        static Medic * (*_new2)();
        static void (*Update)(Medic * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Medic * (*Medic::ptr::New)(Medic * self, int xVal, int yVal, int l, bool captv) = (Medic * (*)(Medic * self, int xVal, int yVal, int l, bool captv)) 0x628df0;
inline Medic * (*Medic::ptr::_new2)() = (Medic * (*)()) 0x0;
inline void (*Medic::ptr::Update)(Medic * self) = (void (*)(Medic * self)) 0x628eb0;
inline void (*Medic::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Medic * (*Medic::ptr::New)(Medic * self, int xVal, int yVal, int l, bool captv) = (Medic * (*)(Medic * self, int xVal, int yVal, int l, bool captv)) 0x81b8b40;
inline Medic * (*Medic::ptr::_new2)() = (Medic * (*)()) 0x81b8c00;
inline void (*Medic::ptr::Update)(Medic * self) = (void (*)(Medic * self)) 0x83871d0;
inline void (*Medic::ptr::_mark)() = (void (*)()) 0x80b31e0;
#endif
#endif
