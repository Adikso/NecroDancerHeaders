// Generated automatically. Do not edit!
#ifndef _Enumerator41_
#define _Enumerator41_
class PortalSeg;
class Stack6;
#include "Object.hpp"

class Enumerator41 : public Object  {
public:
    Stack6 * stack;
    int index;

    // Wrappers
    inline Enumerator41 * _New(Stack6 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator41 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual PortalSeg * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator41 * (*_New)(Enumerator41 * self, Stack6 * arg1);
        static Enumerator41 * (*_new2)();
        static bool (*_HasNext)();
        static PortalSeg * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Enumerator41 * (*Enumerator41::ptr::_New)(Enumerator41 * self, Stack6 * arg1) = (Enumerator41 * (*)(Enumerator41 * self, Stack6 * arg1)) 0x0;
Enumerator41 * (*Enumerator41::ptr::_new2)() = (Enumerator41 * (*)()) 0x0;
bool (*Enumerator41::ptr::_HasNext)() = (bool (*)()) 0x0;
PortalSeg * (*Enumerator41::ptr::_NextObject)() = (PortalSeg * (*)()) 0x0;
void (*Enumerator41::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Enumerator41 * (*Enumerator41::ptr::_New)(Enumerator41 * self, Stack6 * arg1) = (Enumerator41 * (*)(Enumerator41 * self, Stack6 * arg1)) 0x0;
Enumerator41 * (*Enumerator41::ptr::_new2)() = (Enumerator41 * (*)()) 0x81e2600;
bool (*Enumerator41::ptr::_HasNext)() = (bool (*)()) 0x80941e0;
PortalSeg * (*Enumerator41::ptr::_NextObject)() = (PortalSeg * (*)()) 0x8094170;
void (*Enumerator41::ptr::_mark)() = (void (*)()) 0x8085120;
#endif
#endif
