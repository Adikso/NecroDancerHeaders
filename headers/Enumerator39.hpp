// Generated automatically. Do not edit!
#ifndef _Enumerator39_
#define _Enumerator39_
class List24;
class Node34;
class ShrineObject;
#include "Object.hpp"

class Enumerator39 : public Object  {
public:
    List24 * _list;
    Node34 * _curr;

    // Wrappers
    inline Enumerator39 * _New(List24 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator39 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual ShrineObject * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator39 * (*_New)(Enumerator39 * self, List24 * arg1);
        static Enumerator39 * (*_new2)();
        static bool (*_HasNext)();
        static ShrineObject * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Enumerator39 * (*Enumerator39::ptr::_New)(Enumerator39 * self, List24 * arg1) = (Enumerator39 * (*)(Enumerator39 * self, List24 * arg1)) 0x0;
inline Enumerator39 * (*Enumerator39::ptr::_new2)() = (Enumerator39 * (*)()) 0x0;
inline bool (*Enumerator39::ptr::_HasNext)() = (bool (*)()) 0x0;
inline ShrineObject * (*Enumerator39::ptr::_NextObject)() = (ShrineObject * (*)()) 0x0;
inline void (*Enumerator39::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Enumerator39 * (*Enumerator39::ptr::_New)(Enumerator39 * self, List24 * arg1) = (Enumerator39 * (*)(Enumerator39 * self, List24 * arg1)) 0x0;
inline Enumerator39 * (*Enumerator39::ptr::_new2)() = (Enumerator39 * (*)()) 0x81de100;
inline bool (*Enumerator39::ptr::_HasNext)() = (bool (*)()) 0x80916c0;
inline ShrineObject * (*Enumerator39::ptr::_NextObject)() = (ShrineObject * (*)()) 0x8091650;
inline void (*Enumerator39::ptr::_mark)() = (void (*)()) 0x8085080;
#endif
#endif
