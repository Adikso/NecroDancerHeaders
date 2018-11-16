// Generated automatically. Do not edit!
#ifndef _Enumerator11_
#define _Enumerator11_
class Crate;
class List8;
class Node15;
#include "Object.hpp"

class Enumerator11 : public Object  {
public:
    List8 * _list;
    Node15 * _curr;

    // Wrappers
    inline Enumerator11 * _New(List8 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator11 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual Crate * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator11 * (*_New)(Enumerator11 * self, List8 * arg1);
        static Enumerator11 * (*_new2)();
        static bool (*_HasNext)();
        static Crate * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Enumerator11 * (*Enumerator11::ptr::_New)(Enumerator11 * self, List8 * arg1) = (Enumerator11 * (*)(Enumerator11 * self, List8 * arg1)) 0x0;
inline Enumerator11 * (*Enumerator11::ptr::_new2)() = (Enumerator11 * (*)()) 0x0;
inline bool (*Enumerator11::ptr::_HasNext)() = (bool (*)()) 0x0;
inline Crate * (*Enumerator11::ptr::_NextObject)() = (Crate * (*)()) 0x0;
inline void (*Enumerator11::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Enumerator11 * (*Enumerator11::ptr::_New)(Enumerator11 * self, List8 * arg1) = (Enumerator11 * (*)(Enumerator11 * self, List8 * arg1)) 0x0;
inline Enumerator11 * (*Enumerator11::ptr::_new2)() = (Enumerator11 * (*)()) 0x8197bd0;
inline bool (*Enumerator11::ptr::_HasNext)() = (bool (*)()) 0x8093f20;
inline Crate * (*Enumerator11::ptr::_NextObject)() = (Crate * (*)()) 0x8093eb0;
inline void (*Enumerator11::ptr::_mark)() = (void (*)()) 0x80870f0;
#endif
#endif
