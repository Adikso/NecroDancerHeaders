// Generated automatically. Do not edit!
#ifndef _TrapDoor_
#define _TrapDoor_
class Entity;
#include "Trap.hpp"

class TrapDoor : public Trap  {
public:
    bool keepMultiplier;

    // Wrappers
    TrapDoor(int xVal, int yVal) {
        ptr::CSTR_TrapDoor(this);
        ptr::New(this, xVal, yVal);
    }

    inline TrapDoor * New(int xVal, int yVal) { return ptr::New(this, xVal, yVal); }
    inline TrapDoor * _new2() { return ptr::_new2(); }
    inline void Trigger(Entity * ent) { ptr::Trigger(this, ent); }
    inline void Update() { ptr::Update(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static TrapDoor * (*New)(TrapDoor * self, int xVal, int yVal);
        static TrapDoor * (*_new2)();
        static void (*Trigger)(TrapDoor * self, Entity * ent);
        static void (*Update)(TrapDoor * self);
        static void (*_mark)();
        static void (*CSTR_TrapDoor)(TrapDoor * self);
    };
};

#ifdef _WIN32

TrapDoor * (*TrapDoor::ptr::New)(TrapDoor * self, int xVal, int yVal) = (TrapDoor * (*)(TrapDoor * self, int xVal, int yVal)) 0x61cab0;
TrapDoor * (*TrapDoor::ptr::_new2)() = (TrapDoor * (*)()) 0x0;
void (*TrapDoor::ptr::Trigger)(TrapDoor * self, Entity * ent) = (void (*)(TrapDoor * self, Entity * ent)) 0x61cc30;
void (*TrapDoor::ptr::Update)(TrapDoor * self) = (void (*)(TrapDoor * self)) 0x61ce10;
void (*TrapDoor::ptr::_mark)() = (void (*)()) 0x0;
void (*TrapDoor::ptr::CSTR_TrapDoor)(TrapDoor * self) = (void (*)(TrapDoor * self)) 0x61ca50;
#endif

#ifdef __linux__

TrapDoor * (*TrapDoor::ptr::New)(TrapDoor * self, int xVal, int yVal) = (TrapDoor * (*)(TrapDoor * self, int xVal, int yVal)) 0x81b7410;
TrapDoor * (*TrapDoor::ptr::_new2)() = (TrapDoor * (*)()) 0x81b7800;
void (*TrapDoor::ptr::Trigger)(TrapDoor * self, Entity * ent) = (void (*)(TrapDoor * self, Entity * ent)) 0x83a3000;
void (*TrapDoor::ptr::Update)(TrapDoor * self) = (void (*)(TrapDoor * self)) 0x812da80;
void (*TrapDoor::ptr::_mark)() = (void (*)()) 0x80a5da0;
void (*TrapDoor::ptr::CSTR_TrapDoor)(TrapDoor * self) = (void (*)(TrapDoor * self)) 0x81b7390;
#endif
#endif
