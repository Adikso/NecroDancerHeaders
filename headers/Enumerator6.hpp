// Generated automatically. Do not edit!
#ifndef _Enumerator6_
#define _Enumerator6_
class Flyaway;
class List11;
class Node18;
#include "Object.hpp"

class Enumerator6 : public Object  {
public:
    List11 * _list;
    Node18 * _curr;

    // Wrappers
    inline Enumerator6 * _New(List11 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator6 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual Flyaway * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator6 * (*_New)(Enumerator6 * self, List11 * arg1);
        static Enumerator6 * (*_new2)();
        static bool (*_HasNext)();
        static Flyaway * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Enumerator6 * (*Enumerator6::ptr::_New)(Enumerator6 * self, List11 * arg1) = (Enumerator6 * (*)(Enumerator6 * self, List11 * arg1)) 0x0;
inline Enumerator6 * (*Enumerator6::ptr::_new2)() = (Enumerator6 * (*)()) 0x0;
inline bool (*Enumerator6::ptr::_HasNext)() = (bool (*)()) 0x0;
inline Flyaway * (*Enumerator6::ptr::_NextObject)() = (Flyaway * (*)()) 0x0;
inline void (*Enumerator6::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Enumerator6 * (*Enumerator6::ptr::_New)(Enumerator6 * self, List11 * arg1) = (Enumerator6 * (*)(Enumerator6 * self, List11 * arg1)) 0x0;
inline Enumerator6 * (*Enumerator6::ptr::_new2)() = (Enumerator6 * (*)()) 0x8187d10;
inline bool (*Enumerator6::ptr::_HasNext)() = (bool (*)()) 0x80925d0;
inline Flyaway * (*Enumerator6::ptr::_NextObject)() = (Flyaway * (*)()) 0x8092560;
inline void (*Enumerator6::ptr::_mark)() = (void (*)()) 0x80845a0;
#endif
#endif
