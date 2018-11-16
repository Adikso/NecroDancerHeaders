// Generated automatically. Do not edit!
#ifndef _IntPointMap3_
#define _IntPointMap3_
class Point;
#include "Map20.hpp"

class IntPointMap3 : public Map20  {
public:

    // Wrappers
    inline IntPointMap3 * _New() { return ptr::_New(); }
    inline int _Compare6(Point * arg1, Point * arg2) { return ptr::_Compare6(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static IntPointMap3 * (*_New)();
        static int (*_Compare6)(IntPointMap3 * self, Point * arg1, Point * arg2);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline IntPointMap3 * (*IntPointMap3::ptr::_New)() = (IntPointMap3 * (*)()) 0x0;
inline int (*IntPointMap3::ptr::_Compare6)(IntPointMap3 * self, Point * arg1, Point * arg2) = (int (*)(IntPointMap3 * self, Point * arg1, Point * arg2)) 0x0;
inline void (*IntPointMap3::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline IntPointMap3 * (*IntPointMap3::ptr::_New)() = (IntPointMap3 * (*)()) 0x81d5880;
inline int (*IntPointMap3::ptr::_Compare6)(IntPointMap3 * self, Point * arg1, Point * arg2) = (int (*)(IntPointMap3 * self, Point * arg1, Point * arg2)) 0x80879a0;
inline void (*IntPointMap3::ptr::_mark)() = (void (*)()) 0x808fbb0;
#endif
#endif
