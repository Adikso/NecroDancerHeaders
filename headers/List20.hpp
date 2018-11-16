// Generated automatically. Do not edit!
#ifndef _List20_
#define _List20_
template<class T> class Array;
class Chest;
class Enumerator10;
class Node30;
#include "Object.hpp"

class List20 : public Object  {
public:
    Node30 * _head;

    // Wrappers
    List20() {
        ptr::CSTR_List20(this);
    }

    inline List20 * _New() { return ptr::_New(); }
    inline virtual Node30 * AddLast20(Chest * data) { return ptr::AddLast20(this, data); }
    inline List20 * _new2(Array<Chest *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator10 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual bool Equals13(Chest * arg1, Chest * arg2) { return ptr::_Equals13(this, arg1, arg2); }
    inline virtual int RemoveEach12(Chest * arg1) { return ptr::_RemoveEach12(this, arg1); }
    inline virtual bool IsEmpty() { return ptr::_IsEmpty(); }
    inline virtual Chest * First() { return ptr::_First(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List20 * (*_New)();
        static Node30 * (*AddLast20)(List20 * self, Chest * data);
        static List20 * (*_new2)(List20 * self, Array<Chest *> * arg1);
        static Enumerator10 * (*ObjectEnumerator)(List20 * self);
        static bool (*_Equals13)(List20 * self, Chest * arg1, Chest * arg2);
        static int (*_RemoveEach12)(List20 * self, Chest * arg1);
        static bool (*_IsEmpty)();
        static Chest * (*_First)();
        static void (*_mark)();
        static void (*CSTR_List20)(List20 * self);
    };
};

#ifdef _WIN32

inline List20 * (*List20::ptr::_New)() = (List20 * (*)()) 0x0;
inline Node30 * (*List20::ptr::AddLast20)(List20 * self, Chest * data) = (Node30 * (*)(List20 * self, Chest * data)) 0x5dd2d0;
inline List20 * (*List20::ptr::_new2)(List20 * self, Array<Chest *> * arg1) = (List20 * (*)(List20 * self, Array<Chest *> * arg1)) 0x0;
inline Enumerator10 * (*List20::ptr::ObjectEnumerator)(List20 * self) = (Enumerator10 * (*)(List20 * self)) 0x5dd370;
inline bool (*List20::ptr::_Equals13)(List20 * self, Chest * arg1, Chest * arg2) = (bool (*)(List20 * self, Chest * arg1, Chest * arg2)) 0x0;
inline int (*List20::ptr::_RemoveEach12)(List20 * self, Chest * arg1) = (int (*)(List20 * self, Chest * arg1)) 0x0;
inline bool (*List20::ptr::_IsEmpty)() = (bool (*)()) 0x0;
inline Chest * (*List20::ptr::_First)() = (Chest * (*)()) 0x0;
inline void (*List20::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List20::ptr::CSTR_List20)(List20 * self) = (void (*)(List20 * self)) 0x5dd200;
#endif

#ifdef __linux__

inline List20 * (*List20::ptr::_New)() = (List20 * (*)()) 0x8196a90;
inline Node30 * (*List20::ptr::AddLast20)(List20 * self, Chest * data) = (Node30 * (*)(List20 * self, Chest * data)) 0x8196cd0;
inline List20 * (*List20::ptr::_new2)(List20 * self, Array<Chest *> * arg1) = (List20 * (*)(List20 * self, Array<Chest *> * arg1)) 0x0;
inline Enumerator10 * (*List20::ptr::ObjectEnumerator)(List20 * self) = (Enumerator10 * (*)(List20 * self)) 0x80b8360;
inline bool (*List20::ptr::_Equals13)(List20 * self, Chest * arg1, Chest * arg2) = (bool (*)(List20 * self, Chest * arg1, Chest * arg2)) 0x8072040;
inline int (*List20::ptr::_RemoveEach12)(List20 * self, Chest * arg1) = (int (*)(List20 * self, Chest * arg1)) 0x8072050;
inline bool (*List20::ptr::_IsEmpty)() = (bool (*)()) 0x80720b0;
inline Chest * (*List20::ptr::_First)() = (Chest * (*)()) 0x80720c0;
inline void (*List20::ptr::_mark)() = (void (*)()) 0x8089f70;
inline void (*List20::ptr::CSTR_List20)(List20 * self) = (void (*)(List20 * self)) 0x8196e10;
#endif
#endif
