// Generated automatically. Do not edit!
#ifndef _StringMap_
#define _StringMap_
class String;
#include "Map.hpp"

class StringMap : public Map  {
public:

    // Wrappers
    inline StringMap * _New() { return ptr::_New(); }
    inline int Compare(String * lhs, String * rhs) { return ptr::Compare(this, lhs, rhs); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static StringMap * (*_New)();
        static int (*Compare)(StringMap * self, String * lhs, String * rhs);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline StringMap * (*StringMap::ptr::_New)() = (StringMap * (*)()) 0x0;
inline int (*StringMap::ptr::Compare)(StringMap * self, String * lhs, String * rhs) = (int (*)(StringMap * self, String * lhs, String * rhs)) 0x447270;
inline void (*StringMap::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline StringMap * (*StringMap::ptr::_New)() = (StringMap * (*)()) 0x81183a0;
inline int (*StringMap::ptr::Compare)(StringMap * self, String * lhs, String * rhs) = (int (*)(StringMap * self, String * lhs, String * rhs)) 0x8096a90;
inline void (*StringMap::ptr::_mark)() = (void (*)()) 0x808eb10;
#endif
#endif
