// Generated automatically. Do not edit!
#ifndef _Enumerator29_
#define _Enumerator29_
class List37;
class Node54;
class Point;
#include "Object.hpp"

class Enumerator29 : public Object  {
public:
    List37 * _list;
    Node54 * _curr;

    // Wrappers
    inline Enumerator29 * _New(List37 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator29 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual Point * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator29 * (*_New)(Enumerator29 * self, List37 * arg1);
        static Enumerator29 * (*_new2)();
        static bool (*_HasNext)();
        static Point * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Enumerator29 * (*Enumerator29::ptr::_New)(Enumerator29 * self, List37 * arg1) = (Enumerator29 * (*)(Enumerator29 * self, List37 * arg1)) 0x0;
inline Enumerator29 * (*Enumerator29::ptr::_new2)() = (Enumerator29 * (*)()) 0x0;
inline bool (*Enumerator29::ptr::_HasNext)() = (bool (*)()) 0x0;
inline Point * (*Enumerator29::ptr::_NextObject)() = (Point * (*)()) 0x0;
inline void (*Enumerator29::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Enumerator29 * (*Enumerator29::ptr::_New)(Enumerator29 * self, List37 * arg1) = (Enumerator29 * (*)(Enumerator29 * self, List37 * arg1)) 0x0;
inline Enumerator29 * (*Enumerator29::ptr::_new2)() = (Enumerator29 * (*)()) 0x81d0f50;
inline bool (*Enumerator29::ptr::_HasNext)() = (bool (*)()) 0x808f440;
inline Point * (*Enumerator29::ptr::_NextObject)() = (Point * (*)()) 0x808f3d0;
inline void (*Enumerator29::ptr::_mark)() = (void (*)()) 0x808b010;
#endif
#endif
