// Generated automatically. Do not edit!
#ifndef _Enumerator18_
#define _Enumerator18_
class Familiar;
class List8;
class Node14;
#include "Object.hpp"

class Enumerator18 : public Object  {
public:
    List8 * _list;
    Node14 * _curr;

    // Wrappers
    inline Enumerator18 * _New(List8 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator18 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual Familiar * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator18 * (*_New)(Enumerator18 * self, List8 * arg1);
        static Enumerator18 * (*_new2)();
        static bool (*_HasNext)();
        static Familiar * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Enumerator18 * (*Enumerator18::ptr::_New)(Enumerator18 * self, List8 * arg1) = (Enumerator18 * (*)(Enumerator18 * self, List8 * arg1)) 0x0;
Enumerator18 * (*Enumerator18::ptr::_new2)() = (Enumerator18 * (*)()) 0x0;
bool (*Enumerator18::ptr::_HasNext)() = (bool (*)()) 0x0;
Familiar * (*Enumerator18::ptr::_NextObject)() = (Familiar * (*)()) 0x0;
void (*Enumerator18::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Enumerator18 * (*Enumerator18::ptr::_New)(Enumerator18 * self, List8 * arg1) = (Enumerator18 * (*)(Enumerator18 * self, List8 * arg1)) 0x81a9450;
Enumerator18 * (*Enumerator18::ptr::_new2)() = (Enumerator18 * (*)()) 0x81a9500;
bool (*Enumerator18::ptr::_HasNext)() = (bool (*)()) 0x80910b0;
Familiar * (*Enumerator18::ptr::_NextObject)() = (Familiar * (*)()) 0x8091040;
void (*Enumerator18::ptr::_mark)() = (void (*)()) 0x8085660;
#endif
#endif
