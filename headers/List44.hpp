// Generated automatically. Do not edit!
#ifndef _List44_
#define _List44_
template<class T> class Array;
class Enumerator52;
class FireballData;
class NPC;
class Node64;
#include "Object.hpp"

class List44 : public Object  {
public:
    Node64 * _head;

    // Wrappers
    List44() {
        ptr::CSTR_List44(this);
    }

    inline List44 * _New() { return ptr::_New(); }
    inline virtual Node64 * _AddLast44(FireballData * arg1) { return ptr::_AddLast44(this, arg1); }
    inline List44 * _new2(Array<FireballData *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator52 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }
    inline Node64 * AddLast44(NPC * data) { return ptr::AddLast44(this, data); }

    class ptr {
    public:
        static List44 * (*_New)();
        static Node64 * (*_AddLast44)(List44 * self, FireballData * arg1);
        static List44 * (*_new2)(List44 * self, Array<FireballData *> * arg1);
        static Enumerator52 * (*ObjectEnumerator)(List44 * self);
        static void (*_mark)();
        static void (*CSTR_List44)(List44 * self);
        static Node64 * (*AddLast44)(List44 * self, NPC * data);
    };
};

#ifdef _WIN32

List44 * (*List44::ptr::_New)() = (List44 * (*)()) 0x0;
Node64 * (*List44::ptr::_AddLast44)(List44 * self, FireballData * arg1) = (Node64 * (*)(List44 * self, FireballData * arg1)) 0x0;
List44 * (*List44::ptr::_new2)(List44 * self, Array<FireballData *> * arg1) = (List44 * (*)(List44 * self, Array<FireballData *> * arg1)) 0x0;
Enumerator52 * (*List44::ptr::ObjectEnumerator)(List44 * self) = (Enumerator52 * (*)(List44 * self)) 0x633620;
void (*List44::ptr::_mark)() = (void (*)()) 0x0;
void (*List44::ptr::CSTR_List44)(List44 * self) = (void (*)(List44 * self)) 0x6334b0;
Node64 * (*List44::ptr::AddLast44)(List44 * self, NPC * data) = (Node64 * (*)(List44 * self, NPC * data)) 0x633580;
#endif

#ifdef __linux__

List44 * (*List44::ptr::_New)() = (List44 * (*)()) 0x81bc8c0;
Node64 * (*List44::ptr::_AddLast44)(List44 * self, FireballData * arg1) = (Node64 * (*)(List44 * self, FireballData * arg1)) 0x0;
List44 * (*List44::ptr::_new2)(List44 * self, Array<FireballData *> * arg1) = (List44 * (*)(List44 * self, Array<FireballData *> * arg1)) 0x0;
Enumerator52 * (*List44::ptr::ObjectEnumerator)(List44 * self) = (Enumerator52 * (*)(List44 * self)) 0x80baf00;
void (*List44::ptr::_mark)() = (void (*)()) 0x80883d0;
void (*List44::ptr::CSTR_List44)(List44 * self) = (void (*)(List44 * self)) 0x81bcc40;
Node64 * (*List44::ptr::AddLast44)(List44 * self, NPC * data) = (Node64 * (*)(List44 * self, NPC * data)) 0x81bcb00;
#endif
#endif
