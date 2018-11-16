// Generated automatically. Do not edit!
#ifndef _Enumerator44_
#define _Enumerator44_
class List52;
class Node42;
class ReplayData;
#include "Object.hpp"

class Enumerator44 : public Object  {
public:
    List52 * _list;
    Node42 * _curr;

    // Wrappers
    inline Enumerator44 * _New(List52 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator44 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual ReplayData * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator44 * (*_New)(Enumerator44 * self, List52 * arg1);
        static Enumerator44 * (*_new2)();
        static bool (*_HasNext)();
        static ReplayData * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Enumerator44 * (*Enumerator44::ptr::_New)(Enumerator44 * self, List52 * arg1) = (Enumerator44 * (*)(Enumerator44 * self, List52 * arg1)) 0x0;
inline Enumerator44 * (*Enumerator44::ptr::_new2)() = (Enumerator44 * (*)()) 0x0;
inline bool (*Enumerator44::ptr::_HasNext)() = (bool (*)()) 0x0;
inline ReplayData * (*Enumerator44::ptr::_NextObject)() = (ReplayData * (*)()) 0x0;
inline void (*Enumerator44::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Enumerator44 * (*Enumerator44::ptr::_New)(Enumerator44 * self, List52 * arg1) = (Enumerator44 * (*)(Enumerator44 * self, List52 * arg1)) 0x0;
inline Enumerator44 * (*Enumerator44::ptr::_new2)() = (Enumerator44 * (*)()) 0x81e2d10;
inline bool (*Enumerator44::ptr::_HasNext)() = (bool (*)()) 0x8090f50;
inline ReplayData * (*Enumerator44::ptr::_NextObject)() = (ReplayData * (*)()) 0x80948b0;
inline void (*Enumerator44::ptr::_mark)() = (void (*)()) 0x808a910;
#endif
#endif
