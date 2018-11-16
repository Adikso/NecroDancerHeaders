// Generated automatically. Do not edit!
#ifndef _Enumerator28_
#define _Enumerator28_
class Bomb;
class List39;
class Node57;
#include "Object.hpp"

class Enumerator28 : public Object  {
public:
    List39 * _list;
    Node57 * _curr;

    // Wrappers
    inline Enumerator28 * _New(List39 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator28 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual Bomb * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator28 * (*_New)(Enumerator28 * self, List39 * arg1);
        static Enumerator28 * (*_new2)();
        static bool (*_HasNext)();
        static Bomb * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Enumerator28 * (*Enumerator28::ptr::_New)(Enumerator28 * self, List39 * arg1) = (Enumerator28 * (*)(Enumerator28 * self, List39 * arg1)) 0x0;
inline Enumerator28 * (*Enumerator28::ptr::_new2)() = (Enumerator28 * (*)()) 0x0;
inline bool (*Enumerator28::ptr::_HasNext)() = (bool (*)()) 0x0;
inline Bomb * (*Enumerator28::ptr::_NextObject)() = (Bomb * (*)()) 0x0;
inline void (*Enumerator28::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Enumerator28 * (*Enumerator28::ptr::_New)(Enumerator28 * self, List39 * arg1) = (Enumerator28 * (*)(Enumerator28 * self, List39 * arg1)) 0x0;
inline Enumerator28 * (*Enumerator28::ptr::_new2)() = (Enumerator28 * (*)()) 0x81bf010;
inline bool (*Enumerator28::ptr::_HasNext)() = (bool (*)()) 0x8092a40;
inline Bomb * (*Enumerator28::ptr::_NextObject)() = (Bomb * (*)()) 0x80929d0;
inline void (*Enumerator28::ptr::_mark)() = (void (*)()) 0x8085520;
#endif
#endif
