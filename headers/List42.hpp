// Generated automatically. Do not edit!
#ifndef _List42_
#define _List42_
template<class T> class Array;
class ConductorBattery;
class Enumerator25;
class Node61;
#include "Object.hpp"

class List42 : public Object  {
public:
    Node61 * _head;

    // Wrappers
    List42() {
        ptr::CSTR_List42(this);
    }

    inline List42 * _New() { return ptr::_New(); }
    inline virtual Node61 * AddLast42(ConductorBattery * data) { return ptr::AddLast42(this, data); }
    inline List42 * _new2(Array<ConductorBattery *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator25 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual bool Equals27(ConductorBattery * arg1, ConductorBattery * arg2) { return ptr::_Equals27(this, arg1, arg2); }
    inline virtual int RemoveEach23(ConductorBattery * arg1) { return ptr::_RemoveEach23(this, arg1); }
    inline virtual int Remove10(ConductorBattery * arg1) { return ptr::_Remove10(this, arg1); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List42 * (*_New)();
        static Node61 * (*AddLast42)(List42 * self, ConductorBattery * data);
        static List42 * (*_new2)(List42 * self, Array<ConductorBattery *> * arg1);
        static Enumerator25 * (*ObjectEnumerator)(List42 * self);
        static bool (*_Equals27)(List42 * self, ConductorBattery * arg1, ConductorBattery * arg2);
        static int (*_RemoveEach23)(List42 * self, ConductorBattery * arg1);
        static int (*_Remove10)(List42 * self, ConductorBattery * arg1);
        static void (*_mark)();
        static void (*CSTR_List42)(List42 * self);
    };
};

#ifdef _WIN32

List42 * (*List42::ptr::_New)() = (List42 * (*)()) 0x0;
Node61 * (*List42::ptr::AddLast42)(List42 * self, ConductorBattery * data) = (Node61 * (*)(List42 * self, ConductorBattery * data)) 0x632100;
List42 * (*List42::ptr::_new2)(List42 * self, Array<ConductorBattery *> * arg1) = (List42 * (*)(List42 * self, Array<ConductorBattery *> * arg1)) 0x0;
Enumerator25 * (*List42::ptr::ObjectEnumerator)(List42 * self) = (Enumerator25 * (*)(List42 * self)) 0x6321a0;
bool (*List42::ptr::_Equals27)(List42 * self, ConductorBattery * arg1, ConductorBattery * arg2) = (bool (*)(List42 * self, ConductorBattery * arg1, ConductorBattery * arg2)) 0x0;
int (*List42::ptr::_RemoveEach23)(List42 * self, ConductorBattery * arg1) = (int (*)(List42 * self, ConductorBattery * arg1)) 0x0;
int (*List42::ptr::_Remove10)(List42 * self, ConductorBattery * arg1) = (int (*)(List42 * self, ConductorBattery * arg1)) 0x0;
void (*List42::ptr::_mark)() = (void (*)()) 0x0;
void (*List42::ptr::CSTR_List42)(List42 * self) = (void (*)(List42 * self)) 0x632030;
#endif

#ifdef __linux__

List42 * (*List42::ptr::_New)() = (List42 * (*)()) 0x81bb9d0;
Node61 * (*List42::ptr::AddLast42)(List42 * self, ConductorBattery * data) = (Node61 * (*)(List42 * self, ConductorBattery * data)) 0x81bbc10;
List42 * (*List42::ptr::_new2)(List42 * self, Array<ConductorBattery *> * arg1) = (List42 * (*)(List42 * self, Array<ConductorBattery *> * arg1)) 0x0;
Enumerator25 * (*List42::ptr::ObjectEnumerator)(List42 * self) = (Enumerator25 * (*)(List42 * self)) 0x80ba960;
bool (*List42::ptr::_Equals27)(List42 * self, ConductorBattery * arg1, ConductorBattery * arg2) = (bool (*)(List42 * self, ConductorBattery * arg1, ConductorBattery * arg2)) 0x80757c0;
int (*List42::ptr::_RemoveEach23)(List42 * self, ConductorBattery * arg1) = (int (*)(List42 * self, ConductorBattery * arg1)) 0x80757d0;
int (*List42::ptr::_Remove10)(List42 * self, ConductorBattery * arg1) = (int (*)(List42 * self, ConductorBattery * arg1)) 0x8075830;
void (*List42::ptr::_mark)() = (void (*)()) 0x8089770;
void (*List42::ptr::CSTR_List42)(List42 * self) = (void (*)(List42 * self)) 0x81bbd50;
#endif
#endif
