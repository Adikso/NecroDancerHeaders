// Generated automatically. Do not edit!
#ifndef _List53_
#define _List53_
template<class T> class Array;
class Bell;
class Enumerator56;
class Node73;
#include "Object.hpp"

class List53 : public Object  {
public:
    Node73 * _head;

    // Wrappers
    List53() {
        ptr::CSTR_List53(this);
    }

    inline List53 * _New() { return ptr::_New(); }
    inline virtual Node73 * AddLast53(Bell * data) { return ptr::AddLast53(this, data); }
    inline List53 * _new2(Array<Bell *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual bool Equals32(Bell * arg1, Bell * arg2) { return ptr::_Equals32(this, arg1, arg2); }
    inline virtual int RemoveEach28(Bell * arg1) { return ptr::_RemoveEach28(this, arg1); }
    inline virtual Enumerator56 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List53 * (*_New)();
        static Node73 * (*AddLast53)(List53 * self, Bell * data);
        static List53 * (*_new2)(List53 * self, Array<Bell *> * arg1);
        static bool (*_Equals32)(List53 * self, Bell * arg1, Bell * arg2);
        static int (*_RemoveEach28)(List53 * self, Bell * arg1);
        static Enumerator56 * (*ObjectEnumerator)(List53 * self);
        static void (*_mark)();
        static void (*CSTR_List53)(List53 * self);
    };
};

#ifdef _WIN32

inline List53 * (*List53::ptr::_New)() = (List53 * (*)()) 0x0;
inline Node73 * (*List53::ptr::AddLast53)(List53 * self, Bell * data) = (Node73 * (*)(List53 * self, Bell * data)) 0x66bad0;
inline List53 * (*List53::ptr::_new2)(List53 * self, Array<Bell *> * arg1) = (List53 * (*)(List53 * self, Array<Bell *> * arg1)) 0x0;
inline bool (*List53::ptr::_Equals32)(List53 * self, Bell * arg1, Bell * arg2) = (bool (*)(List53 * self, Bell * arg1, Bell * arg2)) 0x0;
inline int (*List53::ptr::_RemoveEach28)(List53 * self, Bell * arg1) = (int (*)(List53 * self, Bell * arg1)) 0x0;
inline Enumerator56 * (*List53::ptr::ObjectEnumerator)(List53 * self) = (Enumerator56 * (*)(List53 * self)) 0x66bb70;
inline void (*List53::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List53::ptr::CSTR_List53)(List53 * self) = (void (*)(List53 * self)) 0x66ba00;
#endif

#ifdef __linux__

inline List53 * (*List53::ptr::_New)() = (List53 * (*)()) 0x81d9bb0;
inline Node73 * (*List53::ptr::AddLast53)(List53 * self, Bell * data) = (Node73 * (*)(List53 * self, Bell * data)) 0x80bbfc0;
inline List53 * (*List53::ptr::_new2)(List53 * self, Array<Bell *> * arg1) = (List53 * (*)(List53 * self, Array<Bell *> * arg1)) 0x0;
inline bool (*List53::ptr::_Equals32)(List53 * self, Bell * arg1, Bell * arg2) = (bool (*)(List53 * self, Bell * arg1, Bell * arg2)) 0x8077ae0;
inline int (*List53::ptr::_RemoveEach28)(List53 * self, Bell * arg1) = (int (*)(List53 * self, Bell * arg1)) 0x8077af0;
inline Enumerator56 * (*List53::ptr::ObjectEnumerator)(List53 * self) = (Enumerator56 * (*)(List53 * self)) 0x80bcd20;
inline void (*List53::ptr::_mark)() = (void (*)()) 0x80889f0;
inline void (*List53::ptr::CSTR_List53)(List53 * self) = (void (*)(List53 * self)) 0x81d9ed0;
#endif
#endif
