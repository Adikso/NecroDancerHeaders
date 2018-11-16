// Generated automatically. Do not edit!
#ifndef _IntPointMap_
#define _IntPointMap_
class Point;
#include "Map18.hpp"

class IntPointMap : public Map18  {
public:

    // Wrappers
    IntPointMap() {
        ptr::CSTR_IntPointMap(this);
    }

    inline IntPointMap * _New() { return ptr::_New(); }
    inline int Compare6(Point * a, Point * b) { return ptr::Compare6(this, a, b); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static IntPointMap * (*_New)();
        static int (*Compare6)(IntPointMap * self, Point * a, Point * b);
        static void (*_mark)();
        static void (*CSTR_IntPointMap)(IntPointMap * self);
    };
};

#ifdef _WIN32

inline IntPointMap * (*IntPointMap::ptr::_New)() = (IntPointMap * (*)()) 0x0;
inline int (*IntPointMap::ptr::Compare6)(IntPointMap * self, Point * a, Point * b) = (int (*)(IntPointMap * self, Point * a, Point * b)) 0x5f3540;
inline void (*IntPointMap::ptr::_mark)() = (void (*)()) 0x0;
inline void (*IntPointMap::ptr::CSTR_IntPointMap)(IntPointMap * self) = (void (*)(IntPointMap * self)) 0x630e90;
#endif

#ifdef __linux__

inline IntPointMap * (*IntPointMap::ptr::_New)() = (IntPointMap * (*)()) 0x81ba1f0;
inline int (*IntPointMap::ptr::Compare6)(IntPointMap * self, Point * a, Point * b) = (int (*)(IntPointMap * self, Point * a, Point * b)) 0x80879e0;
inline void (*IntPointMap::ptr::_mark)() = (void (*)()) 0x8082ce0;
inline void (*IntPointMap::ptr::CSTR_IntPointMap)(IntPointMap * self) = (void (*)(IntPointMap * self)) 0x81ba1d0;
#endif
#endif
