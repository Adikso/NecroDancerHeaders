// Generated automatically. Do not edit!
#ifndef _IntMap5_
#define _IntMap5_
#include "Map10.hpp"

class IntMap5 : public Map10  {
public:

    // Wrappers
    inline IntMap5 * _New() { return ptr::_New(); }
    inline int _Compare2(int arg1, int arg2) { return ptr::_Compare2(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static IntMap5 * (*_New)();
        static int (*_Compare2)(IntMap5 * self, int arg1, int arg2);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline IntMap5 * (*IntMap5::ptr::_New)() = (IntMap5 * (*)()) 0x0;
inline int (*IntMap5::ptr::_Compare2)(IntMap5 * self, int arg1, int arg2) = (int (*)(IntMap5 * self, int arg1, int arg2)) 0x0;
inline void (*IntMap5::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline IntMap5 * (*IntMap5::ptr::_New)() = (IntMap5 * (*)()) 0x81910b0;
inline int (*IntMap5::ptr::_Compare2)(IntMap5 * self, int arg1, int arg2) = (int (*)(IntMap5 * self, int arg1, int arg2)) 0x8071bf0;
inline void (*IntMap5::ptr::_mark)() = (void (*)()) 0x808dab0;
#endif
#endif
