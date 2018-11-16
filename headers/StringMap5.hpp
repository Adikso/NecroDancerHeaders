// Generated automatically. Do not edit!
#ifndef _StringMap5_
#define _StringMap5_
class String;
#include "Map7.hpp"

class StringMap5 : public Map7  {
public:

    // Wrappers
    inline StringMap5 * _New() { return ptr::_New(); }
    inline int _Compare(String * arg1, String * arg2) { return ptr::_Compare(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static StringMap5 * (*_New)();
        static int (*_Compare)(StringMap5 * self, String * arg1, String * arg2);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline StringMap5 * (*StringMap5::ptr::_New)() = (StringMap5 * (*)()) 0x0;
inline int (*StringMap5::ptr::_Compare)(StringMap5 * self, String * arg1, String * arg2) = (int (*)(StringMap5 * self, String * arg1, String * arg2)) 0x0;
inline void (*StringMap5::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline StringMap5 * (*StringMap5::ptr::_New)() = (StringMap5 * (*)()) 0x815a6c0;
inline int (*StringMap5::ptr::_Compare)(StringMap5 * self, String * arg1, String * arg2) = (int (*)(StringMap5 * self, String * arg1, String * arg2)) 0x8096950;
inline void (*StringMap5::ptr::_mark)() = (void (*)()) 0x80828e0;
#endif
#endif
