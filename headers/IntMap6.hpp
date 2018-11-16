// Generated automatically. Do not edit!
#ifndef _IntMap6_
#define _IntMap6_
#include "Map14.hpp"

class IntMap6 : public Map14  {
public:

    // Wrappers
    inline IntMap6 * _New() { return ptr::_New(); }
    inline int _Compare2(int arg1, int arg2) { return ptr::_Compare2(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static IntMap6 * (*_New)();
        static int (*_Compare2)(IntMap6 * self, int arg1, int arg2);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline IntMap6 * (*IntMap6::ptr::_New)() = (IntMap6 * (*)()) 0x0;
inline int (*IntMap6::ptr::_Compare2)(IntMap6 * self, int arg1, int arg2) = (int (*)(IntMap6 * self, int arg1, int arg2)) 0x0;
inline void (*IntMap6::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline IntMap6 * (*IntMap6::ptr::_New)() = (IntMap6 * (*)()) 0x819ac00;
inline int (*IntMap6::ptr::_Compare2)(IntMap6 * self, int arg1, int arg2) = (int (*)(IntMap6 * self, int arg1, int arg2)) 0x8072ad0;
inline void (*IntMap6::ptr::_mark)() = (void (*)()) 0x8082b00;
#endif
#endif
