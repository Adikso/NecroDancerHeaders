// Generated automatically. Do not edit!
#ifndef _Conjurer_
#define _Conjurer_
class Entity;
class Point;
#include "NPC.hpp"

class Conjurer : public NPC  {
public:
    int actionCost;
    int speechX;
    int speechY;
    Entity * box;

    // Wrappers
    Conjurer(int xVal, int yVal, int l, bool captv) {
        ptr::CSTR_Conjurer(this);
        ptr::New(this, xVal, yVal, l, captv);
    }

    inline virtual int GetCost() { return ptr::_GetCost(); }
    inline virtual void DisplayCost() { ptr::_DisplayCost(); }
    inline virtual void IncreaseCost() { ptr::IncreaseCost(this); }
    inline Conjurer * New(int xVal, int yVal, int l, bool captv) { return ptr::New(this, xVal, yVal, l, captv); }
    inline Conjurer * _new2() { return ptr::_new2(); }
    inline bool _CanBeDamaged(bool arg1, bool arg2) { return ptr::_CanBeDamaged(this, arg1, arg2); }
    inline Point * _GetMovementDirection() { return ptr::_GetMovementDirection(); }
    inline void Die() { ptr::Die(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static int (*_GetCost)();
        static void (*_DisplayCost)();
        static void (*IncreaseCost)(Conjurer * self);
        static Conjurer * (*New)(Conjurer * self, int xVal, int yVal, int l, bool captv);
        static Conjurer * (*_new2)();
        static bool (*_CanBeDamaged)(Conjurer * self, bool arg1, bool arg2);
        static Point * (*_GetMovementDirection)();
        static void (*Die)(Conjurer * self);
        static void (*mark)(Conjurer * self);
        static void (*CSTR_Conjurer)(Conjurer * self);
    };
};

#ifdef _WIN32

int (*Conjurer::ptr::_GetCost)() = (int (*)()) 0x0;
void (*Conjurer::ptr::_DisplayCost)() = (void (*)()) 0x0;
void (*Conjurer::ptr::IncreaseCost)(Conjurer * self) = (void (*)(Conjurer * self)) 0x5fc830;
Conjurer * (*Conjurer::ptr::New)(Conjurer * self, int xVal, int yVal, int l, bool captv) = (Conjurer * (*)(Conjurer * self, int xVal, int yVal, int l, bool captv)) 0x5fc860;
Conjurer * (*Conjurer::ptr::_new2)() = (Conjurer * (*)()) 0x0;
bool (*Conjurer::ptr::_CanBeDamaged)(Conjurer * self, bool arg1, bool arg2) = (bool (*)(Conjurer * self, bool arg1, bool arg2)) 0x0;
Point * (*Conjurer::ptr::_GetMovementDirection)() = (Point * (*)()) 0x0;
void (*Conjurer::ptr::Die)(Conjurer * self) = (void (*)(Conjurer * self)) 0x5fcbf0;
void (*Conjurer::ptr::mark)(Conjurer * self) = (void (*)(Conjurer * self)) 0x5fcda0;
void (*Conjurer::ptr::CSTR_Conjurer)(Conjurer * self) = (void (*)(Conjurer * self)) 0x5fc7b0;
#endif

#ifdef __linux__

int (*Conjurer::ptr::_GetCost)() = (int (*)()) 0x816be10;
void (*Conjurer::ptr::_DisplayCost)() = (void (*)()) 0x812d350;
void (*Conjurer::ptr::IncreaseCost)(Conjurer * self) = (void (*)(Conjurer * self)) 0x8073ac0;
Conjurer * (*Conjurer::ptr::New)(Conjurer * self, int xVal, int yVal, int l, bool captv) = (Conjurer * (*)(Conjurer * self, int xVal, int yVal, int l, bool captv)) 0x81a4ec0;
Conjurer * (*Conjurer::ptr::_new2)() = (Conjurer * (*)()) 0x81a5160;
bool (*Conjurer::ptr::_CanBeDamaged)(Conjurer * self, bool arg1, bool arg2) = (bool (*)(Conjurer * self, bool arg1, bool arg2)) 0x8073af0;
Point * (*Conjurer::ptr::_GetMovementDirection)() = (Point * (*)()) 0x80b4fd0;
void (*Conjurer::ptr::Die)(Conjurer * self) = (void (*)(Conjurer * self)) 0x83b6e30;
void (*Conjurer::ptr::mark)(Conjurer * self) = (void (*)(Conjurer * self)) 0x80b3340;
void (*Conjurer::ptr::CSTR_Conjurer)(Conjurer * self) = (void (*)(Conjurer * self)) 0x81a4e20;
#endif
#endif
