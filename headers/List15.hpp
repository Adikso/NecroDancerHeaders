// Generated automatically. Do not edit!
#ifndef _List15_
#define _List15_
template<class T> class Array;
class Enumerator33;
class Node25;
class TrapObject;
#include "Object.hpp"

class List15 : public Object  {
public:
    Node25 * _head;

    // Wrappers
    List15() {
        ptr::CSTR_List15(this);
    }

    inline List15 * _New() { return ptr::_New(); }
    inline virtual Node25 * AddLast15(TrapObject * data) { return ptr::AddLast15(this, data); }
    inline List15 * _new2(Array<TrapObject *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator33 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List15 * (*_New)();
        static Node25 * (*AddLast15)(List15 * self, TrapObject * data);
        static List15 * (*_new2)(List15 * self, Array<TrapObject *> * arg1);
        static Enumerator33 * (*ObjectEnumerator)(List15 * self);
        static void (*_mark)();
        static void (*CSTR_List15)(List15 * self);
    };
};

#ifdef _WIN32

List15 * (*List15::ptr::_New)() = (List15 * (*)()) 0x0;
Node25 * (*List15::ptr::AddLast15)(List15 * self, TrapObject * data) = (Node25 * (*)(List15 * self, TrapObject * data)) 0x5db700;
List15 * (*List15::ptr::_new2)(List15 * self, Array<TrapObject *> * arg1) = (List15 * (*)(List15 * self, Array<TrapObject *> * arg1)) 0x0;
Enumerator33 * (*List15::ptr::ObjectEnumerator)(List15 * self) = (Enumerator33 * (*)(List15 * self)) 0x5db7a0;
void (*List15::ptr::_mark)() = (void (*)()) 0x0;
void (*List15::ptr::CSTR_List15)(List15 * self) = (void (*)(List15 * self)) 0x5db630;
#endif

#ifdef __linux__

List15 * (*List15::ptr::_New)() = (List15 * (*)()) 0x8194320;
Node25 * (*List15::ptr::AddLast15)(List15 * self, TrapObject * data) = (Node25 * (*)(List15 * self, TrapObject * data)) 0x8194560;
List15 * (*List15::ptr::_new2)(List15 * self, Array<TrapObject *> * arg1) = (List15 * (*)(List15 * self, Array<TrapObject *> * arg1)) 0x0;
Enumerator33 * (*List15::ptr::ObjectEnumerator)(List15 * self) = (Enumerator33 * (*)(List15 * self)) 0x80bb620;
void (*List15::ptr::_mark)() = (void (*)()) 0x808acb0;
void (*List15::ptr::CSTR_List15)(List15 * self) = (void (*)(List15 * self)) 0x81946a0;
#endif
#endif
