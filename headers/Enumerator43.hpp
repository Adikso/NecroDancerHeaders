// Generated automatically. Do not edit!
#ifndef _Enumerator43_
#define _Enumerator43_
class List48;
class List52;
class Node68;
class RoomData;
#include "Object.hpp"

class Enumerator43 : public Object  {
public:
    List48 * _list;
    Node68 * _curr;

    // Wrappers
    inline Enumerator43 * _New(List48 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator43 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::HasNext(this); }
    inline virtual RoomData * NextObject() { return ptr::NextObject(this); }
    inline void _mark() { ptr::_mark(); }
    inline Enumerator43 * _New(List52 * list) { return ptr::_New_2(this, list); }

    class ptr {
    public:
        static Enumerator43 * (*_New)(Enumerator43 * self, List48 * arg1);
        static Enumerator43 * (*_new2)();
        static bool (*HasNext)(Enumerator43 * self);
        static RoomData * (*NextObject)(Enumerator43 * self);
        static void (*_mark)();
        static Enumerator43 * (*_New_2)(Enumerator43 * self, List52 * list);
    };
};

#ifdef _WIN32

Enumerator43 * (*Enumerator43::ptr::_New)(Enumerator43 * self, List48 * arg1) = (Enumerator43 * (*)(Enumerator43 * self, List48 * arg1)) 0x0;
Enumerator43 * (*Enumerator43::ptr::_new2)() = (Enumerator43 * (*)()) 0x0;
bool (*Enumerator43::ptr::HasNext)(Enumerator43 * self) = (bool (*)(Enumerator43 * self)) 0x663fd0;
RoomData * (*Enumerator43::ptr::NextObject)(Enumerator43 * self) = (RoomData * (*)(Enumerator43 * self)) 0x664050;
void (*Enumerator43::ptr::_mark)() = (void (*)()) 0x0;
Enumerator43 * (*Enumerator43::ptr::_New_2)(Enumerator43 * self, List52 * list) = (Enumerator43 * (*)(Enumerator43 * self, List52 * list)) 0x663f20;
#endif

#ifdef __linux__

Enumerator43 * (*Enumerator43::ptr::_New)(Enumerator43 * self, List48 * arg1) = (Enumerator43 * (*)(Enumerator43 * self, List48 * arg1)) 0x0;
Enumerator43 * (*Enumerator43::ptr::_new2)() = (Enumerator43 * (*)()) 0x81e2ba0;
bool (*Enumerator43::ptr::HasNext)(Enumerator43 * self) = (bool (*)(Enumerator43 * self)) 0x80914b0;
RoomData * (*Enumerator43::ptr::NextObject)(Enumerator43 * self) = (RoomData * (*)(Enumerator43 * self)) 0x8091530;
void (*Enumerator43::ptr::_mark)() = (void (*)()) 0x80855c0;
Enumerator43 * (*Enumerator43::ptr::_New_2)(Enumerator43 * self, List52 * list) = (Enumerator43 * (*)(Enumerator43 * self, List52 * list)) 0x0;
#endif
#endif
