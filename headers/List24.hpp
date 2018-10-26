// Generated automatically. Do not edit!
#ifndef _List24_
#define _List24_
template<class T> class Array;
class Enumerator39;
class Node34;
class ShrineObject;
#include "Object.hpp"

class List24 : public Object  {
public:
    Node34 * _head;

    // Wrappers
    List24() {
        ptr::CSTR_List24(this);
    }

    inline List24 * _New() { return ptr::_New(); }
    inline virtual Node34 * AddLast24(ShrineObject * data) { return ptr::AddLast24(this, data); }
    inline List24 * _new2(Array<ShrineObject *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator39 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List24 * (*_New)();
        static Node34 * (*AddLast24)(List24 * self, ShrineObject * data);
        static List24 * (*_new2)(List24 * self, Array<ShrineObject *> * arg1);
        static Enumerator39 * (*ObjectEnumerator)(List24 * self);
        static void (*_mark)();
        static void (*CSTR_List24)(List24 * self);
    };
};

#ifdef _WIN32

List24 * (*List24::ptr::_New)() = (List24 * (*)()) 0x0;
Node34 * (*List24::ptr::AddLast24)(List24 * self, ShrineObject * data) = (Node34 * (*)(List24 * self, ShrineObject * data)) 0x5dfc70;
List24 * (*List24::ptr::_new2)(List24 * self, Array<ShrineObject *> * arg1) = (List24 * (*)(List24 * self, Array<ShrineObject *> * arg1)) 0x0;
Enumerator39 * (*List24::ptr::ObjectEnumerator)(List24 * self) = (Enumerator39 * (*)(List24 * self)) 0x5dfd10;
void (*List24::ptr::_mark)() = (void (*)()) 0x0;
void (*List24::ptr::CSTR_List24)(List24 * self) = (void (*)(List24 * self)) 0x5dfba0;
#endif

#ifdef __linux__

List24 * (*List24::ptr::_New)() = (List24 * (*)()) 0x8199aa0;
Node34 * (*List24::ptr::AddLast24)(List24 * self, ShrineObject * data) = (Node34 * (*)(List24 * self, ShrineObject * data)) 0x8199ce0;
List24 * (*List24::ptr::_new2)(List24 * self, Array<ShrineObject *> * arg1) = (List24 * (*)(List24 * self, Array<ShrineObject *> * arg1)) 0x0;
Enumerator39 * (*List24::ptr::ObjectEnumerator)(List24 * self) = (Enumerator39 * (*)(List24 * self)) 0x80bbab0;
void (*List24::ptr::_mark)() = (void (*)()) 0x8089e10;
void (*List24::ptr::CSTR_List24)(List24 * self) = (void (*)(List24 * self)) 0x8199e20;
#endif
#endif
