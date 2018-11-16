// Generated automatically. Do not edit!
#ifndef _IntPointList_
#define _IntPointList_
class Point;
#include "List37.hpp"

class IntPointList : public List37  {
public:

    // Wrappers
    inline IntPointList * _New() { return ptr::_New(); }
    inline bool Equals23(Point * a, Point * b) { return ptr::Equals23(this, a, b); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static IntPointList * (*_New)();
        static bool (*Equals23)(IntPointList * self, Point * a, Point * b);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline IntPointList * (*IntPointList::ptr::_New)() = (IntPointList * (*)()) 0x0;
inline bool (*IntPointList::ptr::Equals23)(IntPointList * self, Point * a, Point * b) = (bool (*)(IntPointList * self, Point * a, Point * b)) 0x65cca0;
inline void (*IntPointList::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline IntPointList * (*IntPointList::ptr::_New)() = (IntPointList * (*)()) 0x81d33b0;
inline bool (*IntPointList::ptr::Equals23)(IntPointList * self, Point * a, Point * b) = (bool (*)(IntPointList * self, Point * a, Point * b)) 0x8076720;
inline void (*IntPointList::ptr::_mark)() = (void (*)()) 0x80901b0;
#endif
#endif
