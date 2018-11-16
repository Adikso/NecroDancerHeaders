// Generated automatically. Do not edit!
#ifndef _StringMap7_
#define _StringMap7_
class String;
#include "Map12.hpp"

class StringMap7 : public Map12  {
public:

    // Wrappers
    inline StringMap7 * _New() { return ptr::_New(); }
    inline int _Compare(String * arg1, String * arg2) { return ptr::_Compare(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static StringMap7 * (*_New)();
        static int (*_Compare)(StringMap7 * self, String * arg1, String * arg2);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline StringMap7 * (*StringMap7::ptr::_New)() = (StringMap7 * (*)()) 0x0;
inline int (*StringMap7::ptr::_Compare)(StringMap7 * self, String * arg1, String * arg2) = (int (*)(StringMap7 * self, String * arg1, String * arg2)) 0x0;
inline void (*StringMap7::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline StringMap7 * (*StringMap7::ptr::_New)() = (StringMap7 * (*)()) 0x819a3b0;
inline int (*StringMap7::ptr::_Compare)(StringMap7 * self, String * arg1, String * arg2) = (int (*)(StringMap7 * self, String * arg1, String * arg2)) 0x80968b0;
inline void (*StringMap7::ptr::_mark)() = (void (*)()) 0x8082a40;
#endif
#endif
