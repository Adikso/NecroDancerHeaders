// Generated automatically. Do not edit!
#ifndef _Enumerator14_
#define _Enumerator14_
class List31;
class Node48;
class SaleItem;
#include "Object.hpp"

class Enumerator14 : public Object  {
public:
    List31 * _list;
    Node48 * _curr;

    // Wrappers
    inline Enumerator14 * _New(List31 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator14 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual SaleItem * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator14 * (*_New)(Enumerator14 * self, List31 * arg1);
        static Enumerator14 * (*_new2)();
        static bool (*_HasNext)();
        static SaleItem * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Enumerator14 * (*Enumerator14::ptr::_New)(Enumerator14 * self, List31 * arg1) = (Enumerator14 * (*)(Enumerator14 * self, List31 * arg1)) 0x0;
Enumerator14 * (*Enumerator14::ptr::_new2)() = (Enumerator14 * (*)()) 0x0;
bool (*Enumerator14::ptr::_HasNext)() = (bool (*)()) 0x0;
SaleItem * (*Enumerator14::ptr::_NextObject)() = (SaleItem * (*)()) 0x0;
void (*Enumerator14::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Enumerator14 * (*Enumerator14::ptr::_New)(Enumerator14 * self, List31 * arg1) = (Enumerator14 * (*)(Enumerator14 * self, List31 * arg1)) 0x81a5580;
Enumerator14 * (*Enumerator14::ptr::_new2)() = (Enumerator14 * (*)()) 0x81a5630;
bool (*Enumerator14::ptr::_HasNext)() = (bool (*)()) 0x8092700;
SaleItem * (*Enumerator14::ptr::_NextObject)() = (SaleItem * (*)()) 0x80921b0;
void (*Enumerator14::ptr::_mark)() = (void (*)()) 0x80846e0;
#endif
#endif
