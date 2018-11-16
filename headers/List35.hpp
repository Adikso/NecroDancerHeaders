// Generated automatically. Do not edit!
#ifndef _List35_
#define _List35_
template<class T> class Array;
class Arrow;
class Node52;
#include "Object.hpp"

class List35 : public Object  {
public:
    Node52 * _head;

    // Wrappers
    List35() {
        ptr::CSTR_List35(this);
    }

    inline List35 * _New() { return ptr::_New(); }
    inline virtual Node52 * AddLast35(Arrow * data) { return ptr::AddLast35(this, data); }
    inline List35 * _new2(Array<Arrow *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Node52 * FirstNode() { return ptr::_FirstNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List35 * (*_New)();
        static Node52 * (*AddLast35)(List35 * self, Arrow * data);
        static List35 * (*_new2)(List35 * self, Array<Arrow *> * arg1);
        static Node52 * (*_FirstNode)();
        static void (*_mark)();
        static void (*CSTR_List35)(List35 * self);
    };
};

#ifdef _WIN32

inline List35 * (*List35::ptr::_New)() = (List35 * (*)()) 0x0;
inline Node52 * (*List35::ptr::AddLast35)(List35 * self, Arrow * data) = (Node52 * (*)(List35 * self, Arrow * data)) 0x6068f0;
inline List35 * (*List35::ptr::_new2)(List35 * self, Array<Arrow *> * arg1) = (List35 * (*)(List35 * self, Array<Arrow *> * arg1)) 0x0;
inline Node52 * (*List35::ptr::_FirstNode)() = (Node52 * (*)()) 0x0;
inline void (*List35::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List35::ptr::CSTR_List35)(List35 * self) = (void (*)(List35 * self)) 0x606820;
#endif

#ifdef __linux__

inline List35 * (*List35::ptr::_New)() = (List35 * (*)()) 0x81a9fe0;
inline Node52 * (*List35::ptr::AddLast35)(List35 * self, Arrow * data) = (Node52 * (*)(List35 * self, Arrow * data)) 0x81aa220;
inline List35 * (*List35::ptr::_new2)(List35 * self, Array<Arrow *> * arg1) = (List35 * (*)(List35 * self, Array<Arrow *> * arg1)) 0x0;
inline Node52 * (*List35::ptr::_FirstNode)() = (Node52 * (*)()) 0x8074230;
inline void (*List35::ptr::_mark)() = (void (*)()) 0x8087450;
inline void (*List35::ptr::CSTR_List35)(List35 * self) = (void (*)(List35 * self)) 0x81aa360;
#endif
#endif
