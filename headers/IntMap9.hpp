// Generated automatically. Do not edit!
#ifndef _IntMap9_
#define _IntMap9_
#include "Map24.hpp"

class IntMap9 : public Map24  {
public:

    // Wrappers
    inline IntMap9 * _New() { return ptr::_New(); }
    inline int _Compare2(int arg1, int arg2) { return ptr::_Compare2(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static IntMap9 * (*_New)();
        static int (*_Compare2)(IntMap9 * self, int arg1, int arg2);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline IntMap9 * (*IntMap9::ptr::_New)() = (IntMap9 * (*)()) 0x0;
inline int (*IntMap9::ptr::_Compare2)(IntMap9 * self, int arg1, int arg2) = (int (*)(IntMap9 * self, int arg1, int arg2)) 0x0;
inline void (*IntMap9::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline IntMap9 * (*IntMap9::ptr::_New)() = (IntMap9 * (*)()) 0x81e2f40;
inline int (*IntMap9::ptr::_Compare2)(IntMap9 * self, int arg1, int arg2) = (int (*)(IntMap9 * self, int arg1, int arg2)) 0x80790a0;
inline void (*IntMap9::ptr::_mark)() = (void (*)()) 0x8082ec0;
#endif
#endif
