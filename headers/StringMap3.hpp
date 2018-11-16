// Generated automatically. Do not edit!
#ifndef _StringMap3_
#define _StringMap3_
class String;
#include "Map3.hpp"

class StringMap3 : public Map3  {
public:

    // Wrappers
    inline StringMap3 * _New() { return ptr::_New(); }
    inline int _Compare(String * arg1, String * arg2) { return ptr::_Compare(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static StringMap3 * (*_New)();
        static int (*_Compare)(StringMap3 * self, String * arg1, String * arg2);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline StringMap3 * (*StringMap3::ptr::_New)() = (StringMap3 * (*)()) 0x0;
inline int (*StringMap3::ptr::_Compare)(StringMap3 * self, String * arg1, String * arg2) = (int (*)(StringMap3 * self, String * arg1, String * arg2)) 0x0;
inline void (*StringMap3::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline StringMap3 * (*StringMap3::ptr::_New)() = (StringMap3 * (*)()) 0x8145990;
inline int (*StringMap3::ptr::_Compare)(StringMap3 * self, String * arg1, String * arg2) = (int (*)(StringMap3 * self, String * arg1, String * arg2)) 0x80969f0;
inline void (*StringMap3::ptr::_mark)() = (void (*)()) 0x80824e0;
#endif
#endif
