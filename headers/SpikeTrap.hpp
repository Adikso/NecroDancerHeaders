// Generated automatically. Do not edit!
#ifndef _SpikeTrap_
#define _SpikeTrap_
class Entity;
#include "Trap.hpp"

class SpikeTrap : public Trap  {
public:
    int retractCounter;
    int frameToShow;

    // Wrappers
    SpikeTrap(int xVal, int yVal) {
        ptr::CSTR_SpikeTrap(this);
        ptr::New(this, xVal, yVal);
    }

    inline SpikeTrap * New(int xVal, int yVal) { return ptr::New(this, xVal, yVal); }
    inline SpikeTrap * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline void Trigger(Entity * ent) { ptr::Trigger(this, ent); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static SpikeTrap * (*New)(SpikeTrap * self, int xVal, int yVal);
        static SpikeTrap * (*_new2)();
        static void (*Update)(SpikeTrap * self);
        static void (*Trigger)(SpikeTrap * self, Entity * ent);
        static void (*_mark)();
        static void (*CSTR_SpikeTrap)(SpikeTrap * self);
    };
};

#ifdef _WIN32

SpikeTrap * (*SpikeTrap::ptr::New)(SpikeTrap * self, int xVal, int yVal) = (SpikeTrap * (*)(SpikeTrap * self, int xVal, int yVal)) 0x65aee0;
SpikeTrap * (*SpikeTrap::ptr::_new2)() = (SpikeTrap * (*)()) 0x0;
void (*SpikeTrap::ptr::Update)(SpikeTrap * self) = (void (*)(SpikeTrap * self)) 0x65b060;
void (*SpikeTrap::ptr::Trigger)(SpikeTrap * self, Entity * ent) = (void (*)(SpikeTrap * self, Entity * ent)) 0x65b0a0;
void (*SpikeTrap::ptr::_mark)() = (void (*)()) 0x0;
void (*SpikeTrap::ptr::CSTR_SpikeTrap)(SpikeTrap * self) = (void (*)(SpikeTrap * self)) 0x65ae70;
#endif

#ifdef __linux__

SpikeTrap * (*SpikeTrap::ptr::New)(SpikeTrap * self, int xVal, int yVal) = (SpikeTrap * (*)(SpikeTrap * self, int xVal, int yVal)) 0x81d10d0;
SpikeTrap * (*SpikeTrap::ptr::_new2)() = (SpikeTrap * (*)()) 0x81d1280;
void (*SpikeTrap::ptr::Update)(SpikeTrap * self) = (void (*)(SpikeTrap * self)) 0x812d9b0;
void (*SpikeTrap::ptr::Trigger)(SpikeTrap * self, Entity * ent) = (void (*)(SpikeTrap * self, Entity * ent)) 0x83a8ef0;
void (*SpikeTrap::ptr::_mark)() = (void (*)()) 0x80a5b90;
void (*SpikeTrap::ptr::CSTR_SpikeTrap)(SpikeTrap * self) = (void (*)(SpikeTrap * self)) 0x81d1040;
#endif
#endif
