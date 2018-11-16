// Generated automatically. Do not edit!
#ifndef _List19_
#define _List19_
template<class T> class Array;
class Enumerator36;
class ItemObject;
class Node29;
#include "Object.hpp"

class List19 : public Object  {
public:
    Node29 * _head;

    // Wrappers
    List19() {
        ptr::CSTR_List19(this);
    }

    inline List19 * _New() { return ptr::_New(); }
    inline virtual Node29 * AddLast19(ItemObject * data) { return ptr::AddLast19(this, data); }
    inline List19 * _new2(Array<ItemObject *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator36 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List19 * (*_New)();
        static Node29 * (*AddLast19)(List19 * self, ItemObject * data);
        static List19 * (*_new2)(List19 * self, Array<ItemObject *> * arg1);
        static Enumerator36 * (*ObjectEnumerator)(List19 * self);
        static void (*_mark)();
        static void (*CSTR_List19)(List19 * self);
    };
};

#ifdef _WIN32

inline List19 * (*List19::ptr::_New)() = (List19 * (*)()) 0x0;
inline Node29 * (*List19::ptr::AddLast19)(List19 * self, ItemObject * data) = (Node29 * (*)(List19 * self, ItemObject * data)) 0x5dd0d0;
inline List19 * (*List19::ptr::_new2)(List19 * self, Array<ItemObject *> * arg1) = (List19 * (*)(List19 * self, Array<ItemObject *> * arg1)) 0x0;
inline Enumerator36 * (*List19::ptr::ObjectEnumerator)(List19 * self) = (Enumerator36 * (*)(List19 * self)) 0x5dd170;
inline void (*List19::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List19::ptr::CSTR_List19)(List19 * self) = (void (*)(List19 * self)) 0x5dd000;
#endif

#ifdef __linux__

inline List19 * (*List19::ptr::_New)() = (List19 * (*)()) 0x81966b0;
inline Node29 * (*List19::ptr::AddLast19)(List19 * self, ItemObject * data) = (Node29 * (*)(List19 * self, ItemObject * data)) 0x81968f0;
inline List19 * (*List19::ptr::_new2)(List19 * self, Array<ItemObject *> * arg1) = (List19 * (*)(List19 * self, Array<ItemObject *> * arg1)) 0x0;
inline Enumerator36 * (*List19::ptr::ObjectEnumerator)(List19 * self) = (Enumerator36 * (*)(List19 * self)) 0x80bb840;
inline void (*List19::ptr::_mark)() = (void (*)()) 0x80880b0;
inline void (*List19::ptr::CSTR_List19)(List19 * self) = (void (*)(List19 * self)) 0x8196a30;
#endif
#endif
