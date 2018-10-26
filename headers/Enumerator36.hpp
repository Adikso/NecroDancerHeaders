// Generated automatically. Do not edit!
#ifndef _Enumerator36_
#define _Enumerator36_
class ItemObject;
class List19;
class Node29;
#include "Object.hpp"

class Enumerator36 : public Object  {
public:
    List19 * _list;
    Node29 * _curr;

    // Wrappers
    inline Enumerator36 * _New(List19 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator36 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual ItemObject * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator36 * (*_New)(Enumerator36 * self, List19 * arg1);
        static Enumerator36 * (*_new2)();
        static bool (*_HasNext)();
        static ItemObject * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Enumerator36 * (*Enumerator36::ptr::_New)(Enumerator36 * self, List19 * arg1) = (Enumerator36 * (*)(Enumerator36 * self, List19 * arg1)) 0x0;
Enumerator36 * (*Enumerator36::ptr::_new2)() = (Enumerator36 * (*)()) 0x0;
bool (*Enumerator36::ptr::_HasNext)() = (bool (*)()) 0x0;
ItemObject * (*Enumerator36::ptr::_NextObject)() = (ItemObject * (*)()) 0x0;
void (*Enumerator36::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Enumerator36 * (*Enumerator36::ptr::_New)(Enumerator36 * self, List19 * arg1) = (Enumerator36 * (*)(Enumerator36 * self, List19 * arg1)) 0x0;
Enumerator36 * (*Enumerator36::ptr::_new2)() = (Enumerator36 * (*)()) 0x81d5cb0;
bool (*Enumerator36::ptr::_HasNext)() = (bool (*)()) 0x8093cd0;
ItemObject * (*Enumerator36::ptr::_NextObject)() = (ItemObject * (*)()) 0x8093c60;
void (*Enumerator36::ptr::_mark)() = (void (*)()) 0x80848c0;
#endif
#endif
