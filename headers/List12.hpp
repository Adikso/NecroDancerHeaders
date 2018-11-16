// Generated automatically. Do not edit!
#ifndef _List12_
#define _List12_
template<class T> class Array;
class Enumerator30;
class Flyaway;
class Node19;
class Node22;
class TileObject;
#include "Object.hpp"

class List12 : public Object  {
public:
    Node22 * _head;

    // Wrappers
    List12() {
        ptr::CSTR_List12(this);
    }

    inline List12 * _New() { return ptr::_New(); }
    inline virtual Node22 * _AddLast12(TileObject * arg1) { return ptr::_AddLast12(this, arg1); }
    inline List12 * _new2(Array<TileObject *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator30 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }
    inline Node19 * AddLast12(Flyaway * data) { return ptr::AddLast12(this, data); }

    class ptr {
    public:
        static List12 * (*_New)();
        static Node22 * (*_AddLast12)(List12 * self, TileObject * arg1);
        static List12 * (*_new2)(List12 * self, Array<TileObject *> * arg1);
        static Enumerator30 * (*ObjectEnumerator)(List12 * self);
        static void (*_mark)();
        static void (*CSTR_List12)(List12 * self);
        static Node19 * (*AddLast12)(List12 * self, Flyaway * data);
    };
};

#ifdef _WIN32

inline List12 * (*List12::ptr::_New)() = (List12 * (*)()) 0x0;
inline Node22 * (*List12::ptr::_AddLast12)(List12 * self, TileObject * arg1) = (Node22 * (*)(List12 * self, TileObject * arg1)) 0x0;
inline List12 * (*List12::ptr::_new2)(List12 * self, Array<TileObject *> * arg1) = (List12 * (*)(List12 * self, Array<TileObject *> * arg1)) 0x0;
inline Enumerator30 * (*List12::ptr::ObjectEnumerator)(List12 * self) = (Enumerator30 * (*)(List12 * self)) 0x5c6380;
inline void (*List12::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List12::ptr::CSTR_List12)(List12 * self) = (void (*)(List12 * self)) 0x5c6210;
inline Node19 * (*List12::ptr::AddLast12)(List12 * self, Flyaway * data) = (Node19 * (*)(List12 * self, Flyaway * data)) 0x5c62e0;
#endif

#ifdef __linux__

inline List12 * (*List12::ptr::_New)() = (List12 * (*)()) 0x8187860;
inline Node22 * (*List12::ptr::_AddLast12)(List12 * self, TileObject * arg1) = (Node22 * (*)(List12 * self, TileObject * arg1)) 0x0;
inline List12 * (*List12::ptr::_new2)(List12 * self, Array<TileObject *> * arg1) = (List12 * (*)(List12 * self, Array<TileObject *> * arg1)) 0x0;
inline Enumerator30 * (*List12::ptr::ObjectEnumerator)(List12 * self) = (Enumerator30 * (*)(List12 * self)) 0x80b74f0;
inline void (*List12::ptr::_mark)() = (void (*)()) 0x808a230;
inline void (*List12::ptr::CSTR_List12)(List12 * self) = (void (*)(List12 * self)) 0x8187be0;
inline Node19 * (*List12::ptr::AddLast12)(List12 * self, Flyaway * data) = (Node19 * (*)(List12 * self, Flyaway * data)) 0x8187aa0;
#endif
#endif
