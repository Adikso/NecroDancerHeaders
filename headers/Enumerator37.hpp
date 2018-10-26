// Generated automatically. Do not edit!
#ifndef _Enumerator37_
#define _Enumerator37_
class ChestObject;
class List21;
class Node31;
#include "Object.hpp"

class Enumerator37 : public Object  {
public:
    List21 * _list;
    Node31 * _curr;

    // Wrappers
    inline Enumerator37 * _New(List21 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator37 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual ChestObject * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator37 * (*_New)(Enumerator37 * self, List21 * arg1);
        static Enumerator37 * (*_new2)();
        static bool (*_HasNext)();
        static ChestObject * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Enumerator37 * (*Enumerator37::ptr::_New)(Enumerator37 * self, List21 * arg1) = (Enumerator37 * (*)(Enumerator37 * self, List21 * arg1)) 0x0;
Enumerator37 * (*Enumerator37::ptr::_new2)() = (Enumerator37 * (*)()) 0x0;
bool (*Enumerator37::ptr::_HasNext)() = (bool (*)()) 0x0;
ChestObject * (*Enumerator37::ptr::_NextObject)() = (ChestObject * (*)()) 0x0;
void (*Enumerator37::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Enumerator37 * (*Enumerator37::ptr::_New)(Enumerator37 * self, List21 * arg1) = (Enumerator37 * (*)(Enumerator37 * self, List21 * arg1)) 0x0;
Enumerator37 * (*Enumerator37::ptr::_new2)() = (Enumerator37 * (*)()) 0x81d7f40;
bool (*Enumerator37::ptr::_HasNext)() = (bool (*)()) 0x80937d0;
ChestObject * (*Enumerator37::ptr::_NextObject)() = (ChestObject * (*)()) 0x8093760;
void (*Enumerator37::ptr::_mark)() = (void (*)()) 0x808bdf0;
#endif
#endif
