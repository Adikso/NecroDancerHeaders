// Generated automatically. Do not edit!
#ifndef _List34_
#define _List34_
template<class T> class Array;
class Enumerator17;
class Node51;
class SoulFamiliar;
#include "Object.hpp"

class List34 : public Object  {
public:
    Node51 * _head;

    // Wrappers
    List34() {
        ptr::CSTR_List34(this);
    }

    inline List34 * _New() { return ptr::_New(); }
    inline virtual Node51 * AddLast34(SoulFamiliar * data) { return ptr::AddLast34(this, data); }
    inline List34 * _new2(Array<SoulFamiliar *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator17 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual bool Equals22(SoulFamiliar * arg1, SoulFamiliar * arg2) { return ptr::_Equals22(this, arg1, arg2); }
    inline virtual int RemoveEach19(SoulFamiliar * arg1) { return ptr::_RemoveEach19(this, arg1); }
    inline virtual int Remove9(SoulFamiliar * value) { return ptr::Remove9(this, value); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List34 * (*_New)();
        static Node51 * (*AddLast34)(List34 * self, SoulFamiliar * data);
        static List34 * (*_new2)(List34 * self, Array<SoulFamiliar *> * arg1);
        static Enumerator17 * (*ObjectEnumerator)(List34 * self);
        static bool (*_Equals22)(List34 * self, SoulFamiliar * arg1, SoulFamiliar * arg2);
        static int (*_RemoveEach19)(List34 * self, SoulFamiliar * arg1);
        static int (*Remove9)(List34 * self, SoulFamiliar * value);
        static void (*_mark)();
        static void (*CSTR_List34)(List34 * self);
    };
};

#ifdef _WIN32

List34 * (*List34::ptr::_New)() = (List34 * (*)()) 0x0;
Node51 * (*List34::ptr::AddLast34)(List34 * self, SoulFamiliar * data) = (Node51 * (*)(List34 * self, SoulFamiliar * data)) 0x604ee0;
List34 * (*List34::ptr::_new2)(List34 * self, Array<SoulFamiliar *> * arg1) = (List34 * (*)(List34 * self, Array<SoulFamiliar *> * arg1)) 0x0;
Enumerator17 * (*List34::ptr::ObjectEnumerator)(List34 * self) = (Enumerator17 * (*)(List34 * self)) 0x604f80;
bool (*List34::ptr::_Equals22)(List34 * self, SoulFamiliar * arg1, SoulFamiliar * arg2) = (bool (*)(List34 * self, SoulFamiliar * arg1, SoulFamiliar * arg2)) 0x0;
int (*List34::ptr::_RemoveEach19)(List34 * self, SoulFamiliar * arg1) = (int (*)(List34 * self, SoulFamiliar * arg1)) 0x0;
int (*List34::ptr::Remove9)(List34 * self, SoulFamiliar * value) = (int (*)(List34 * self, SoulFamiliar * value)) 0x57f9f0;
void (*List34::ptr::_mark)() = (void (*)()) 0x0;
void (*List34::ptr::CSTR_List34)(List34 * self) = (void (*)(List34 * self)) 0x604e10;
#endif

#ifdef __linux__

List34 * (*List34::ptr::_New)() = (List34 * (*)()) 0x81a8f70;
Node51 * (*List34::ptr::AddLast34)(List34 * self, SoulFamiliar * data) = (Node51 * (*)(List34 * self, SoulFamiliar * data)) 0x81a91b0;
List34 * (*List34::ptr::_new2)(List34 * self, Array<SoulFamiliar *> * arg1) = (List34 * (*)(List34 * self, Array<SoulFamiliar *> * arg1)) 0x0;
Enumerator17 * (*List34::ptr::ObjectEnumerator)(List34 * self) = (Enumerator17 * (*)(List34 * self)) 0x80b98e0;
bool (*List34::ptr::_Equals22)(List34 * self, SoulFamiliar * arg1, SoulFamiliar * arg2) = (bool (*)(List34 * self, SoulFamiliar * arg1, SoulFamiliar * arg2)) 0x8073f90;
int (*List34::ptr::_RemoveEach19)(List34 * self, SoulFamiliar * arg1) = (int (*)(List34 * self, SoulFamiliar * arg1)) 0x8073fa0;
int (*List34::ptr::Remove9)(List34 * self, SoulFamiliar * value) = (int (*)(List34 * self, SoulFamiliar * value)) 0x8074000;
void (*List34::ptr::_mark)() = (void (*)()) 0x808a0d0;
void (*List34::ptr::CSTR_List34)(List34 * self) = (void (*)(List34 * self)) 0x81a92f0;
#endif
#endif
