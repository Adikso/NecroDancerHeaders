// Generated automatically. Do not edit!
#ifndef _IntMap8_
#define _IntMap8_
#include "Map21.hpp"

class IntMap8 : public Map21  {
public:

    // Wrappers
    inline IntMap8 * _New() { return ptr::_New(); }
    inline int _Compare2(int arg1, int arg2) { return ptr::_Compare2(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static IntMap8 * (*_New)();
        static int (*_Compare2)(IntMap8 * self, int arg1, int arg2);
        static void (*_mark)();
    };
};

#ifdef _WIN32

IntMap8 * (*IntMap8::ptr::_New)() = (IntMap8 * (*)()) 0x0;
int (*IntMap8::ptr::_Compare2)(IntMap8 * self, int arg1, int arg2) = (int (*)(IntMap8 * self, int arg1, int arg2)) 0x0;
void (*IntMap8::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

IntMap8 * (*IntMap8::ptr::_New)() = (IntMap8 * (*)()) 0x81d6980;
int (*IntMap8::ptr::_Compare2)(IntMap8 * self, int arg1, int arg2) = (int (*)(IntMap8 * self, int arg1, int arg2)) 0x8077790;
void (*IntMap8::ptr::_mark)() = (void (*)()) 0x8082da0;
#endif
#endif
