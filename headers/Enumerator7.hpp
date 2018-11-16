// Generated automatically. Do not edit!
#ifndef _Enumerator7_
#define _Enumerator7_
class List13;
class Node23;
class Trap;
#include "Object.hpp"

class Enumerator7 : public Object  {
public:
    List13 * _list;
    Node23 * _curr;

    // Wrappers
    inline Enumerator7 * _New(List13 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator7 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual Trap * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator7 * (*_New)(Enumerator7 * self, List13 * arg1);
        static Enumerator7 * (*_new2)();
        static bool (*_HasNext)();
        static Trap * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Enumerator7 * (*Enumerator7::ptr::_New)(Enumerator7 * self, List13 * arg1) = (Enumerator7 * (*)(Enumerator7 * self, List13 * arg1)) 0x0;
inline Enumerator7 * (*Enumerator7::ptr::_new2)() = (Enumerator7 * (*)()) 0x0;
inline bool (*Enumerator7::ptr::_HasNext)() = (bool (*)()) 0x0;
inline Trap * (*Enumerator7::ptr::_NextObject)() = (Trap * (*)()) 0x0;
inline void (*Enumerator7::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Enumerator7 * (*Enumerator7::ptr::_New)(Enumerator7 * self, List13 * arg1) = (Enumerator7 * (*)(Enumerator7 * self, List13 * arg1)) 0x0;
inline Enumerator7 * (*Enumerator7::ptr::_new2)() = (Enumerator7 * (*)()) 0x81932c0;
inline bool (*Enumerator7::ptr::_HasNext)() = (bool (*)()) 0x80956f0;
inline Trap * (*Enumerator7::ptr::_NextObject)() = (Trap * (*)()) 0x8095680;
inline void (*Enumerator7::ptr::_mark)() = (void (*)()) 0x8082940;
#endif
#endif
