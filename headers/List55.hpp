// Generated automatically. Do not edit!
#ifndef _List55_
#define _List55_
template<class T> class Array;
class Doppelganger;
class Enumerator48;
class Node76;
#include "Object.hpp"

class List55 : public Object  {
public:
    Node76 * _head;

    // Wrappers
    List55() {
        ptr::CSTR_List55(this);
    }

    inline List55 * _New() { return ptr::_New(); }
    inline virtual Node76 * AddLast55(Doppelganger * data) { return ptr::AddLast55(this, data); }
    inline List55 * _new2(Array<Doppelganger *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator48 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual bool Equals33(Doppelganger * arg1, Doppelganger * arg2) { return ptr::_Equals33(this, arg1, arg2); }
    inline virtual int RemoveEach29(Doppelganger * arg1) { return ptr::_RemoveEach29(this, arg1); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List55 * (*_New)();
        static Node76 * (*AddLast55)(List55 * self, Doppelganger * data);
        static List55 * (*_new2)(List55 * self, Array<Doppelganger *> * arg1);
        static Enumerator48 * (*ObjectEnumerator)(List55 * self);
        static bool (*_Equals33)(List55 * self, Doppelganger * arg1, Doppelganger * arg2);
        static int (*_RemoveEach29)(List55 * self, Doppelganger * arg1);
        static void (*_mark)();
        static void (*CSTR_List55)(List55 * self);
    };
};

#ifdef _WIN32

inline List55 * (*List55::ptr::_New)() = (List55 * (*)()) 0x0;
inline Node76 * (*List55::ptr::AddLast55)(List55 * self, Doppelganger * data) = (Node76 * (*)(List55 * self, Doppelganger * data)) 0x689250;
inline List55 * (*List55::ptr::_new2)(List55 * self, Array<Doppelganger *> * arg1) = (List55 * (*)(List55 * self, Array<Doppelganger *> * arg1)) 0x0;
inline Enumerator48 * (*List55::ptr::ObjectEnumerator)(List55 * self) = (Enumerator48 * (*)(List55 * self)) 0x6892f0;
inline bool (*List55::ptr::_Equals33)(List55 * self, Doppelganger * arg1, Doppelganger * arg2) = (bool (*)(List55 * self, Doppelganger * arg1, Doppelganger * arg2)) 0x0;
inline int (*List55::ptr::_RemoveEach29)(List55 * self, Doppelganger * arg1) = (int (*)(List55 * self, Doppelganger * arg1)) 0x0;
inline void (*List55::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List55::ptr::CSTR_List55)(List55 * self) = (void (*)(List55 * self)) 0x689180;
#endif

#ifdef __linux__

inline List55 * (*List55::ptr::_New)() = (List55 * (*)()) 0x81e13e0;
inline Node76 * (*List55::ptr::AddLast55)(List55 * self, Doppelganger * data) = (Node76 * (*)(List55 * self, Doppelganger * data)) 0x81e1620;
inline List55 * (*List55::ptr::_new2)(List55 * self, Array<Doppelganger *> * arg1) = (List55 * (*)(List55 * self, Array<Doppelganger *> * arg1)) 0x0;
inline Enumerator48 * (*List55::ptr::ObjectEnumerator)(List55 * self) = (Enumerator48 * (*)(List55 * self)) 0x80bc350;
inline bool (*List55::ptr::_Equals33)(List55 * self, Doppelganger * arg1, Doppelganger * arg2) = (bool (*)(List55 * self, Doppelganger * arg1, Doppelganger * arg2)) 0x8078af0;
inline int (*List55::ptr::_RemoveEach29)(List55 * self, Doppelganger * arg1) = (int (*)(List55 * self, Doppelganger * arg1)) 0x8078b00;
inline void (*List55::ptr::_mark)() = (void (*)()) 0x808b1b0;
inline void (*List55::ptr::CSTR_List55)(List55 * self) = (void (*)(List55 * self)) 0x81e1760;
#endif
#endif
