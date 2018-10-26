// Generated automatically. Do not edit!
#ifndef _Enumerator46_
#define _Enumerator46_
class Stack11;
class XMLNode;
#include "Object.hpp"

class Enumerator46 : public Object  {
public:
    Stack11 * stack;
    int index;

    // Wrappers
    inline Enumerator46 * _New(Stack11 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator46 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual XMLNode * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator46 * (*_New)(Enumerator46 * self, Stack11 * arg1);
        static Enumerator46 * (*_new2)();
        static bool (*_HasNext)();
        static XMLNode * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Enumerator46 * (*Enumerator46::ptr::_New)(Enumerator46 * self, Stack11 * arg1) = (Enumerator46 * (*)(Enumerator46 * self, Stack11 * arg1)) 0x0;
Enumerator46 * (*Enumerator46::ptr::_new2)() = (Enumerator46 * (*)()) 0x0;
bool (*Enumerator46::ptr::_HasNext)() = (bool (*)()) 0x0;
XMLNode * (*Enumerator46::ptr::_NextObject)() = (XMLNode * (*)()) 0x0;
void (*Enumerator46::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Enumerator46 * (*Enumerator46::ptr::_New)(Enumerator46 * self, Stack11 * arg1) = (Enumerator46 * (*)(Enumerator46 * self, Stack11 * arg1)) 0x0;
Enumerator46 * (*Enumerator46::ptr::_new2)() = (Enumerator46 * (*)()) 0x81e4550;
bool (*Enumerator46::ptr::_HasNext)() = (bool (*)()) 0x8093a80;
XMLNode * (*Enumerator46::ptr::_NextObject)() = (XMLNode * (*)()) 0x8093b00;
void (*Enumerator46::ptr::_mark)() = (void (*)()) 0x8088630;
#endif
#endif
