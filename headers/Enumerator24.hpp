// Generated automatically. Do not edit!
#ifndef _Enumerator24_
#define _Enumerator24_
class List11;
class Node18;
class String;
#include "Object.hpp"

class Enumerator24 : public Object  {
public:
    List11 * _list;
    Node18 * _curr;

    // Wrappers
    inline Enumerator24 * _New(List11 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator24 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual String * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator24 * (*_New)(Enumerator24 * self, List11 * arg1);
        static Enumerator24 * (*_new2)();
        static bool (*_HasNext)();
        static String * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Enumerator24 * (*Enumerator24::ptr::_New)(Enumerator24 * self, List11 * arg1) = (Enumerator24 * (*)(Enumerator24 * self, List11 * arg1)) 0x0;
Enumerator24 * (*Enumerator24::ptr::_new2)() = (Enumerator24 * (*)()) 0x0;
bool (*Enumerator24::ptr::_HasNext)() = (bool (*)()) 0x0;
String * (*Enumerator24::ptr::_NextObject)() = (String * (*)()) 0x0;
void (*Enumerator24::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Enumerator24 * (*Enumerator24::ptr::_New)(Enumerator24 * self, List11 * arg1) = (Enumerator24 * (*)(Enumerator24 * self, List11 * arg1)) 0x0;
Enumerator24 * (*Enumerator24::ptr::_new2)() = (Enumerator24 * (*)()) 0x81bbe80;
bool (*Enumerator24::ptr::_HasNext)() = (bool (*)()) 0x8091860;
String * (*Enumerator24::ptr::_NextObject)() = (String * (*)()) 0x80917f0;
void (*Enumerator24::ptr::_mark)() = (void (*)()) 0x8085260;
#endif
#endif
