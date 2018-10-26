// Generated automatically. Do not edit!
#ifndef _List14_
#define _List14_
template<class T> class Array;
class Enumerator7;
class Node24;
class Trap;
#include "Object.hpp"

class List14 : public Object  {
public:
    Node24 * _head;

    // Wrappers
    List14() {
        ptr::CSTR_List14(this);
    }

    inline List14 * _New() { return ptr::_New(); }
    inline virtual Node24 * AddLast14(Trap * data) { return ptr::AddLast14(this, data); }
    inline List14 * _new2(Array<Trap *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator7 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual bool Equals9(Trap * arg1, Trap * arg2) { return ptr::_Equals9(this, arg1, arg2); }
    inline virtual int RemoveEach8(Trap * arg1) { return ptr::_RemoveEach8(this, arg1); }
    inline virtual int Clear() { return ptr::_Clear(); }
    inline virtual int Count() { return ptr::_Count(); }
    inline virtual Array<Trap *> * ToArray() { return ptr::ToArray(this); }
    inline virtual int Compare3(Trap * arg1, Trap * arg2) { return ptr::_Compare3(this, arg1, arg2); }
    inline virtual int Sort(int ascending) { return ptr::Sort(this, ascending); }
    inline void _mark() { ptr::_mark(); }
    inline int RemoveEach9(Trap * value) { return ptr::RemoveEach9(this, value); }

    class ptr {
    public:
        static List14 * (*_New)();
        static Node24 * (*AddLast14)(List14 * self, Trap * data);
        static List14 * (*_new2)(List14 * self, Array<Trap *> * arg1);
        static Enumerator7 * (*ObjectEnumerator)(List14 * self);
        static bool (*_Equals9)(List14 * self, Trap * arg1, Trap * arg2);
        static int (*_RemoveEach8)(List14 * self, Trap * arg1);
        static int (*_Clear)();
        static int (*_Count)();
        static Array<Trap *> * (*ToArray)(List14 * self);
        static int (*_Compare3)(List14 * self, Trap * arg1, Trap * arg2);
        static int (*Sort)(List14 * self, int ascending);
        static void (*_mark)();
        static int (*RemoveEach9)(List14 * self, Trap * value);
        static void (*CSTR_List14)(List14 * self);
    };
};

#ifdef _WIN32

List14 * (*List14::ptr::_New)() = (List14 * (*)()) 0x0;
Node24 * (*List14::ptr::AddLast14)(List14 * self, Trap * data) = (Node24 * (*)(List14 * self, Trap * data)) 0x5d8810;
List14 * (*List14::ptr::_new2)(List14 * self, Array<Trap *> * arg1) = (List14 * (*)(List14 * self, Array<Trap *> * arg1)) 0x0;
Enumerator7 * (*List14::ptr::ObjectEnumerator)(List14 * self) = (Enumerator7 * (*)(List14 * self)) 0x5d88b0;
bool (*List14::ptr::_Equals9)(List14 * self, Trap * arg1, Trap * arg2) = (bool (*)(List14 * self, Trap * arg1, Trap * arg2)) 0x0;
int (*List14::ptr::_RemoveEach8)(List14 * self, Trap * arg1) = (int (*)(List14 * self, Trap * arg1)) 0x0;
int (*List14::ptr::_Clear)() = (int (*)()) 0x0;
int (*List14::ptr::_Count)() = (int (*)()) 0x0;
Array<Trap *> * (*List14::ptr::ToArray)(List14 * self) = (Array<Trap *> * (*)(List14 * self)) 0x5d8940;
int (*List14::ptr::_Compare3)(List14 * self, Trap * arg1, Trap * arg2) = (int (*)(List14 * self, Trap * arg1, Trap * arg2)) 0x0;
int (*List14::ptr::Sort)(List14 * self, int ascending) = (int (*)(List14 * self, int ascending)) 0x5d8aa0;
void (*List14::ptr::_mark)() = (void (*)()) 0x0;
int (*List14::ptr::RemoveEach9)(List14 * self, Trap * value) = (int (*)(List14 * self, Trap * value)) 0x57f9b0;
void (*List14::ptr::CSTR_List14)(List14 * self) = (void (*)(List14 * self)) 0x5d8740;
#endif

#ifdef __linux__

List14 * (*List14::ptr::_New)() = (List14 * (*)()) 0x8192da0;
Node24 * (*List14::ptr::AddLast14)(List14 * self, Trap * data) = (Node24 * (*)(List14 * self, Trap * data)) 0x8192ff0;
List14 * (*List14::ptr::_new2)(List14 * self, Array<Trap *> * arg1) = (List14 * (*)(List14 * self, Array<Trap *> * arg1)) 0x0;
Enumerator7 * (*List14::ptr::ObjectEnumerator)(List14 * self) = (Enumerator7 * (*)(List14 * self)) 0x80b7f30;
bool (*List14::ptr::_Equals9)(List14 * self, Trap * arg1, Trap * arg2) = (bool (*)(List14 * self, Trap * arg1, Trap * arg2)) 0x0;
int (*List14::ptr::_RemoveEach8)(List14 * self, Trap * arg1) = (int (*)(List14 * self, Trap * arg1)) 0x0;
int (*List14::ptr::_Clear)() = (int (*)()) 0x8095ac0;
int (*List14::ptr::_Count)() = (int (*)()) 0x8071d70;
Array<Trap *> * (*List14::ptr::ToArray)(List14 * self) = (Array<Trap *> * (*)(List14 * self)) 0x80be060;
int (*List14::ptr::_Compare3)(List14 * self, Trap * arg1, Trap * arg2) = (int (*)(List14 * self, Trap * arg1, Trap * arg2)) 0x81f72a0;
int (*List14::ptr::Sort)(List14 * self, int ascending) = (int (*)(List14 * self, int ascending)) 0x8095820;
void (*List14::ptr::_mark)() = (void (*)()) 0x808bff0;
int (*List14::ptr::RemoveEach9)(List14 * self, Trap * value) = (int (*)(List14 * self, Trap * value)) 0x8071d10;
void (*List14::ptr::CSTR_List14)(List14 * self) = (void (*)(List14 * self)) 0x8193130;
#endif
#endif
