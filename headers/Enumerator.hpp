// Generated automatically. Do not edit!
#ifndef _Enumerator_
#define _Enumerator_
class List;
class Node2;
class XMLNode;
#include "Object.hpp"

class Enumerator : public Object  {
public:
    List * _list;
    Node2 * _curr;

    // Wrappers
    inline Enumerator * New(List * list) { return ptr::New(this, list); }
    inline Enumerator * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::HasNext(this); }
    inline virtual XMLNode * NextObject() { return ptr::NextObject(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator * (*New)(Enumerator * self, List * list);
        static Enumerator * (*_new2)();
        static bool (*HasNext)(Enumerator * self);
        static XMLNode * (*NextObject)(Enumerator * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

Enumerator * (*Enumerator::ptr::New)(Enumerator * self, List * list) = (Enumerator * (*)(Enumerator * self, List * list)) 0x4542a0;
Enumerator * (*Enumerator::ptr::_new2)() = (Enumerator * (*)()) 0x0;
bool (*Enumerator::ptr::HasNext)(Enumerator * self) = (bool (*)(Enumerator * self)) 0x454350;
XMLNode * (*Enumerator::ptr::NextObject)(Enumerator * self) = (XMLNode * (*)(Enumerator * self)) 0x4543d0;
void (*Enumerator::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Enumerator * (*Enumerator::ptr::New)(Enumerator * self, List * list) = (Enumerator * (*)(Enumerator * self, List * list)) 0x812c690;
Enumerator * (*Enumerator::ptr::_new2)() = (Enumerator * (*)()) 0x812c740;
bool (*Enumerator::ptr::HasNext)(Enumerator * self) = (bool (*)(Enumerator * self)) 0x8095250;
XMLNode * (*Enumerator::ptr::NextObject)(Enumerator * self) = (XMLNode * (*)(Enumerator * self)) 0x8094100;
void (*Enumerator::ptr::_mark)() = (void (*)()) 0x808e380;
#endif
#endif
