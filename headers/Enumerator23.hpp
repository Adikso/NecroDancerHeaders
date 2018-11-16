// Generated automatically. Do not edit!
#ifndef _Enumerator23_
#define _Enumerator23_
class List11;
class Node18;
class String;
#include "Object.hpp"

class Enumerator23 : public Object  {
public:
    List11 * _list;
    Node18 * _curr;

    // Wrappers
    inline Enumerator23 * _New(List11 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator23 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual String * NextObject() { return ptr::NextObject(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator23 * (*_New)(Enumerator23 * self, List11 * arg1);
        static Enumerator23 * (*_new2)();
        static bool (*_HasNext)();
        static String * (*NextObject)(Enumerator23 * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Enumerator23 * (*Enumerator23::ptr::_New)(Enumerator23 * self, List11 * arg1) = (Enumerator23 * (*)(Enumerator23 * self, List11 * arg1)) 0x0;
inline Enumerator23 * (*Enumerator23::ptr::_new2)() = (Enumerator23 * (*)()) 0x0;
inline bool (*Enumerator23::ptr::_HasNext)() = (bool (*)()) 0x0;
inline String * (*Enumerator23::ptr::NextObject)(Enumerator23 * self) = (String * (*)(Enumerator23 * self)) 0x61fb00;
inline void (*Enumerator23::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Enumerator23 * (*Enumerator23::ptr::_New)(Enumerator23 * self, List11 * arg1) = (Enumerator23 * (*)(Enumerator23 * self, List11 * arg1)) 0x81b8640;
inline Enumerator23 * (*Enumerator23::ptr::_new2)() = (Enumerator23 * (*)()) 0x81b86f0;
inline bool (*Enumerator23::ptr::_HasNext)() = (bool (*)()) 0x809b440;
inline String * (*Enumerator23::ptr::NextObject)(Enumerator23 * self) = (String * (*)(Enumerator23 * self)) 0x809b3d0;
inline void (*Enumerator23::ptr::_mark)() = (void (*)()) 0x8096600;
#endif
#endif
