// Generated automatically. Do not edit!
#ifndef _Enumerator48_
#define _Enumerator48_
class Doppelganger;
class List55;
class Node76;
#include "Object.hpp"

class Enumerator48 : public Object  {
public:
    List55 * _list;
    Node76 * _curr;

    // Wrappers
    inline Enumerator48 * _New(List55 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator48 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual Doppelganger * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator48 * (*_New)(Enumerator48 * self, List55 * arg1);
        static Enumerator48 * (*_new2)();
        static bool (*_HasNext)();
        static Doppelganger * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Enumerator48 * (*Enumerator48::ptr::_New)(Enumerator48 * self, List55 * arg1) = (Enumerator48 * (*)(Enumerator48 * self, List55 * arg1)) 0x0;
inline Enumerator48 * (*Enumerator48::ptr::_new2)() = (Enumerator48 * (*)()) 0x0;
inline bool (*Enumerator48::ptr::_HasNext)() = (bool (*)()) 0x0;
inline Doppelganger * (*Enumerator48::ptr::_NextObject)() = (Doppelganger * (*)()) 0x0;
inline void (*Enumerator48::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Enumerator48 * (*Enumerator48::ptr::_New)(Enumerator48 * self, List55 * arg1) = (Enumerator48 * (*)(Enumerator48 * self, List55 * arg1)) 0x0;
inline Enumerator48 * (*Enumerator48::ptr::_new2)() = (Enumerator48 * (*)()) 0x81e5460;
inline bool (*Enumerator48::ptr::_HasNext)() = (bool (*)()) 0x8094b70;
inline Doppelganger * (*Enumerator48::ptr::_NextObject)() = (Doppelganger * (*)()) 0x8094b00;
inline void (*Enumerator48::ptr::_mark)() = (void (*)()) 0x8082f20;
#endif
#endif
