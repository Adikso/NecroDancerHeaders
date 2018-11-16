// Generated automatically. Do not edit!
#ifndef _IntMap7_
#define _IntMap7_
#include "Map17.hpp"

class IntMap7 : public Map17  {
public:

    // Wrappers
    inline IntMap7 * _New() { return ptr::_New(); }
    inline int _Compare2(int arg1, int arg2) { return ptr::_Compare2(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static IntMap7 * (*_New)();
        static int (*_Compare2)(IntMap7 * self, int arg1, int arg2);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline IntMap7 * (*IntMap7::ptr::_New)() = (IntMap7 * (*)()) 0x0;
inline int (*IntMap7::ptr::_Compare2)(IntMap7 * self, int arg1, int arg2) = (int (*)(IntMap7 * self, int arg1, int arg2)) 0x0;
inline void (*IntMap7::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline IntMap7 * (*IntMap7::ptr::_New)() = (IntMap7 * (*)()) 0x81b5a60;
inline int (*IntMap7::ptr::_Compare2)(IntMap7 * self, int arg1, int arg2) = (int (*)(IntMap7 * self, int arg1, int arg2)) 0x8074e30;
inline void (*IntMap7::ptr::_mark)() = (void (*)()) 0x808cf10;
#endif
#endif
