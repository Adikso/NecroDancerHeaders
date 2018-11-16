// Generated automatically. Do not edit!
#ifndef _List43_
#define _List43_
template<class T> class Array;
class ElectricArc;
class Node62;
#include "Object.hpp"

class List43 : public Object  {
public:
    Node62 * _head;

    // Wrappers
    List43() {
        ptr::CSTR_List43(this);
    }

    inline List43 * _New() { return ptr::_New(); }
    inline virtual Node62 * AddLast43(ElectricArc * data) { return ptr::AddLast43(this, data); }
    inline List43 * _new2(Array<ElectricArc *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Node62 * FirstNode() { return ptr::_FirstNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List43 * (*_New)();
        static Node62 * (*AddLast43)(List43 * self, ElectricArc * data);
        static List43 * (*_new2)(List43 * self, Array<ElectricArc *> * arg1);
        static Node62 * (*_FirstNode)();
        static void (*_mark)();
        static void (*CSTR_List43)(List43 * self);
    };
};

#ifdef _WIN32

inline List43 * (*List43::ptr::_New)() = (List43 * (*)()) 0x0;
inline Node62 * (*List43::ptr::AddLast43)(List43 * self, ElectricArc * data) = (Node62 * (*)(List43 * self, ElectricArc * data)) 0x632bf0;
inline List43 * (*List43::ptr::_new2)(List43 * self, Array<ElectricArc *> * arg1) = (List43 * (*)(List43 * self, Array<ElectricArc *> * arg1)) 0x0;
inline Node62 * (*List43::ptr::_FirstNode)() = (Node62 * (*)()) 0x0;
inline void (*List43::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List43::ptr::CSTR_List43)(List43 * self) = (void (*)(List43 * self)) 0x632b20;
#endif

#ifdef __linux__

inline List43 * (*List43::ptr::_New)() = (List43 * (*)()) 0x81bc0f0;
inline Node62 * (*List43::ptr::AddLast43)(List43 * self, ElectricArc * data) = (Node62 * (*)(List43 * self, ElectricArc * data)) 0x81bc330;
inline List43 * (*List43::ptr::_new2)(List43 * self, Array<ElectricArc *> * arg1) = (List43 * (*)(List43 * self, Array<ElectricArc *> * arg1)) 0x0;
inline Node62 * (*List43::ptr::_FirstNode)() = (Node62 * (*)()) 0x8075940;
inline void (*List43::ptr::_mark)() = (void (*)()) 0x8086970;
inline void (*List43::ptr::CSTR_List43)(List43 * self) = (void (*)(List43 * self)) 0x81bc470;
#endif
#endif
