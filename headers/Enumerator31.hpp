// Generated automatically. Do not edit!
#ifndef _Enumerator31_
#define _Enumerator31_
class List28;
class Node45;
class Tile;
#include "Object.hpp"

class Enumerator31 : public Object  {
public:
    List28 * _list;
    Node45 * _curr;

    // Wrappers
    inline Enumerator31 * _New(List28 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator31 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual Tile * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator31 * (*_New)(Enumerator31 * self, List28 * arg1);
        static Enumerator31 * (*_new2)();
        static bool (*_HasNext)();
        static Tile * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Enumerator31 * (*Enumerator31::ptr::_New)(Enumerator31 * self, List28 * arg1) = (Enumerator31 * (*)(Enumerator31 * self, List28 * arg1)) 0x0;
inline Enumerator31 * (*Enumerator31::ptr::_new2)() = (Enumerator31 * (*)()) 0x0;
inline bool (*Enumerator31::ptr::_HasNext)() = (bool (*)()) 0x0;
inline Tile * (*Enumerator31::ptr::_NextObject)() = (Tile * (*)()) 0x0;
inline void (*Enumerator31::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Enumerator31 * (*Enumerator31::ptr::_New)(Enumerator31 * self, List28 * arg1) = (Enumerator31 * (*)(Enumerator31 * self, List28 * arg1)) 0x0;
inline Enumerator31 * (*Enumerator31::ptr::_new2)() = (Enumerator31 * (*)()) 0x81d3d90;
inline bool (*Enumerator31::ptr::_HasNext)() = (bool (*)()) 0x808f080;
inline Tile * (*Enumerator31::ptr::_NextObject)() = (Tile * (*)()) 0x808f010;
inline void (*Enumerator31::ptr::_mark)() = (void (*)()) 0x8089070;
#endif
#endif
