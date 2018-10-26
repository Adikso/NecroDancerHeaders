// Generated automatically. Do not edit!
#ifndef _Enumerator21_
#define _Enumerator21_
class List36;
class Node53;
class TileData;
#include "Object.hpp"

class Enumerator21 : public Object  {
public:
    List36 * _list;
    Node53 * _curr;

    // Wrappers
    inline Enumerator21 * _New(List36 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator21 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual TileData * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator21 * (*_New)(Enumerator21 * self, List36 * arg1);
        static Enumerator21 * (*_new2)();
        static bool (*_HasNext)();
        static TileData * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Enumerator21 * (*Enumerator21::ptr::_New)(Enumerator21 * self, List36 * arg1) = (Enumerator21 * (*)(Enumerator21 * self, List36 * arg1)) 0x0;
Enumerator21 * (*Enumerator21::ptr::_new2)() = (Enumerator21 * (*)()) 0x0;
bool (*Enumerator21::ptr::_HasNext)() = (bool (*)()) 0x0;
TileData * (*Enumerator21::ptr::_NextObject)() = (TileData * (*)()) 0x0;
void (*Enumerator21::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Enumerator21 * (*Enumerator21::ptr::_New)(Enumerator21 * self, List36 * arg1) = (Enumerator21 * (*)(Enumerator21 * self, List36 * arg1)) 0x81ae310;
Enumerator21 * (*Enumerator21::ptr::_new2)() = (Enumerator21 * (*)()) 0x81ae3c0;
bool (*Enumerator21::ptr::_HasNext)() = (bool (*)()) 0x808ee30;
TileData * (*Enumerator21::ptr::_NextObject)() = (TileData * (*)()) 0x808eeb0;
void (*Enumerator21::ptr::_mark)() = (void (*)()) 0x8088b50;
#endif
#endif
