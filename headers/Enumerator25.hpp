// Generated automatically. Do not edit!
#ifndef _Enumerator25_
#define _Enumerator25_
class ConductorBattery;
class List42;
class Node61;
#include "Object.hpp"

class Enumerator25 : public Object  {
public:
    List42 * _list;
    Node61 * _curr;

    // Wrappers
    inline Enumerator25 * _New(List42 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator25 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual ConductorBattery * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator25 * (*_New)(Enumerator25 * self, List42 * arg1);
        static Enumerator25 * (*_new2)();
        static bool (*_HasNext)();
        static ConductorBattery * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Enumerator25 * (*Enumerator25::ptr::_New)(Enumerator25 * self, List42 * arg1) = (Enumerator25 * (*)(Enumerator25 * self, List42 * arg1)) 0x0;
inline Enumerator25 * (*Enumerator25::ptr::_new2)() = (Enumerator25 * (*)()) 0x0;
inline bool (*Enumerator25::ptr::_HasNext)() = (bool (*)()) 0x0;
inline ConductorBattery * (*Enumerator25::ptr::_NextObject)() = (ConductorBattery * (*)()) 0x0;
inline void (*Enumerator25::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Enumerator25 * (*Enumerator25::ptr::_New)(Enumerator25 * self, List42 * arg1) = (Enumerator25 * (*)(Enumerator25 * self, List42 * arg1)) 0x0;
inline Enumerator25 * (*Enumerator25::ptr::_new2)() = (Enumerator25 * (*)()) 0x81bcd70;
inline bool (*Enumerator25::ptr::_HasNext)() = (bool (*)()) 0x8091a00;
inline ConductorBattery * (*Enumerator25::ptr::_NextObject)() = (ConductorBattery * (*)()) 0x8091990;
inline void (*Enumerator25::ptr::_mark)() = (void (*)()) 0x8084780;
#endif
#endif
