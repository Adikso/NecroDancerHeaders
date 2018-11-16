// Generated automatically. Do not edit!
#ifndef _SpeedUpTrap_
#define _SpeedUpTrap_
class Entity;
#include "Trap.hpp"

class SpeedUpTrap : public Trap  {
public:
    int speedUpStartBeat;
    float currentMusicSpeed;

    // Wrappers
    SpeedUpTrap(int xVal, int yVal) {
        ptr::CSTR_SpeedUpTrap(this);
        ptr::New(this, xVal, yVal);
    }

    inline SpeedUpTrap * New(int xVal, int yVal) { return ptr::New(this, xVal, yVal); }
    inline SpeedUpTrap * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline void Trigger(Entity * ent) { ptr::Trigger(this, ent); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static SpeedUpTrap * (*New)(SpeedUpTrap * self, int xVal, int yVal);
        static SpeedUpTrap * (*_new2)();
        static void (*Update)(SpeedUpTrap * self);
        static void (*Trigger)(SpeedUpTrap * self, Entity * ent);
        static void (*_mark)();
        static void (*CSTR_SpeedUpTrap)(SpeedUpTrap * self);
    };
};

#ifdef _WIN32

inline SpeedUpTrap * (*SpeedUpTrap::ptr::New)(SpeedUpTrap * self, int xVal, int yVal) = (SpeedUpTrap * (*)(SpeedUpTrap * self, int xVal, int yVal)) 0x65c2e0;
inline SpeedUpTrap * (*SpeedUpTrap::ptr::_new2)() = (SpeedUpTrap * (*)()) 0x0;
inline void (*SpeedUpTrap::ptr::Update)(SpeedUpTrap * self) = (void (*)(SpeedUpTrap * self)) 0x65c460;
inline void (*SpeedUpTrap::ptr::Trigger)(SpeedUpTrap * self, Entity * ent) = (void (*)(SpeedUpTrap * self, Entity * ent)) 0x65c5d0;
inline void (*SpeedUpTrap::ptr::_mark)() = (void (*)()) 0x0;
inline void (*SpeedUpTrap::ptr::CSTR_SpeedUpTrap)(SpeedUpTrap * self) = (void (*)(SpeedUpTrap * self)) 0x65c270;
#endif

#ifdef __linux__

inline SpeedUpTrap * (*SpeedUpTrap::ptr::New)(SpeedUpTrap * self, int xVal, int yVal) = (SpeedUpTrap * (*)(SpeedUpTrap * self, int xVal, int yVal)) 0x81d2e70;
inline SpeedUpTrap * (*SpeedUpTrap::ptr::_new2)() = (SpeedUpTrap * (*)()) 0x81d3020;
inline void (*SpeedUpTrap::ptr::Update)(SpeedUpTrap * self) = (void (*)(SpeedUpTrap * self)) 0x826f340;
inline void (*SpeedUpTrap::ptr::Trigger)(SpeedUpTrap * self, Entity * ent) = (void (*)(SpeedUpTrap * self, Entity * ent)) 0x83a97f0;
inline void (*SpeedUpTrap::ptr::_mark)() = (void (*)()) 0x80a58d0;
inline void (*SpeedUpTrap::ptr::CSTR_SpeedUpTrap)(SpeedUpTrap * self) = (void (*)(SpeedUpTrap * self)) 0x81d2de0;
#endif
#endif
