// Generated automatically. Do not edit!
#ifndef _Enumerator13_
#define _Enumerator13_
class List29;
class Node46;
class Particle;
#include "Object.hpp"

class Enumerator13 : public Object  {
public:
    List29 * _list;
    Node46 * _curr;

    // Wrappers
    inline Enumerator13 * _New(List29 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator13 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual Particle * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator13 * (*_New)(Enumerator13 * self, List29 * arg1);
        static Enumerator13 * (*_new2)();
        static bool (*_HasNext)();
        static Particle * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Enumerator13 * (*Enumerator13::ptr::_New)(Enumerator13 * self, List29 * arg1) = (Enumerator13 * (*)(Enumerator13 * self, List29 * arg1)) 0x0;
inline Enumerator13 * (*Enumerator13::ptr::_new2)() = (Enumerator13 * (*)()) 0x0;
inline bool (*Enumerator13::ptr::_HasNext)() = (bool (*)()) 0x0;
inline Particle * (*Enumerator13::ptr::_NextObject)() = (Particle * (*)()) 0x0;
inline void (*Enumerator13::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Enumerator13 * (*Enumerator13::ptr::_New)(Enumerator13 * self, List29 * arg1) = (Enumerator13 * (*)(Enumerator13 * self, List29 * arg1)) 0x81a4550;
inline Enumerator13 * (*Enumerator13::ptr::_new2)() = (Enumerator13 * (*)()) 0x81a4600;
inline bool (*Enumerator13::ptr::_HasNext)() = (bool (*)()) 0x80928a0;
inline Particle * (*Enumerator13::ptr::_NextObject)() = (Particle * (*)()) 0x8092830;
inline void (*Enumerator13::ptr::_mark)() = (void (*)()) 0x808b6d0;
#endif
#endif
