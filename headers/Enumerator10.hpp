// Generated automatically. Do not edit!
#ifndef _Enumerator10_
#define _Enumerator10_
class Chest;
class List19;
class Node29;
#include "Object.hpp"

class Enumerator10 : public Object  {
public:
    List19 * _list;
    Node29 * _curr;

    // Wrappers
    inline Enumerator10 * _New(List19 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator10 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual Chest * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator10 * (*_New)(Enumerator10 * self, List19 * arg1);
        static Enumerator10 * (*_new2)();
        static bool (*_HasNext)();
        static Chest * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Enumerator10 * (*Enumerator10::ptr::_New)(Enumerator10 * self, List19 * arg1) = (Enumerator10 * (*)(Enumerator10 * self, List19 * arg1)) 0x0;
inline Enumerator10 * (*Enumerator10::ptr::_new2)() = (Enumerator10 * (*)()) 0x0;
inline bool (*Enumerator10::ptr::_HasNext)() = (bool (*)()) 0x0;
inline Chest * (*Enumerator10::ptr::_NextObject)() = (Chest * (*)()) 0x0;
inline void (*Enumerator10::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Enumerator10 * (*Enumerator10::ptr::_New)(Enumerator10 * self, List19 * arg1) = (Enumerator10 * (*)(Enumerator10 * self, List19 * arg1)) 0x0;
inline Enumerator10 * (*Enumerator10::ptr::_new2)() = (Enumerator10 * (*)()) 0x8196f40;
inline bool (*Enumerator10::ptr::_HasNext)() = (bool (*)()) 0x8090ba0;
inline Chest * (*Enumerator10::ptr::_NextObject)() = (Chest * (*)()) 0x8090c20;
inline void (*Enumerator10::ptr::_mark)() = (void (*)()) 0x8084f40;
#endif
#endif
