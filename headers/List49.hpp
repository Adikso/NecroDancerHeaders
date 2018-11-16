// Generated automatically. Do not edit!
#ifndef _List49_
#define _List49_
template<class T> class Array;
class Enumerator54;
class FireTrap;
class Node69;
#include "Object.hpp"

class List49 : public Object  {
public:
    Node69 * _head;

    // Wrappers
    List49() {
        ptr::CSTR_List49(this);
    }

    inline List49 * _New() { return ptr::_New(); }
    inline virtual Node69 * AddLast49(FireTrap * data) { return ptr::AddLast49(this, data); }
    inline List49 * _new2(Array<FireTrap *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator54 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List49 * (*_New)();
        static Node69 * (*AddLast49)(List49 * self, FireTrap * data);
        static List49 * (*_new2)(List49 * self, Array<FireTrap *> * arg1);
        static Enumerator54 * (*ObjectEnumerator)(List49 * self);
        static void (*_mark)();
        static void (*CSTR_List49)(List49 * self);
    };
};

#ifdef _WIN32

inline List49 * (*List49::ptr::_New)() = (List49 * (*)()) 0x0;
inline Node69 * (*List49::ptr::AddLast49)(List49 * self, FireTrap * data) = (Node69 * (*)(List49 * self, FireTrap * data)) 0x639cb0;
inline List49 * (*List49::ptr::_new2)(List49 * self, Array<FireTrap *> * arg1) = (List49 * (*)(List49 * self, Array<FireTrap *> * arg1)) 0x0;
inline Enumerator54 * (*List49::ptr::ObjectEnumerator)(List49 * self) = (Enumerator54 * (*)(List49 * self)) 0x639d50;
inline void (*List49::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List49::ptr::CSTR_List49)(List49 * self) = (void (*)(List49 * self)) 0x639be0;
#endif

#ifdef __linux__

inline List49 * (*List49::ptr::_New)() = (List49 * (*)()) 0x81bfce0;
inline Node69 * (*List49::ptr::AddLast49)(List49 * self, FireTrap * data) = (Node69 * (*)(List49 * self, FireTrap * data)) 0x80bb390;
inline List49 * (*List49::ptr::_new2)(List49 * self, Array<FireTrap *> * arg1) = (List49 * (*)(List49 * self, Array<FireTrap *> * arg1)) 0x0;
inline Enumerator54 * (*List49::ptr::ObjectEnumerator)(List49 * self) = (Enumerator54 * (*)(List49 * self)) 0x80bcb80;
inline void (*List49::ptr::_mark)() = (void (*)()) 0x80886d0;
inline void (*List49::ptr::CSTR_List49)(List49 * self) = (void (*)(List49 * self)) 0x81c0000;
#endif
#endif
