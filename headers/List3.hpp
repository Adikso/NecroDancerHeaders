// Generated automatically. Do not edit!
#ifndef _List3_
#define _List3_
template<class T> class Array;
class Array<int;
class Enumerator3;
class Node7;
#include "Object.hpp"

class List3 : public Object  {
public:
    Node7 * _head;

    // Wrappers
    List3() {
        ptr::CSTR_List3(this);
    }

    inline List3 * _New() { return ptr::_New(); }
    inline virtual Node7 * AddLast3(Array<int> * data) { return ptr::AddLast3(this, data); }
    inline List3 * _new2(Array<Array<int> > * arg1) { return ptr::_new2(this, arg1); }
    inline virtual int Count() { return ptr::_Count(); }
    inline virtual Enumerator3 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List3 * (*_New)();
        static Node7 * (*AddLast3)(List3 * self, Array<int> * data);
        static List3 * (*_new2)(List3 * self, Array<Array<int> > * arg1);
        static int (*_Count)();
        static Enumerator3 * (*ObjectEnumerator)(List3 * self);
        static void (*_mark)();
        static void (*CSTR_List3)(List3 * self);
    };
};

#ifdef _WIN32

inline List3 * (*List3::ptr::_New)() = (List3 * (*)()) 0x0;
inline Node7 * (*List3::ptr::AddLast3)(List3 * self, Array<int> * data) = (Node7 * (*)(List3 * self, Array<int> * data)) 0x541f90;
inline List3 * (*List3::ptr::_new2)(List3 * self, Array<Array<int> > * arg1) = (List3 * (*)(List3 * self, Array<Array<int> > * arg1)) 0x0;
inline int (*List3::ptr::_Count)() = (int (*)()) 0x0;
inline Enumerator3 * (*List3::ptr::ObjectEnumerator)(List3 * self) = (Enumerator3 * (*)(List3 * self)) 0x542040;
inline void (*List3::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List3::ptr::CSTR_List3)(List3 * self) = (void (*)(List3 * self)) 0x541ef0;
#endif

#ifdef __linux__

inline List3 * (*List3::ptr::_New)() = (List3 * (*)()) 0x814b930;
inline Node7 * (*List3::ptr::AddLast3)(List3 * self, Array<int> * data) = (Node7 * (*)(List3 * self, Array<int> * data)) 0x80bd6e0;
inline List3 * (*List3::ptr::_new2)(List3 * self, Array<Array<int> > * arg1) = (List3 * (*)(List3 * self, Array<Array<int> > * arg1)) 0x814b940;
inline int (*List3::ptr::_Count)() = (int (*)()) 0x806f610;
inline Enumerator3 * (*List3::ptr::ObjectEnumerator)(List3 * self) = (Enumerator3 * (*)(List3 * self)) 0x80b65e0;
inline void (*List3::ptr::_mark)() = (void (*)()) 0x808e280;
inline void (*List3::ptr::CSTR_List3)(List3 * self) = (void (*)(List3 * self)) 0x814be70;
#endif
#endif
