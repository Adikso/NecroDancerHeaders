// Generated automatically. Do not edit!
#ifndef _IntMap12_
#define _IntMap12_
#include "Map27.hpp"

class IntMap12 : public Map27  {
public:

    // Wrappers
    inline IntMap12 * _New() { return ptr::_New(); }
    inline int _Compare2(int arg1, int arg2) { return ptr::_Compare2(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static IntMap12 * (*_New)();
        static int (*_Compare2)(IntMap12 * self, int arg1, int arg2);
        static void (*_mark)();
    };
};

#ifdef _WIN32

IntMap12 * (*IntMap12::ptr::_New)() = (IntMap12 * (*)()) 0x0;
int (*IntMap12::ptr::_Compare2)(IntMap12 * self, int arg1, int arg2) = (int (*)(IntMap12 * self, int arg1, int arg2)) 0x0;
void (*IntMap12::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

IntMap12 * (*IntMap12::ptr::_New)() = (IntMap12 * (*)()) 0x81e5830;
int (*IntMap12::ptr::_Compare2)(IntMap12 * self, int arg1, int arg2) = (int (*)(IntMap12 * self, int arg1, int arg2)) 0x80796d0;
void (*IntMap12::ptr::_mark)() = (void (*)()) 0x8083020;
#endif
#endif
