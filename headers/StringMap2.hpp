// Generated automatically. Do not edit!
#ifndef _StringMap2_
#define _StringMap2_
class String;
#include "Map2.hpp"

class StringMap2 : public Map2  {
public:

    // Wrappers
    inline StringMap2 * _New() { return ptr::_New(); }
    inline int _Compare(String * arg1, String * arg2) { return ptr::_Compare(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static StringMap2 * (*_New)();
        static int (*_Compare)(StringMap2 * self, String * arg1, String * arg2);
        static void (*_mark)();
    };
};

#ifdef _WIN32

StringMap2 * (*StringMap2::ptr::_New)() = (StringMap2 * (*)()) 0x0;
int (*StringMap2::ptr::_Compare)(StringMap2 * self, String * arg1, String * arg2) = (int (*)(StringMap2 * self, String * arg1, String * arg2)) 0x0;
void (*StringMap2::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

StringMap2 * (*StringMap2::ptr::_New)() = (StringMap2 * (*)()) 0x813b960;
int (*StringMap2::ptr::_Compare)(StringMap2 * self, String * arg1, String * arg2) = (int (*)(StringMap2 * self, String * arg1, String * arg2)) 0x8096a40;
void (*StringMap2::ptr::_mark)() = (void (*)()) 0x8082100;
#endif
#endif
