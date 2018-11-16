// Generated automatically. Do not edit!
#ifndef _Enumerator33_
#define _Enumerator33_
class List15;
class Node25;
class TrapObject;
#include "Object.hpp"

class Enumerator33 : public Object  {
public:
    List15 * _list;
    Node25 * _curr;

    // Wrappers
    inline Enumerator33 * _New(List15 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator33 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual TrapObject * NextObject() { return ptr::NextObject(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator33 * (*_New)(Enumerator33 * self, List15 * arg1);
        static Enumerator33 * (*_new2)();
        static bool (*_HasNext)();
        static TrapObject * (*NextObject)(Enumerator33 * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Enumerator33 * (*Enumerator33::ptr::_New)(Enumerator33 * self, List15 * arg1) = (Enumerator33 * (*)(Enumerator33 * self, List15 * arg1)) 0x0;
inline Enumerator33 * (*Enumerator33::ptr::_new2)() = (Enumerator33 * (*)()) 0x0;
inline bool (*Enumerator33::ptr::_HasNext)() = (bool (*)()) 0x0;
inline TrapObject * (*Enumerator33::ptr::NextObject)(Enumerator33 * self) = (TrapObject * (*)(Enumerator33 * self)) 0x65d2f0;
inline void (*Enumerator33::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Enumerator33 * (*Enumerator33::ptr::_New)(Enumerator33 * self, List15 * arg1) = (Enumerator33 * (*)(Enumerator33 * self, List15 * arg1)) 0x0;
inline Enumerator33 * (*Enumerator33::ptr::_new2)() = (Enumerator33 * (*)()) 0x81d3f50;
inline bool (*Enumerator33::ptr::_HasNext)() = (bool (*)()) 0x808f350;
inline TrapObject * (*Enumerator33::ptr::NextObject)(Enumerator33 * self) = (TrapObject * (*)(Enumerator33 * self)) 0x808f2e0;
inline void (*Enumerator33::ptr::_mark)() = (void (*)()) 0x8089a30;
#endif
#endif
