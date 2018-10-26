// Generated automatically. Do not edit!
#ifndef _Enumerator32_
#define _Enumerator32_
class List13;
class Node23;
class TileObject;
#include "Object.hpp"

class Enumerator32 : public Object  {
public:
    List13 * _list;
    Node23 * _curr;

    // Wrappers
    inline Enumerator32 * _New(List13 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator32 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual TileObject * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator32 * (*_New)(Enumerator32 * self, List13 * arg1);
        static Enumerator32 * (*_new2)();
        static bool (*_HasNext)();
        static TileObject * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Enumerator32 * (*Enumerator32::ptr::_New)(Enumerator32 * self, List13 * arg1) = (Enumerator32 * (*)(Enumerator32 * self, List13 * arg1)) 0x0;
Enumerator32 * (*Enumerator32::ptr::_new2)() = (Enumerator32 * (*)()) 0x0;
bool (*Enumerator32::ptr::_HasNext)() = (bool (*)()) 0x0;
TileObject * (*Enumerator32::ptr::_NextObject)() = (TileObject * (*)()) 0x0;
void (*Enumerator32::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Enumerator32 * (*Enumerator32::ptr::_New)(Enumerator32 * self, List13 * arg1) = (Enumerator32 * (*)(Enumerator32 * self, List13 * arg1)) 0x0;
Enumerator32 * (*Enumerator32::ptr::_new2)() = (Enumerator32 * (*)()) 0x81d3e70;
bool (*Enumerator32::ptr::_HasNext)() = (bool (*)()) 0x808f710;
TileObject * (*Enumerator32::ptr::_NextObject)() = (TileObject * (*)()) 0x808f6a0;
void (*Enumerator32::ptr::_mark)() = (void (*)()) 0x8088010;
#endif
#endif
