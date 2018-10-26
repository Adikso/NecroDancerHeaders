// Generated automatically. Do not edit!
#ifndef _List52_
#define _List52_
template<class T> class Array;
class Enumerator44;
class Node42;
class ReplayData;
#include "Object.hpp"

class List52 : public Object  {
public:
    Node42 * _head;

    // Wrappers
    List52() {
        ptr::CSTR_List52(this);
    }

    inline List52 * _New() { return ptr::_New(); }
    inline virtual Node42 * AddLast52(ReplayData * data) { return ptr::AddLast52(this, data); }
    inline List52 * _new2(Array<ReplayData *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual int Count() { return ptr::Count(this); }
    inline virtual Enumerator44 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual Node42 * FirstNode() { return ptr::FirstNode(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List52 * (*_New)();
        static Node42 * (*AddLast52)(List52 * self, ReplayData * data);
        static List52 * (*_new2)(List52 * self, Array<ReplayData *> * arg1);
        static int (*Count)(List52 * self);
        static Enumerator44 * (*ObjectEnumerator)(List52 * self);
        static Node42 * (*FirstNode)(List52 * self);
        static void (*_mark)();
        static void (*CSTR_List52)(List52 * self);
    };
};

#ifdef _WIN32

List52 * (*List52::ptr::_New)() = (List52 * (*)()) 0x0;
Node42 * (*List52::ptr::AddLast52)(List52 * self, ReplayData * data) = (Node42 * (*)(List52 * self, ReplayData * data)) 0x663d20;
List52 * (*List52::ptr::_new2)(List52 * self, Array<ReplayData *> * arg1) = (List52 * (*)(List52 * self, Array<ReplayData *> * arg1)) 0x0;
int (*List52::ptr::Count)(List52 * self) = (int (*)(List52 * self)) 0x663dc0;
Enumerator44 * (*List52::ptr::ObjectEnumerator)(List52 * self) = (Enumerator44 * (*)(List52 * self)) 0x663de0;
Node42 * (*List52::ptr::FirstNode)(List52 * self) = (Node42 * (*)(List52 * self)) 0x663e70;
void (*List52::ptr::_mark)() = (void (*)()) 0x0;
void (*List52::ptr::CSTR_List52)(List52 * self) = (void (*)(List52 * self)) 0x663c50;
#endif

#ifdef __linux__

List52 * (*List52::ptr::_New)() = (List52 * (*)()) 0x81d7a60;
Node42 * (*List52::ptr::AddLast52)(List52 * self, ReplayData * data) = (Node42 * (*)(List52 * self, ReplayData * data)) 0x819f2e0;
List52 * (*List52::ptr::_new2)(List52 * self, Array<ReplayData *> * arg1) = (List52 * (*)(List52 * self, Array<ReplayData *> * arg1)) 0x0;
int (*List52::ptr::Count)(List52 * self) = (int (*)(List52 * self)) 0x8077860;
Enumerator44 * (*List52::ptr::ObjectEnumerator)(List52 * self) = (Enumerator44 * (*)(List52 * self)) 0x80b8f00;
Node42 * (*List52::ptr::FirstNode)(List52 * self) = (Node42 * (*)(List52 * self)) 0x8077880;
void (*List52::ptr::_mark)() = (void (*)()) 0x808bd90;
void (*List52::ptr::CSTR_List52)(List52 * self) = (void (*)(List52 * self)) 0x81d7b90;
#endif
#endif
