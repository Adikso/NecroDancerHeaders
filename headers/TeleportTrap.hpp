// Generated automatically. Do not edit!
#ifndef _TeleportTrap_
#define _TeleportTrap_
class Entity;
#include "Trap.hpp"

class TeleportTrap : public Trap  {
public:
    int retractCounter;

    // Wrappers
    TeleportTrap(int xVal, int yVal) {
        ptr::CSTR_TeleportTrap(this);
        ptr::New(this, xVal, yVal);
    }

    inline TeleportTrap * New(int xVal, int yVal) { return ptr::New(this, xVal, yVal); }
    inline TeleportTrap * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline void Trigger(Entity * ent) { ptr::Trigger(this, ent); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static TeleportTrap * (*New)(TeleportTrap * self, int xVal, int yVal);
        static TeleportTrap * (*_new2)();
        static void (*Update)(TeleportTrap * self);
        static void (*Trigger)(TeleportTrap * self, Entity * ent);
        static void (*_mark)();
        static void (*CSTR_TeleportTrap)(TeleportTrap * self);
    };
};

#ifdef _WIN32

TeleportTrap * (*TeleportTrap::ptr::New)(TeleportTrap * self, int xVal, int yVal) = (TeleportTrap * (*)(TeleportTrap * self, int xVal, int yVal)) 0x65b8a0;
TeleportTrap * (*TeleportTrap::ptr::_new2)() = (TeleportTrap * (*)()) 0x0;
void (*TeleportTrap::ptr::Update)(TeleportTrap * self) = (void (*)(TeleportTrap * self)) 0x65b610;
void (*TeleportTrap::ptr::Trigger)(TeleportTrap * self, Entity * ent) = (void (*)(TeleportTrap * self, Entity * ent)) 0x65ba20;
void (*TeleportTrap::ptr::_mark)() = (void (*)()) 0x0;
void (*TeleportTrap::ptr::CSTR_TeleportTrap)(TeleportTrap * self) = (void (*)(TeleportTrap * self)) 0x65b840;
#endif

#ifdef __linux__

TeleportTrap * (*TeleportTrap::ptr::New)(TeleportTrap * self, int xVal, int yVal) = (TeleportTrap * (*)(TeleportTrap * self, int xVal, int yVal)) 0x81d1630;
TeleportTrap * (*TeleportTrap::ptr::_new2)() = (TeleportTrap * (*)()) 0x81d2aa0;
void (*TeleportTrap::ptr::Update)(TeleportTrap * self) = (void (*)(TeleportTrap * self)) 0x812d8d0;
void (*TeleportTrap::ptr::Trigger)(TeleportTrap * self, Entity * ent) = (void (*)(TeleportTrap * self, Entity * ent)) 0x83b86b0;
void (*TeleportTrap::ptr::_mark)() = (void (*)()) 0x80a5a30;
void (*TeleportTrap::ptr::CSTR_TeleportTrap)(TeleportTrap * self) = (void (*)(TeleportTrap * self)) 0x81d15b0;
#endif
#endif
