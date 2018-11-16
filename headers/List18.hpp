// Generated automatically. Do not edit!
#ifndef _List18_
#define _List18_
template<class T> class Array;
class Enumerator34;
class Item;
class ItemObject;
class Node28;
#include "Object.hpp"

class List18 : public Object  {
public:
    Node28 * _head;

    // Wrappers
    List18() {
        ptr::CSTR_List18(this);
    }

    inline List18 * _New() { return ptr::_New(); }
    inline virtual Node28 * _AddLast18(ItemObject * arg1) { return ptr::_AddLast18(this, arg1); }
    inline List18 * _new2(Array<ItemObject *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator34 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }
    inline Node28 * AddLast18(Item * data) { return ptr::AddLast18(this, data); }
    inline Array<Item *> * ToArray() { return ptr::ToArray(this); }

    class ptr {
    public:
        static List18 * (*_New)();
        static Node28 * (*_AddLast18)(List18 * self, ItemObject * arg1);
        static List18 * (*_new2)(List18 * self, Array<ItemObject *> * arg1);
        static Enumerator34 * (*ObjectEnumerator)(List18 * self);
        static void (*_mark)();
        static void (*CSTR_List18)(List18 * self);
        static Node28 * (*AddLast18)(List18 * self, Item * data);
        static Array<Item *> * (*ToArray)(List18 * self);
    };
};

#ifdef _WIN32

inline List18 * (*List18::ptr::_New)() = (List18 * (*)()) 0x0;
inline Node28 * (*List18::ptr::_AddLast18)(List18 * self, ItemObject * arg1) = (Node28 * (*)(List18 * self, ItemObject * arg1)) 0x0;
inline List18 * (*List18::ptr::_new2)(List18 * self, Array<ItemObject *> * arg1) = (List18 * (*)(List18 * self, Array<ItemObject *> * arg1)) 0x0;
inline Enumerator34 * (*List18::ptr::ObjectEnumerator)(List18 * self) = (Enumerator34 * (*)(List18 * self)) 0x5dc6e0;
inline void (*List18::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List18::ptr::CSTR_List18)(List18 * self) = (void (*)(List18 * self)) 0x5dc570;
inline Node28 * (*List18::ptr::AddLast18)(List18 * self, Item * data) = (Node28 * (*)(List18 * self, Item * data)) 0x5dc640;
inline Array<Item *> * (*List18::ptr::ToArray)(List18 * self) = (Array<Item *> * (*)(List18 * self)) 0x5dc770;
#endif

#ifdef __linux__

inline List18 * (*List18::ptr::_New)() = (List18 * (*)()) 0x8195520;
inline Node28 * (*List18::ptr::_AddLast18)(List18 * self, ItemObject * arg1) = (Node28 * (*)(List18 * self, ItemObject * arg1)) 0x0;
inline List18 * (*List18::ptr::_new2)(List18 * self, Array<ItemObject *> * arg1) = (List18 * (*)(List18 * self, Array<ItemObject *> * arg1)) 0x0;
inline Enumerator34 * (*List18::ptr::ObjectEnumerator)(List18 * self) = (Enumerator34 * (*)(List18 * self)) 0x80b8290;
inline void (*List18::ptr::_mark)() = (void (*)()) 0x8088110;
inline void (*List18::ptr::CSTR_List18)(List18 * self) = (void (*)(List18 * self)) 0x81958a0;
inline Node28 * (*List18::ptr::AddLast18)(List18 * self, Item * data) = (Node28 * (*)(List18 * self, Item * data)) 0x8195760;
inline Array<Item *> * (*List18::ptr::ToArray)(List18 * self) = (Array<Item *> * (*)(List18 * self)) 0x80be3c0;
#endif
#endif
