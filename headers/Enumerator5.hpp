// Generated automatically. Do not edit!
#ifndef _Enumerator5_
#define _Enumerator5_
class Flyaway;
class List12;
class Node19;
#include "Object.hpp"

class Enumerator5 : public Object  {
public:
    List12 * _list;
    Node19 * _curr;

    // Wrappers
    inline Enumerator5 * _New(List12 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator5 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual Flyaway * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator5 * (*_New)(Enumerator5 * self, List12 * arg1);
        static Enumerator5 * (*_new2)();
        static bool (*_HasNext)();
        static Flyaway * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Enumerator5 * (*Enumerator5::ptr::_New)(Enumerator5 * self, List12 * arg1) = (Enumerator5 * (*)(Enumerator5 * self, List12 * arg1)) 0x0;
Enumerator5 * (*Enumerator5::ptr::_new2)() = (Enumerator5 * (*)()) 0x0;
bool (*Enumerator5::ptr::_HasNext)() = (bool (*)()) 0x0;
Flyaway * (*Enumerator5::ptr::_NextObject)() = (Flyaway * (*)()) 0x0;
void (*Enumerator5::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Enumerator5 * (*Enumerator5::ptr::_New)(Enumerator5 * self, List12 * arg1) = (Enumerator5 * (*)(Enumerator5 * self, List12 * arg1)) 0x0;
Enumerator5 * (*Enumerator5::ptr::_new2)() = (Enumerator5 * (*)()) 0x81873a0;
bool (*Enumerator5::ptr::_HasNext)() = (bool (*)()) 0x8095070;
Flyaway * (*Enumerator5::ptr::_NextObject)() = (Flyaway * (*)()) 0x8095000;
void (*Enumerator5::ptr::_mark)() = (void (*)()) 0x808e9b0;
#endif
#endif
