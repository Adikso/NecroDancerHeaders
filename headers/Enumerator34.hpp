// Generated automatically. Do not edit!
#ifndef _Enumerator34_
#define _Enumerator34_
class Stack3;
class String;
#include "Object.hpp"

class Enumerator34 : public Object  {
public:
    Stack3 * stack;
    int index;

    // Wrappers
    inline Enumerator34 * _New(Stack3 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator34 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual String * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator34 * (*_New)(Enumerator34 * self, Stack3 * arg1);
        static Enumerator34 * (*_new2)();
        static bool (*_HasNext)();
        static String * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Enumerator34 * (*Enumerator34::ptr::_New)(Enumerator34 * self, Stack3 * arg1) = (Enumerator34 * (*)(Enumerator34 * self, Stack3 * arg1)) 0x0;
Enumerator34 * (*Enumerator34::ptr::_new2)() = (Enumerator34 * (*)()) 0x0;
bool (*Enumerator34::ptr::_HasNext)() = (bool (*)()) 0x0;
String * (*Enumerator34::ptr::_NextObject)() = (String * (*)()) 0x0;
void (*Enumerator34::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Enumerator34 * (*Enumerator34::ptr::_New)(Enumerator34 * self, Stack3 * arg1) = (Enumerator34 * (*)(Enumerator34 * self, Stack3 * arg1)) 0x0;
Enumerator34 * (*Enumerator34::ptr::_new2)() = (Enumerator34 * (*)()) 0x81d4030;
bool (*Enumerator34::ptr::_HasNext)() = (bool (*)()) 0x808ef90;
String * (*Enumerator34::ptr::_NextObject)() = (String * (*)()) 0x808ef20;
void (*Enumerator34::ptr::_mark)() = (void (*)()) 0x8089670;
#endif
#endif
