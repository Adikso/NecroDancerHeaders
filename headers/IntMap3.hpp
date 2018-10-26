// Generated automatically. Do not edit!
#ifndef _IntMap3_
#define _IntMap3_
#include "Map8.hpp"

class IntMap3 : public Map8  {
public:

    // Wrappers
    inline IntMap3 * _New() { return ptr::_New(); }
    inline int _Compare2(int arg1, int arg2) { return ptr::_Compare2(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static IntMap3 * (*_New)();
        static int (*_Compare2)(IntMap3 * self, int arg1, int arg2);
        static void (*_mark)();
    };
};

#ifdef _WIN32

IntMap3 * (*IntMap3::ptr::_New)() = (IntMap3 * (*)()) 0x0;
int (*IntMap3::ptr::_Compare2)(IntMap3 * self, int arg1, int arg2) = (int (*)(IntMap3 * self, int arg1, int arg2)) 0x0;
void (*IntMap3::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

IntMap3 * (*IntMap3::ptr::_New)() = (IntMap3 * (*)()) 0x81899a0;
int (*IntMap3::ptr::_Compare2)(IntMap3 * self, int arg1, int arg2) = (int (*)(IntMap3 * self, int arg1, int arg2)) 0x80711c0;
void (*IntMap3::ptr::_mark)() = (void (*)()) 0x808c970;
#endif
#endif
