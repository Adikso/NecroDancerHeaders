// Generated automatically. Do not edit!
#ifndef _TravelRune_
#define _TravelRune_
class Entity;
#include "Trap.hpp"

class TravelRune : public Trap  {
public:
    int runeType;
    int travelToX;
    int travelToY;
    int retractCounter;

    // Wrappers
    TravelRune(int xVal, int yVal, int toX, int toY, int runeNum) {
        ptr::CSTR_TravelRune(this);
        ptr::New(this, xVal, yVal, toX, toY, runeNum);
    }

    inline TravelRune * New(int xVal, int yVal, int toX, int toY, int runeNum) { return ptr::New(this, xVal, yVal, toX, toY, runeNum); }
    inline TravelRune * _new2() { return ptr::_new2(); }
    inline static void TravelTo(Entity * ent, int toX, int toY) { ptr::TravelTo(ent, toX, toY); }
    inline void Update() { ptr::Update(this); }
    inline void Trigger(Entity * ent) { ptr::Trigger(this, ent); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static TravelRune * (*New)(TravelRune * self, int xVal, int yVal, int toX, int toY, int runeNum);
        static TravelRune * (*_new2)();
        static void (*TravelTo)(Entity * ent, int toX, int toY);
        static void (*Update)(TravelRune * self);
        static void (*Trigger)(TravelRune * self, Entity * ent);
        static void (*mark)(TravelRune * self);
        static void (*CSTR_TravelRune)(TravelRune * self);
    };
};

#ifdef _WIN32

TravelRune * (*TravelRune::ptr::New)(TravelRune * self, int xVal, int yVal, int toX, int toY, int runeNum) = (TravelRune * (*)(TravelRune * self, int xVal, int yVal, int toX, int toY, int runeNum)) 0x5da4c0;
TravelRune * (*TravelRune::ptr::_new2)() = (TravelRune * (*)()) 0x0;
void (*TravelRune::ptr::TravelTo)(Entity * ent, int toX, int toY) = (void (*)(Entity * ent, int toX, int toY)) 0x5da760;
void (*TravelRune::ptr::Update)(TravelRune * self) = (void (*)(TravelRune * self)) 0x5da9b0;
void (*TravelRune::ptr::Trigger)(TravelRune * self, Entity * ent) = (void (*)(TravelRune * self, Entity * ent)) 0x5daa00;
void (*TravelRune::ptr::mark)(TravelRune * self) = (void (*)(TravelRune * self)) 0x5da430;
void (*TravelRune::ptr::CSTR_TravelRune)(TravelRune * self) = (void (*)(TravelRune * self)) 0x5da440;
#endif

#ifdef __linux__

TravelRune * (*TravelRune::ptr::New)(TravelRune * self, int xVal, int yVal, int toX, int toY, int runeNum) = (TravelRune * (*)(TravelRune * self, int xVal, int yVal, int toX, int toY, int runeNum)) 0x8193d10;
TravelRune * (*TravelRune::ptr::_new2)() = (TravelRune * (*)()) 0x8193fb0;
void (*TravelRune::ptr::TravelTo)(Entity * ent, int toX, int toY) = (void (*)(Entity * ent, int toX, int toY)) 0x83d3aa0;
void (*TravelRune::ptr::Update)(TravelRune * self) = (void (*)(TravelRune * self)) 0x812db00;
void (*TravelRune::ptr::Trigger)(TravelRune * self, Entity * ent) = (void (*)(TravelRune * self, Entity * ent)) 0x83d3da0;
void (*TravelRune::ptr::mark)(TravelRune * self) = (void (*)(TravelRune * self)) 0x80a5770;
void (*TravelRune::ptr::CSTR_TravelRune)(TravelRune * self) = (void (*)(TravelRune * self)) 0x8193c70;
#endif
#endif
