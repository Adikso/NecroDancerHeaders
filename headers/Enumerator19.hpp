// Generated automatically. Do not edit!
#ifndef _Enumerator19_
#define _Enumerator19_
class List33;
class Node50;
class Player;
#include "Object.hpp"

class Enumerator19 : public Object  {
public:
    List33 * _list;
    Node50 * _curr;

    // Wrappers
    inline Enumerator19 * _New(List33 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator19 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual Player * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator19 * (*_New)(Enumerator19 * self, List33 * arg1);
        static Enumerator19 * (*_new2)();
        static bool (*_HasNext)();
        static Player * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Enumerator19 * (*Enumerator19::ptr::_New)(Enumerator19 * self, List33 * arg1) = (Enumerator19 * (*)(Enumerator19 * self, List33 * arg1)) 0x0;
Enumerator19 * (*Enumerator19::ptr::_new2)() = (Enumerator19 * (*)()) 0x0;
bool (*Enumerator19::ptr::_HasNext)() = (bool (*)()) 0x0;
Player * (*Enumerator19::ptr::_NextObject)() = (Player * (*)()) 0x0;
void (*Enumerator19::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Enumerator19 * (*Enumerator19::ptr::_New)(Enumerator19 * self, List33 * arg1) = (Enumerator19 * (*)(Enumerator19 * self, List33 * arg1)) 0x81a9530;
Enumerator19 * (*Enumerator19::ptr::_new2)() = (Enumerator19 * (*)()) 0x81a95e0;
bool (*Enumerator19::ptr::_HasNext)() = (bool (*)()) 0x8093be0;
Player * (*Enumerator19::ptr::_NextObject)() = (Player * (*)()) 0x8093b70;
void (*Enumerator19::ptr::_mark)() = (void (*)()) 0x808df10;
#endif
#endif
