// Generated automatically. Do not edit!
#ifndef _BombTrap_
#define _BombTrap_
class Entity;
#include "Trap.hpp"

class BombTrap : public Trap  {
public:
    int triggeredFrames;

    // Wrappers
    BombTrap(int xVal, int yVal) {
        ptr::CSTR_BombTrap(this);
        ptr::New(this, xVal, yVal);
    }

    inline BombTrap * New(int xVal, int yVal) { return ptr::New(this, xVal, yVal); }
    inline BombTrap * _new2() { return ptr::_new2(); }
    inline void _Update() { ptr::_Update(); }
    inline void Trigger(Entity * ent) { ptr::Trigger(this, ent); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static BombTrap * (*New)(BombTrap * self, int xVal, int yVal);
        static BombTrap * (*_new2)();
        static void (*_Update)();
        static void (*Trigger)(BombTrap * self, Entity * ent);
        static void (*_mark)();
        static void (*CSTR_BombTrap)(BombTrap * self);
    };
};

#ifdef _WIN32

BombTrap * (*BombTrap::ptr::New)(BombTrap * self, int xVal, int yVal) = (BombTrap * (*)(BombTrap * self, int xVal, int yVal)) 0x628f20;
BombTrap * (*BombTrap::ptr::_new2)() = (BombTrap * (*)()) 0x0;
void (*BombTrap::ptr::_Update)() = (void (*)()) 0x0;
void (*BombTrap::ptr::Trigger)(BombTrap * self, Entity * ent) = (void (*)(BombTrap * self, Entity * ent)) 0x6290f0;
void (*BombTrap::ptr::_mark)() = (void (*)()) 0x0;
void (*BombTrap::ptr::CSTR_BombTrap)(BombTrap * self) = (void (*)(BombTrap * self)) 0x628ec0;
#endif

#ifdef __linux__

BombTrap * (*BombTrap::ptr::New)(BombTrap * self, int xVal, int yVal) = (BombTrap * (*)(BombTrap * self, int xVal, int yVal)) 0x81b8ca0;
BombTrap * (*BombTrap::ptr::_new2)() = (BombTrap * (*)()) 0x81b8e50;
void (*BombTrap::ptr::_Update)() = (void (*)()) 0x812da10;
void (*BombTrap::ptr::Trigger)(BombTrap * self, Entity * ent) = (void (*)(BombTrap * self, Entity * ent)) 0x83ad380;
void (*BombTrap::ptr::_mark)() = (void (*)()) 0x80a5cf0;
void (*BombTrap::ptr::CSTR_BombTrap)(BombTrap * self) = (void (*)(BombTrap * self)) 0x81b8c20;
#endif
#endif
