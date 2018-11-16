// Generated automatically. Do not edit!
#ifndef _FrankensteinwaySwitch_
#define _FrankensteinwaySwitch_
class Entity;
class FrankensteinwayProp;
#include "Trap.hpp"

class FrankensteinwaySwitch : public Trap  {
public:
    FrankensteinwayProp * parent;

    // Wrappers
    inline FrankensteinwaySwitch * New(int xVal, int yVal) { return ptr::New(this, xVal, yVal); }
    inline FrankensteinwaySwitch * _new2() { return ptr::_new2(); }
    inline void _Update() { ptr::_Update(); }
    inline void Trigger(Entity * ent) { ptr::Trigger(this, ent); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static FrankensteinwaySwitch * (*New)(FrankensteinwaySwitch * self, int xVal, int yVal);
        static FrankensteinwaySwitch * (*_new2)();
        static void (*_Update)();
        static void (*Trigger)(FrankensteinwaySwitch * self, Entity * ent);
        static void (*mark)(FrankensteinwaySwitch * self);
    };
};

#ifdef _WIN32

inline FrankensteinwaySwitch * (*FrankensteinwaySwitch::ptr::New)(FrankensteinwaySwitch * self, int xVal, int yVal) = (FrankensteinwaySwitch * (*)(FrankensteinwaySwitch * self, int xVal, int yVal)) 0x66c250;
inline FrankensteinwaySwitch * (*FrankensteinwaySwitch::ptr::_new2)() = (FrankensteinwaySwitch * (*)()) 0x0;
inline void (*FrankensteinwaySwitch::ptr::_Update)() = (void (*)()) 0x0;
inline void (*FrankensteinwaySwitch::ptr::Trigger)(FrankensteinwaySwitch * self, Entity * ent) = (void (*)(FrankensteinwaySwitch * self, Entity * ent)) 0x66c3f0;
inline void (*FrankensteinwaySwitch::ptr::mark)(FrankensteinwaySwitch * self) = (void (*)(FrankensteinwaySwitch * self)) 0x66c4f0;
#endif

#ifdef __linux__

inline FrankensteinwaySwitch * (*FrankensteinwaySwitch::ptr::New)(FrankensteinwaySwitch * self, int xVal, int yVal) = (FrankensteinwaySwitch * (*)(FrankensteinwaySwitch * self, int xVal, int yVal)) 0x81da3b0;
inline FrankensteinwaySwitch * (*FrankensteinwaySwitch::ptr::_new2)() = (FrankensteinwaySwitch * (*)()) 0x81da750;
inline void (*FrankensteinwaySwitch::ptr::_Update)() = (void (*)()) 0x812db70;
inline void (*FrankensteinwaySwitch::ptr::Trigger)(FrankensteinwaySwitch * self, Entity * ent) = (void (*)(FrankensteinwaySwitch * self, Entity * ent)) 0x83ab450;
inline void (*FrankensteinwaySwitch::ptr::mark)(FrankensteinwaySwitch * self) = (void (*)(FrankensteinwaySwitch * self)) 0x80a5fb0;
#endif
#endif
