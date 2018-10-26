// Generated automatically. Do not edit!
#ifndef _TrapList_
#define _TrapList_
class Trap;
#include "List13.hpp"

class TrapList : public List13  {
public:

    // Wrappers
    inline TrapList * _New() { return ptr::_New(); }
    inline int Compare3(Trap * a, Trap * b) { return ptr::Compare3(this, a, b); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static TrapList * (*_New)();
        static int (*Compare3)(TrapList * self, Trap * a, Trap * b);
        static void (*mark)(TrapList * self);
    };
};

#ifdef _WIN32

TrapList * (*TrapList::ptr::_New)() = (TrapList * (*)()) 0x0;
int (*TrapList::ptr::Compare3)(TrapList * self, Trap * a, Trap * b) = (int (*)(TrapList * self, Trap * a, Trap * b)) 0x5d8cc0;
void (*TrapList::ptr::mark)(TrapList * self) = (void (*)(TrapList * self)) 0x447220;
#endif

#ifdef __linux__

TrapList * (*TrapList::ptr::_New)() = (TrapList * (*)()) 0x8192e00;
int (*TrapList::ptr::Compare3)(TrapList * self, Trap * a, Trap * b) = (int (*)(TrapList * self, Trap * a, Trap * b)) 0x807ee80;
void (*TrapList::ptr::mark)(TrapList * self) = (void (*)(TrapList * self)) 0x808bf90;
#endif
#endif
