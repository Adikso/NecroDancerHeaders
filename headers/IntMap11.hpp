// Generated automatically. Do not edit!
#ifndef _IntMap11_
#define _IntMap11_
#include "Map26.hpp"

class IntMap11 : public Map26  {
public:

    // Wrappers
    inline IntMap11 * _New() { return ptr::_New(); }
    inline int _Compare2(int arg1, int arg2) { return ptr::_Compare2(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static IntMap11 * (*_New)();
        static int (*_Compare2)(IntMap11 * self, int arg1, int arg2);
        static void (*_mark)();
    };
};

#ifdef _WIN32

IntMap11 * (*IntMap11::ptr::_New)() = (IntMap11 * (*)()) 0x0;
int (*IntMap11::ptr::_Compare2)(IntMap11 * self, int arg1, int arg2) = (int (*)(IntMap11 * self, int arg1, int arg2)) 0x0;
void (*IntMap11::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

IntMap11 * (*IntMap11::ptr::_New)() = (IntMap11 * (*)()) 0x81e5520;
int (*IntMap11::ptr::_Compare2)(IntMap11 * self, int arg1, int arg2) = (int (*)(IntMap11 * self, int arg1, int arg2)) 0x80794d0;
void (*IntMap11::ptr::_mark)() = (void (*)()) 0x808cb70;
#endif
#endif
