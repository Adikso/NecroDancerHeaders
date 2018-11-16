// Generated automatically. Do not edit!
#ifndef _List2_
#define _List2_
template<class T> class Array;
class Enumerator2;
class Node6;
class Sprite;
#include "Object.hpp"

class List2 : public Object  {
public:
    Node6 * _head;

    // Wrappers
    List2() {
        ptr::CSTR_List2(this);
    }

    inline List2 * _New() { return ptr::_New(); }
    inline virtual Node6 * AddLast2(Sprite * data) { return ptr::AddLast2(this, data); }
    inline List2 * _new2(Array<Sprite *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator2 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual int Clear() { return ptr::_Clear(); }
    inline virtual int Count() { return ptr::_Count(); }
    inline virtual Sprite * First() { return ptr::_First(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List2 * (*_New)();
        static Node6 * (*AddLast2)(List2 * self, Sprite * data);
        static List2 * (*_new2)(List2 * self, Array<Sprite *> * arg1);
        static Enumerator2 * (*ObjectEnumerator)(List2 * self);
        static int (*_Clear)();
        static int (*_Count)();
        static Sprite * (*_First)();
        static void (*_mark)();
        static void (*CSTR_List2)(List2 * self);
    };
};

#ifdef _WIN32

inline List2 * (*List2::ptr::_New)() = (List2 * (*)()) 0x0;
inline Node6 * (*List2::ptr::AddLast2)(List2 * self, Sprite * data) = (Node6 * (*)(List2 * self, Sprite * data)) 0x541dc0;
inline List2 * (*List2::ptr::_new2)(List2 * self, Array<Sprite *> * arg1) = (List2 * (*)(List2 * self, Array<Sprite *> * arg1)) 0x0;
inline Enumerator2 * (*List2::ptr::ObjectEnumerator)(List2 * self) = (Enumerator2 * (*)(List2 * self)) 0x541e60;
inline int (*List2::ptr::_Clear)() = (int (*)()) 0x0;
inline int (*List2::ptr::_Count)() = (int (*)()) 0x0;
inline Sprite * (*List2::ptr::_First)() = (Sprite * (*)()) 0x0;
inline void (*List2::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List2::ptr::CSTR_List2)(List2 * self) = (void (*)(List2 * self)) 0x541cf0;
#endif

#ifdef __linux__

inline List2 * (*List2::ptr::_New)() = (List2 * (*)()) 0x8145e70;
inline Node6 * (*List2::ptr::AddLast2)(List2 * self, Sprite * data) = (Node6 * (*)(List2 * self, Sprite * data)) 0x80b6350;
inline List2 * (*List2::ptr::_new2)(List2 * self, Array<Sprite *> * arg1) = (List2 * (*)(List2 * self, Array<Sprite *> * arg1)) 0x0;
inline Enumerator2 * (*List2::ptr::ObjectEnumerator)(List2 * self) = (Enumerator2 * (*)(List2 * self)) 0x80b6510;
inline int (*List2::ptr::_Clear)() = (int (*)()) 0x8094a50;
inline int (*List2::ptr::_Count)() = (int (*)()) 0x806f590;
inline Sprite * (*List2::ptr::_First)() = (Sprite * (*)()) 0x806f5b0;
inline void (*List2::ptr::_mark)() = (void (*)()) 0x808e570;
inline void (*List2::ptr::CSTR_List2)(List2 * self) = (void (*)(List2 * self)) 0x8146190;
#endif
#endif
