// Generated automatically. Do not edit!
#ifndef _List26_
#define _List26_
template<class T> class Array;
class Enumerator45;
class Node43;
#include "Object.hpp"

class List26 : public Object  {
public:
    Node43 * _head;

    // Wrappers
    List26() {
        ptr::CSTR_List26(this);
    }

    inline List26 * _New() { return ptr::_New(); }
    inline virtual Node43 * AddLast26(int data) { return ptr::AddLast26(this, data); }
    inline List26 * _new2(Array<int> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual int Count() { return ptr::_Count(); }
    inline virtual int RemoveFirst() { return ptr::_RemoveFirst(); }
    inline virtual bool Equals16(int arg1, int arg2) { return ptr::_Equals16(this, arg1, arg2); }
    inline virtual bool Contains2(int value) { return ptr::Contains2(this, value); }
    inline virtual int Clear() { return ptr::_Clear(); }
    inline virtual Enumerator45 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual int First() { return ptr::_First(); }
    inline virtual int Last2() { return ptr::Last2(this); }
    inline virtual Array<int> * ToArray() { return ptr::ToArray(this); }
    inline virtual bool IsEmpty() { return ptr::_IsEmpty(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List26 * (*_New)();
        static Node43 * (*AddLast26)(List26 * self, int data);
        static List26 * (*_new2)(List26 * self, Array<int> * arg1);
        static int (*_Count)();
        static int (*_RemoveFirst)();
        static bool (*_Equals16)(List26 * self, int arg1, int arg2);
        static bool (*Contains2)(List26 * self, int value);
        static int (*_Clear)();
        static Enumerator45 * (*ObjectEnumerator)(List26 * self);
        static int (*_First)();
        static int (*Last2)(List26 * self);
        static Array<int> * (*ToArray)(List26 * self);
        static bool (*_IsEmpty)();
        static void (*_mark)();
        static void (*CSTR_List26)(List26 * self);
    };
};

#ifdef _WIN32

inline List26 * (*List26::ptr::_New)() = (List26 * (*)()) 0x0;
inline Node43 * (*List26::ptr::AddLast26)(List26 * self, int data) = (Node43 * (*)(List26 * self, int data)) 0x5f7be0;
inline List26 * (*List26::ptr::_new2)(List26 * self, Array<int> * arg1) = (List26 * (*)(List26 * self, Array<int> * arg1)) 0x0;
inline int (*List26::ptr::_Count)() = (int (*)()) 0x0;
inline int (*List26::ptr::_RemoveFirst)() = (int (*)()) 0x0;
inline bool (*List26::ptr::_Equals16)(List26 * self, int arg1, int arg2) = (bool (*)(List26 * self, int arg1, int arg2)) 0x0;
inline bool (*List26::ptr::Contains2)(List26 * self, int value) = (bool (*)(List26 * self, int value)) 0x5f7c80;
inline int (*List26::ptr::_Clear)() = (int (*)()) 0x0;
inline Enumerator45 * (*List26::ptr::ObjectEnumerator)(List26 * self) = (Enumerator45 * (*)(List26 * self)) 0x5f7cc0;
inline int (*List26::ptr::_First)() = (int (*)()) 0x0;
inline int (*List26::ptr::Last2)(List26 * self) = (int (*)(List26 * self)) 0x453d60;
inline Array<int> * (*List26::ptr::ToArray)(List26 * self) = (Array<int> * (*)(List26 * self)) 0x5f7d50;
inline bool (*List26::ptr::_IsEmpty)() = (bool (*)()) 0x0;
inline void (*List26::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List26::ptr::CSTR_List26)(List26 * self) = (void (*)(List26 * self)) 0x5f7b10;
#endif

#ifdef __linux__

inline List26 * (*List26::ptr::_New)() = (List26 * (*)()) 0x819f350;
inline Node43 * (*List26::ptr::AddLast26)(List26 * self, int data) = (Node43 * (*)(List26 * self, int data)) 0x80b90a0;
inline List26 * (*List26::ptr::_new2)(List26 * self, Array<int> * arg1) = (List26 * (*)(List26 * self, Array<int> * arg1)) 0x819f360;
inline int (*List26::ptr::_Count)() = (int (*)()) 0x80735d0;
inline int (*List26::ptr::_RemoveFirst)() = (int (*)()) 0x80735f0;
inline bool (*List26::ptr::_Equals16)(List26 * self, int arg1, int arg2) = (bool (*)(List26 * self, int arg1, int arg2)) 0x8073630;
inline bool (*List26::ptr::Contains2)(List26 * self, int value) = (bool (*)(List26 * self, int value)) 0x8073640;
inline int (*List26::ptr::_Clear)() = (int (*)()) 0x80955d0;
inline Enumerator45 * (*List26::ptr::ObjectEnumerator)(List26 * self) = (Enumerator45 * (*)(List26 * self)) 0x80b8fd0;
inline int (*List26::ptr::_First)() = (int (*)()) 0x8073690;
inline int (*List26::ptr::Last2)(List26 * self) = (int (*)(List26 * self)) 0x80736b0;
inline Array<int> * (*List26::ptr::ToArray)(List26 * self) = (Array<int> * (*)(List26 * self)) 0x80c1020;
inline bool (*List26::ptr::_IsEmpty)() = (bool (*)()) 0x80736d0;
inline void (*List26::ptr::_mark)() = (void (*)()) 0x808ff50;
inline void (*List26::ptr::CSTR_List26)(List26 * self) = (void (*)(List26 * self)) 0x819f620;
#endif
#endif
