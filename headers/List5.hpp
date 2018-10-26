// Generated automatically. Do not edit!
#ifndef _List5_
#define _List5_
template<class T> class Array;
class Enumerator16;
class Node11;
class RenderableObject;
#include "Object.hpp"

class List5 : public Object  {
public:
    Node11 * _head;

    // Wrappers
    List5() {
        ptr::CSTR_List5(this);
    }

    inline List5 * _New() { return ptr::_New(); }
    inline virtual Node11 * AddLast5(RenderableObject * data) { return ptr::AddLast5(this, data); }
    inline List5 * _new2(Array<RenderableObject *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual bool _Equals(RenderableObject * arg1, RenderableObject * arg2) { return ptr::_Equals(this, arg1, arg2); }
    inline virtual int RemoveEach(RenderableObject * arg1) { return ptr::_RemoveEach(this, arg1); }
    inline virtual Enumerator16 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List5 * (*_New)();
        static Node11 * (*AddLast5)(List5 * self, RenderableObject * data);
        static List5 * (*_new2)(List5 * self, Array<RenderableObject *> * arg1);
        static bool (*_Equals)(List5 * self, RenderableObject * arg1, RenderableObject * arg2);
        static int (*_RemoveEach)(List5 * self, RenderableObject * arg1);
        static Enumerator16 * (*ObjectEnumerator)(List5 * self);
        static void (*_mark)();
        static void (*CSTR_List5)(List5 * self);
    };
};

#ifdef _WIN32

List5 * (*List5::ptr::_New)() = (List5 * (*)()) 0x0;
Node11 * (*List5::ptr::AddLast5)(List5 * self, RenderableObject * data) = (Node11 * (*)(List5 * self, RenderableObject * data)) 0x57e6a0;
List5 * (*List5::ptr::_new2)(List5 * self, Array<RenderableObject *> * arg1) = (List5 * (*)(List5 * self, Array<RenderableObject *> * arg1)) 0x0;
bool (*List5::ptr::_Equals)(List5 * self, RenderableObject * arg1, RenderableObject * arg2) = (bool (*)(List5 * self, RenderableObject * arg1, RenderableObject * arg2)) 0x0;
int (*List5::ptr::_RemoveEach)(List5 * self, RenderableObject * arg1) = (int (*)(List5 * self, RenderableObject * arg1)) 0x0;
Enumerator16 * (*List5::ptr::ObjectEnumerator)(List5 * self) = (Enumerator16 * (*)(List5 * self)) 0x57e780;
void (*List5::ptr::_mark)() = (void (*)()) 0x0;
void (*List5::ptr::CSTR_List5)(List5 * self) = (void (*)(List5 * self)) 0x57e5d0;
#endif

#ifdef __linux__

List5 * (*List5::ptr::_New)() = (List5 * (*)()) 0x81583f0;
Node11 * (*List5::ptr::AddLast5)(List5 * self, RenderableObject * data) = (Node11 * (*)(List5 * self, RenderableObject * data)) 0x8158630;
List5 * (*List5::ptr::_new2)(List5 * self, Array<RenderableObject *> * arg1) = (List5 * (*)(List5 * self, Array<RenderableObject *> * arg1)) 0x0;
bool (*List5::ptr::_Equals)(List5 * self, RenderableObject * arg1, RenderableObject * arg2) = (bool (*)(List5 * self, RenderableObject * arg1, RenderableObject * arg2)) 0x0;
int (*List5::ptr::_RemoveEach)(List5 * self, RenderableObject * arg1) = (int (*)(List5 * self, RenderableObject * arg1)) 0x0;
Enumerator16 * (*List5::ptr::ObjectEnumerator)(List5 * self) = (Enumerator16 * (*)(List5 * self)) 0x80b9650;
void (*List5::ptr::_mark)() = (void (*)()) 0x808a9b0;
void (*List5::ptr::CSTR_List5)(List5 * self) = (void (*)(List5 * self)) 0x8158770;
#endif
#endif
