// Generated automatically. Do not edit!
#ifndef _ConfuseTrap_
#define _ConfuseTrap_
class Entity;
#include "Trap.hpp"

class ConfuseTrap : public Trap  {
public:
    int retractCounter;

    // Wrappers
    ConfuseTrap(int xVal, int yVal) {
        ptr::CSTR_ConfuseTrap(this);
        ptr::New(this, xVal, yVal);
    }

    inline ConfuseTrap * New(int xVal, int yVal) { return ptr::New(this, xVal, yVal); }
    inline ConfuseTrap * _new2() { return ptr::_new2(); }
    inline void _Update() { ptr::_Update(); }
    inline void Trigger(Entity * ent) { ptr::Trigger(this, ent); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static ConfuseTrap * (*New)(ConfuseTrap * self, int xVal, int yVal);
        static ConfuseTrap * (*_new2)();
        static void (*_Update)();
        static void (*Trigger)(ConfuseTrap * self, Entity * ent);
        static void (*_mark)();
        static void (*CSTR_ConfuseTrap)(ConfuseTrap * self);
    };
};

#ifdef _WIN32

ConfuseTrap * (*ConfuseTrap::ptr::New)(ConfuseTrap * self, int xVal, int yVal) = (ConfuseTrap * (*)(ConfuseTrap * self, int xVal, int yVal)) 0x65b490;
ConfuseTrap * (*ConfuseTrap::ptr::_new2)() = (ConfuseTrap * (*)()) 0x0;
void (*ConfuseTrap::ptr::_Update)() = (void (*)()) 0x0;
void (*ConfuseTrap::ptr::Trigger)(ConfuseTrap * self, Entity * ent) = (void (*)(ConfuseTrap * self, Entity * ent)) 0x65b660;
void (*ConfuseTrap::ptr::_mark)() = (void (*)()) 0x0;
void (*ConfuseTrap::ptr::CSTR_ConfuseTrap)(ConfuseTrap * self) = (void (*)(ConfuseTrap * self)) 0x65b430;
#endif

#ifdef __linux__

ConfuseTrap * (*ConfuseTrap::ptr::New)(ConfuseTrap * self, int xVal, int yVal) = (ConfuseTrap * (*)(ConfuseTrap * self, int xVal, int yVal)) 0x81d1380;
ConfuseTrap * (*ConfuseTrap::ptr::_new2)() = (ConfuseTrap * (*)()) 0x81d1530;
void (*ConfuseTrap::ptr::_Update)() = (void (*)()) 0x812d940;
void (*ConfuseTrap::ptr::Trigger)(ConfuseTrap * self, Entity * ent) = (void (*)(ConfuseTrap * self, Entity * ent)) 0x83a9240;
void (*ConfuseTrap::ptr::_mark)() = (void (*)()) 0x80a5ae0;
void (*ConfuseTrap::ptr::CSTR_ConfuseTrap)(ConfuseTrap * self) = (void (*)(ConfuseTrap * self)) 0x81d1300;
#endif
#endif
