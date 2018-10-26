// Generated automatically. Do not edit!
#ifndef _Enumerator20_
#define _Enumerator20_
class List25;
class Node39;
class WeaponPoint;
#include "Object.hpp"

class Enumerator20 : public Object  {
public:
    List25 * _list;
    Node39 * _curr;

    // Wrappers
    inline Enumerator20 * _New(List25 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator20 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual WeaponPoint * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator20 * (*_New)(Enumerator20 * self, List25 * arg1);
        static Enumerator20 * (*_new2)();
        static bool (*_HasNext)();
        static WeaponPoint * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Enumerator20 * (*Enumerator20::ptr::_New)(Enumerator20 * self, List25 * arg1) = (Enumerator20 * (*)(Enumerator20 * self, List25 * arg1)) 0x0;
Enumerator20 * (*Enumerator20::ptr::_new2)() = (Enumerator20 * (*)()) 0x0;
bool (*Enumerator20::ptr::_HasNext)() = (bool (*)()) 0x0;
WeaponPoint * (*Enumerator20::ptr::_NextObject)() = (WeaponPoint * (*)()) 0x0;
void (*Enumerator20::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Enumerator20 * (*Enumerator20::ptr::_New)(Enumerator20 * self, List25 * arg1) = (Enumerator20 * (*)(Enumerator20 * self, List25 * arg1)) 0x81a9610;
Enumerator20 * (*Enumerator20::ptr::_new2)() = (Enumerator20 * (*)()) 0x81a96c0;
bool (*Enumerator20::ptr::_HasNext)() = (bool (*)()) 0x808f620;
WeaponPoint * (*Enumerator20::ptr::_NextObject)() = (WeaponPoint * (*)()) 0x808f5b0;
void (*Enumerator20::ptr::_mark)() = (void (*)()) 0x8089bd0;
#endif
#endif
