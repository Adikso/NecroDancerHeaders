// Generated automatically. Do not edit!
#ifndef _SlowDownTrap_
#define _SlowDownTrap_
class Entity;
#include "Trap.hpp"

class SlowDownTrap : public Trap  {
public:
    int slowDownStartBeat;
    float currentMusicSpeed;

    // Wrappers
    SlowDownTrap(int xVal, int yVal) {
        ptr::CSTR_SlowDownTrap(this);
        ptr::New(this, xVal, yVal);
    }

    inline SlowDownTrap * New(int xVal, int yVal) { return ptr::New(this, xVal, yVal); }
    inline SlowDownTrap * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline void Trigger(Entity * ent) { ptr::Trigger(this, ent); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static SlowDownTrap * (*New)(SlowDownTrap * self, int xVal, int yVal);
        static SlowDownTrap * (*_new2)();
        static void (*Update)(SlowDownTrap * self);
        static void (*Trigger)(SlowDownTrap * self, Entity * ent);
        static void (*_mark)();
        static void (*CSTR_SlowDownTrap)(SlowDownTrap * self);
    };
};

#ifdef _WIN32

SlowDownTrap * (*SlowDownTrap::ptr::New)(SlowDownTrap * self, int xVal, int yVal) = (SlowDownTrap * (*)(SlowDownTrap * self, int xVal, int yVal)) 0x65bc30;
SlowDownTrap * (*SlowDownTrap::ptr::_new2)() = (SlowDownTrap * (*)()) 0x0;
void (*SlowDownTrap::ptr::Update)(SlowDownTrap * self) = (void (*)(SlowDownTrap * self)) 0x65bdb0;
void (*SlowDownTrap::ptr::Trigger)(SlowDownTrap * self, Entity * ent) = (void (*)(SlowDownTrap * self, Entity * ent)) 0x65bf20;
void (*SlowDownTrap::ptr::_mark)() = (void (*)()) 0x0;
void (*SlowDownTrap::ptr::CSTR_SlowDownTrap)(SlowDownTrap * self) = (void (*)(SlowDownTrap * self)) 0x65bbc0;
#endif

#ifdef __linux__

SlowDownTrap * (*SlowDownTrap::ptr::New)(SlowDownTrap * self, int xVal, int yVal) = (SlowDownTrap * (*)(SlowDownTrap * self, int xVal, int yVal)) 0x81d2bb0;
SlowDownTrap * (*SlowDownTrap::ptr::_new2)() = (SlowDownTrap * (*)()) 0x81d2d60;
void (*SlowDownTrap::ptr::Update)(SlowDownTrap * self) = (void (*)(SlowDownTrap * self)) 0x826f500;
void (*SlowDownTrap::ptr::Trigger)(SlowDownTrap * self, Entity * ent) = (void (*)(SlowDownTrap * self, Entity * ent)) 0x83a9430;
void (*SlowDownTrap::ptr::_mark)() = (void (*)()) 0x80a5980;
void (*SlowDownTrap::ptr::CSTR_SlowDownTrap)(SlowDownTrap * self) = (void (*)(SlowDownTrap * self)) 0x81d2b20;
#endif
#endif
