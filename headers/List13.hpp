// Generated automatically. Do not edit!
#ifndef _List13_
#define _List13_
template<class T> class Array;
class Enumerator32;
class Node23;
class TileObject;
#include "Object.hpp"

class List13 : public Object  {
public:
    Node23 * _head;

    // Wrappers
    List13() {
        ptr::CSTR_List13(this);
    }

    inline List13 * _New() { return ptr::_New(); }
    inline virtual Node23 * AddLast13(TileObject * data) { return ptr::AddLast13(this, data); }
    inline List13 * _new2(Array<TileObject *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator32 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List13 * (*_New)();
        static Node23 * (*AddLast13)(List13 * self, TileObject * data);
        static List13 * (*_new2)(List13 * self, Array<TileObject *> * arg1);
        static Enumerator32 * (*ObjectEnumerator)(List13 * self);
        static void (*_mark)();
        static void (*CSTR_List13)(List13 * self);
    };
};

#ifdef _WIN32

List13 * (*List13::ptr::_New)() = (List13 * (*)()) 0x0;
Node23 * (*List13::ptr::AddLast13)(List13 * self, TileObject * data) = (Node23 * (*)(List13 * self, TileObject * data)) 0x5d7690;
List13 * (*List13::ptr::_new2)(List13 * self, Array<TileObject *> * arg1) = (List13 * (*)(List13 * self, Array<TileObject *> * arg1)) 0x0;
Enumerator32 * (*List13::ptr::ObjectEnumerator)(List13 * self) = (Enumerator32 * (*)(List13 * self)) 0x5d7730;
void (*List13::ptr::_mark)() = (void (*)()) 0x0;
void (*List13::ptr::CSTR_List13)(List13 * self) = (void (*)(List13 * self)) 0x5d75c0;
#endif

#ifdef __linux__

List13 * (*List13::ptr::_New)() = (List13 * (*)()) 0x81916a0;
Node23 * (*List13::ptr::AddLast13)(List13 * self, TileObject * data) = (Node23 * (*)(List13 * self, TileObject * data)) 0x81918e0;
List13 * (*List13::ptr::_new2)(List13 * self, Array<TileObject *> * arg1) = (List13 * (*)(List13 * self, Array<TileObject *> * arg1)) 0x0;
Enumerator32 * (*List13::ptr::ObjectEnumerator)(List13 * self) = (Enumerator32 * (*)(List13 * self)) 0x80bb550;
void (*List13::ptr::_mark)() = (void (*)()) 0x808b0b0;
void (*List13::ptr::CSTR_List13)(List13 * self) = (void (*)(List13 * self)) 0x8191a20;
#endif
#endif
