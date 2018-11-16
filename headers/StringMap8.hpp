// Generated automatically. Do not edit!
#ifndef _StringMap8_
#define _StringMap8_
class String;
#include "Map13.hpp"

class StringMap8 : public Map13  {
public:

    // Wrappers
    inline StringMap8 * _New() { return ptr::_New(); }
    inline int _Compare(String * arg1, String * arg2) { return ptr::_Compare(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static StringMap8 * (*_New)();
        static int (*_Compare)(StringMap8 * self, String * arg1, String * arg2);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline StringMap8 * (*StringMap8::ptr::_New)() = (StringMap8 * (*)()) 0x0;
inline int (*StringMap8::ptr::_Compare)(StringMap8 * self, String * arg1, String * arg2) = (int (*)(StringMap8 * self, String * arg1, String * arg2)) 0x0;
inline void (*StringMap8::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline StringMap8 * (*StringMap8::ptr::_New)() = (StringMap8 * (*)()) 0x819a660;
inline int (*StringMap8::ptr::_Compare)(StringMap8 * self, String * arg1, String * arg2) = (int (*)(StringMap8 * self, String * arg1, String * arg2)) 0x8096860;
inline void (*StringMap8::ptr::_mark)() = (void (*)()) 0x8082aa0;
#endif
#endif
