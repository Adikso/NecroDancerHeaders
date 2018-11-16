// Generated automatically. Do not edit!
#ifndef _List40_
#define _List40_
template<class T> class Array;
class Node58;
class Switch;
#include "Object.hpp"

class List40 : public Object  {
public:
    Node58 * _head;

    // Wrappers
    List40() {
        ptr::CSTR_List40(this);
    }

    inline List40 * _New() { return ptr::_New(); }
    inline virtual Node58 * AddLast40(Switch * data) { return ptr::AddLast40(this, data); }
    inline List40 * _new2(Array<Switch *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual bool IsEmpty() { return ptr::_IsEmpty(); }
    inline virtual Switch * First() { return ptr::_First(); }
    inline virtual bool Equals25(Switch * arg1, Switch * arg2) { return ptr::_Equals25(this, arg1, arg2); }
    inline virtual int RemoveEach22(Switch * value) { return ptr::RemoveEach22(this, value); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List40 * (*_New)();
        static Node58 * (*AddLast40)(List40 * self, Switch * data);
        static List40 * (*_new2)(List40 * self, Array<Switch *> * arg1);
        static bool (*_IsEmpty)();
        static Switch * (*_First)();
        static bool (*_Equals25)(List40 * self, Switch * arg1, Switch * arg2);
        static int (*RemoveEach22)(List40 * self, Switch * value);
        static void (*_mark)();
        static void (*CSTR_List40)(List40 * self);
    };
};

#ifdef _WIN32

inline List40 * (*List40::ptr::_New)() = (List40 * (*)()) 0x0;
inline Node58 * (*List40::ptr::AddLast40)(List40 * self, Switch * data) = (Node58 * (*)(List40 * self, Switch * data)) 0x629b90;
inline List40 * (*List40::ptr::_new2)(List40 * self, Array<Switch *> * arg1) = (List40 * (*)(List40 * self, Array<Switch *> * arg1)) 0x0;
inline bool (*List40::ptr::_IsEmpty)() = (bool (*)()) 0x0;
inline Switch * (*List40::ptr::_First)() = (Switch * (*)()) 0x0;
inline bool (*List40::ptr::_Equals25)(List40 * self, Switch * arg1, Switch * arg2) = (bool (*)(List40 * self, Switch * arg1, Switch * arg2)) 0x0;
inline int (*List40::ptr::RemoveEach22)(List40 * self, Switch * value) = (int (*)(List40 * self, Switch * value)) 0x629c30;
inline void (*List40::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List40::ptr::CSTR_List40)(List40 * self) = (void (*)(List40 * self)) 0x629ac0;
#endif

#ifdef __linux__

inline List40 * (*List40::ptr::_New)() = (List40 * (*)()) 0x81b9830;
inline Node58 * (*List40::ptr::AddLast40)(List40 * self, Switch * data) = (Node58 * (*)(List40 * self, Switch * data)) 0x80ba250;
inline List40 * (*List40::ptr::_new2)(List40 * self, Array<Switch *> * arg1) = (List40 * (*)(List40 * self, Array<Switch *> * arg1)) 0x0;
inline bool (*List40::ptr::_IsEmpty)() = (bool (*)()) 0x8075020;
inline Switch * (*List40::ptr::_First)() = (Switch * (*)()) 0x8075030;
inline bool (*List40::ptr::_Equals25)(List40 * self, Switch * arg1, Switch * arg2) = (bool (*)(List40 * self, Switch * arg1, Switch * arg2)) 0x8075050;
inline int (*List40::ptr::RemoveEach22)(List40 * self, Switch * value) = (int (*)(List40 * self, Switch * value)) 0x8075060;
inline void (*List40::ptr::_mark)() = (void (*)()) 0x8086df0;
inline void (*List40::ptr::CSTR_List40)(List40 * self) = (void (*)(List40 * self)) 0x81b9b50;
#endif
#endif
