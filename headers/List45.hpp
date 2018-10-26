// Generated automatically. Do not edit!
#ifndef _List45_
#define _List45_
template<class T> class Array;
class Enumerator53;
class FireballData;
class Node65;
#include "Object.hpp"

class List45 : public Object  {
public:
    Node65 * _head;

    // Wrappers
    List45() {
        ptr::CSTR_List45(this);
    }

    inline List45 * _New() { return ptr::_New(); }
    inline virtual Node65 * AddLast45(FireballData * data) { return ptr::AddLast45(this, data); }
    inline List45 * _new2(Array<FireballData *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator53 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List45 * (*_New)();
        static Node65 * (*AddLast45)(List45 * self, FireballData * data);
        static List45 * (*_new2)(List45 * self, Array<FireballData *> * arg1);
        static Enumerator53 * (*ObjectEnumerator)(List45 * self);
        static void (*_mark)();
        static void (*CSTR_List45)(List45 * self);
    };
};

#ifdef _WIN32

List45 * (*List45::ptr::_New)() = (List45 * (*)()) 0x0;
Node65 * (*List45::ptr::AddLast45)(List45 * self, FireballData * data) = (Node65 * (*)(List45 * self, FireballData * data)) 0x636c90;
List45 * (*List45::ptr::_new2)(List45 * self, Array<FireballData *> * arg1) = (List45 * (*)(List45 * self, Array<FireballData *> * arg1)) 0x0;
Enumerator53 * (*List45::ptr::ObjectEnumerator)(List45 * self) = (Enumerator53 * (*)(List45 * self)) 0x636d30;
void (*List45::ptr::_mark)() = (void (*)()) 0x0;
void (*List45::ptr::CSTR_List45)(List45 * self) = (void (*)(List45 * self)) 0x636bc0;
#endif

#ifdef __linux__

List45 * (*List45::ptr::_New)() = (List45 * (*)()) 0x81bd9a0;
Node65 * (*List45::ptr::AddLast45)(List45 * self, FireballData * data) = (Node65 * (*)(List45 * self, FireballData * data)) 0x81bdbe0;
List45 * (*List45::ptr::_new2)(List45 * self, Array<FireballData *> * arg1) = (List45 * (*)(List45 * self, Array<FireballData *> * arg1)) 0x0;
Enumerator53 * (*List45::ptr::ObjectEnumerator)(List45 * self) = (Enumerator53 * (*)(List45 * self)) 0x80bcab0;
void (*List45::ptr::_mark)() = (void (*)()) 0x8088730;
void (*List45::ptr::CSTR_List45)(List45 * self) = (void (*)(List45 * self)) 0x81bdd20;
#endif
#endif
