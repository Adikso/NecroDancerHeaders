// Generated automatically. Do not edit!
#ifndef _List11_
#define _List11_
template<class T> class Array;
class Enumerator23;
class Node18;
class String;
#include "Object.hpp"

class List11 : public Object  {
public:
    Node18 * _head;

    // Wrappers
    List11() {
        ptr::CSTR_List11(this);
    }

    inline List11 * _New() { return ptr::_New(); }
    inline virtual Node18 * AddLast11(String * data) { return ptr::AddLast11(this, data); }
    inline List11 * _new2(Array<String> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual int Clear() { return ptr::_Clear(); }
    inline virtual bool Equals8(String * arg1, String * arg2) { return ptr::_Equals8(this, arg1, arg2); }
    inline virtual bool Contains(String * value) { return ptr::Contains(this, value); }
    inline virtual int RemoveEach7(String * value) { return ptr::RemoveEach7(this, value); }
    inline virtual Enumerator23 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual int Count() { return ptr::_Count(); }
    inline virtual Array<String> * ToArray() { return ptr::ToArray(this); }
    inline virtual int Compare(String * lhs, String * rhs) { return ptr::Compare(this, lhs, rhs); }
    inline virtual int Sort(int ascending) { return ptr::Sort(this, ascending); }
    inline virtual String * Last2() { return ptr::Last2(this); }
    inline virtual Node18 * FirstNode() { return ptr::_FirstNode(); }
    inline virtual bool IsEmpty() { return ptr::_IsEmpty(); }
    inline virtual String * RemoveFirst() { return ptr::RemoveFirst(this); }
    inline virtual String * RemoveLast() { return ptr::RemoveLast(this); }
    inline virtual Node18 * AddFirst(String * data) { return ptr::AddFirst(this, data); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List11 * (*_New)();
        static Node18 * (*AddLast11)(List11 * self, String * data);
        static List11 * (*_new2)(List11 * self, Array<String> * arg1);
        static int (*_Clear)();
        static bool (*_Equals8)(List11 * self, String * arg1, String * arg2);
        static bool (*Contains)(List11 * self, String * value);
        static int (*RemoveEach7)(List11 * self, String * value);
        static Enumerator23 * (*ObjectEnumerator)(List11 * self);
        static int (*_Count)();
        static Array<String> * (*ToArray)(List11 * self);
        static int (*Compare)(List11 * self, String * lhs, String * rhs);
        static int (*Sort)(List11 * self, int ascending);
        static String * (*Last2)(List11 * self);
        static Node18 * (*_FirstNode)();
        static bool (*_IsEmpty)();
        static String * (*RemoveFirst)(List11 * self);
        static String * (*RemoveLast)(List11 * self);
        static Node18 * (*AddFirst)(List11 * self, String * data);
        static void (*_mark)();
        static void (*CSTR_List11)(List11 * self);
    };
};

#ifdef _WIN32

inline List11 * (*List11::ptr::_New)() = (List11 * (*)()) 0x0;
inline Node18 * (*List11::ptr::AddLast11)(List11 * self, String * data) = (Node18 * (*)(List11 * self, String * data)) 0x5c2fb0;
inline List11 * (*List11::ptr::_new2)(List11 * self, Array<String> * arg1) = (List11 * (*)(List11 * self, Array<String> * arg1)) 0x0;
inline int (*List11::ptr::_Clear)() = (int (*)()) 0x0;
inline bool (*List11::ptr::_Equals8)(List11 * self, String * arg1, String * arg2) = (bool (*)(List11 * self, String * arg1, String * arg2)) 0x0;
inline bool (*List11::ptr::Contains)(List11 * self, String * value) = (bool (*)(List11 * self, String * value)) 0x5c3100;
inline int (*List11::ptr::RemoveEach7)(List11 * self, String * value) = (int (*)(List11 * self, String * value)) 0x5c31c0;
inline Enumerator23 * (*List11::ptr::ObjectEnumerator)(List11 * self) = (Enumerator23 * (*)(List11 * self)) 0x5c3280;
inline int (*List11::ptr::_Count)() = (int (*)()) 0x0;
inline Array<String> * (*List11::ptr::ToArray)(List11 * self) = (Array<String> * (*)(List11 * self)) 0x5c3310;
inline int (*List11::ptr::Compare)(List11 * self, String * lhs, String * rhs) = (int (*)(List11 * self, String * lhs, String * rhs)) 0x5c3410;
inline int (*List11::ptr::Sort)(List11 * self, int ascending) = (int (*)(List11 * self, int ascending)) 0x5c34a0;
inline String * (*List11::ptr::Last2)(List11 * self) = (String * (*)(List11 * self)) 0x5c3720;
inline Node18 * (*List11::ptr::_FirstNode)() = (Node18 * (*)()) 0x0;
inline bool (*List11::ptr::_IsEmpty)() = (bool (*)()) 0x0;
inline String * (*List11::ptr::RemoveFirst)(List11 * self) = (String * (*)(List11 * self)) 0x5c3790;
inline String * (*List11::ptr::RemoveLast)(List11 * self) = (String * (*)(List11 * self)) 0x5c3810;
inline Node18 * (*List11::ptr::AddFirst)(List11 * self, String * data) = (Node18 * (*)(List11 * self, String * data)) 0x5c3890;
inline void (*List11::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List11::ptr::CSTR_List11)(List11 * self) = (void (*)(List11 * self)) 0x5c2f00;
#endif

#ifdef __linux__

inline List11 * (*List11::ptr::_New)() = (List11 * (*)()) 0x817f2c0;
inline Node18 * (*List11::ptr::AddLast11)(List11 * self, String * data) = (Node18 * (*)(List11 * self, String * data)) 0x80da020;
inline List11 * (*List11::ptr::_new2)(List11 * self, Array<String> * arg1) = (List11 * (*)(List11 * self, Array<String> * arg1)) 0x817f2d0;
inline int (*List11::ptr::_Clear)() = (int (*)()) 0x809b570;
inline bool (*List11::ptr::_Equals8)(List11 * self, String * arg1, String * arg2) = (bool (*)(List11 * self, String * arg1, String * arg2)) 0x80c24a0;
inline bool (*List11::ptr::Contains)(List11 * self, String * value) = (bool (*)(List11 * self, String * value)) 0x80c3a40;
inline int (*List11::ptr::RemoveEach7)(List11 * self, String * value) = (int (*)(List11 * self, String * value)) 0x80c3990;
inline Enumerator23 * (*List11::ptr::ObjectEnumerator)(List11 * self) = (Enumerator23 * (*)(List11 * self)) 0x80b7350;
inline int (*List11::ptr::_Count)() = (int (*)()) 0x8070c10;
inline Array<String> * (*List11::ptr::ToArray)(List11 * self) = (Array<String> * (*)(List11 * self)) 0x80d8970;
inline int (*List11::ptr::Compare)(List11 * self, String * lhs, String * rhs) = (int (*)(List11 * self, String * lhs, String * rhs)) 0x81f72e0;
inline int (*List11::ptr::Sort)(List11 * self, int ascending) = (int (*)(List11 * self, int ascending)) 0x80d2470;
inline String * (*List11::ptr::Last2)(List11 * self) = (String * (*)(List11 * self)) 0x8070c30;
inline Node18 * (*List11::ptr::_FirstNode)() = (Node18 * (*)()) 0x8070c60;
inline bool (*List11::ptr::_IsEmpty)() = (bool (*)()) 0x8070c80;
inline String * (*List11::ptr::RemoveFirst)(List11 * self) = (String * (*)(List11 * self)) 0x80c3930;
inline String * (*List11::ptr::RemoveLast)(List11 * self) = (String * (*)(List11 * self)) 0x80c38d0;
inline Node18 * (*List11::ptr::AddFirst)(List11 * self, String * data) = (Node18 * (*)(List11 * self, String * data)) 0x80d9010;
inline void (*List11::ptr::_mark)() = (void (*)()) 0x80907d0;
inline void (*List11::ptr::CSTR_List11)(List11 * self) = (void (*)(List11 * self)) 0x817f670;
#endif
#endif
