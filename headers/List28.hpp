// Generated automatically. Do not edit!
#ifndef _List28_
#define _List28_
template<class T> class Array;
class Enumerator31;
class Node45;
class Tile;
#include "Object.hpp"

class List28 : public Object  {
public:
    Node45 * _head;

    // Wrappers
    List28() {
        ptr::CSTR_List28(this);
    }

    inline List28 * _New() { return ptr::_New(); }
    inline virtual Node45 * AddLast28(Tile * data) { return ptr::AddLast28(this, data); }
    inline List28 * _new2(Array<Tile *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual bool Equals18(Tile * arg1, Tile * arg2) { return ptr::_Equals18(this, arg1, arg2); }
    inline virtual int RemoveEach15(Tile * arg1) { return ptr::_RemoveEach15(this, arg1); }
    inline virtual Enumerator31 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual int Clear() { return ptr::_Clear(); }
    inline virtual int Count() { return ptr::_Count(); }
    inline virtual Tile * First() { return ptr::First(this); }
    inline virtual Tile * RemoveFirst() { return ptr::RemoveFirst(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List28 * (*_New)();
        static Node45 * (*AddLast28)(List28 * self, Tile * data);
        static List28 * (*_new2)(List28 * self, Array<Tile *> * arg1);
        static bool (*_Equals18)(List28 * self, Tile * arg1, Tile * arg2);
        static int (*_RemoveEach15)(List28 * self, Tile * arg1);
        static Enumerator31 * (*ObjectEnumerator)(List28 * self);
        static int (*_Clear)();
        static int (*_Count)();
        static Tile * (*First)(List28 * self);
        static Tile * (*RemoveFirst)(List28 * self);
        static void (*_mark)();
        static void (*CSTR_List28)(List28 * self);
    };
};

#ifdef _WIN32

List28 * (*List28::ptr::_New)() = (List28 * (*)()) 0x0;
Node45 * (*List28::ptr::AddLast28)(List28 * self, Tile * data) = (Node45 * (*)(List28 * self, Tile * data)) 0x5f82f0;
List28 * (*List28::ptr::_new2)(List28 * self, Array<Tile *> * arg1) = (List28 * (*)(List28 * self, Array<Tile *> * arg1)) 0x0;
bool (*List28::ptr::_Equals18)(List28 * self, Tile * arg1, Tile * arg2) = (bool (*)(List28 * self, Tile * arg1, Tile * arg2)) 0x0;
int (*List28::ptr::_RemoveEach15)(List28 * self, Tile * arg1) = (int (*)(List28 * self, Tile * arg1)) 0x0;
Enumerator31 * (*List28::ptr::ObjectEnumerator)(List28 * self) = (Enumerator31 * (*)(List28 * self)) 0x5f83b0;
int (*List28::ptr::_Clear)() = (int (*)()) 0x0;
int (*List28::ptr::_Count)() = (int (*)()) 0x0;
Tile * (*List28::ptr::First)(List28 * self) = (Tile * (*)(List28 * self)) 0x5dd400;
Tile * (*List28::ptr::RemoveFirst)(List28 * self) = (Tile * (*)(List28 * self)) 0x5f8390;
void (*List28::ptr::_mark)() = (void (*)()) 0x0;
void (*List28::ptr::CSTR_List28)(List28 * self) = (void (*)(List28 * self)) 0x5f8220;
#endif

#ifdef __linux__

List28 * (*List28::ptr::_New)() = (List28 * (*)()) 0x81a0640;
Node45 * (*List28::ptr::AddLast28)(List28 * self, Tile * data) = (Node45 * (*)(List28 * self, Tile * data)) 0x80b9220;
List28 * (*List28::ptr::_new2)(List28 * self, Array<Tile *> * arg1) = (List28 * (*)(List28 * self, Array<Tile *> * arg1)) 0x0;
bool (*List28::ptr::_Equals18)(List28 * self, Tile * arg1, Tile * arg2) = (bool (*)(List28 * self, Tile * arg1, Tile * arg2)) 0x80737e0;
int (*List28::ptr::_RemoveEach15)(List28 * self, Tile * arg1) = (int (*)(List28 * self, Tile * arg1)) 0x80737f0;
Enumerator31 * (*List28::ptr::ObjectEnumerator)(List28 * self) = (Enumerator31 * (*)(List28 * self)) 0x80bc710;
int (*List28::ptr::_Clear)() = (int (*)()) 0x0;
int (*List28::ptr::_Count)() = (int (*)()) 0x8073850;
Tile * (*List28::ptr::First)(List28 * self) = (Tile * (*)(List28 * self)) 0x8073870;
Tile * (*List28::ptr::RemoveFirst)(List28 * self) = (Tile * (*)(List28 * self)) 0x8073890;
void (*List28::ptr::_mark)() = (void (*)()) 0x808a390;
void (*List28::ptr::CSTR_List28)(List28 * self) = (void (*)(List28 * self)) 0x81a0960;
#endif
#endif
