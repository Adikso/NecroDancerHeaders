// Generated automatically. Do not edit!
#ifndef _StringMap4_
#define _StringMap4_
class String;
#include "Map4.hpp"

class StringMap4 : public Map4  {
public:

    // Wrappers
    inline StringMap4 * _New() { return ptr::_New(); }
    inline int _Compare(String * arg1, String * arg2) { return ptr::_Compare(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static StringMap4 * (*_New)();
        static int (*_Compare)(StringMap4 * self, String * arg1, String * arg2);
        static void (*_mark)();
    };
};

#ifdef _WIN32

StringMap4 * (*StringMap4::ptr::_New)() = (StringMap4 * (*)()) 0x0;
int (*StringMap4::ptr::_Compare)(StringMap4 * self, String * arg1, String * arg2) = (int (*)(StringMap4 * self, String * arg1, String * arg2)) 0x0;
void (*StringMap4::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

StringMap4 * (*StringMap4::ptr::_New)() = (StringMap4 * (*)()) 0x8145bd0;
int (*StringMap4::ptr::_Compare)(StringMap4 * self, String * arg1, String * arg2) = (int (*)(StringMap4 * self, String * arg1, String * arg2)) 0x80969a0;
void (*StringMap4::ptr::_mark)() = (void (*)()) 0x808bb30;
#endif
#endif
