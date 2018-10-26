// Generated automatically. Do not edit!
#ifndef _List31_
#define _List31_
template<class T> class Array;
class Enumerator14;
class Node48;
class SaleItem;
#include "Object.hpp"

class List31 : public Object  {
public:
    Node48 * _head;

    // Wrappers
    List31() {
        ptr::CSTR_List31(this);
    }

    inline List31 * _New() { return ptr::_New(); }
    inline virtual Node48 * AddLast31(SaleItem * data) { return ptr::AddLast31(this, data); }
    inline List31 * _new2(Array<SaleItem *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator14 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual bool Equals20(SaleItem * arg1, SaleItem * arg2) { return ptr::_Equals20(this, arg1, arg2); }
    inline virtual int RemoveEach17(SaleItem * arg1) { return ptr::_RemoveEach17(this, arg1); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List31 * (*_New)();
        static Node48 * (*AddLast31)(List31 * self, SaleItem * data);
        static List31 * (*_new2)(List31 * self, Array<SaleItem *> * arg1);
        static Enumerator14 * (*ObjectEnumerator)(List31 * self);
        static bool (*_Equals20)(List31 * self, SaleItem * arg1, SaleItem * arg2);
        static int (*_RemoveEach17)(List31 * self, SaleItem * arg1);
        static void (*_mark)();
        static void (*CSTR_List31)(List31 * self);
    };
};

#ifdef _WIN32

List31 * (*List31::ptr::_New)() = (List31 * (*)()) 0x0;
Node48 * (*List31::ptr::AddLast31)(List31 * self, SaleItem * data) = (Node48 * (*)(List31 * self, SaleItem * data)) 0x5fced0;
List31 * (*List31::ptr::_new2)(List31 * self, Array<SaleItem *> * arg1) = (List31 * (*)(List31 * self, Array<SaleItem *> * arg1)) 0x0;
Enumerator14 * (*List31::ptr::ObjectEnumerator)(List31 * self) = (Enumerator14 * (*)(List31 * self)) 0x5fcf70;
bool (*List31::ptr::_Equals20)(List31 * self, SaleItem * arg1, SaleItem * arg2) = (bool (*)(List31 * self, SaleItem * arg1, SaleItem * arg2)) 0x0;
int (*List31::ptr::_RemoveEach17)(List31 * self, SaleItem * arg1) = (int (*)(List31 * self, SaleItem * arg1)) 0x0;
void (*List31::ptr::_mark)() = (void (*)()) 0x0;
void (*List31::ptr::CSTR_List31)(List31 * self) = (void (*)(List31 * self)) 0x5fce00;
#endif

#ifdef __linux__

List31 * (*List31::ptr::_New)() = (List31 * (*)()) 0x81a5180;
Node48 * (*List31::ptr::AddLast31)(List31 * self, SaleItem * data) = (Node48 * (*)(List31 * self, SaleItem * data)) 0x81a53c0;
List31 * (*List31::ptr::_new2)(List31 * self, Array<SaleItem *> * arg1) = (List31 * (*)(List31 * self, Array<SaleItem *> * arg1)) 0x0;
Enumerator14 * (*List31::ptr::ObjectEnumerator)(List31 * self) = (Enumerator14 * (*)(List31 * self)) 0x80b94b0;
bool (*List31::ptr::_Equals20)(List31 * self, SaleItem * arg1, SaleItem * arg2) = (bool (*)(List31 * self, SaleItem * arg1, SaleItem * arg2)) 0x8073b00;
int (*List31::ptr::_RemoveEach17)(List31 * self, SaleItem * arg1) = (int (*)(List31 * self, SaleItem * arg1)) 0x8073b10;
void (*List31::ptr::_mark)() = (void (*)()) 0x808a4f0;
void (*List31::ptr::CSTR_List31)(List31 * self) = (void (*)(List31 * self)) 0x81a5500;
#endif
#endif
