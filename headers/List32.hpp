// Generated automatically. Do not edit!
#ifndef _List32_
#define _List32_
template<class T> class Array;
class Enumerator15;
class Node49;
class SaleChest;
#include "Object.hpp"

class List32 : public Object  {
public:
    Node49 * _head;

    // Wrappers
    List32() {
        ptr::CSTR_List32(this);
    }

    inline List32 * _New() { return ptr::_New(); }
    inline virtual Node49 * AddLast32(SaleChest * data) { return ptr::AddLast32(this, data); }
    inline List32 * _new2(Array<SaleChest *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator15 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual bool Equals21(SaleChest * arg1, SaleChest * arg2) { return ptr::_Equals21(this, arg1, arg2); }
    inline virtual int RemoveEach18(SaleChest * arg1) { return ptr::_RemoveEach18(this, arg1); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List32 * (*_New)();
        static Node49 * (*AddLast32)(List32 * self, SaleChest * data);
        static List32 * (*_new2)(List32 * self, Array<SaleChest *> * arg1);
        static Enumerator15 * (*ObjectEnumerator)(List32 * self);
        static bool (*_Equals21)(List32 * self, SaleChest * arg1, SaleChest * arg2);
        static int (*_RemoveEach18)(List32 * self, SaleChest * arg1);
        static void (*_mark)();
        static void (*CSTR_List32)(List32 * self);
    };
};

#ifdef _WIN32

List32 * (*List32::ptr::_New)() = (List32 * (*)()) 0x0;
Node49 * (*List32::ptr::AddLast32)(List32 * self, SaleChest * data) = (Node49 * (*)(List32 * self, SaleChest * data)) 0x5fd0d0;
List32 * (*List32::ptr::_new2)(List32 * self, Array<SaleChest *> * arg1) = (List32 * (*)(List32 * self, Array<SaleChest *> * arg1)) 0x0;
Enumerator15 * (*List32::ptr::ObjectEnumerator)(List32 * self) = (Enumerator15 * (*)(List32 * self)) 0x5fd170;
bool (*List32::ptr::_Equals21)(List32 * self, SaleChest * arg1, SaleChest * arg2) = (bool (*)(List32 * self, SaleChest * arg1, SaleChest * arg2)) 0x0;
int (*List32::ptr::_RemoveEach18)(List32 * self, SaleChest * arg1) = (int (*)(List32 * self, SaleChest * arg1)) 0x0;
void (*List32::ptr::_mark)() = (void (*)()) 0x0;
void (*List32::ptr::CSTR_List32)(List32 * self) = (void (*)(List32 * self)) 0x5fd000;
#endif

#ifdef __linux__

List32 * (*List32::ptr::_New)() = (List32 * (*)()) 0x81a5640;
Node49 * (*List32::ptr::AddLast32)(List32 * self, SaleChest * data) = (Node49 * (*)(List32 * self, SaleChest * data)) 0x81a5880;
List32 * (*List32::ptr::_new2)(List32 * self, Array<SaleChest *> * arg1) = (List32 * (*)(List32 * self, Array<SaleChest *> * arg1)) 0x0;
Enumerator15 * (*List32::ptr::ObjectEnumerator)(List32 * self) = (Enumerator15 * (*)(List32 * self)) 0x80b9580;
bool (*List32::ptr::_Equals21)(List32 * self, SaleChest * arg1, SaleChest * arg2) = (bool (*)(List32 * self, SaleChest * arg1, SaleChest * arg2)) 0x8073b70;
int (*List32::ptr::_RemoveEach18)(List32 * self, SaleChest * arg1) = (int (*)(List32 * self, SaleChest * arg1)) 0x8073b80;
void (*List32::ptr::_mark)() = (void (*)()) 0x808a650;
void (*List32::ptr::CSTR_List32)(List32 * self) = (void (*)(List32 * self)) 0x81a59c0;
#endif
#endif
