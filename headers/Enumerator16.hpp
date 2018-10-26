// Generated automatically. Do not edit!
#ifndef _Enumerator16_
#define _Enumerator16_
class List33;
class Node50;
class Player;
#include "Object.hpp"

class Enumerator16 : public Object  {
public:
    List33 * _list;
    Node50 * _curr;

    // Wrappers
    inline Enumerator16 * _New(List33 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator16 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual Player * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator16 * (*_New)(Enumerator16 * self, List33 * arg1);
        static Enumerator16 * (*_new2)();
        static bool (*_HasNext)();
        static Player * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Enumerator16 * (*Enumerator16::ptr::_New)(Enumerator16 * self, List33 * arg1) = (Enumerator16 * (*)(Enumerator16 * self, List33 * arg1)) 0x0;
Enumerator16 * (*Enumerator16::ptr::_new2)() = (Enumerator16 * (*)()) 0x0;
bool (*Enumerator16::ptr::_HasNext)() = (bool (*)()) 0x0;
Player * (*Enumerator16::ptr::_NextObject)() = (Player * (*)()) 0x0;
void (*Enumerator16::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Enumerator16 * (*Enumerator16::ptr::_New)(Enumerator16 * self, List33 * arg1) = (Enumerator16 * (*)(Enumerator16 * self, List33 * arg1)) 0x0;
Enumerator16 * (*Enumerator16::ptr::_new2)() = (Enumerator16 * (*)()) 0x81a7b60;
bool (*Enumerator16::ptr::_HasNext)() = (bool (*)()) 0x8091b30;
Player * (*Enumerator16::ptr::_NextObject)() = (Player * (*)()) 0x8091bb0;
void (*Enumerator16::ptr::_mark)() = (void (*)()) 0x8086e50;
#endif
#endif
