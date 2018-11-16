// Generated automatically. Do not edit!
#ifndef _ExitMap_
#define _ExitMap_
class Point;
#include "Map16.hpp"

class ExitMap : public Map16  {
public:

    // Wrappers
    inline ExitMap * _New() { return ptr::_New(); }
    inline int _Compare6(Point * arg1, Point * arg2) { return ptr::_Compare6(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static ExitMap * (*_New)();
        static int (*_Compare6)(ExitMap * self, Point * arg1, Point * arg2);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline ExitMap * (*ExitMap::ptr::_New)() = (ExitMap * (*)()) 0x0;
inline int (*ExitMap::ptr::_Compare6)(ExitMap * self, Point * arg1, Point * arg2) = (int (*)(ExitMap * self, Point * arg1, Point * arg2)) 0x0;
inline void (*ExitMap::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline ExitMap * (*ExitMap::ptr::_New)() = (ExitMap * (*)()) 0x819d880;
inline int (*ExitMap::ptr::_Compare6)(ExitMap * self, Point * arg1, Point * arg2) = (int (*)(ExitMap * self, Point * arg1, Point * arg2)) 0x8087a20;
inline void (*ExitMap::ptr::_mark)() = (void (*)()) 0x8082c20;
#endif
#endif
