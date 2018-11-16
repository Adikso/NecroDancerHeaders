// Generated automatically. Do not edit!
#ifndef _Enumerator45_
#define _Enumerator45_
class List26;
class Node43;
#include "Object.hpp"

class Enumerator45 : public Object  {
public:
    List26 * _list;
    Node43 * _curr;

    // Wrappers
    inline Enumerator45 * _New(List26 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator45 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::HasNext(this); }
    inline virtual int NextObject() { return ptr::NextObject(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator45 * (*_New)(Enumerator45 * self, List26 * arg1);
        static Enumerator45 * (*_new2)();
        static bool (*HasNext)(Enumerator45 * self);
        static int (*NextObject)(Enumerator45 * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Enumerator45 * (*Enumerator45::ptr::_New)(Enumerator45 * self, List26 * arg1) = (Enumerator45 * (*)(Enumerator45 * self, List26 * arg1)) 0x0;
inline Enumerator45 * (*Enumerator45::ptr::_new2)() = (Enumerator45 * (*)()) 0x0;
inline bool (*Enumerator45::ptr::HasNext)(Enumerator45 * self) = (bool (*)(Enumerator45 * self)) 0x66d0a0;
inline int (*Enumerator45::ptr::NextObject)(Enumerator45 * self) = (int (*)(Enumerator45 * self)) 0x66d0c0;
inline void (*Enumerator45::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Enumerator45 * (*Enumerator45::ptr::_New)(Enumerator45 * self, List26 * arg1) = (Enumerator45 * (*)(Enumerator45 * self, List26 * arg1)) 0x0;
inline Enumerator45 * (*Enumerator45::ptr::_new2)() = (Enumerator45 * (*)()) 0x81e3130;
inline bool (*Enumerator45::ptr::HasNext)(Enumerator45 * self) = (bool (*)(Enumerator45 * self)) 0x808f1f0;
inline int (*Enumerator45::ptr::NextObject)(Enumerator45 * self) = (int (*)(Enumerator45 * self)) 0x808f270;
inline void (*Enumerator45::ptr::_mark)() = (void (*)()) 0x8084500;
#endif
#endif
