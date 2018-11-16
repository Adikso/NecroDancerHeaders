// Generated automatically. Do not edit!
#ifndef _Enumerator12_
#define _Enumerator12_
class List22;
class Node32;
class Shrine;
#include "Object.hpp"

class Enumerator12 : public Object  {
public:
    List22 * _list;
    Node32 * _curr;

    // Wrappers
    inline Enumerator12 * _New(List22 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator12 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual Shrine * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator12 * (*_New)(Enumerator12 * self, List22 * arg1);
        static Enumerator12 * (*_new2)();
        static bool (*_HasNext)();
        static Shrine * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Enumerator12 * (*Enumerator12::ptr::_New)(Enumerator12 * self, List22 * arg1) = (Enumerator12 * (*)(Enumerator12 * self, List22 * arg1)) 0x0;
inline Enumerator12 * (*Enumerator12::ptr::_new2)() = (Enumerator12 * (*)()) 0x0;
inline bool (*Enumerator12::ptr::_HasNext)() = (bool (*)()) 0x0;
inline Shrine * (*Enumerator12::ptr::_NextObject)() = (Shrine * (*)()) 0x0;
inline void (*Enumerator12::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Enumerator12 * (*Enumerator12::ptr::_New)(Enumerator12 * self, List22 * arg1) = (Enumerator12 * (*)(Enumerator12 * self, List22 * arg1)) 0x0;
inline Enumerator12 * (*Enumerator12::ptr::_new2)() = (Enumerator12 * (*)()) 0x8198700;
inline bool (*Enumerator12::ptr::_HasNext)() = (bool (*)()) 0x8091d40;
inline Shrine * (*Enumerator12::ptr::_NextObject)() = (Shrine * (*)()) 0x8091cd0;
inline void (*Enumerator12::ptr::_mark)() = (void (*)()) 0x808e8b0;
#endif
#endif
