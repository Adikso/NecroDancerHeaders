// Generated automatically. Do not edit!
#ifndef _List48_
#define _List48_
template<class T> class Array;
class Enumerator43;
class Node68;
class RoomData;
#include "Object.hpp"

class List48 : public Object  {
public:
    Node68 * _head;

    // Wrappers
    List48() {
        ptr::CSTR_List48(this);
    }

    inline List48 * _New() { return ptr::_New(); }
    inline virtual Node68 * AddLast48(RoomData * data) { return ptr::AddLast48(this, data); }
    inline List48 * _new2(Array<RoomData *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual int Clear() { return ptr::_Clear(); }
    inline virtual RoomData * Last2() { return ptr::_Last2(); }
    inline virtual Enumerator43 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual int Count() { return ptr::_Count(); }
    inline virtual Array<RoomData *> * ToArray() { return ptr::ToArray(this); }
    inline virtual RoomData * RemoveFirst() { return ptr::RemoveFirst(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List48 * (*_New)();
        static Node68 * (*AddLast48)(List48 * self, RoomData * data);
        static List48 * (*_new2)(List48 * self, Array<RoomData *> * arg1);
        static int (*_Clear)();
        static RoomData * (*_Last2)();
        static Enumerator43 * (*ObjectEnumerator)(List48 * self);
        static int (*_Count)();
        static Array<RoomData *> * (*ToArray)(List48 * self);
        static RoomData * (*RemoveFirst)(List48 * self);
        static void (*_mark)();
        static void (*CSTR_List48)(List48 * self);
    };
};

#ifdef _WIN32

inline List48 * (*List48::ptr::_New)() = (List48 * (*)()) 0x0;
inline Node68 * (*List48::ptr::AddLast48)(List48 * self, RoomData * data) = (Node68 * (*)(List48 * self, RoomData * data)) 0x638af0;
inline List48 * (*List48::ptr::_new2)(List48 * self, Array<RoomData *> * arg1) = (List48 * (*)(List48 * self, Array<RoomData *> * arg1)) 0x0;
inline int (*List48::ptr::_Clear)() = (int (*)()) 0x0;
inline RoomData * (*List48::ptr::_Last2)() = (RoomData * (*)()) 0x0;
inline Enumerator43 * (*List48::ptr::ObjectEnumerator)(List48 * self) = (Enumerator43 * (*)(List48 * self)) 0x638b90;
inline int (*List48::ptr::_Count)() = (int (*)()) 0x0;
inline Array<RoomData *> * (*List48::ptr::ToArray)(List48 * self) = (Array<RoomData *> * (*)(List48 * self)) 0x638c20;
inline RoomData * (*List48::ptr::RemoveFirst)(List48 * self) = (RoomData * (*)(List48 * self)) 0x638cf0;
inline void (*List48::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List48::ptr::CSTR_List48)(List48 * self) = (void (*)(List48 * self)) 0x638a20;
#endif

#ifdef __linux__

inline List48 * (*List48::ptr::_New)() = (List48 * (*)()) 0x81bf0a0;
inline Node68 * (*List48::ptr::AddLast48)(List48 * self, RoomData * data) = (Node68 * (*)(List48 * self, RoomData * data)) 0x81bf2e0;
inline List48 * (*List48::ptr::_new2)(List48 * self, Array<RoomData *> * arg1) = (List48 * (*)(List48 * self, Array<RoomData *> * arg1)) 0x0;
inline int (*List48::ptr::_Clear)() = (int (*)()) 0x8093e00;
inline RoomData * (*List48::ptr::_Last2)() = (RoomData * (*)()) 0x8075f00;
inline Enumerator43 * (*List48::ptr::ObjectEnumerator)(List48 * self) = (Enumerator43 * (*)(List48 * self)) 0x80bb240;
inline int (*List48::ptr::_Count)() = (int (*)()) 0x8075f20;
inline Array<RoomData *> * (*List48::ptr::ToArray)(List48 * self) = (Array<RoomData *> * (*)(List48 * self)) 0x80be720;
inline RoomData * (*List48::ptr::RemoveFirst)(List48 * self) = (RoomData * (*)(List48 * self)) 0x8075f40;
inline void (*List48::ptr::_mark)() = (void (*)()) 0x8088270;
inline void (*List48::ptr::CSTR_List48)(List48 * self) = (void (*)(List48 * self)) 0x81bf420;
#endif
#endif
