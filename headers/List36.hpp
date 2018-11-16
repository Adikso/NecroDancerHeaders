// Generated automatically. Do not edit!
#ifndef _List36_
#define _List36_
template<class T> class Array;
class Enumerator21;
class Node53;
class TileData;
#include "Object.hpp"

class List36 : public Object  {
public:
    Node53 * _head;

    // Wrappers
    List36() {
        ptr::CSTR_List36(this);
    }

    inline List36 * _New() { return ptr::_New(); }
    inline virtual Node53 * AddLast36(TileData * data) { return ptr::AddLast36(this, data); }
    inline List36 * _new2(Array<TileData *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator21 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List36 * (*_New)();
        static Node53 * (*AddLast36)(List36 * self, TileData * data);
        static List36 * (*_new2)(List36 * self, Array<TileData *> * arg1);
        static Enumerator21 * (*ObjectEnumerator)(List36 * self);
        static void (*_mark)();
        static void (*CSTR_List36)(List36 * self);
    };
};

#ifdef _WIN32

inline List36 * (*List36::ptr::_New)() = (List36 * (*)()) 0x0;
inline Node53 * (*List36::ptr::AddLast36)(List36 * self, TileData * data) = (Node53 * (*)(List36 * self, TileData * data)) 0x608480;
inline List36 * (*List36::ptr::_new2)(List36 * self, Array<TileData *> * arg1) = (List36 * (*)(List36 * self, Array<TileData *> * arg1)) 0x0;
inline Enumerator21 * (*List36::ptr::ObjectEnumerator)(List36 * self) = (Enumerator21 * (*)(List36 * self)) 0x608520;
inline void (*List36::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List36::ptr::CSTR_List36)(List36 * self) = (void (*)(List36 * self)) 0x6083b0;
#endif

#ifdef __linux__

inline List36 * (*List36::ptr::_New)() = (List36 * (*)()) 0x81adf10;
inline Node53 * (*List36::ptr::AddLast36)(List36 * self, TileData * data) = (Node53 * (*)(List36 * self, TileData * data)) 0x81ae150;
inline List36 * (*List36::ptr::_new2)(List36 * self, Array<TileData *> * arg1) = (List36 * (*)(List36 * self, Array<TileData *> * arg1)) 0x0;
inline Enumerator21 * (*List36::ptr::ObjectEnumerator)(List36 * self) = (Enumerator21 * (*)(List36 * self)) 0x80b9c20;
inline void (*List36::ptr::_mark)() = (void (*)()) 0x8088bf0;
inline void (*List36::ptr::CSTR_List36)(List36 * self) = (void (*)(List36 * self)) 0x81ae290;
#endif
#endif
