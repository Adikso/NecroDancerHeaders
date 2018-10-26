// Generated automatically. Do not edit!
#ifndef _List16_
#define _List16_
template<class T> class Array;
class Enemy;
class Enumerator8;
class Node26;
#include "Object.hpp"

class List16 : public Object  {
public:
    Node26 * _head;

    // Wrappers
    List16() {
        ptr::CSTR_List16(this);
    }

    inline List16 * _New() { return ptr::_New(); }
    inline virtual Node26 * AddLast16(Enemy * data) { return ptr::AddLast16(this, data); }
    inline List16 * _new2(Array<Enemy *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator8 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual int Count() { return ptr::_Count(); }
    inline virtual bool Equals10(Enemy * arg1, Enemy * arg2) { return ptr::_Equals10(this, arg1, arg2); }
    inline virtual int RemoveEach9(Enemy * arg1) { return ptr::_RemoveEach9(this, arg1); }
    inline virtual Array<Enemy *> * ToArray() { return ptr::ToArray(this); }
    inline virtual int Compare4(Enemy * lhs, Enemy * rhs) { return ptr::Compare4(this, lhs, rhs); }
    inline virtual int Sort(int ascending) { return ptr::Sort(this, ascending); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List16 * (*_New)();
        static Node26 * (*AddLast16)(List16 * self, Enemy * data);
        static List16 * (*_new2)(List16 * self, Array<Enemy *> * arg1);
        static Enumerator8 * (*ObjectEnumerator)(List16 * self);
        static int (*_Count)();
        static bool (*_Equals10)(List16 * self, Enemy * arg1, Enemy * arg2);
        static int (*_RemoveEach9)(List16 * self, Enemy * arg1);
        static Array<Enemy *> * (*ToArray)(List16 * self);
        static int (*Compare4)(List16 * self, Enemy * lhs, Enemy * rhs);
        static int (*Sort)(List16 * self, int ascending);
        static void (*_mark)();
        static void (*CSTR_List16)(List16 * self);
    };
};

#ifdef _WIN32

List16 * (*List16::ptr::_New)() = (List16 * (*)()) 0x0;
Node26 * (*List16::ptr::AddLast16)(List16 * self, Enemy * data) = (Node26 * (*)(List16 * self, Enemy * data)) 0x5db900;
List16 * (*List16::ptr::_new2)(List16 * self, Array<Enemy *> * arg1) = (List16 * (*)(List16 * self, Array<Enemy *> * arg1)) 0x0;
Enumerator8 * (*List16::ptr::ObjectEnumerator)(List16 * self) = (Enumerator8 * (*)(List16 * self)) 0x5db9a0;
int (*List16::ptr::_Count)() = (int (*)()) 0x0;
bool (*List16::ptr::_Equals10)(List16 * self, Enemy * arg1, Enemy * arg2) = (bool (*)(List16 * self, Enemy * arg1, Enemy * arg2)) 0x0;
int (*List16::ptr::_RemoveEach9)(List16 * self, Enemy * arg1) = (int (*)(List16 * self, Enemy * arg1)) 0x0;
Array<Enemy *> * (*List16::ptr::ToArray)(List16 * self) = (Array<Enemy *> * (*)(List16 * self)) 0x5dba70;
int (*List16::ptr::Compare4)(List16 * self, Enemy * lhs, Enemy * rhs) = (int (*)(List16 * self, Enemy * lhs, Enemy * rhs)) 0x5d8a10;
int (*List16::ptr::Sort)(List16 * self, int ascending) = (int (*)(List16 * self, int ascending)) 0x5dbb40;
void (*List16::ptr::_mark)() = (void (*)()) 0x0;
void (*List16::ptr::CSTR_List16)(List16 * self) = (void (*)(List16 * self)) 0x5db830;
#endif

#ifdef __linux__

List16 * (*List16::ptr::_New)() = (List16 * (*)()) 0x8194700;
Node26 * (*List16::ptr::AddLast16)(List16 * self, Enemy * data) = (Node26 * (*)(List16 * self, Enemy * data)) 0x80b8000;
List16 * (*List16::ptr::_new2)(List16 * self, Array<Enemy *> * arg1) = (List16 * (*)(List16 * self, Array<Enemy *> * arg1)) 0x0;
Enumerator8 * (*List16::ptr::ObjectEnumerator)(List16 * self) = (Enumerator8 * (*)(List16 * self)) 0x80b81c0;
int (*List16::ptr::_Count)() = (int (*)()) 0x8071f00;
bool (*List16::ptr::_Equals10)(List16 * self, Enemy * arg1, Enemy * arg2) = (bool (*)(List16 * self, Enemy * arg1, Enemy * arg2)) 0x0;
int (*List16::ptr::_RemoveEach9)(List16 * self, Enemy * arg1) = (int (*)(List16 * self, Enemy * arg1)) 0x0;
Array<Enemy *> * (*List16::ptr::ToArray)(List16 * self) = (Array<Enemy *> * (*)(List16 * self)) 0x80c01b0;
int (*List16::ptr::Compare4)(List16 * self, Enemy * lhs, Enemy * rhs) = (int (*)(List16 * self, Enemy * lhs, Enemy * rhs)) 0x81f7260;
int (*List16::ptr::Sort)(List16 * self, int ascending) = (int (*)(List16 * self, int ascending)) 0x8095fa0;
void (*List16::ptr::_mark)() = (void (*)()) 0x808fc10;
void (*List16::ptr::CSTR_List16)(List16 * self) = (void (*)(List16 * self)) 0x8194a30;
#endif
#endif
