// Generated automatically. Do not edit!
#ifndef _List23_
#define _List23_
template<class T> class Array;
class Enumerator37;
class Node33;
class Shrine;
class ShrineObject;
#include "Object.hpp"

class List23 : public Object  {
public:
    Node33 * _head;

    // Wrappers
    List23() {
        ptr::CSTR_List23(this);
    }

    inline List23 * _New() { return ptr::_New(); }
    inline virtual Node33 * _AddLast23(ShrineObject * arg1) { return ptr::_AddLast23(this, arg1); }
    inline List23 * _new2(Array<ShrineObject *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator37 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }
    inline Node33 * AddLast23(Shrine * data) { return ptr::AddLast23(this, data); }

    class ptr {
    public:
        static List23 * (*_New)();
        static Node33 * (*_AddLast23)(List23 * self, ShrineObject * arg1);
        static List23 * (*_new2)(List23 * self, Array<ShrineObject *> * arg1);
        static Enumerator37 * (*ObjectEnumerator)(List23 * self);
        static void (*_mark)();
        static void (*CSTR_List23)(List23 * self);
        static Node33 * (*AddLast23)(List23 * self, Shrine * data);
    };
};

#ifdef _WIN32

inline List23 * (*List23::ptr::_New)() = (List23 * (*)()) 0x0;
inline Node33 * (*List23::ptr::_AddLast23)(List23 * self, ShrineObject * arg1) = (Node33 * (*)(List23 * self, ShrineObject * arg1)) 0x0;
inline List23 * (*List23::ptr::_new2)(List23 * self, Array<ShrineObject *> * arg1) = (List23 * (*)(List23 * self, Array<ShrineObject *> * arg1)) 0x0;
inline Enumerator37 * (*List23::ptr::ObjectEnumerator)(List23 * self) = (Enumerator37 * (*)(List23 * self)) 0x5df780;
inline void (*List23::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List23::ptr::CSTR_List23)(List23 * self) = (void (*)(List23 * self)) 0x5df610;
inline Node33 * (*List23::ptr::AddLast23)(List23 * self, Shrine * data) = (Node33 * (*)(List23 * self, Shrine * data)) 0x5df6e0;
#endif

#ifdef __linux__

inline List23 * (*List23::ptr::_New)() = (List23 * (*)()) 0x8198250;
inline Node33 * (*List23::ptr::_AddLast23)(List23 * self, ShrineObject * arg1) = (Node33 * (*)(List23 * self, ShrineObject * arg1)) 0x0;
inline List23 * (*List23::ptr::_new2)(List23 * self, Array<ShrineObject *> * arg1) = (List23 * (*)(List23 * self, Array<ShrineObject *> * arg1)) 0x0;
inline Enumerator37 * (*List23::ptr::ObjectEnumerator)(List23 * self) = (Enumerator37 * (*)(List23 * self)) 0x80b8430;
inline void (*List23::ptr::_mark)() = (void (*)()) 0x808e760;
inline void (*List23::ptr::CSTR_List23)(List23 * self) = (void (*)(List23 * self)) 0x81985d0;
inline Node33 * (*List23::ptr::AddLast23)(List23 * self, Shrine * data) = (Node33 * (*)(List23 * self, Shrine * data)) 0x8198490;
#endif
#endif
