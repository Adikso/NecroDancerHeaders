// Generated automatically. Do not edit!
#ifndef _Enumerator2_
#define _Enumerator2_
class List2;
class Node6;
class Sprite;
#include "Object.hpp"

class Enumerator2 : public Object  {
public:
    List2 * _list;
    Node6 * _curr;

    // Wrappers
    inline Enumerator2 * _New(List2 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator2 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual Sprite * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator2 * (*_New)(Enumerator2 * self, List2 * arg1);
        static Enumerator2 * (*_new2)();
        static bool (*_HasNext)();
        static Sprite * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Enumerator2 * (*Enumerator2::ptr::_New)(Enumerator2 * self, List2 * arg1) = (Enumerator2 * (*)(Enumerator2 * self, List2 * arg1)) 0x0;
Enumerator2 * (*Enumerator2::ptr::_new2)() = (Enumerator2 * (*)()) 0x0;
bool (*Enumerator2::ptr::_HasNext)() = (bool (*)()) 0x0;
Sprite * (*Enumerator2::ptr::_NextObject)() = (Sprite * (*)()) 0x0;
void (*Enumerator2::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Enumerator2 * (*Enumerator2::ptr::_New)(Enumerator2 * self, List2 * arg1) = (Enumerator2 * (*)(Enumerator2 * self, List2 * arg1)) 0x814b870;
Enumerator2 * (*Enumerator2::ptr::_new2)() = (Enumerator2 * (*)()) 0x814b920;
bool (*Enumerator2::ptr::_HasNext)() = (bool (*)()) 0x80949d0;
Sprite * (*Enumerator2::ptr::_NextObject)() = (Sprite * (*)()) 0x8090d40;
void (*Enumerator2::ptr::_mark)() = (void (*)()) 0x808e5d0;
#endif
#endif
