// Generated automatically. Do not edit!
#ifndef _Enumerator4_
#define _Enumerator4_
class FamiliarFixed;
class List7;
class Node13;
#include "Object.hpp"

class Enumerator4 : public Object  {
public:
    List7 * _list;
    Node13 * _curr;

    // Wrappers
    inline Enumerator4 * _New(List7 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator4 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual FamiliarFixed * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator4 * (*_New)(Enumerator4 * self, List7 * arg1);
        static Enumerator4 * (*_new2)();
        static bool (*_HasNext)();
        static FamiliarFixed * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Enumerator4 * (*Enumerator4::ptr::_New)(Enumerator4 * self, List7 * arg1) = (Enumerator4 * (*)(Enumerator4 * self, List7 * arg1)) 0x0;
Enumerator4 * (*Enumerator4::ptr::_new2)() = (Enumerator4 * (*)()) 0x0;
bool (*Enumerator4::ptr::_HasNext)() = (bool (*)()) 0x0;
FamiliarFixed * (*Enumerator4::ptr::_NextObject)() = (FamiliarFixed * (*)()) 0x0;
void (*Enumerator4::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Enumerator4 * (*Enumerator4::ptr::_New)(Enumerator4 * self, List7 * arg1) = (Enumerator4 * (*)(Enumerator4 * self, List7 * arg1)) 0x8159af0;
Enumerator4 * (*Enumerator4::ptr::_new2)() = (Enumerator4 * (*)()) 0x8159ba0;
bool (*Enumerator4::ptr::_HasNext)() = (bool (*)()) 0x8094430;
FamiliarFixed * (*Enumerator4::ptr::_NextObject)() = (FamiliarFixed * (*)()) 0x80943c0;
void (*Enumerator4::ptr::_mark)() = (void (*)()) 0x808ad70;
#endif
#endif
