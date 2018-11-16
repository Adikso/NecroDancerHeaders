// Generated automatically. Do not edit!
#ifndef _List25_
#define _List25_
template<class T> class Array;
class Enumerator20;
class Node39;
class WeaponPoint;
#include "Object.hpp"

class List25 : public Object  {
public:
    Node39 * _head;

    // Wrappers
    List25() {
        ptr::CSTR_List25(this);
    }

    inline List25 * _New() { return ptr::_New(); }
    inline virtual Node39 * AddLast25(WeaponPoint * data) { return ptr::AddLast25(this, data); }
    inline List25 * _new2(Array<WeaponPoint *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator20 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List25 * (*_New)();
        static Node39 * (*AddLast25)(List25 * self, WeaponPoint * data);
        static List25 * (*_new2)(List25 * self, Array<WeaponPoint *> * arg1);
        static Enumerator20 * (*ObjectEnumerator)(List25 * self);
        static void (*_mark)();
        static void (*CSTR_List25)(List25 * self);
    };
};

#ifdef _WIN32

inline List25 * (*List25::ptr::_New)() = (List25 * (*)()) 0x0;
inline Node39 * (*List25::ptr::AddLast25)(List25 * self, WeaponPoint * data) = (Node39 * (*)(List25 * self, WeaponPoint * data)) 0x5ed3e0;
inline List25 * (*List25::ptr::_new2)(List25 * self, Array<WeaponPoint *> * arg1) = (List25 * (*)(List25 * self, Array<WeaponPoint *> * arg1)) 0x0;
inline Enumerator20 * (*List25::ptr::ObjectEnumerator)(List25 * self) = (Enumerator20 * (*)(List25 * self)) 0x5ed480;
inline void (*List25::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List25::ptr::CSTR_List25)(List25 * self) = (void (*)(List25 * self)) 0x5ed310;
#endif

#ifdef __linux__

inline List25 * (*List25::ptr::_New)() = (List25 * (*)()) 0x819ae30;
inline Node39 * (*List25::ptr::AddLast25)(List25 * self, WeaponPoint * data) = (Node39 * (*)(List25 * self, WeaponPoint * data)) 0x819b070;
inline List25 * (*List25::ptr::_new2)(List25 * self, Array<WeaponPoint *> * arg1) = (List25 * (*)(List25 * self, Array<WeaponPoint *> * arg1)) 0x0;
inline Enumerator20 * (*List25::ptr::ObjectEnumerator)(List25 * self) = (Enumerator20 * (*)(List25 * self)) 0x80b9b50;
inline void (*List25::ptr::_mark)() = (void (*)()) 0x8082b60;
inline void (*List25::ptr::CSTR_List25)(List25 * self) = (void (*)(List25 * self)) 0x819b1b0;
#endif
#endif
