// Generated automatically. Do not edit!
#ifndef _IntMap10_
#define _IntMap10_
#include "Map24.hpp"

class IntMap10 : public Map24  {
public:

    // Wrappers
    inline IntMap10 * _New() { return ptr::_New(); }
    inline int _Compare2(int arg1, int arg2) { return ptr::_Compare2(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static IntMap10 * (*_New)();
        static int (*_Compare2)(IntMap10 * self, int arg1, int arg2);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline IntMap10 * (*IntMap10::ptr::_New)() = (IntMap10 * (*)()) 0x0;
inline int (*IntMap10::ptr::_Compare2)(IntMap10 * self, int arg1, int arg2) = (int (*)(IntMap10 * self, int arg1, int arg2)) 0x0;
inline void (*IntMap10::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline IntMap10 * (*IntMap10::ptr::_New)() = (IntMap10 * (*)()) 0x81e54c0;
inline int (*IntMap10::ptr::_Compare2)(IntMap10 * self, int arg1, int arg2) = (int (*)(IntMap10 * self, int arg1, int arg2)) 0x8079340;
inline void (*IntMap10::ptr::_mark)() = (void (*)()) 0x8082fc0;
#endif
#endif
