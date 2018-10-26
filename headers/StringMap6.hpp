// Generated automatically. Do not edit!
#ifndef _StringMap6_
#define _StringMap6_
class String;
#include "Map11.hpp"

class StringMap6 : public Map11  {
public:

    // Wrappers
    inline StringMap6 * _New() { return ptr::_New(); }
    inline int _Compare(String * arg1, String * arg2) { return ptr::_Compare(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static StringMap6 * (*_New)();
        static int (*_Compare)(StringMap6 * self, String * arg1, String * arg2);
        static void (*_mark)();
    };
};

#ifdef _WIN32

StringMap6 * (*StringMap6::ptr::_New)() = (StringMap6 * (*)()) 0x0;
int (*StringMap6::ptr::_Compare)(StringMap6 * self, String * arg1, String * arg2) = (int (*)(StringMap6 * self, String * arg1, String * arg2)) 0x0;
void (*StringMap6::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

StringMap6 * (*StringMap6::ptr::_New)() = (StringMap6 * (*)()) 0x819a1e0;
int (*StringMap6::ptr::_Compare)(StringMap6 * self, String * arg1, String * arg2) = (int (*)(StringMap6 * self, String * arg1, String * arg2)) 0x8096900;
void (*StringMap6::ptr::_mark)() = (void (*)()) 0x80829e0;
#endif
#endif
