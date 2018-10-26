// Generated automatically. Do not edit!
#ifndef _IntMap2_
#define _IntMap2_
#include "Map6.hpp"

class IntMap2 : public Map6  {
public:

    // Wrappers
    inline IntMap2 * _New() { return ptr::_New(); }
    inline int _Compare2(int arg1, int arg2) { return ptr::_Compare2(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static IntMap2 * (*_New)();
        static int (*_Compare2)(IntMap2 * self, int arg1, int arg2);
        static void (*_mark)();
    };
};

#ifdef _WIN32

IntMap2 * (*IntMap2::ptr::_New)() = (IntMap2 * (*)()) 0x0;
int (*IntMap2::ptr::_Compare2)(IntMap2 * self, int arg1, int arg2) = (int (*)(IntMap2 * self, int arg1, int arg2)) 0x0;
void (*IntMap2::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

IntMap2 * (*IntMap2::ptr::_New)() = (IntMap2 * (*)()) 0x81581e0;
int (*IntMap2::ptr::_Compare2)(IntMap2 * self, int arg1, int arg2) = (int (*)(IntMap2 * self, int arg1, int arg2)) 0x806fe50;
void (*IntMap2::ptr::_mark)() = (void (*)()) 0x808c1b0;
#endif
#endif
