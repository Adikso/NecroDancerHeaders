// Generated automatically. Do not edit!
#ifndef _Enumerator8_
#define _Enumerator8_
class Enemy;
class List15;
class Node25;
#include "Object.hpp"

class Enumerator8 : public Object  {
public:
    List15 * _list;
    Node25 * _curr;

    // Wrappers
    inline Enumerator8 * _New(List15 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator8 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual Enemy * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator8 * (*_New)(Enumerator8 * self, List15 * arg1);
        static Enumerator8 * (*_new2)();
        static bool (*_HasNext)();
        static Enemy * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Enumerator8 * (*Enumerator8::ptr::_New)(Enumerator8 * self, List15 * arg1) = (Enumerator8 * (*)(Enumerator8 * self, List15 * arg1)) 0x0;
inline Enumerator8 * (*Enumerator8::ptr::_new2)() = (Enumerator8 * (*)()) 0x0;
inline bool (*Enumerator8::ptr::_HasNext)() = (bool (*)()) 0x0;
inline Enemy * (*Enumerator8::ptr::_NextObject)() = (Enemy * (*)()) 0x0;
inline void (*Enumerator8::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Enumerator8 * (*Enumerator8::ptr::_New)(Enumerator8 * self, List15 * arg1) = (Enumerator8 * (*)(Enumerator8 * self, List15 * arg1)) 0x0;
inline Enumerator8 * (*Enumerator8::ptr::_new2)() = (Enumerator8 * (*)()) 0x8194ef0;
inline bool (*Enumerator8::ptr::_HasNext)() = (bool (*)()) 0x8095e70;
inline Enemy * (*Enumerator8::ptr::_NextObject)() = (Enemy * (*)()) 0x8095e00;
inline void (*Enumerator8::ptr::_mark)() = (void (*)()) 0x808fdc0;
#endif
#endif
