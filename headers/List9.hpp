// Generated automatically. Do not edit!
#ifndef _List9_
#define _List9_
template<class T> class Array;
class Crate;
class Enumerator11;
class Gargoyle;
class Node16;
#include "Object.hpp"

class List9 : public Object  {
public:
    Node16 * _head;

    // Wrappers
    List9() {
        ptr::CSTR_List9(this);
    }

    inline List9 * _New() { return ptr::_New(); }
    inline virtual Node16 * _AddLast9(Gargoyle * arg1) { return ptr::_AddLast9(this, arg1); }
    inline List9 * _new2(Array<Gargoyle *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual int Clear() { return ptr::_Clear(); }
    inline virtual int Count() { return ptr::_Count(); }
    inline virtual Gargoyle * RemoveFirst() { return ptr::RemoveFirst(this); }
    inline virtual bool Equals5(Gargoyle * arg1, Gargoyle * arg2) { return ptr::_Equals5(this, arg1, arg2); }
    inline virtual bool Contains4(Gargoyle * arg1) { return ptr::_Contains4(this, arg1); }
    inline void _mark() { ptr::_mark(); }
    inline Node16 * AddLast9(Crate * data) { return ptr::AddLast9(this, data); }
    inline Enumerator11 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline bool Contains3(Crate * value) { return ptr::Contains3(this, value); }
    inline int RemoveEach6(Crate * value) { return ptr::RemoveEach6(this, value); }

    class ptr {
    public:
        static List9 * (*_New)();
        static Node16 * (*_AddLast9)(List9 * self, Gargoyle * arg1);
        static List9 * (*_new2)(List9 * self, Array<Gargoyle *> * arg1);
        static int (*_Clear)();
        static int (*_Count)();
        static Gargoyle * (*RemoveFirst)(List9 * self);
        static bool (*_Equals5)(List9 * self, Gargoyle * arg1, Gargoyle * arg2);
        static bool (*_Contains4)(List9 * self, Gargoyle * arg1);
        static void (*_mark)();
        static void (*CSTR_List9)(List9 * self);
        static Node16 * (*AddLast9)(List9 * self, Crate * data);
        static Enumerator11 * (*ObjectEnumerator)(List9 * self);
        static bool (*Contains3)(List9 * self, Crate * value);
        static int (*RemoveEach6)(List9 * self, Crate * value);
    };
};

#ifdef _WIN32

List9 * (*List9::ptr::_New)() = (List9 * (*)()) 0x0;
Node16 * (*List9::ptr::_AddLast9)(List9 * self, Gargoyle * arg1) = (Node16 * (*)(List9 * self, Gargoyle * arg1)) 0x0;
List9 * (*List9::ptr::_new2)(List9 * self, Array<Gargoyle *> * arg1) = (List9 * (*)(List9 * self, Array<Gargoyle *> * arg1)) 0x0;
int (*List9::ptr::_Clear)() = (int (*)()) 0x0;
int (*List9::ptr::_Count)() = (int (*)()) 0x0;
Gargoyle * (*List9::ptr::RemoveFirst)(List9 * self) = (Gargoyle * (*)(List9 * self)) 0x557420;
bool (*List9::ptr::_Equals5)(List9 * self, Gargoyle * arg1, Gargoyle * arg2) = (bool (*)(List9 * self, Gargoyle * arg1, Gargoyle * arg2)) 0x0;
bool (*List9::ptr::_Contains4)(List9 * self, Gargoyle * arg1) = (bool (*)(List9 * self, Gargoyle * arg1)) 0x0;
void (*List9::ptr::_mark)() = (void (*)()) 0x0;
void (*List9::ptr::CSTR_List9)(List9 * self) = (void (*)(List9 * self)) 0x5c1510;
Node16 * (*List9::ptr::AddLast9)(List9 * self, Crate * data) = (Node16 * (*)(List9 * self, Crate * data)) 0x5c15e0;
Enumerator11 * (*List9::ptr::ObjectEnumerator)(List9 * self) = (Enumerator11 * (*)(List9 * self)) 0x5c1680;
bool (*List9::ptr::Contains3)(List9 * self, Crate * value) = (bool (*)(List9 * self, Crate * value)) 0x5c1710;
int (*List9::ptr::RemoveEach6)(List9 * self, Crate * value) = (int (*)(List9 * self, Crate * value)) 0x5c1750;
#endif

#ifdef __linux__

List9 * (*List9::ptr::_New)() = (List9 * (*)()) 0x817e590;
Node16 * (*List9::ptr::_AddLast9)(List9 * self, Gargoyle * arg1) = (Node16 * (*)(List9 * self, Gargoyle * arg1)) 0x0;
List9 * (*List9::ptr::_new2)(List9 * self, Array<Gargoyle *> * arg1) = (List9 * (*)(List9 * self, Array<Gargoyle *> * arg1)) 0x0;
int (*List9::ptr::_Clear)() = (int (*)()) 0x8094050;
int (*List9::ptr::_Count)() = (int (*)()) 0x80709b0;
Gargoyle * (*List9::ptr::RemoveFirst)(List9 * self) = (Gargoyle * (*)(List9 * self)) 0x80709d0;
bool (*List9::ptr::_Equals5)(List9 * self, Gargoyle * arg1, Gargoyle * arg2) = (bool (*)(List9 * self, Gargoyle * arg1, Gargoyle * arg2)) 0x0;
bool (*List9::ptr::_Contains4)(List9 * self, Gargoyle * arg1) = (bool (*)(List9 * self, Gargoyle * arg1)) 0x0;
void (*List9::ptr::_mark)() = (void (*)()) 0x8087c50;
void (*List9::ptr::CSTR_List9)(List9 * self) = (void (*)(List9 * self)) 0x817e910;
Node16 * (*List9::ptr::AddLast9)(List9 * self, Crate * data) = (Node16 * (*)(List9 * self, Crate * data)) 0x817e7d0;
Enumerator11 * (*List9::ptr::ObjectEnumerator)(List9 * self) = (Enumerator11 * (*)(List9 * self)) 0x80b7280;
bool (*List9::ptr::Contains3)(List9 * self, Crate * value) = (bool (*)(List9 * self, Crate * value)) 0x8070a20;
int (*List9::ptr::RemoveEach6)(List9 * self, Crate * value) = (int (*)(List9 * self, Crate * value)) 0x8070a70;
#endif
#endif
