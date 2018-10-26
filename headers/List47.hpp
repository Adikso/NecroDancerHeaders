// Generated automatically. Do not edit!
#ifndef _List47_
#define _List47_
template<class T> class Array;
class CrystalShards;
class Enumerator30;
class Node67;
#include "Object.hpp"

class List47 : public Object  {
public:
    Node67 * _head;

    // Wrappers
    List47() {
        ptr::CSTR_List47(this);
    }

    inline List47 * _New() { return ptr::_New(); }
    inline virtual Node67 * AddLast47(CrystalShards * data) { return ptr::AddLast47(this, data); }
    inline List47 * _new2(Array<CrystalShards *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator30 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual Node67 * FirstNode() { return ptr::_FirstNode(); }
    inline virtual bool Equals29(CrystalShards * arg1, CrystalShards * arg2) { return ptr::_Equals29(this, arg1, arg2); }
    inline virtual int RemoveEach25(CrystalShards * value) { return ptr::RemoveEach25(this, value); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List47 * (*_New)();
        static Node67 * (*AddLast47)(List47 * self, CrystalShards * data);
        static List47 * (*_new2)(List47 * self, Array<CrystalShards *> * arg1);
        static Enumerator30 * (*ObjectEnumerator)(List47 * self);
        static Node67 * (*_FirstNode)();
        static bool (*_Equals29)(List47 * self, CrystalShards * arg1, CrystalShards * arg2);
        static int (*RemoveEach25)(List47 * self, CrystalShards * value);
        static void (*_mark)();
        static void (*CSTR_List47)(List47 * self);
    };
};

#ifdef _WIN32

List47 * (*List47::ptr::_New)() = (List47 * (*)()) 0x0;
Node67 * (*List47::ptr::AddLast47)(List47 * self, CrystalShards * data) = (Node67 * (*)(List47 * self, CrystalShards * data)) 0x638600;
List47 * (*List47::ptr::_new2)(List47 * self, Array<CrystalShards *> * arg1) = (List47 * (*)(List47 * self, Array<CrystalShards *> * arg1)) 0x0;
Enumerator30 * (*List47::ptr::ObjectEnumerator)(List47 * self) = (Enumerator30 * (*)(List47 * self)) 0x6386a0;
Node67 * (*List47::ptr::_FirstNode)() = (Node67 * (*)()) 0x0;
bool (*List47::ptr::_Equals29)(List47 * self, CrystalShards * arg1, CrystalShards * arg2) = (bool (*)(List47 * self, CrystalShards * arg1, CrystalShards * arg2)) 0x0;
int (*List47::ptr::RemoveEach25)(List47 * self, CrystalShards * value) = (int (*)(List47 * self, CrystalShards * value)) 0x638730;
void (*List47::ptr::_mark)() = (void (*)()) 0x0;
void (*List47::ptr::CSTR_List47)(List47 * self) = (void (*)(List47 * self)) 0x638530;
#endif

#ifdef __linux__

List47 * (*List47::ptr::_New)() = (List47 * (*)()) 0x81beb60;
Node67 * (*List47::ptr::AddLast47)(List47 * self, CrystalShards * data) = (Node67 * (*)(List47 * self, CrystalShards * data)) 0x81beda0;
List47 * (*List47::ptr::_new2)(List47 * self, Array<CrystalShards *> * arg1) = (List47 * (*)(List47 * self, Array<CrystalShards *> * arg1)) 0x0;
Enumerator30 * (*List47::ptr::ObjectEnumerator)(List47 * self) = (Enumerator30 * (*)(List47 * self)) 0x80bb170;
Node67 * (*List47::ptr::_FirstNode)() = (Node67 * (*)()) 0x8075e10;
bool (*List47::ptr::_Equals29)(List47 * self, CrystalShards * arg1, CrystalShards * arg2) = (bool (*)(List47 * self, CrystalShards * arg1, CrystalShards * arg2)) 0x8075e30;
int (*List47::ptr::RemoveEach25)(List47 * self, CrystalShards * value) = (int (*)(List47 * self, CrystalShards * value)) 0x8075e40;
void (*List47::ptr::_mark)() = (void (*)()) 0x808b470;
void (*List47::ptr::CSTR_List47)(List47 * self) = (void (*)(List47 * self)) 0x81beee0;
#endif
#endif
