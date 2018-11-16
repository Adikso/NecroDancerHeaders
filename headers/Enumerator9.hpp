// Generated automatically. Do not edit!
#ifndef _Enumerator9_
#define _Enumerator9_
class Item;
class List17;
class Node27;
#include "Object.hpp"

class Enumerator9 : public Object  {
public:
    List17 * _list;
    Node27 * _curr;

    // Wrappers
    inline Enumerator9 * _New(List17 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator9 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual Item * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator9 * (*_New)(Enumerator9 * self, List17 * arg1);
        static Enumerator9 * (*_new2)();
        static bool (*_HasNext)();
        static Item * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Enumerator9 * (*Enumerator9::ptr::_New)(Enumerator9 * self, List17 * arg1) = (Enumerator9 * (*)(Enumerator9 * self, List17 * arg1)) 0x0;
inline Enumerator9 * (*Enumerator9::ptr::_new2)() = (Enumerator9 * (*)()) 0x0;
inline bool (*Enumerator9::ptr::_HasNext)() = (bool (*)()) 0x0;
inline Item * (*Enumerator9::ptr::_NextObject)() = (Item * (*)()) 0x0;
inline void (*Enumerator9::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Enumerator9 * (*Enumerator9::ptr::_New)(Enumerator9 * self, List17 * arg1) = (Enumerator9 * (*)(Enumerator9 * self, List17 * arg1)) 0x0;
inline Enumerator9 * (*Enumerator9::ptr::_new2)() = (Enumerator9 * (*)()) 0x8196320;
inline bool (*Enumerator9::ptr::_HasNext)() = (bool (*)()) 0x8090db0;
inline Item * (*Enumerator9::ptr::_NextObject)() = (Item * (*)()) 0x8090e30;
inline void (*Enumerator9::ptr::_mark)() = (void (*)()) 0x8084960;
#endif
#endif
