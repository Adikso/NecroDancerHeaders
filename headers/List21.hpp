// Generated automatically. Do not edit!
#ifndef _List21_
#define _List21_
template<class T> class Array;
class ChestObject;
class Enumerator37;
class Node31;
#include "Object.hpp"

class List21 : public Object  {
public:
    Node31 * _head;

    // Wrappers
    List21() {
        ptr::CSTR_List21(this);
    }

    inline List21 * _New() { return ptr::_New(); }
    inline virtual Node31 * AddLast21(ChestObject * data) { return ptr::AddLast21(this, data); }
    inline List21 * _new2(Array<ChestObject *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator37 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List21 * (*_New)();
        static Node31 * (*AddLast21)(List21 * self, ChestObject * data);
        static List21 * (*_new2)(List21 * self, Array<ChestObject *> * arg1);
        static Enumerator37 * (*ObjectEnumerator)(List21 * self);
        static void (*_mark)();
        static void (*CSTR_List21)(List21 * self);
    };
};

#ifdef _WIN32

inline List21 * (*List21::ptr::_New)() = (List21 * (*)()) 0x0;
inline Node31 * (*List21::ptr::AddLast21)(List21 * self, ChestObject * data) = (Node31 * (*)(List21 * self, ChestObject * data)) 0x5ded40;
inline List21 * (*List21::ptr::_new2)(List21 * self, Array<ChestObject *> * arg1) = (List21 * (*)(List21 * self, Array<ChestObject *> * arg1)) 0x0;
inline Enumerator37 * (*List21::ptr::ObjectEnumerator)(List21 * self) = (Enumerator37 * (*)(List21 * self)) 0x5dede0;
inline void (*List21::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List21::ptr::CSTR_List21)(List21 * self) = (void (*)(List21 * self)) 0x5dec70;
#endif

#ifdef __linux__

inline List21 * (*List21::ptr::_New)() = (List21 * (*)()) 0x8197720;
inline Node31 * (*List21::ptr::AddLast21)(List21 * self, ChestObject * data) = (Node31 * (*)(List21 * self, ChestObject * data)) 0x8197960;
inline List21 * (*List21::ptr::_new2)(List21 * self, Array<ChestObject *> * arg1) = (List21 * (*)(List21 * self, Array<ChestObject *> * arg1)) 0x0;
inline Enumerator37 * (*List21::ptr::ObjectEnumerator)(List21 * self) = (Enumerator37 * (*)(List21 * self)) 0x80bb910;
inline void (*List21::ptr::_mark)() = (void (*)()) 0x80899d0;
inline void (*List21::ptr::CSTR_List21)(List21 * self) = (void (*)(List21 * self)) 0x8197aa0;
#endif
#endif
