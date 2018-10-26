// Generated automatically. Do not edit!
#ifndef _Enumerator3_
#define _Enumerator3_
template<class T> class Array;
class List3;
class Node7;
#include "Object.hpp"

class Enumerator3 : public Object  {
public:
    List3 * _list;
    Node7 * _curr;

    // Wrappers
    inline Enumerator3 * _New(List3 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator3 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual Array<int> * NextObject() { return ptr::NextObject(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator3 * (*_New)(Enumerator3 * self, List3 * arg1);
        static Enumerator3 * (*_new2)();
        static bool (*_HasNext)();
        static Array<int> * (*NextObject)(Enumerator3 * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

Enumerator3 * (*Enumerator3::ptr::_New)(Enumerator3 * self, List3 * arg1) = (Enumerator3 * (*)(Enumerator3 * self, List3 * arg1)) 0x0;
Enumerator3 * (*Enumerator3::ptr::_new2)() = (Enumerator3 * (*)()) 0x0;
bool (*Enumerator3::ptr::_HasNext)() = (bool (*)()) 0x0;
Array<int> * (*Enumerator3::ptr::NextObject)(Enumerator3 * self) = (Array<int> * (*)(Enumerator3 * self)) 0x5422b0;
void (*Enumerator3::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Enumerator3 * (*Enumerator3::ptr::_New)(Enumerator3 * self, List3 * arg1) = (Enumerator3 * (*)(Enumerator3 * self, List3 * arg1)) 0x814c080;
Enumerator3 * (*Enumerator3::ptr::_new2)() = (Enumerator3 * (*)()) 0x814c130;
bool (*Enumerator3::ptr::_HasNext)() = (bool (*)()) 0x8093a00;
Array<int> * (*Enumerator3::ptr::NextObject)(Enumerator3 * self) = (Array<int> * (*)(Enumerator3 * self)) 0x8093980;
void (*Enumerator3::ptr::_mark)() = (void (*)()) 0x808e2e0;
#endif
#endif
