// Generated automatically. Do not edit!
#ifndef _StringMap11_
#define _StringMap11_
class String;
#include "Map23.hpp"

class StringMap11 : public Map23  {
public:

    // Wrappers
    inline StringMap11 * _New() { return ptr::_New(); }
    inline int _Compare(String * arg1, String * arg2) { return ptr::_Compare(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static StringMap11 * (*_New)();
        static int (*_Compare)(StringMap11 * self, String * arg1, String * arg2);
        static void (*_mark)();
    };
};

#ifdef _WIN32

StringMap11 * (*StringMap11::ptr::_New)() = (StringMap11 * (*)()) 0x0;
int (*StringMap11::ptr::_Compare)(StringMap11 * self, String * arg1, String * arg2) = (int (*)(StringMap11 * self, String * arg1, String * arg2)) 0x0;
void (*StringMap11::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

StringMap11 * (*StringMap11::ptr::_New)() = (StringMap11 * (*)()) 0x81e2d70;
int (*StringMap11::ptr::_Compare)(StringMap11 * self, String * arg1, String * arg2) = (int (*)(StringMap11 * self, String * arg1, String * arg2)) 0x8096720;
void (*StringMap11::ptr::_mark)() = (void (*)()) 0x8082e60;
#endif
#endif
