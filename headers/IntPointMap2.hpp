// Generated automatically. Do not edit!
#ifndef _IntPointMap2_
#define _IntPointMap2_
class Point;
#include "Map19.hpp"

class IntPointMap2 : public Map19  {
public:

    // Wrappers
    inline IntPointMap2 * _New() { return ptr::_New(); }
    inline int _Compare6(Point * arg1, Point * arg2) { return ptr::_Compare6(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static IntPointMap2 * (*_New)();
        static int (*_Compare6)(IntPointMap2 * self, Point * arg1, Point * arg2);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline IntPointMap2 * (*IntPointMap2::ptr::_New)() = (IntPointMap2 * (*)()) 0x0;
inline int (*IntPointMap2::ptr::_Compare6)(IntPointMap2 * self, Point * arg1, Point * arg2) = (int (*)(IntPointMap2 * self, Point * arg1, Point * arg2)) 0x0;
inline void (*IntPointMap2::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline IntPointMap2 * (*IntPointMap2::ptr::_New)() = (IntPointMap2 * (*)()) 0x81bc640;
inline int (*IntPointMap2::ptr::_Compare6)(IntPointMap2 * self, Point * arg1, Point * arg2) = (int (*)(IntPointMap2 * self, Point * arg1, Point * arg2)) 0x8087960;
inline void (*IntPointMap2::ptr::_mark)() = (void (*)()) 0x8082d40;
#endif
#endif
