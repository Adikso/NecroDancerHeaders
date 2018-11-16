// Generated automatically. Do not edit!
#ifndef _ScatterTrap_
#define _ScatterTrap_
class Entity;
#include "Trap.hpp"

class ScatterTrap : public Trap  {
public:
    int triggeredFrames;

    // Wrappers
    ScatterTrap(int xVal, int yVal) {
        ptr::CSTR_ScatterTrap(this);
        ptr::New(this, xVal, yVal);
    }

    inline ScatterTrap * New(int xVal, int yVal) { return ptr::New(this, xVal, yVal); }
    inline ScatterTrap * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline void Trigger(Entity * ent) { ptr::Trigger(this, ent); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static ScatterTrap * (*New)(ScatterTrap * self, int xVal, int yVal);
        static ScatterTrap * (*_new2)();
        static void (*Update)(ScatterTrap * self);
        static void (*Trigger)(ScatterTrap * self, Entity * ent);
        static void (*_mark)();
        static void (*CSTR_ScatterTrap)(ScatterTrap * self);
    };
};

#ifdef _WIN32

inline ScatterTrap * (*ScatterTrap::ptr::New)(ScatterTrap * self, int xVal, int yVal) = (ScatterTrap * (*)(ScatterTrap * self, int xVal, int yVal)) 0x65c980;
inline ScatterTrap * (*ScatterTrap::ptr::_new2)() = (ScatterTrap * (*)()) 0x0;
inline void (*ScatterTrap::ptr::Update)(ScatterTrap * self) = (void (*)(ScatterTrap * self)) 0x6290a0;
inline void (*ScatterTrap::ptr::Trigger)(ScatterTrap * self, Entity * ent) = (void (*)(ScatterTrap * self, Entity * ent)) 0x65cb00;
inline void (*ScatterTrap::ptr::_mark)() = (void (*)()) 0x0;
inline void (*ScatterTrap::ptr::CSTR_ScatterTrap)(ScatterTrap * self) = (void (*)(ScatterTrap * self)) 0x65c920;
#endif

#ifdef __linux__

inline ScatterTrap * (*ScatterTrap::ptr::New)(ScatterTrap * self, int xVal, int yVal) = (ScatterTrap * (*)(ScatterTrap * self, int xVal, int yVal)) 0x81d3120;
inline ScatterTrap * (*ScatterTrap::ptr::_new2)() = (ScatterTrap * (*)()) 0x81d32d0;
inline void (*ScatterTrap::ptr::Update)(ScatterTrap * self) = (void (*)(ScatterTrap * self)) 0x812d860;
inline void (*ScatterTrap::ptr::Trigger)(ScatterTrap * self, Entity * ent) = (void (*)(ScatterTrap * self, Entity * ent)) 0x83a9bb0;
inline void (*ScatterTrap::ptr::_mark)() = (void (*)()) 0x80a5820;
inline void (*ScatterTrap::ptr::CSTR_ScatterTrap)(ScatterTrap * self) = (void (*)(ScatterTrap * self)) 0x81d30a0;
#endif
#endif
