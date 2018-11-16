// Generated automatically. Do not edit!
#ifndef _IntMap4_
#define _IntMap4_
#include "Map9.hpp"

class IntMap4 : public Map9  {
public:

    // Wrappers
    IntMap4() {
        ptr::CSTR_IntMap4(this);
    }

    inline IntMap4 * _New() { return ptr::_New(); }
    inline int _Compare2(int arg1, int arg2) { return ptr::_Compare2(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static IntMap4 * (*_New)();
        static int (*_Compare2)(IntMap4 * self, int arg1, int arg2);
        static void (*_mark)();
        static void (*CSTR_IntMap4)(IntMap4 * self);
    };
};

#ifdef _WIN32

inline IntMap4 * (*IntMap4::ptr::_New)() = (IntMap4 * (*)()) 0x0;
inline int (*IntMap4::ptr::_Compare2)(IntMap4 * self, int arg1, int arg2) = (int (*)(IntMap4 * self, int arg1, int arg2)) 0x0;
inline void (*IntMap4::ptr::_mark)() = (void (*)()) 0x0;
inline void (*IntMap4::ptr::CSTR_IntMap4)(IntMap4 * self) = (void (*)(IntMap4 * self)) 0x5d6a60;
#endif

#ifdef __linux__

inline IntMap4 * (*IntMap4::ptr::_New)() = (IntMap4 * (*)()) 0x8191050;
inline int (*IntMap4::ptr::_Compare2)(IntMap4 * self, int arg1, int arg2) = (int (*)(IntMap4 * self, int arg1, int arg2)) 0x80719e0;
inline void (*IntMap4::ptr::_mark)() = (void (*)()) 0x808d5e0;
inline void (*IntMap4::ptr::CSTR_IntMap4)(IntMap4 * self) = (void (*)(IntMap4 * self)) 0x8191030;
#endif
#endif
