// Generated automatically. Do not edit!
#ifndef _ABTeleportTrap_
#define _ABTeleportTrap_
class Entity;
#include "Trap.hpp"

class ABTeleportTrap : public Trap  {
public:
    ABTeleportTrap * pairedTrap;
    int retractCounter;

    // Wrappers
    inline ABTeleportTrap * _New(int arg1, int arg2) { return ptr::_New(this, arg1, arg2); }
    inline ABTeleportTrap * _new2() { return ptr::_new2(); }
    inline static void _Pair(ABTeleportTrap * arg1, ABTeleportTrap * arg2) { ptr::_Pair(arg1, arg2); }
    inline void _Update() { ptr::_Update(); }
    inline void _Trigger(Entity * arg1) { ptr::_Trigger(this, arg1); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static ABTeleportTrap * (*_New)(ABTeleportTrap * self, int arg1, int arg2);
        static ABTeleportTrap * (*_new2)();
        static void (*_Pair)(ABTeleportTrap * arg1, ABTeleportTrap * arg2);
        static void (*_Update)();
        static void (*_Trigger)(ABTeleportTrap * self, Entity * arg1);
        static void (*_mark)();
    };
};

#ifdef _WIN32

ABTeleportTrap * (*ABTeleportTrap::ptr::_New)(ABTeleportTrap * self, int arg1, int arg2) = (ABTeleportTrap * (*)(ABTeleportTrap * self, int arg1, int arg2)) 0x0;
ABTeleportTrap * (*ABTeleportTrap::ptr::_new2)() = (ABTeleportTrap * (*)()) 0x0;
void (*ABTeleportTrap::ptr::_Pair)(ABTeleportTrap * arg1, ABTeleportTrap * arg2) = (void (*)(ABTeleportTrap * arg1, ABTeleportTrap * arg2)) 0x0;
void (*ABTeleportTrap::ptr::_Update)() = (void (*)()) 0x0;
void (*ABTeleportTrap::ptr::_Trigger)(ABTeleportTrap * self, Entity * arg1) = (void (*)(ABTeleportTrap * self, Entity * arg1)) 0x0;
void (*ABTeleportTrap::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

ABTeleportTrap * (*ABTeleportTrap::ptr::_New)(ABTeleportTrap * self, int arg1, int arg2) = (ABTeleportTrap * (*)(ABTeleportTrap * self, int arg1, int arg2)) 0x81d5d50;
ABTeleportTrap * (*ABTeleportTrap::ptr::_new2)() = (ABTeleportTrap * (*)()) 0x81d5f00;
void (*ABTeleportTrap::ptr::_Pair)(ABTeleportTrap * arg1, ABTeleportTrap * arg2) = (void (*)(ABTeleportTrap * arg1, ABTeleportTrap * arg2)) 0x81d5f80;
void (*ABTeleportTrap::ptr::_Update)() = (void (*)()) 0x812d7f0;
void (*ABTeleportTrap::ptr::_Trigger)(ABTeleportTrap * self, Entity * arg1) = (void (*)(ABTeleportTrap * self, Entity * arg1)) 0x83d1460;
void (*ABTeleportTrap::ptr::_mark)() = (void (*)()) 0x80a61b0;
#endif
#endif
