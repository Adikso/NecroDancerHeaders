// Generated automatically. Do not edit!
#ifndef _StringMap9_
#define _StringMap9_
class String;
#include "Map15.hpp"

class StringMap9 : public Map15  {
public:

    // Wrappers
    inline StringMap9 * _New() { return ptr::_New(); }
    inline int _Compare(String * arg1, String * arg2) { return ptr::_Compare(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static StringMap9 * (*_New)();
        static int (*_Compare)(StringMap9 * self, String * arg1, String * arg2);
        static void (*_mark)();
    };
};

#ifdef _WIN32

StringMap9 * (*StringMap9::ptr::_New)() = (StringMap9 * (*)()) 0x0;
int (*StringMap9::ptr::_Compare)(StringMap9 * self, String * arg1, String * arg2) = (int (*)(StringMap9 * self, String * arg1, String * arg2)) 0x0;
void (*StringMap9::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

StringMap9 * (*StringMap9::ptr::_New)() = (StringMap9 * (*)()) 0x819d6b0;
int (*StringMap9::ptr::_Compare)(StringMap9 * self, String * arg1, String * arg2) = (int (*)(StringMap9 * self, String * arg1, String * arg2)) 0x8096810;
void (*StringMap9::ptr::_mark)() = (void (*)()) 0x808bd30;
#endif
#endif
